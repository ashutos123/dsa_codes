#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> stack;

public:
    void push(T value) {
        stack.push_back(value);
    }

    T pop() {
        T value = stack.back();
        stack.pop_back();
        return value;
    }

    T top() {
        return stack.back();
    }

    bool empty() {
        return stack.empty();
    }

    int size() {
        return stack.size();
    }
};

struct StudentRecord {
    std::string name;
    std::string rollNo;
    int year;
    char gender;
    float cgpa;
    std::string regNo;
};

int main() {
    Stack<int> intStack;
    Stack<char> charStack;
    Stack<float> floatStack;
    Stack<std::complex<float>> complexStack;
    Stack<StudentRecord> studentRecordStack;

    // Push some values onto the int stack
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    // Pop some values off the int stack
    std::cout << intStack.pop() << std::endl;
    std::cout << intStack.pop() << std::endl;

    // Push some values onto the char stack
    charStack.push('a');
    charStack.push('b');
    charStack.push('c');

    // Pop some values off the char stack
    std::cout << charStack.pop() << std::endl;
    std::cout << charStack.pop() << std::endl;

    // Push some values onto the float stack
    floatStack.push(1.23);
    floatStack.push(4.56);
    floatStack.push(7.89);

    // Pop some values off the float stack
    std::cout << floatStack.pop() << std::endl;
    std::cout << floatStack.pop() << std::endl;

    // Push some values onto the complex stack
    complexStack.push(std::complex<float>(1.0, 2.0));
    complexStack.push(std::complex<float>(3.0, 4.0));
    complexStack.push(std::complex<float>(5.0, 6.0));

    // Pop some values off the complex stack
    std::cout << complexStack.pop() << std::endl;
    std::cout << complexStack.pop() << std::endl;

    // Push some values onto the student record stack
    StudentRecord student1 = {"John Smith", "12345", 2022, 'M', 3.5, "67890"};
    StudentRecord student2 = {"Jane Doe", "54321", 2023, 'F', 4.0, "09876"};
    studentRecordStack.push(student1);
    studentRecordStack.push(student2);

    // Pop some values off the student record stack
    StudentRecord student = studentRecordStack.pop();
    std::cout << student.name << std::endl;
    std::cout << student.rollNo << std::endl;
    std::cout << student.year << std::endl;
    std::cout << student.gender << std::endl;
    std::cout << student.cgpa << std::endl;
    std::cout << student.regNo << std::endl;

    return 0;
}
