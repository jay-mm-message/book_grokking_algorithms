#include <iostream>
using namespace std;

int main() {
	unordered_map<string, double> book{{"apple", 0.67},
	{"milk", 1.49}, {"avocade", 1.49}};

	for(auto it = book.begin() ; it != book.end() ; ++it) {
		cout << it->first << ' ' << it->second << endl;
	}
	cout << endl;

	string word = "avocade";
	if (book.find(word) == book.end()) {
		cout << "It's not exist. " << endl;
	} else {
		cout << "It's exist. "
			 << word
			 << ", "
			 << book[word]
			 << endl;
 	}
	return 0;
}