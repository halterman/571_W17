#ifndef COUNTER_H_
#define COUNTER_H_

#include <functional>

class Counter {
    typedef std::function<void(int)> Callback;
    int count;
    Callback len_func;
public:
    Counter(Callback cb);
    void increment();
    void decrement();
};

#endif
