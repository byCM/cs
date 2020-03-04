#include<iostream>

#include<string>

using namespace std;

class Tobor{

               

                private:

                                string date;

                                int time;

                                string task;

               

                public:

                                Tobor(string="Unknown date", int=0, string="Do nothing");

                                string getDate() const;

                                int getTime() const;

                                string getTask() const;

                               

                                void setDate(string);

                                void setTime(int);

                                void setTask(string);

                               

};

Tobor::Tobor(string date, int time, string task): date(date),time(time),task(task){}

string Tobor::getDate() const{return date;}

int Tobor::getTime() const{return time;}

string Tobor::getTask() const{return task;}

void Tobor::setDate(string date){this->date=date;

}

void Tobor::setTime(int time){

                this->time=time;

}

void Tobor::setTask(string task){

                this->task =task;

}

int main() {

Tobor vacation[4];

// Create three separate Tobor objects using the constructor to // set the date, time, and task

Tobor dog1("March 12", 1200, "Feed dog");

Tobor dog2("March 13", 1200, "Feed dog");

Tobor trash("March 12", 2300, "Take out trash");

// Copy three of these objects into the array. // slot 2 is left with the object created by the default constructor

vacation[0] = dog1;

vacation[1] = trash;

vacation[3] = dog2;

// Output each task for the robot to do, and when

for (int i = 0; i < 4; i++)

{

cout << "On " << vacation[i].getDate() << " at time " << vacation[i].getTime() << " Tobor will " << vacation[i].getTask() << endl; }

}
