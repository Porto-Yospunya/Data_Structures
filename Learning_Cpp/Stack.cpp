#include <iostream>
#include "Arrays.cpp"
using namespace std;

class Stack : public Array {
    public: 
        // show display
        void display() {
            cout << "Stack : ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        // push value
        void push(int value) {
            // arr[size] = value;
            // size++;

            insert(value);
        }

        // delete value and pop value
        int pop() {
            return arr[--size];
        }
};

int main() {
    Stack s = Stack();
    s.push(10);
    s.push(30);
    s.push(50);
    s.push(70);
    s.push(90);

    s.display();

    cout << "Pop => " << s.pop() << endl;

    s.display();
    return 0;
}