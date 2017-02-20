#ifndef PROGRESSBAR_H_
#define PROGRESSBAR_H_

#include <iostream>

class ProgressBar {
    int length;
public:
    ProgressBar();
    void draw() const;
    void set(int len);
};

#endif

