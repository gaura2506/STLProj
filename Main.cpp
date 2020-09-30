#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool funct(int x, int y) {
	return x > y;
}

void VectorDemo(
) {
	vector <int> a = { 2, 4, 7, 1, 8 };

	cout << a[1] << endl;

	sort(a.begin(), a.end());

	bool srch = binary_search(a.begin(), a.end(), 4);

	srch = binary_search(a.begin(), a.end(), 3);

	a.push_back(100);
	a.push_back(100);
	a.push_back(100);
	a.push_back(100);
	a.push_back(123);

	/*vector<int> ::iterator*/auto itr1 = lower_bound(a.begin(), a.end(), 100);

	/*vector <int> ::iterator*/auto itr2 = upper_bound(a.begin(), a.end(), 100);

	cout << *itr1 << " " << *itr2 << endl;

	cout << itr2 - itr1 << endl;

	sort(a.begin(), a.end(), funct);

	//vector <int> ::iterator itr3;
	//for (itr3 = a.begin(); itr3 != a.end(); itr3++) {
	for (int& x : a) {
		x++;
	}
	for (int x : a) {
		cout << x << endl;
	}
}

void SetDemo(
) {
	set<int> b;

	b.insert(4);
	b.insert(2);
	b.insert(1);
	b.insert(1);
	b.insert(-1);
	b.insert(-10);

	for (int x : b) {
		cout << x << endl;
	}

	auto itr1 = b.find(-1);

	if (itr1 == b.end()) {
		cout << "not present" << endl;
	} else {
		cout << "present" << endl;
		cout << *itr1 << endl;
	}

	auto itr2 = b.upper_bound(1);
	auto itr3 = b.upper_bound(0);

	auto itr4 = b.upper_bound(4);

	if (itr4 == b.end()) {
		cout << "cannot found" << endl;
	}
}

int main(
) {
	SetDemo();
	//VectorDemo();
	int r;
	int newfile;
}