#include <iostream>
#include <vector>
#include <functional> // for std::hash

using namespace std;

// Node class template
template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) : data(data), next(nullptr) {}
};

// LinkedList class template
template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
    }

    void addNode(T data) {
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node<T>* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    bool contains(T data) {
        Node<T>* current = head;
        while (current != nullptr) {
            if (current->data == data) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};

// Hash class template
template <typename T>
class Hash {
private:
    vector<LinkedList<T>> table;
    function<size_t(T)> hashFunction;

public:
    Hash(size_t size, function<size_t(T)> hashFunction)
        : table(size), hashFunction(hashFunction) {}

    void insert(T data) {
        size_t index = hashFunction(data) % table.size();
        table[index].addNode(data);
    }

    bool contains(T data) {
        size_t index = hashFunction(data) % table.size();
        return table[index].contains(data);
    }
};

// Example usage
int main() {
    // Create a hash table of integers
    Hash<int> intHash(10, [](int x) { return x; });
    intHash.insert(1);
    intHash.insert(2);
    intHash.insert(3);
    cout << intHash.contains(2) << endl; // should print "1"
    cout << intHash.contains(4) << endl; // should print "0"

    // Create a hash table of strings
    Hash<string> stringHash(10, [](const string& s) {
        size_t hash = 0;
        for (char c : s) {
            hash = (hash * 31) + c;
        }
        return hash;
    });
    stringHash.insert("hello");
    stringHash.insert("world");
    cout << stringHash.contains("world") << endl; // should print "1"
    cout << stringHash.contains("foo") << endl; // should print "0"

    return 0;
}