#pragma once
#include <iostream>
using namespace std;

template <typename Type>
class List {
protected:
    Type* arr;
    int maxSize;
    int currentSize;

public:

    // Parameterized Constructor with Default Argument
    List(int size = 10) {
        maxSize = size;
        currentSize = 0;
        arr = new Type[maxSize];
    }

    // Copy Constructor
    List(const List& other) {
        maxSize = other.maxSize;
        currentSize = other.currentSize;

        arr = new Type[maxSize];
        for (int i = 0; i < currentSize; i++) {
            arr[i] = other.arr[i];
        }
    }

    // Destructor
    virtual ~List() {
        delete[] arr;
    }

    // Pure Virtual Functions
    virtual void addElementAtFirstIndex(Type) = 0;
    virtual void addElementAtLastIndex(Type) = 0;
    virtual Type removeElementFromEnd() = 0;
    virtual void removeElementFromStart() = 0;
};