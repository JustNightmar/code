#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <algorithm>
#include <forward_list>
#include <cmath>
#include <queue>
#include <stack>
#include <regex>
#include <set>
#include <sstream>
#include <map>
using namespace std;

template<typename T>
vector<T> createAndFillVector(int size) {
	vector<T> v(size);
	for (int i = 0; i < size; i++) {
		cin >> v[i];
	}
	return v;
}

template<typename T>
void printVector(vector<T>& v) {
	for (const auto& e : v) {
		cout << e << '\t';
	}
	cout << endl;
}

set<int> getSet(string& str) {
	set<int> res;
	stringstream ss(str);
	while (getline(ss, str, ' ')) {
		if (str.size() > 0) res.insert(stoi(str));
	}
	return res;
}

template<typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m) {
	for (const auto& p : m) {
		os << p.first << " : ";
		for (const auto e : p.second) {
			os << e << '\t';
		} cout << endl;
	}
	return os;
}

map<string, vector<int>> getGrades() {
	map<string, vector<int>> m;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s1;
		int a = 0;
		cin >> s1 >> a;
		if (m.count(s1)) {m[s1].push_back(a);} else {m[s1] = vector<int>{ a };}
	}
	return m;
}

int main() {
	map<string, vector<int>> grades = getGrades();
	cout << grades;
	cout << grades;
	cout << grades;
	cout << grades;
	cout << endl;
    return 0;
}