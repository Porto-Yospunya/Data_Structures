#include <iostream>
#include <stdio.h>
using namespace std;

// class arrays
class Array {
    // variable
    protected:
        static const int max_size = 50;
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

        void insertsort() {
            for (int i = 1; i < size; i++) {
                for (int j = i; j > 0; j--) {
                    if (arr[j] < arr[j - 1]) {
                        int tmp = arr[j];
                        arr[j] = arr[j - 1];
                        arr[j - 1] = tmp;
                    }
                }
                display();
            }
        }

        void selectionsort() {
            for (int i = 0; i < size; i++) {
                int min = i;
                for (int j = i; j < size; j++) {
                    if (arr[j] < arr[min]) {
                        min = j;
                    }
                }
                // swap
                int tmp = arr[min];
                arr[min] = arr[i];
                arr[i] = tmp;
                display();
            }
        }

        void bubblesort() {
            for (int i = 0; i < size; i++) {
                bool swap = false;
                for (int j = 0; j < size - i; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int tmp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = tmp;
                        swap = true;
                    }
                }

                if (!swap) {
                    break;
                }
                display();
            }
        }
};