#include <iostream>
#include "Node.h"

using namespace std;
Node::Node(Student* newStudent) {
  student = newStudent;
  next = NULL;
}
Node::~Node() {
  delete student;
  next = NULL;
}  
void Node::setNext(Node* newNode) {
  next = newNode;
}
Node* Node::getNext() {
  retun next;
}
void Node::setStudent(Student* newStudent) {
  student = newStudent;
}
Student* Node::getStudent() {
  return student;
}
