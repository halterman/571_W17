#ifndef COUNTER_H_
#define COUNTER_H_

#include "progressbar.h"

class Counter {
    int count;
    ProgressBar *bar;
public:
    Counter(ProgressBar *b);
    void increment();
    void decrement();
};

#endif
