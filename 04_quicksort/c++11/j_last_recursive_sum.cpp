#include <iostream>
using namespace std;

template <class T>
T sum(vector<T> vec) {
	if (vec.size() == 0)
		return 0;

	T last = vec.back();
	vec.pop_back();
	cout << last << endl;
	return last + sum(vec);
}

void p(vector<int> vec) {
	for(auto v : vec) {
		cout << v << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> vec{1, 2, 3, 4, 5, 6, 7};
	int ret = sum(vec);
	cout << ret << endl;
	cout << endl;
	return 0;
}