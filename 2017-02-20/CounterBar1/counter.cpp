#include "counter.h"

Counter::Counter(ProgressBar *b): count(0), bar(b) {}

void Counter::increment() {
    count++;
    bar->set(count);
}

void Counter::decrement() {
    if (count > 0)
        count--;
    bar->set(count);
}
