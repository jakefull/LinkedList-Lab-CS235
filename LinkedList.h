#pragma once

#include <string>
#include <sstream>
#include "LinkedListInterface.h"

template<typename T>
class LinkedList: public LinkedListInterface<T> {
    class Node {
    public:
        Node(T value) : value(value), next(nullptr) {} //constructor
        T value;
        Node * next;
    };
    Node* head;
    Node* tail;
    size_t lsize;
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
        lsize = 0;
    }

    virtual ~LinkedList() {// we just need to delete every node in the list, yeah?
        if(lsize!=0){
            Node* deleteThis = head;
            while(deleteThis->next!= nullptr){
                delete deleteThis; //delete needs a pointer! Delete just says ok, whatever memory this pointer points to can now be used for something else. It doesnt delete the pointer itself.
                deleteThis = deleteThis->next;
            }
            delete deleteThis;
        }
    }

    virtual void push_front(T item) { //should be implemented
        // WHY cant we do this? Node* addThis = new Node(item); NO! Use variables already defined
        if(lsize==0){ //if empty
            head = new Node(item); //NOTE: new acts as the * in this case
            tail = head;
        } else { //not empty
            //don't we need a temporary variable here? NO, we don't! Redo this to make it more efficient!
            Node* oldHead = head; //NOTE: pointers don't "shallow copy" or "Deep copy." bc address. You are just assigning an address here.
            head = new Node(item);
            head->next = oldHead;  //SIMPLIFY (see above)
        }
        lsize++;
    }

    virtual void push_back(T item) { //should be implemented
        //Node addThis = new Node(item); NO! Don't do this. Use variables you already have to implement it
        if(lsize==0) { //if empty
            head = new Node(item); //no ampersand?
            tail = head;
        } else { //not empty
            tail->next = new Node(item);
            tail = tail->next;
            //x.next is already nullptr
        }
        lsize++;
    }

    virtual void insert(T item, size_t position) {
        // implement insert here
    }

    virtual void pop_front() {
        // implement pop_front here
    }

    virtual void pop_back() {
        // implement pop_back here
    }

    virtual void remove(size_t position) {
        // implement remove here
    }

    virtual T front() const {
        // implement front here
        T something;
        return something;
         //delete this later
    }

    virtual T back() const {
        // implement back here
        T something;
        return something; //delete this later
    }

    virtual T at(size_t index) const {
        // implement at here
        T something;
        return something; //delete this later
    }

    virtual bool contains(const T& item) const {
        // implement contains here
        return false; //delete this later
    }

    virtual size_t size() const {
        // implement size here
        return 0; //delete this later
    }

    virtual void clear() {
        // implement clear here
    }

    virtual std::string toString() const {
        // implement toString here
        Node currentNode = *head;
        std::stringstream ss;
        while(currentNode.next != nullptr){
            ss << currentNode.value << " ";
            currentNode = *currentNode.next;
        }
        ss << currentNode.value;
        return ss.str();
    }
};
