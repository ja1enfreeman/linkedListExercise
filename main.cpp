/*
Jalen Freeman
CS 221 Fall 2023
Nov 29, 2023

Linked List Exercise
*/



#include <iostream>

class Node {
  public:
    Node(int val);
    ~Node();
    void setValue(int x);
    int getValue();
    Node* getNext();
    void setNext(Node* n);

  private:
    int value;
    Node *next;

};

Node::Node(int val) {
  value = val;
  next = nullptr;
}

Node::~Node(){
  std::cout << "Deleting Node Value: " << value << std::endl;
}

void Node::setValue(int x) {
  value = x;
}

int Node::getValue() {
  return value;
}

Node* Node::getNext() {
  return next;
}

void Node::setNext(Node*n){
  next = n;
}

int main() {
  Node *root;
  root = new Node(0);

  // Step 2 code here
  std::cout << "\nCreating the list...\n";
  Node *current = root;

  for (int i = 1; i <= 9; i ++) {
    Node* newNode = new Node(i * 2);
    current -> setNext(newNode);
    current = newNode;
    std::cout << "Adding List Node: " << i << ", value: " << (i*2) << std::endl;
  }

  // Step 3 code here
  std::cout << "\nPrinting the list...\n";

  current = root;

  while (current != nullptr) {
    std::cout << "Node value: " << current -> getValue() << std::endl;
    current = current ->getNext();
  }

  // Step 4 code here
  std::cout << "\nCleaning up the list...\n";

  current = root;

  while (current != nullptr) {
    Node* nextNode = current -> getNext();
    delete current;
    current = nextNode;
  }
  return 0;
}

