#include <iostream>
#include "Arrays.cpp"
using namespace std;

class Queue : public Array {
    public: 
        void display() {
            cout << "Queue : ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void enqueue(int value) {
            arr[size] = value;
            size++;
        }

        int dequeue() {
            int result = arr[0];
            for (int i = 0; i < size; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
            return result;
        }

};

int main() {
    Queue q = Queue();
    q.enqueue(20); q.enqueue(40); q.enqueue(60); q.enqueue(80);
    q.display();

    cout << q.dequeue() << endl;
    q.display();
    return 0;
}