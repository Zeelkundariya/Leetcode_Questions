// ==========================================
// Singly Linked List Implementation in C++
// ==========================================
// A Linked List is a collection of nodes where each node
// contains data and a pointer pointing to the next node.
// Unlike arrays, linked list elements are not stored 
// in contiguous memory locations.
//
// How Memory is Stored (Stack vs Heap):
// 1. Head Pointer (Stack Memory):
//    - The `head` pointer is a local variable/member variable stored on the STACK.
//    - It does not contain any node data. Instead, it only stores the 64-bit (or 32-bit)
//      memory address of the first Node located on the Heap.
//    - If the list is empty, `head` stores `nullptr` (0x0).
// 2. Nodes (Heap Memory):
//    - Each `Node` is dynamically allocated on the HEAP using the `new` operator.
//    - Heap memory is scattered; nodes can be located anywhere in RAM.
//    - Nodes are kept alive purely by the chain of pointers pointing to them.
//
// Memory Management / Garbage Collection Note:
// In C++, memory allocation on the heap (using 'new') must be
// manually deallocated (using 'delete') to prevent memory leaks.
// Unlike garbage-collected languages (Java, Python, C#) where
// unreachable nodes are automatically collected, C++ requires
// explicit 'delete' statements when removing nodes from the list.
// ==========================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Node structure: The basic building block of a linked list
class Node{
  public:
    int data;    // The actual integer value stored in this node
    Node *next;  // A memory pointer linking this node to the next node in the list (or nullptr if it's the last node)

    // Constructor: Runs automatically when a new Node is created
    // It sets the node's data and ensures it doesn't point to anything yet (null pointer)
    Node(int data){
      this->data = data;
      this->next = nullptr;
    }
};

// SinglyLinkedList class: Manages the collection of Nodes
//
// Visual representation of a Singly Linked List:
//
//        Head
//         |
//         v
//     +--------+------+      +--------+------+      +--------+------+
//     |  data  | next | ---> |  data  | next | ---> |  data  | nullptr|
//     |  (30)  |  *   |      |  (20)  |  *   |      |  (10)  |        |
//     +--------+------+      +--------+------+      +--------+------+
//
class SinglyLinkedList{
  private:
    Node* head;  // The starting point of the list. If empty, head points to nullptr: [ head ] -> nullptr

  public:
    // Constructor: Runs when a new list is created
    // Initializes the list to be empty by setting the head pointer to nullptr
    SinglyLinkedList(){
      this->head = nullptr;
    }

    // Function to add a new element at the very beginning (head) of the list
    // 
    // Visual trace of insertAtFirst(30):
    //
    //   Before:
    //      Head -> [ 20 | * ] -> [ 10 | nullptr ]
    //
    //   Step 1: Create a new node 'temp' with data 30
    //      [ temp ] -> [ 30 | nullptr ]
    //
    //   Step 2: Point 'temp->next' to the current head node
    //      [ temp ] -> [ 30 | * ] ---> [ 20 | * ] -> [ 10 | nullptr ]
    //                                    ^
    //                                  Head
    //
    //   Step 3: Update 'head' pointer to point to 'temp'
    //      Head -> [ 30 | * ] -> [ 20 | * ] -> [ 10 | nullptr ]
    //
    void insertAtFirst(int data){
      // Step 1: Create a new node in memory with the given data value
      Node* temp = new Node(data);

      // Step 2: Make this new node point to the current first node (whatever head is pointing to)
      temp->next = head;

      // Step 3: Move the head pointer to point to this new node, making it the new first node
      head = temp;
    }

    // Function to display the entire list from head to tail
    //
    // Visual trace of displayList():
    //
    //   List state:
    //      Head -> [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //
    //   Traversal using 'temp' pointer:
    //
    //   Iteration 1:  temp points to first node
    //      [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //        ^
    //      temp           Output: "10 -> "
    //
    //   Iteration 2:  temp = temp->next (move to second node)
    //      [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //                      ^
    //                    temp           Output: "20 -> "
    //
    //   Iteration 3:  temp = temp->next (move to third node)
    //      [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //                                    ^
    //                                  temp     Output: "30 -> "
    //
    //   Iteration 4:  temp = temp->next => nullptr (loop ends)
    //                                               Output: "nullptr"
    //
    //   Final output: 10 -> 20 -> 30 -> nullptr
    //
    void displayList(){
      // Check if the list is empty (nothing to print)
      if(head == nullptr){
        cout << "NANI SOREN" << endl;
        return;
      }
      // Start traversing from the first node (head)
      Node* temp = head;
      // Keep moving through the list until we reach the end (nullptr)
      while(temp != nullptr){
        cout << temp->data << " -> ";
        // Move the pointer to the next node in the list
        temp = temp->next;
      }
      // Print nullptr to show where the list ends
      cout << "nullptr" << endl;
    }

