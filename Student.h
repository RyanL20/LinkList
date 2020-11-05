#include <iostream>
#include <cstring>

using namespace std;

class Student {
 public:
  Student(string*, string*, int, float);
  string* getFirstName();
  string* getLastName();
  int getID();
  float getGPA();
 private:
  string* firstName;
  string* lastName;
  int ID;
  float GPA;
};
