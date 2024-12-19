
#include <iostream>
#include<time.h>
using namespace std;


int main()
{

    int x = 3, y = 3, z = 5;
    int count = 0;

    // Allocate memory blocks
    // of size x*y*z
    int* a = new int[x * y * z];
    srand(time(0));
    int q=1;
    // Traverse the 3D array
    for (int i = 0; i < x; i++) {
        //cout<<"marks of" <<q<<"th year students"<<endl;
        for (int j = 0; j < y; j++) {

            for (int k = 0; k < z; k++) {

                // Assign values to the
                // memory blocks created
                *(a + i * y * z + j * z + k) = (rand()%100)+1;
            }
        }

    }

    // Traverse the 3D array again
    for (int i = 0; i < x; i++) {
            cout<<"marks of" <<q<<"th year students"<<endl;int s=1;
        for (int j = 0; j < y; j++) {
            cout<<"student"<<s<<" ";
            for (int k = 0; k < z; k++) {

                // Print values of the
                // memory blocks created
                cout << *(a + i * y * z + j * z + k) << " ";
            }
            cout << endl;s++;
        }
        cout << endl;q++;
    }

    // Deallocate memory
    delete[] a;

    return 0;
}