    // Function to insert a new element at the end of the list
    // 
    // Visual trace of insertAtEnd(40):
    //
    //   Before:
    //      Head -> [ 30 | * ] -> [ 20 | nullptr ] (last node)
    //
    //   Step 1: Create a new node 'temp' with data 40
    //      [ temp ] -> [ 40 | nullptr ]
    //
    //   Step 2: Traverse to find the last node ('current') where current->next is nullptr
    //      Head -> [ 30 | * ] -> [ 20 | nullptr ]
    //                              ^
    //                           current
    //
    //   Step 3: Point the last node's next to the new node 'temp'
    //      Head -> [ 30 | * ] -> [ 20 | * ] ---> [ 40 | nullptr ]
    //                              ^               ^
    //                           current          temp
    //
    void insertAtEnd(int data){
      // Step 1: Create a new node in memory with the given data value
      Node* temp = new Node(data);

      // If the list is empty, make the new node the head
      if(head == nullptr){
        head = temp;
        return;
      }

      // Step 2: Traverse to the last node in the list
      Node* current = head;
      while(current->next != nullptr){
        current = current->next;
      }

      // Step 3: Make the last node point to the new node
      current->next = temp;
    }

    // Function to insert a new element AFTER a given target node
    //
    // Visual trace of insertInBetween(25, 20):  (insert 25 after the node containing 20)
    //
    //   Before:
    //      Head -> [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //
    //   Step 1: Create a new node 'temp' with data 25
    //      [ temp ] -> [ 25 | nullptr ]
    //
    //   Step 2: Traverse to find the target node where data == 20
    //      Head -> [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //                              ^
    //                            temp1 (found target!)
    //
    //   Step 3: Point 'temp->next' to whatever 'temp1->next' was pointing to (node 30)
    //      [ 25 | * ] ---> [ 30 | nullptr ]
    //        ^
    //      temp
    //
    //   Step 4: Point 'temp1->next' to 'temp' (insert 25 between 20 and 30)
    //      Head -> [ 10 | * ] -> [ 20 | * ] -> [ 25 | * ] -> [ 30 | nullptr ]
    //                              ^              ^
    //                            temp1          temp
    //
    //   Edge case — target not found:
    //      If we reach the end without finding the target, temp1 will be nullptr
    //      and we print an error message without modifying the list.
    //
    void insertInBetween(int data, int target){
      // Step 1: Create a new node in memory with the given data value
      Node* temp = new Node(data);

      // Step 2: Traverse the list to find the node whose data matches 'target'
      Node* temp1 = head;
      while(temp1->data != target && temp1->next != nullptr){
        temp1 = temp1->next;
      }

      // Case 1: Target node was NOT found — reached the end without a match
      if(temp1 == nullptr){
        cout << "Targeted node doesn't exist" << endl;
        return;
      }

      // Case 2: Target node found — insert the new node right after it
      // Step 3: New node points to whatever comes after the target node
      temp->next = temp1->next;
      // Step 4: Target node now points to the new node
      temp1->next = temp;
      return;
    }

    // Function to delete a node with the given target value
    //
    // Visual trace of deleteANode(20):
    //
    //   Before:
    //      Head -> [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //
    //   Step 1: Check if head needs to be deleted.
    //           Since head->data (10) != target (20), we move to traversal.
    //
    //   Step 2: Traverse to find the node BEFORE the target node.
    //           We search for a node 'current' where current->next->data == target.
    //      Head -> [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //                ^
    //             current   (current->next->data is 20, which matches target!)
    //
    //   Step 3: Keep a pointer 'temp' to the node to be deleted.
    //      temp = current->next
    //      Head -> [ 10 | * ] -> [ 20 | * ] -> [ 30 | nullptr ]
    //                ^             ^
    //             current         temp
    //
    //   Step 4: Unlink the target node by pointing current->next to current->next->next.
    //      Head -> [ 10 | * ] ---------------> [ 30 | nullptr ]
    //                ^             ^
    //             current         temp (orphaned)
    //
    //   Step 5: Safely deallocate the memory of 'temp'.
    //      Head -> [ 10 | * ] ---------------> [ 30 | nullptr ]
    //
    void deleteANode(int target){
      // Case 1: List is empty
      if(head == nullptr){
        cout << "List is empty" << endl;
        return;
      }

      // Case 2: Target is the first node (head)
      if(head->data == target){
        Node* temp = head;
        head = head->next;
        delete temp; // Manual Garbage Collection: Free the deallocated node's memory to avoid memory leaks
        return;
      }

      // Case 3: Target is elsewhere in the list
      // Traverse to find the node right BEFORE the target node
      Node* current = head;
      while(current->next != nullptr && current->next->data != target){
        current = current->next;
      }

      // If target node was not found (reached end of list)
      if(current->next == nullptr){
        cout << "Target node not found" << endl;
        return;
      }

      // Target node found, delete it
      Node* temp = current->next;          // Keep reference to target node
      current->next = current->next->next; // Unlink target node from list
      delete temp;                         // Manual Garbage Collection: Free the memory of the unlinked node
    }
};

int main(){
  SinglyLinkedList list;

  // Insert some elements at the beginning of the list
  list.insertAtFirst(30);
  list.insertAtFirst(20);
  list.insertAtFirst(10);
  list.displayList();

  // Insert some elements at the end of the list
  list.insertAtEnd(40);
  list.insertAtEnd(50);
  list.insertAtEnd(60);
  list.displayList();

  // Display the list
  list.displayList();

  // Insert some elements in between two nodes
  list.insertInBetween(25, 20);
  list.displayList();

  // Test deleting a node from the middle (25)
  list.deleteANode(25);
  list.displayList();

  // Test deleting the first node (10)
  list.deleteANode(10);
  list.displayList();

  // Test deleting the last node (60)
  list.deleteANode(60);
  list.displayList();

  return 0;
}