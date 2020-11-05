#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student(string* newFirstName, string* newLastName, int newID, float newGPA) {
  firstName = newFirstName;
  lastName = newLastName;
  ID = newID;
  GPA = newGPA;
}

string* Student::getFirstName() {
  return firstName;
}
string* Student::getLastName() {
  return lastName;
}
int Student::getID() {
  return ID;
}
float Student::getGPA() {
  return GPA;
}
