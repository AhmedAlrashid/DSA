#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            cout << "stack is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int peek() {
        if (head == nullptr) {
            cout << "head is empty" << endl;
            return -1;
        } else {
            return head->data;
        }
    }
};

int main() {
    LinkedList stack;
    stack.insert(10);
    stack.insert(20);
    stack.insert(30);

    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    return 0;
}