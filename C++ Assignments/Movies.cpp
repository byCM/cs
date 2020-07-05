#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int numberOfRatings, movieRating, numberOfReviews;
    string nameOfMovie, ratings;

    map<int, int> mapMovie; 
    map<string, map<int, int> > mapReviews; 

    map<int, int>::iterator countOne;
    map<string, map<int, int> >::iterator countTwo;

    ifstream myFile; 
    myFile.open("movies.txt"); 

    myFile >> numberOfRatings; 
    myFile.ignore();

    /*
    for (int i = 0; i < numberOfRatings; ++i) {
        getline(myFile, nameOfMovie);
        ++mapReviews[nameOfMovie][movieRating];
    }
    */

    for (int i = 0; i < numberOfRatings; ++i) {
        getline(myFile, nameOfMovie); 
        myFile >> movieRating; 
        myFile.ignore(); 
        ++mapReviews[nameOfMovie][movieRating]; 
    }



    for (countTwo = mapReviews.begin(); countTwo != mapReviews.end(); ++countTwo)
    {
        int total = 0, inc = 0;
        for (countOne = countTwo->second.begin(); countOne != countTwo->second.end(); countOne++)
        {
            total += countOne->first;
            inc++;
        }
        double totalAverage = (double)total / inc;

        cout << fixed << std::setprecision(2);
        cout << countTwo->first << ": " << inc << " reviews, average of " << totalAverage << " / 5" << endl;
    }

    return 0;
}

