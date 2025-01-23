#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;   // Pointer to dynamically allocate memory for the stack
    int top;    // Index of the top element
    int maxSize; // Maximum size of the stack

public:
    // Constructor: Take the size of the stack as input
    Stack(int size) {
        maxSize = size;
        arr = new int[maxSize]; // Dynamically allocate memory for the stack
        top = -1; // Initialize the top index
    }

    // Destructor: Free allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Push operation: Add an element to the stack
    void push(int value) {
        if (top >= maxSize - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Pop operation: Remove the top element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop an element." << endl;
            return -1; // Return a sentinel value
        } else {
            return arr[top--];
        }
    }

    // Peek operation: Get the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! No element to peek." << endl;
            return -1; // Return a sentinel value
        } else {
            return arr[top];
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Display all elements in the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);


    return 0;
}
