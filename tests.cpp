// You should not have to modify this document. You're welcome to do so if you
// would like, but note that the autograder will use this exact document as is
// to test your code

#include <iostream>
#include <stdexcept>

#include "LinkedListInterface.h"
#include "LinkedList.h"

void part1() {
    LinkedListInterface<int>* list = new LinkedList<int>;

    std::cout << list->toString() << std::endl;
    list->insertHead(2);
    std::cout << list->toString() << std::endl;
    list->insertHead(-22);
    std::cout << list->toString() << std::endl;
    list->insertHead(-20);
    std::cout << list->toString() << std::endl;
    list->insertHead(4);
    std::cout << list->toString() << std::endl;
    list->insertHead(2);
    std::cout << list->toString() << std::endl;
    list->insertHead(21);
    std::cout << list->toString() << std::endl;
    list->insertHead(11);
    std::cout << list->toString() << std::endl;
    list->insertHead(-20);
    std::cout << list->toString() << std::endl;
    list->insertHead(-14);
    std::cout << list->toString() << std::endl;

    delete list;

    LinkedListInterface<double>* list2 = new LinkedList<double>;

    std::cout << list2->toString() << std::endl;
    list2->insertHead(9.03);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(0.87);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(8.02);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(3.82);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(1.04);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(9.51);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(4.91);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(3.65);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(9.28);
    std::cout << list2->toString() << std::endl;
    list2->insertHead(9.21);
    std::cout << list2->toString() << std::endl;

    delete list2;
}

void part2() {
    LinkedListInterface<int>* list = new LinkedList<int>;

    std::cout << list->size() << std::endl;
    list->insertHead(-12);
    std::cout << list->size() << std::endl;
    list->insertHead(-20);
    std::cout << list->size() << std::endl;
    list->insertHead(-17);
    std::cout << list->size() << std::endl;
    list->insertHead(17);
    std::cout << list->size() << std::endl;
    list->insertHead(17);
    std::cout << list->size() << std::endl;
    list->insertHead(11);
    std::cout << list->size() << std::endl;
    list->insertHead(-12);
    std::cout << list->size() << std::endl;
    list->insertHead(-9);
    std::cout << list->size() << std::endl;
    list->insertHead(17);
    std::cout << list->size() << std::endl;
    list->insertHead(-12);
    std::cout << list->size() << std::endl;
    list->insertHead(-7);
    std::cout << list->size() << std::endl;
    list->insertHead(23);
    std::cout << list->size() << std::endl;
    list->insertHead(-2);
    std::cout << list->size() << std::endl;

    delete list;
}

void part3() {
    LinkedListInterface<int>* list = new LinkedList<int>;

    std::cout << list->toString() << std::endl;
    list->insertTail(1);
    std::cout << list->toString() << std::endl;
    list->insertTail(3);
    std::cout << list->toString() << std::endl;
    list->insertTail(5);
    std::cout << list->toString() << std::endl;
    list->insertTail(7);
    std::cout << list->toString() << std::endl;
    list->insertTail(1);
    std::cout << list->toString() << std::endl;
    list->insertTail(9);
    std::cout << list->toString() << std::endl;
    list->insertTail(11);
    std::cout << list->toString() << std::endl;
    list->insertTail(13);
    std::cout << list->toString() << std::endl;
    list->insertTail(1);
    std::cout << list->toString() << std::endl;
    list->insertTail(15);
    std::cout << list->toString() << std::endl;
    list->insertTail(9);
    std::cout << list->toString() << std::endl;

    list->insertAfter(2, 1);
    std::cout << list->toString() << std::endl;
    list->insertAfter(4, 3);
    std::cout << list->toString() << std::endl;
    list->insertAfter(6, 5);
    std::cout << list->toString() << std::endl;
    list->insertAfter(8, 7);
    std::cout << list->toString() << std::endl;
    list->insertAfter(10, 9);
    std::cout << list->toString() << std::endl;
    list->insertAfter(12, 11);
    std::cout << list->toString() << std::endl;
    list->insertAfter(2, 1);
    std::cout << list->toString() << std::endl;
    list->insertAfter(14, 13);
    std::cout << list->toString() << std::endl;
    list->insertAfter(16, 15);
    std::cout << list->toString() << std::endl;
    list->insertAfter(2, 14);
    std::cout << list->toString() << std::endl;
    list->insertAfter(17, 18);
    std::cout << list->toString() << std::endl;

    delete list;
}

void part4() {
    LinkedListInterface<int>* list = new LinkedList<int>;

    list->insertHead(9);
    list->insertHead(8);
    list->insertHead(7);
    list->insertHead(6);
    list->insertHead(5);
    list->insertHead(4);
    list->insertHead(3);
    list->insertHead(2);
    list->insertHead(1);
    list->insertHead(0);

    try {
        std::cout << list->at(0) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(0) threw an exception" << std::endl;
    }

    try {
        std::cout << list->at(1) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(1) threw an exception" << std::endl;
    }

    try {
        std::cout << list->at(4) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(4) threw an exception" << std::endl;
    }

    try {
        std::cout << list->at(8) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(8) threw an exception" << std::endl;
    }

    try {
        std::cout << list->at(9) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(9) threw an exception" << std::endl;
    }

    try {
        std::cout << list->at(10) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(10) threw an exception" << std::endl;
    }

    try {
        std::cout << list->at(29) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "list->at(29) threw an exception" << std::endl;
    }

    delete list;
}

