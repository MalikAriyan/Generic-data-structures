#include <iostream>
#include "ArrayList.h"
using namespace std;

int main() {

    ArrayList<int> list(5);

    list.addElementAtLastIndex(10);
    list.addElementAtLastIndex(20);
    list.addElementAtFirstIndex(5);

    cout << "List after adding elements: ";
    list.display();

    list.removeElementFromStart();
    cout << "After removing from start: ";
    list.display();

    int removed = list.removeElementFromEnd();
    cout << "Removed from end: " << removed << endl;

    cout << "Final List: ";
    list.display();

    return 0;
}