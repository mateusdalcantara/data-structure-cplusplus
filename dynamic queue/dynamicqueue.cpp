#include "dynamicqueue.h"
#include <iostream>
#include <cstddef>
#include <new>

using namespace std;

dynamicqueue::dynamicqueue() {
    first = NULL;
    last = NULL;
}

dynamicqueue::~dynamicqueue() {
    Node* temp;
    while (first != NULL) {
        temp = first;
        first = first->next;
        delete temp;
    }
    last = NULL;
}

bool dynamicqueue::isempty() {
    return (first == NULL);
}

bool dynamicqueue::isfull() {
    Node* temp;
    try {
        temp = new Node;
        delete temp;
        return false;
    } catch (bad_alloc exception) {
        return true;
    }
}

void dynamicqueue::insert(TypeItem item) {
    if (isfull()) {
        cout << "The queue is full! There is no possibility to insert an element.\n";
    } else {
        Node* NewNode = new Node;
        NewNode->value = item;
        NewNode->next = NULL;
        if (first == NULL) {
            first = NewNode;
        } else {
            last->next = NewNode;
        }
        last = NewNode;
    }
}

TypeItem dynamicqueue::remove() {
    if (isempty()) {
        cout << "The queue is empty!\n";
        cout << "There is no element to be removed.\n";
        return 0;
    } else {
        Node* temp = first;
        TypeItem item = first->value;
        first = first->next;
        if (first == NULL) {
            last = NULL;
        }
        delete temp;
        return item;
    }
}

void dynamicqueue::showme() {
    Node* temp = first;
    cout << "Queue = [ ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "]\n";
};