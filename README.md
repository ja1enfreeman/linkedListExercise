# Linked List Lab Assignment

This C++ lab assignment introduces you to basic linked lists using a `Node` class. You will implement methods for adding nodes to the list, traverse the list, and clean up the list.

## Node Class

The `Node` class is a basic representation of a linked list node.

- `Node(int val)`: Constructor to initialize a node with a given value.
- `~Node()`: Destructor to print a message when a node is deleted.
- `void setValue(int x)`: Set the value of a node.
- `int getValue()`: Get the value of a node.
- `Node* getNext()`: Get the next node in the list.
- `void setNext(Node* n)`: Set the next node in the list.

## Lab Activities

1. **Node Implementation:**
   - Implement the methods of the `Node` class, including the constructor and destructor.

2. **Create Linked List:**
   - Write code in the `main()` function to create a linked list of 10 `Node` objects.
   - Use a loop to create new nodes, linking them together using `setNext()` and `getNext()`.
   - Set the value of each new node to be even numbers from 2 to 18.

3. **Traverse Linked List:**
   - Write code to step through the linked list, printing the value of each node.

4. **Clean Up Linked List:**
   - Write code to clean up the linked list. Print a message in the destructor when a node is deleted.

## Usage

Include everything in one .cpp file. Use a for loop to create the list and a while loop to print and clean up. Don't change the root pointer once you create it.

```cpp
// Example usage in main.cpp
int main() {
    // Code for creating, traversing, and cleaning up the linked list
    // ...

    return 0;
}
