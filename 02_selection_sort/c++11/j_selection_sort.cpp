#include <iostream>
using namespace std;

void selection_sort(vector<int> &vec) {
	for(int i = 0 ; i < vec.size() ; ++i) {
		int min = i;
		for(int j = i ; j < vec.size() ; ++j) {
			if (vec[min] > vec[j]) {
				min = j;
			}
		}
		swap(vec[i], vec[min]);
	}
}

void p(vector<int> vec) {
	for(int n : vec) {
		cout << n << ' ';
	}
	cout << endl;
	cout << endl;
}

int main() {
	vector<int> vec{5, 3, 6, 2, 10};
	p(vec);
	selection_sort(vec);
	p(vec);
	return 0;
}