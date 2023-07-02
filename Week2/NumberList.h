#ifndef NUMBERLIST_H
#define NUMBERLIST_H


class NumberList {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* head = nullptr;

public:
    // Purpose: Add a new node with the given data to the front of the linked list
    // Arguments: int data - The data to be stored in the new node
    void addNode(int data);

    // Purpose: Print the elements of the linked list
    void printList();

    // Purpose: Merge an array of doubles into the linked list, inserting the values in numerical order
    // Arguments: double arr[] - The array of doubles to be merged
    //            int size - The size of the array
    void mergeArray(double arr[], int size);

    // Purpose: Display the elements of the linked list
    void displayList();

    // Purpose: Constructor for the NumberList class, initializes the head pointer to nullptr
    NumberList();

};

#endif
