#include <iostream>
#include "progressbar.h"

ProgressBar::ProgressBar(): length(0) {}

void ProgressBar::draw() const {
    std::cout << '[';
    for (int i = 0; i < length; i++) 
        std::cout << '=';
    std::cout << ']';
    std::cout << '\n';
}

void ProgressBar::set(int len) {
    length = len;
}
