#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int numberOfRatings;
    int movieRating;
    string nameOfMovie;

    map<int, int> mapMovie; //maps movie rating to total amount of specific movie ratings
    map<string, map<int, int> > mapReviews; 

    ifstream myFile; 
    myFile.open("movies.txt"); 

    myFile >> numberOfRatings; 
    myFile.ignore();

    /*
    for (int i = 0; i < numberOfRatings; ++i) {
        getline(myFile, nameOfMovie);
        myFile >> movieRating;
        myFile.ignore();
        ++mapReviews[nameOfMovie][movieRating];
    }
    */

    for (int i = 0; i < numberOfRatings; ++i) {
        getline(myFile, nameOfMovie); 
        myFile >> movieRating; 
        myFile.ignore(); 
        ++mapReviews[nameOfMovie][movieRating]; 
    }
    map<int, int>::iterator mapIter1;
    map<string, map<int, int> >::iterator mapIter2;
    for (mapIter2 = mapReviews.begin(); mapIter2 != mapReviews.end(); ++mapIter2)
    {
        int total = 0, c = 0;

        for (mapIter1 = mapIter2->second.begin(); mapIter1 != mapIter2->second.end(); mapIter1++)
        {
            total += mapIter1->first;
            c++;
        }
        double totalAverage = (double)total / c;

        cout << fixed << std::setprecision(2);
        cout << mapIter2->first << ": " << c << " reviews, average of " << totalAverage << " / 5\n" << endl;;
    }

    return 0;
}
