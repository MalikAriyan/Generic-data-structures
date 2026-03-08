#pragma once
#include "List.h"

template <typename Type>
class ArrayList : public List<Type> {

public:
    ArrayList(int size = 10) : List<Type>(size) {}

    void addElementAtFirstIndex(Type value) override {
        if (this->currentSize == this->maxSize) {
            cout << "List is full!\n";
            return;
        }

        for (int i = this->currentSize; i > 0; i--) {
            this->arr[i] = this->arr[i - 1];
        }

        this->arr[0] = value;
        this->currentSize++;
    }

    void addElementAtLastIndex(Type value) override {
        if (this->currentSize == this->maxSize) {
            cout << "List is full!\n";
            return;
        }

        this->arr[this->currentSize] = value;
        this->currentSize++;
    }

    Type removeElementFromEnd() override {
        if (this->currentSize == 0) {
            cout << "List is empty!\n";
            return Type();
        }

        this->currentSize--;
        return this->arr[this->currentSize];
    }

    void removeElementFromStart() override {
        if (this->currentSize == 0) {
            cout << "List is empty!\n";
            return;
        }

        for (int i = 0; i < this->currentSize - 1; i++) {
            this->arr[i] = this->arr[i + 1];
        }

        this->currentSize--;
    }

    void display() {
        for (int i = 0; i < this->currentSize; i++) {
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }
};