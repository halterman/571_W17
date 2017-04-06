#include <iostream>

using std::cout;
using std::endl;

template <int n>
struct factorial {
    enum { value = n * factorial<n - 1>::value };
};

template <>
struct factorial<0> {
    enum { value = 1 };
};

int fact(int n) {
    if (n < 2)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    cout << factorial<0>::value << "  " << fact(0) << endl;
    cout << factorial<1>::value << "  " << fact(1) << endl;
    cout << factorial<2>::value << "  " << fact(2) << endl;
    cout << factorial<3>::value << "  " << fact(3) << endl;
    cout << factorial<4>::value << "  " << fact(4) << endl;
    cout << factorial<5>::value << "  " << fact(5) << endl;
    cout << factorial<6>::value << "  " << fact(6) << endl;
    cout << factorial<7>::value << "  " << fact(7) << endl;
    cout << factorial<8>::value << "  " << fact(8) << endl;
    cout << factorial<9>::value << "  " << fact(9) << endl;
}

