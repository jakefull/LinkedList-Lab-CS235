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
    cout << intList.size() << endl;
    intList.insert(42,3);
    cout << intList.toString() << endl;
    intList.remove(2);
    cout << intList.toString() << endl;
    LinkedList<std::string> strList;
    strList.pop_back();
    return 0;
}
