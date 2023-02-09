#include <iostream>

#include "LinkedList.h"
using std::cout;
using std::endl;
int main(int argc, char* argv[]) {
    // Put any code that you want to run to test your linked list implementation here
    LinkedList<int> intList; //something wrong with the destructor!
    intList.push_back(3);
    intList.push_front(2);
    intList.push_front(1);
    cout << intList.toString() << endl;
    return 0;
}
