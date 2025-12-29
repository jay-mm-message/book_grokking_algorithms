#include <iostream>
using namespace std;

template <class T>
vector<T> qsort(vector<T> vec) {
	if (vec.size() <= 1)
		return vec;

	vector<T> less, equal, greater;
	T pivot = vec[0];
	for(int i = 0 ; i < vec.size() ; ++i) {
		if (pivot > vec[i]) {
			less.push_back(vec[i]);
		} else if (pivot < vec[i]) {
			greater.push_back(vec[i]);
		} else {
			equal.push_back(vec[i]);
		}
	}
	vector<T> left = qsort(less);
	vector<T> right = qsort(greater);
	vector<T> ret;
	ret.insert(ret.end(), left.begin(), left.end());
	ret.insert(ret.end(), equal.begin(), equal.end());
	ret.insert(ret.end(), right.begin(), right.end());

	return ret;
}

template <class T>
void p(vector<T> vec) {
	for(auto v : vec) {
		cout << v << ' ';
	}
	cout << endl;
}
int main() {
	vector<int> vec{1, 7, 8, 9, 3, 2};
	p(vec);
	vector<int> ret = qsort(vec);
	p(ret);
	return 0;
}