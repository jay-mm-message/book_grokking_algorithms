#include <iostream>

using std::cout;
using std::endl;

int fact(const int& x) {
    if (x == 1) return 1;
    return fact(x-1) * x;
}

int main() {
    cout << fact(5) << endl;
}
/*
120

f(5) -> 24 * 5
	f(4) * x -> 6 * 4
		f(3) * x -> 2 * 3
			f(2) * x -> 1 * 2;
				f(1) return 1;
*/
