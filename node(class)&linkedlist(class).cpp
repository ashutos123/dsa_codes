#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node<T>* next;
    Node(T d) : data(d), next(NULL) {}
};

template <class T>
class LinkedList {
public:
    Node<T>* head;
    LinkedList() : head(NULL) {}
    void insertAtBeginning(T data) {
        Node<T>* newNode = new Node<T>(data);
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(T data) {
        Node<T>* newNode = new Node<T>(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node<T>* curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }
    void printList() {
        Node<T>* curr = head;
        while (curr != NULL) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

class Student {
public:
    string name;
    string rollNo;
    int year;
    char gender;
    float cgpa;
    string regNo;
    Student(string n, string r, int y, char g, float c, string rn)
        : name(n), rollNo(r), year(y), gender(g), cgpa(c), regNo(rn) {}
    void print() {
        cout << name << " " << rollNo << " " << year << " " << gender << " " << cgpa << " " << regNo << endl;
    }
};

template <>
void LinkedList<Student>::printList() {
    Node<Student>* curr = head;
    while (curr != NULL) {
        curr->data.print();
        curr = curr->next;
    }
    cout << endl;
}



int main() {
    // Create a linked list of various types
    LinkedList<int> intList;
    LinkedList<char> charList;
    LinkedList<float> floatList;
    LinkedList<complex<float>> complexList;
    LinkedList<Student> studentList;

    // Insert some elements into each linked list
    intList.insertAtEnd(5);
    intList.insertAtEnd(10);
    intList.insertAtEnd(15);
    charList.insertAtEnd('a');
    charList.insertAtEnd('b');
    charList.insertAtEnd('c');
    floatList.insertAtEnd(3.14);
    floatList.insertAtEnd(2.718);
    floatList.insertAtEnd(1.618);
    complexList.insertAtEnd(complex<float>(1, 2));
    complexList.insertAtEnd(complex<float>(-3, 4));
    complexList.insertAtEnd(complex<float>(5, -6));
    Student s1("Alice", "2021001", 1, 'F', 8.5, "R001");
    Student s2("Bob", "2021002", 1, 'M', 8.2, "R002");
    Student s3("Charlie", "2021003", 2, 'M', 8.8, "R003");
    studentList.insertAtEnd(s1);
    studentList.insertAtEnd(s2);
    studentList.insertAtEnd(s3);

    // Print each linked list
    cout << "intList: ";
    intList.printList();
    cout << "charList: ";
    charList.printList();
    cout << "floatList: ";
    floatList.printList();
    cout << "complexList: ";
    complexList.printList();
    cout << "studentList: ";
    studentList.printList();
    return 0;
}