#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

class Set {
private:
    set<int> elements;

public:
    // Default constructor
    Set() {}

    // Copy constructor
    Set(const Set& other) {
        elements = other.elements;
    }

    // Overload + operator for union
    Set operator+(const Set& other) const {
        Set result;
        set_union(elements.begin(), elements.end(),
                  other.elements.begin(), other.elements.end(),
                  inserter(result.elements, result.elements.begin()));
        return result;
    }

    // Overload - operator for difference
    Set operator-(const Set& other) const {
        Set result;
        set_difference(elements.begin(), elements.end(),
                       other.elements.begin(), other.elements.end(),
                       inserter(result.elements, result.elements.begin()));
        return result;
    }

    // Overload * operator for intersection
    Set operator*(const Set& other) const {
        Set result;
        set_intersection(elements.begin(), elements.end(),
                          other.elements.begin(), other.elements.end(),
                          inserter(result.elements, result.elements.begin()));
        return result;
    }

    // Overload < operator for subset
    bool operator<(const Set& other) const {
        return includes(other.elements.begin(), other.elements.end(),
                        elements.begin(), elements.end());
    }

    // Overload <= operator for subset or equal
    bool operator<=(const Set& other) const {
        return (*this < other) || (elements == other.elements);
    }

    // Overload >> operator for input
    friend istream& operator>>(istream& in, Set& set) {
        int element;
        while (in >> element) {
            set.elements.insert(element);
            break;
        }
        return in;
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream& out, const Set& set) {
        out << "{ ";
        copy(set.elements.begin(), set.elements.end(), ostream_iterator<int>(out, " "));
        out << "}";
        return out;
    }
};
int main() {
    Set set1, set2;

    cout << "Enter the first set (end with -1): ";
    cin >> set1;

    cout << "Enter the second set (end with -1): ";
    cin >> set2;

    cout << "Set 1: " << set1 << endl;
    cout << "Set 2: " << set2 << endl;

    Set unionSet = set1 + set2;
    cout << "Union: " << unionSet << endl;

    Set diffSet = set1 - set2;
    cout << "Difference: " << diffSet << endl;

    Set interSet = set1 * set2;
    cout << "Intersection: " << interSet << endl;

    bool subset = set1 < set2;
    cout << "Set 1 is a subset of Set 2: " << subset << endl;

    bool subsetEq = set1 <= set2;
    cout << "Set 1 is a subset of or equal to Set 2: " << subsetEq << endl;

    Set set3 = set1;
    cout << "Set 3 (copy of Set 1): " << set3 << endl;

    return 0;
}
