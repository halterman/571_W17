#include "progressbar.h"
#include "counter.h"

int main() {
    ProgressBar pbar;
    Counter cntr(&pbar);

    char key;
    bool done = false;
    while (!done) {
        pbar.draw();
        std::cin >> key;
        switch (key) {
            case 'u':
            case 'U':
                cntr.increment();
                break;
            case 'd':
            case 'D':
                cntr.decrement();
                break;
            case 'q':
            case 'Q':
                done = true;
                break;
        }
    }
}
