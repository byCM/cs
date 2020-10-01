#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "bst.h"
#include "term.h"
#include "node.h"


using namespace std;

#define NUM_SPAM_TEST 130
#define NUM_SPAM_TRAIN 350
#define NUM_NONSPAM_TEST 130
#define NUM_NONSPAM_TRAIN 350

/*
REDONE USING BST


find is much faster. lg n insted of n. O(lg n) vs O(n)




*/

// **** Reads a single email and returns it as a LinkedList<Term>*
BST<Term>* readEmail(string filename)
{
  BST<Term>* bstTerms = new BST<Term>();
  ifstream emailFile;
  emailFile.open(filename);
  string word;
  while (emailFile >> word)
  {
	Term t(word);
   	Node<Term>* result = bstTerms->find(t);
	if (result != nullptr)
		(result->getItem().count)+=1;	
	else
	{
		t.count = 1;
		bstTerms->insert(t);
	}
  }
  emailFile.close();
  return bstTerms;
}

// **** Reads multiple emails into the documents array
void readEmails(BST<Term>* documents[], string filenames, string basepath)
{
  ifstream filelist;
  filelist.open(filenames);
  string temp;
  string filename;

  int i = 0;
  while (!filelist.eof())
  {
     getline(filelist, filename);
     if (filename.length() > 0)
     { 
        filename = basepath + filename;
        documents[i++] = readEmail(filename); 
     }
  }
  filelist.close();
}

//helper function in order traversal
void compareHelper(Node<Term>* sourceNode, BST<Term>* targetList, int& matches, int& total) {
    total++;
    compareHelper(sourceNode->getLeft(), targetList, matches, total);

    if (targetList->find(sourceNode->getItem())) {
        matches++;
    }

    compareHelper(sourceNode->getRight(), targetList, matches, total);

}


// **** Compare two documents, represented as linked lists
float compareDocuments(BST<Term>* targetList, BST<Term>* sourceList)
{
  // Go through each term in sourceList, and count how many of them exist in targeList 
  Node<Term> *root = sourceList->getHead());
  int total = 0;
  int matches = 0;

  compareHelper(sourceList->getHead(), targetList, matches, total);

  if (total == 0)
	return 0;
  return (float) matches / total;
}

// **** Find the document that mathches most closely and return the match value
float closestMatch(BST<Term>* targetDocuments[], int numDocs, BST<Term>* sourceDocument)
{
  float closest = 0, val;
  for (int i = 0; i < numDocs; i++)
  {
     val = compareDocuments(targetDocuments[i], sourceDocument);
     if (val > closest)
	closest = val;
  }  
  return closest;
}

int main()
{
  // Define array of pointers to linked lists for each set of documents
  // A better approach would be to load up the # of documents and define the size of the arrays dynamically instead
  // of statically, but this approach makes the code a little simpler
  BST<Term>* spamTrain[NUM_SPAM_TRAIN];
  BST<Term>* spamTest[NUM_SPAM_TEST];
  BST<Term>* nonspamTrain[NUM_NONSPAM_TRAIN];
  BST<Term>* nonspamTest[NUM_NONSPAM_TEST];

  // This function should load up the emails/terms into the linked lists
  readEmails(spamTrain, "filelist-spam-train.txt", "spam-train/");
  readEmails(spamTest, "filelist-spam-test.txt", "spam-test/");
  readEmails(nonspamTrain, "filelist-nonspam-train.txt", "nonspam-train/");
  readEmails(nonspamTest, "filelist-nonspam-test.txt", "nonspam-test/");

  // Keep stats on classification and error rates
  int correctSpam = 0;
  // Start by classifying each test document in the spam test collection
  for (int i = 0; i < NUM_SPAM_TEST; i++)
  {
  	float spamValue = closestMatch(spamTrain, NUM_SPAM_TRAIN, spamTest[i]);
  	float nonspamValue = closestMatch(nonspamTrain, NUM_NONSPAM_TRAIN, spamTest[i]);
	cout << "Classifying " << i << " of " << NUM_SPAM_TEST << " " << spamValue << " " << nonspamValue << endl;
	if (spamValue > nonspamValue)
		correctSpam++;
  }
  // Now classify each test document in the nonspam test collection
  int correctnonSpam = 0;
  for (int i = 0; i < NUM_NONSPAM_TEST; i++)
  {
  	float spamValue = closestMatch(spamTrain, NUM_SPAM_TRAIN, nonspamTest[i]);
  	float nonspamValue = closestMatch(nonspamTrain, NUM_NONSPAM_TRAIN, nonspamTest[i]);
	cout << "Classifying " << i << " of " << NUM_NONSPAM_TEST << " " << spamValue << " " << nonspamValue << endl;
	if (spamValue < nonspamValue)
		correctnonSpam++;
  }
  cout << correctSpam << " " << correctnonSpam << endl;
  cout << "The nearest neighbor classifier was correct on " <<
 	(float) correctSpam / NUM_SPAM_TEST << " of the spam emails." << endl;
  cout << "The nearest neighbor classifier was correct on " <<
 	(float) correctnonSpam / NUM_NONSPAM_TEST << " of the nonspam emails." << endl;
  cout << "The overall accuracy is " <<
 	(float) (correctnonSpam + correctnonSpam) / (NUM_NONSPAM_TEST + NUM_SPAM_TEST) << endl;

}
