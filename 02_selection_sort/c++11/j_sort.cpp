#include <iostream>
using namespace std;

void p(vector<vector<string>> vec) {
	for(int i = 0 ; i < vec.size() ; ++i) {
		for(int j = 0 ; j < vec[0].size() ; ++j) {
			cout << vec[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	vector<vector<string>> tables{{"RADIOHEAD", "156"},
	{"KISHORE KUMAR", "141"}, {"WILCO", "111"},
	{"NEUTRAL MILK HOTEL", "94"}, {"BECK", "88"},
	{"THESTROKES", "61"}, {"THE BLACK KEYS", "35"}};

	p(tables);
	for(int i = 0 ; i < tables.size() ; ++i) {
		int min = i;
		for(int j = i ; j < tables.size() ; ++j) {
			if (stoi(tables[j][1]) < stoi(tables[min][1]))
				min = j;
		}
		swap(tables[i], tables[min]);
	}
	p(tables);
}
