#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
    cout << setprecision(1) << fixed;
    string line, movie;


    ifstream myfile("movies.txt");

    map<string, map<string, int> > ratings;


    if (myfile.is_open()) {
        getline(myfile, line);
        int numReviews = atoi(line.c_str());
        for (int i = 0; i < numReviews; ++i) {
            getline(myfile, movie);
            getline(myfile, line);
            int rating = atoi(line.c_str());
            if (ratings.find(movie) != ratings.end()) {
                ratings[movie]["numReviews"]++;
                ratings[movie]["totalRatings"] += rating;
            }
            else {
                ratings[movie]["numReviews"] = 1;
                ratings[movie]["totalRatings"] = rating;
            }
        }
        for (auto itr = ratings.begin(); itr != ratings.end(); ++itr) {
            cout << itr->first << ": " << itr->second["numReviews"] << " review, Average of " << itr->second["totalRatings"] / (double)itr->second["numReviews"] << " / 5" << endl;
        }
        myfile.close();
    }
    else 
    {
        cout << "File Not Found! " << endl;
    }

    return 0;

}
