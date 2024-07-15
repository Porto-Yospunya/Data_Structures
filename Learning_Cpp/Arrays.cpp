#include <iostream>
#include <stdio.h>
using namespace std;

// class arrays
class Array {
    // variable
    private:
        static const int max_size = 5;
        int arr[max_size];
        int size;
    public: 
        // constructors
        Array() {
            size = 0;
        }

        // append value to array
        // input value
        void insert(int value) {
            arr[size] = value;
            size++;
        }

        // output value
        void display() {
            cout << "Array : ";
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            cout << endl;
        }

        // search
        // input : int value
        // output : if found return index else not found return -1
        int search(int value) {
            for (int index = 0; index < size; index++)
                if (arr[index] == value) return index;
            return -1;
        }

        // delete
        // input : int value
        // output void
        void remove(int value) {
            int index = search(value);
            if (index == -1) return;
            for (int item = index; item < size; item++) {
                arr[item] = arr[item + 1];
            }
            size--;
        }

        // insert with index
        // input : int value , int index
        // output void
        void insertIndex(int value, int index) {
            for (int item = size - 1; item >= index; item--) {
                arr[item + 1] = arr[item];
            }
            arr[index] = value;
            size++;
        }
};

int main() {
    Array a1 = Array(); // a1 => object
    a1.insert(5); // insert
    a1.insert(20); // insert
    a1.insert(999); // insert
    a1.display(); // output
    printf("Index : %d\n", a1.search(5)); // search
    a1.remove(999); // remove
    a1.display(); // output

    a1.insert(90);
    a1.insertIndex(67, 1); // insert with index
    a1.insertIndex(38, 3);
    a1.display();
    return 0;
}