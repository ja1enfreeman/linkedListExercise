# My Linked List Lab Assignment

In this C++ lab assignment, I got introduced to basic linked lists using a `Node` class. I implemented methods for adding nodes to the list, traversed the list, and cleaned up the list.

## Node Class

The `Node` class served as a fundamental representation of a linked list node.

- `Node(int val)`: I created a constructor to initialize a node with a given value.
- `~Node()`: I implemented a destructor to print a message when a node is deleted.
- `void setValue(int x)`: I coded a method to set the value of a node.
- `int getValue()`: I wrote a method to get the value of a node.
- `Node* getNext()`: I implemented a method to get the next node in the list.
- `void setNext(Node* n)`: I coded a method to set the next node in the list.

## Lab Activities

1. **Node Implementation:**
   - I implemented the methods of the `Node` class, including the constructor and destructor.

2. **Create Linked List:**
   - In the `main()` function, I wrote code to create a linked list of 10 `Node` objects.
   - I used a loop to create new nodes, linking them together using `setNext()` and `getNext()`.
   - I set the value of each new node to be even numbers from 2 to 18.

3. **Traverse Linked List:**
   - I wrote code to step through the linked list, printing the value of each node.

4. **Clean Up Linked List:**
   - I implemented code to clean up the linked list. I printed a message in the destructor when a node is deleted.

## Sample output

I included everything in one .cpp file. I used a for loop to create the list and a while loop to print and clean up. I made sure not to change the root pointer once I created it.

```cpp
// Sample of output

Creating the list...
Adding list Node: 1, value: 2
Adding list Node: 2, value: 4
Adding list Node: 3, value: 6
Adding list Node: 4, value: 8
Adding list Node: 5, value: 10
Adding list Node: 6, value: 12
Adding list Node: 7, value: 14
Adding list Node: 8, value: 16
Adding list Node: 9, value: 18

Printing the list...
Node value: 0
Node value: 2
Node value: 4
Node value: 6
Node value: 8
Node value: 10
Node value: 12
Node value: 14
Node value: 16
Node value: 18

Cleaning up the list...
Deleting Node value: 0
Deleting Node value: 2
Deleting Node value: 4
Deleting Node value: 6
Deleting Node value: 8
Deleting Node value: 10
Deleting Node value: 12
Deleting Node value: 14
Deleting Node value: 16
Deleting Node value: 18