void part5() {
    LinkedListInterface<int>* list = new LinkedList<int>;

    list->insertHead(10);
    list->insertHead(9);
    list->insertHead(8);
    list->insertHead(7);
    list->insertHead(6);
    list->insertHead(5);
    list->insertHead(4);
    list->insertHead(3);
    list->insertHead(2);
    list->insertHead(1);

    std::cout << list->toString() << std::endl;
    list->remove(11);
    std::cout << list->toString() << std::endl;
    list->remove(0);
    std::cout << list->toString() << std::endl;
    list->remove(10);
    std::cout << list->toString() << std::endl;
    list->remove(6);
    std::cout << list->toString() << std::endl;
    list->remove(8);
    std::cout << list->toString() << std::endl;
    list->remove(2);
    std::cout << list->toString() << std::endl;
    list->remove(4);
    std::cout << list->toString() << std::endl;
    list->remove(3);
    std::cout << list->toString() << std::endl;
    list->remove(6);
    std::cout << list->toString() << std::endl;
    list->remove(4);
    std::cout << list->toString() << std::endl;

    list->remove(1);
    std::cout << list->toString() << std::endl;
    list->remove(2);
    std::cout << list->toString() << std::endl;
    list->remove(3);
    std::cout << list->toString() << std::endl;
    list->remove(4);
    std::cout << list->toString() << std::endl;
    list->remove(5);
    std::cout << list->toString() << std::endl;
    list->remove(6);
    std::cout << list->toString() << std::endl;
    list->remove(7);
    std::cout << list->toString() << std::endl;
    list->remove(8);
    std::cout << list->toString() << std::endl;
    list->remove(9);
    std::cout << list->toString() << std::endl;
    list->remove(10);
    std::cout << list->toString() << std::endl;

    delete list;
}

void part6() {
    LinkedListInterface<int>* list = new LinkedList<int>;

    list->insertHead(-19);
    std::cout << list->toString() << std::endl;
    list->insertHead(-24);
    std::cout << list->toString() << std::endl;
    list->insertHead(-12);
    std::cout << list->toString() << std::endl;
    list->insertHead(-21);
    std::cout << list->toString() << std::endl;
    list->insertHead(-8);
    std::cout << list->toString() << std::endl;
    list->insertHead(15);
    std::cout << list->toString() << std::endl;
    list->insertHead(-12);
    std::cout << list->toString() << std::endl;
    list->insertHead(11);
    std::cout << list->toString() << std::endl;
    list->insertHead(-20);
    std::cout << list->toString() << std::endl;
    list->insertHead(0);
    std::cout << list->toString() << std::endl;
    list->insertHead(-19);
    std::cout << list->toString() << std::endl;
    list->insertHead(-10);
    std::cout << list->toString() << std::endl;
    list->insertHead(12);
    std::cout << list->toString() << std::endl;
    list->insertHead(2);
    std::cout << list->toString() << std::endl;
    list->insertHead(-2);
    std::cout << list->toString() << std::endl;

    list->clear();
    std::cout << list->toString() << std::endl;

    delete list;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [TEST]" << std::endl;
        std::cerr << "where TEST is one of 1, 2, 3, 4, 5, 6, or all" << std::endl;
        return 1;
    }

    std::string test = argv[1];

    if (test == "1") {
        std::cout << "--- Part 1 output ---" << std::endl;
        part1();
    } else if (test == "2") {
        std::cout << "--- Part 2 output ---" << std::endl;
        part2();
    } else if (test == "3") {
        std::cout << "--- Part 3 output ---" << std::endl;
        part3();
    } else if (test == "4") {
        std::cout << "--- Part 4 output ---" << std::endl;
        part4();
    } else if (test == "5") {
        std::cout << "--- Part 5 output ---" << std::endl;
        part5();
    } else if (test == "6") {
        std::cout << "--- Part 6 output ---" << std::endl;
        part6();
    } else if (test == "all") {
        std::cout << "--- Part 1 output ---" << std::endl;
        part1();

        std::cout << "\n\n--- Part 2 output ---" << std::endl;
        part2();

        std::cout << "\n\n--- Part 3 output ---" << std::endl;
        part3();

        std::cout << "\n\n--- Part 4 output ---" << std::endl;
        part4();

        std::cout << "\n\n--- Part 5 output ---" << std::endl;
        part5();

        std::cout << "\n\n--- Part 6 output ---" << std::endl;
        part6();
    } else {
        std::cerr << test << " is not a valid test to run. The valid options are 1, 2, 3, 4, 5, 6, and all"
                  << std::endl;
        return 1;
    }

    return 0;
}
