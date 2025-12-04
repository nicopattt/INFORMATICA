#ifndef STACK_H
#define STACK_H

class Stack {

    private:
        int dimensione;
        int array[100];
        int counter;
    public:
        Stack();
        void push(int n);
        int pop();
        int top();
        bool isEmpty();
        int size();
};
#endif