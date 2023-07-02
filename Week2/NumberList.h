#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList {
private:
    struct ListNode {
        double value;           // The value in this node
        ListNode* next;         // To point to the next node
    };

    ListNode* head;             // List head pointer

public:
    NumberList() {              // Constructor
        head = nullptr;
    }

    ~NumberList() {             // Destructor
        // Code for destructor goes here
    }

    void appendNode(double);    // Linked list operations
    void insertNode(double);
    void deleteNode(double);
    void displayList() const;
    void mergeArray(double[], int);
};

#endif
