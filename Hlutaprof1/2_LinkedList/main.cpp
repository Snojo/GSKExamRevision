#include <iostream>
#include "studentnode.h"

using namespace std;

void push_front(NodePtr& head, NodePtr student); // Insert the student node at the front of the list pointed to by head
void push_back(NodePtr& head, NodePtr student); // Inserts the student node at the back of the list pointed to by head
void remove(NodePtr before, NodePtr student);  // Removes the student node given the node that appears before it
void print(NodePtr head);                       // Prints out the student list pointed to by head

int main()
{
    // Create three students
    NodePtr student1 = new StudentNode;
    student1->name = "John";
    student1->average = 7.8;
    student1->link = NULL;

    NodePtr student2 = new StudentNode;
    student2->name = "Mary";
    student2->average = 8.4;
    student2->link = NULL;

    NodePtr student3 = new StudentNode;
    student3->name = "Tom";
    student3->average = 6.7;
    student3->link = NULL;

    // Now create a linked list of students, where student3 appears first, student1 last
    NodePtr head = NULL;
    push_front(head, student1);
    push_front(head, student2);
    push_front(head, student3);
    cout << "After construction of linked list: " << endl;
    print(head);

    // Now remove student2 from the list
    remove(head, student2);   // We send in the student node (head) which appears before the one we want to remove
    cout << "After removal of student 2: " << endl;
    print(head);

    // Create a new student and add it at the end of the linked list
    NodePtr student4 = new StudentNode;
    student4->name = "Sandy";
    student4->average = 7.1;
    student4->link = NULL;
    push_back(head, student4);
    cout << "After insertion of student 4 at the back: " << endl;
    print(head);

    // Insert at the back of an empty list
    NodePtr head2 = NULL;
    push_back(head2, student4);
    cout << "After insertion of student 4 into an empty list: " << endl;
    print(head2);

    delete student1;
    delete student3;
    delete student4;

    return 0;
}



