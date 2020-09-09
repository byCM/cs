#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "linkedlist.cpp"
#include "node.h"
#include "term.h"

using namespace std;

#define NUM_SPAM_TEST 130
#define NUM_SPAM_TRAIN 350
#define NUM_NONSPAM_TEST 130
#define NUM_NONSPAM_TRAIN 350

// Complete this function for part A
LinkedList<Term>* readEmail(string filename)
{
  return nullptr;  // Stub
}

// Complete this function for part B
void readEmails(LinkedList<Term>* documents[], string filenames, string basepath)
{
}

// Complete this function for part C
float compareDocuments(LinkedList<Term>* targetList, LinkedList<Term>* sourceList)
{
  return 0; // Stub
}

// Complete this function for part D
float closestMatch(LinkedList<Term>* targetDocuments[], int numDocs, LinkedList<Term>* sourceDocument)
{
  return 0; // Stub
}

// ******************* Main ********************
//
// You do not need to change the code given below in main for the final program to run
// but you will probably want to add some additional test code to make sure that
// individual functions are working properly as you complete sections A-D.
//
// **********************************************

int main()
{
  // You may want to add some test code here to see if your readEmail function works

  // Define array of pointers to linked lists for each set of documents
  // A better approach would be to load up the # of documents and define the size of the arrays dynamically instead
  // of statically, but this approach makes the code a little simpler
  LinkedList<Term>* spamTrain[NUM_SPAM_TRAIN];
  LinkedList<Term>* spamTest[NUM_SPAM_TEST];
  LinkedList<Term>* nonSpamTrain[NUM_NONSPAM_TRAIN];
  LinkedList<Term>* nonSpamTest[NUM_NONSPAM_TEST];

  // This function should load up the emails/terms into the linked lists
  readEmails(spamTrain, "filelist-spam-train.txt", "spam-train/");
  readEmails(spamTest, "filelist-spam-test.txt", "spam-test/");
  readEmails(nonSpamTrain, "filelist-nonspam-train.txt", "nonspam-train/");
  readEmails(nonSpamTest, "filelist-nonspam-test.txt", "nonspam-test/");

  // Keep stats on classification and error rates
  int correctSpam = 0;
  // Start by classifying each test document in the spam test collection
  cout << "Classifying test cases for spam" << endl;
  for (int i = 0; i < NUM_SPAM_TEST; i++)
  {
  	float spamValue = closestMatch(spamTrain, NUM_SPAM_TRAIN, spamTest[i]);
  	float nonSpamValue = closestMatch(nonSpamTrain, NUM_NONSPAM_TRAIN, spamTest[i]);
	cout << "Classifying " << i << " of " << NUM_SPAM_TEST << " " << spamValue << " " << nonSpamValue << endl;
	if (spamValue > nonSpamValue)
		correctSpam++;
  }
  // Now classify each test document in the nonspam test collection
  int correctnonSpam = 0;
  cout << "Classifying test cases for non-spam" << endl;
  for (int i = 0; i < NUM_NONSPAM_TEST; i++)
  {
  	float spamValue = closestMatch(spamTrain, NUM_SPAM_TRAIN, nonSpamTest[i]);
  	float nonSpamValue = closestMatch(nonSpamTrain, NUM_NONSPAM_TRAIN, nonSpamTest[i]);
	cout << "Classifying " << i << " of " << NUM_NONSPAM_TEST << " " << spamValue << " " << nonSpamValue << endl;
	if (spamValue < nonSpamValue)
		correctnonSpam++;
  }
  cout << "The nearest neighbor classifier was correct on " <<
 	(float) correctSpam / NUM_SPAM_TEST << " of the spam emails." << endl;
  cout << "The nearest neighbor classifier was correct on " <<
 	(float) correctnonSpam / NUM_NONSPAM_TEST << " of the nonspam emails." << endl;
  cout << "The overall accuracy is " <<
 	(float) (correctnonSpam + correctnonSpam) / (NUM_NONSPAM_TEST + NUM_SPAM_TEST) << endl;

  return 0;
}

