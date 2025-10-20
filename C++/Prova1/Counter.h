#ifndef COUNTER_H
#define COUNTER_H

class Counter {

    private:
        int value;

    public:
        Counter();
        ~Counter();

        int getValue();
        void increase(int n);
};
#endif