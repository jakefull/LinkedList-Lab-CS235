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

    virtual ~LinkedList() {
        this->clear();// we just need to delete every node in the list, yeah?

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

    virtual void insert(T item, size_t position) { //list indicies start at 0
        if (position < 0 || position > lsize){
            throw std::out_of_range("Position provided is out of range for this list");
        }
        if (position == 0){// if first index, just push_front
            this->push_front(item);
        } else if (position == lsize){// if last index, push_back
            this->push_back(item);
        } else {
            Node* insertThis = new Node(item);
            //get before node
            Node* beforeNode = head;//bc start at head, initialize counter in for loop at 1
            for (size_t i =1;i<position;++i){//why does position 2 put it at the end?
                beforeNode = beforeNode->next;
            }
            insertThis->next = beforeNode->next;
            beforeNode->next = insertThis;
            lsize++;
        }
    }

    virtual void pop_front() {
        if (lsize == 0) {
            throw std::length_error("This list is empty");
        } else {
            Node* deleteThis = head;
            head = head->next;
            delete deleteThis;
            lsize--;
        }
    }

    virtual void pop_back() {
        if (lsize == 0){
            throw std::length_error("This list is empty");
        } else {
            Node* deleteThis = tail;
            if (lsize == 1) { //otherwise, see while loop below
                delete deleteThis;
            } else {
                Node* newTail = head;
                while (newTail->next != tail){ //this loop will go on forever when size = 1, bc starts at tail!
                    newTail = newTail->next;
                }
                tail = newTail;
                tail->next = nullptr;
                delete deleteThis;
            }
            lsize--;
        }
    }

    virtual void remove(size_t position) {
        if (position < 0 || position >=lsize) {
            throw std::out_of_range("The position provided is out of the range for this list");
        } else if (position == 0) {
            this->pop_front();
        } else if (position+1 == lsize) {
            this->pop_back();
        } else {
            Node* beforeRemove = head;
            for (size_t i=0;i<position-1;i++) {
                beforeRemove = beforeRemove->next;
            }
            Node* removeThis = beforeRemove->next;
            beforeRemove->next = removeThis->next;
            delete removeThis;
            lsize--;
        }
    }

    virtual T front() const {
        if (lsize==0){
            throw std::length_error("This list is empty");
        }else{
            return head->value;
        }
    }

    virtual T back() const {
        if (lsize==0){
            throw std::length_error("This list is empty");
        }else{
            return tail->value;
        }
    }

    virtual T at(size_t index) const {
        if (index < 0 || index+1 > lsize){//USE index+1 to avoid negative #s (lsize-1)... also bc we arent adding anything to the end AND first index is 0
            throw std::out_of_range("The index provided is out of range for this list");
        }
        if (index == 0){
            this->front();//hmm... kana? this?
        } else if (index == lsize-1){
            this->back();
        } else {
            Node* currentIndex = head;
            for (size_t i=0;i<index;i++){
                currentIndex = currentIndex->next;
            }
            return currentIndex->value;
        }
    }

    virtual bool contains(const T& item) const {
        if (tail->value == item){
            return true;
        }
        Node* currentNode = head;
        while(currentNode->next !=nullptr){
            if (currentNode->value == item){
                return true;
            } else {
                currentNode = currentNode->next;
            }
        }
        return false;
    }

    virtual size_t size() const {
        return lsize;
    }

    virtual void clear() {
        if(lsize!=0){
            Node* deleteThis = head;
            head = head->next; //you HAVE to use two variables here, because you cant reference deleteThis->next after deleting it.
            while(deleteThis->next != nullptr){
                delete deleteThis; //delete needs a pointer! Delete just says ok, whatever memory this pointer points to can now be used for something else. It doesnt delete the pointer itself.
                deleteThis = head;
                head = head->next;
            }
            delete deleteThis;
            head = nullptr;
            tail = nullptr;
            lsize = 0; //forgot this :')
        }
    }

    virtual std::string toString() const {
        // implement toString here
        if(lsize == 0){
            return {}; //this is how you return an empty string!
        }else{
            Node currentNode = *head;
            std::stringstream ss;
            while(currentNode.next != nullptr){
                ss << currentNode.value << " ";
                currentNode = *currentNode.next;
            }
            ss << currentNode.value;
            return ss.str();
        }
    }
};
