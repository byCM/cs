#include <iostream>
#include <iomanip>

using namespace std;


class Movie
{
private:
    string name;
    string rating;
public:
    Movie() {}
    Movie(string name1, string rating1) {
        name = name1;
        rating = rating1;
    }
    void setName(string s) {
        name = s;
    }
    void setRating(string r) {
        rating = r;
    }
    string getName() {
        return name;
    }
    string getRating() {
        return rating;
    }
};

void sortByName(Movie movies[], int n);

int main() {
    Movie movies[6];
    movies[0] = Movie("Black Panther", "PG-13");
    movies[1] = Movie("Avengers: Infinity War", "PG-13");
    movies[2] = Movie("A Wrinkle In Time", "PG");
    movies[3] = Movie("Ready Player One", "PG-13");
    movies[4] = Movie("Red Sparrow", "R");
    movies[5] = Movie("The Incredibles 2", "G");

    sortByName(movies, 6);
    cout << "Movies sorted by name: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << left << setw(25) << movies[i].getName() << setw(10) << movies[i].getRating() << endl;
    }
    return 0;
}

//Sorts the movies by name using Bubble sort instead of selection
void sortByName(Movie movies[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (movies[j].getName() > movies[j + 1].getName()) {
                Movie temp = movies[j];
                movies[j] = movies[j + 1];
                movies[j + 1] = temp;
            }
        }
    }
}

