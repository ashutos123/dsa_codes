#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// Stack class template
template <typename T>
class Stack {
private:
    vector<T> elements;
    size_t size;

public:
    Stack(size_t size) : size(size) {}

    void push(T value) {
        if (elements.size() >= size) {
            throw runtime_error("Stack overflow");
        }
        elements.push_back(value);
    }

    T pop() {
        if (elements.empty()) {
            throw out_of_range("Stack underflow");
        }
        T value = elements.back();
        elements.pop_back();
        return value;
    }

    T top() const {
        if (elements.empty()) {
            throw out_of_range("Stack is empty");
        }
        return elements.back();
    }

    bool empty() const {
        return elements.empty();
    }

    size_t getSize() const {
        return size;
    }
};

// Example usage
int main() {
    try {
        // Create a stack of integers with size 3
        Stack<int> intStack(3);

        // Push some values onto the stack
        intStack.push(1);
        intStack.push(2);
        intStack.push(3);

        // Attempt to push onto a full stack (should throw an exception)
        intStack.push(4);
    }
    catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }

    try {
        // Create a stack of strings with size 2
        Stack<string> stringStack(2);

        // Attempt to pop from an empty stack (should throw an exception)
        stringStack.pop();
    }
    catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}