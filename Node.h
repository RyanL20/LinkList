#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

class Node{
 public:
  Node(Student*);
  ~Node();
  void setNext(Node* newNode);
  Node* getNext();
  void setStudent(Student* newStudent);
  Student* getStudent();
 private:
  Node* next;
  Student* student;
};
#endif
