#include "counter.h"

Counter::Counter(Callback cb): count(0), len_func(cb) {}

void Counter::increment() {
    len_func(++count);
}

void Counter::decrement() {
    if (count > 0)
        len_func(--count);
}
