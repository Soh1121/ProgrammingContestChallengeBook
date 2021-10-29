#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <cstdlib>
#include <numeric>
#include <math.h>
#include <set>
using namespace std;


int main () {
	// 例1
	int L = 10, n = 3;
	vector<int> x = {2, 6, 7};

	// 最小
	int minT = 0;
	for (int i = 0; i < n; i++) {
		minT = max(minT, min(x.at(i), L - x.at(i)));
	}

	// 最大
	int maxT = 0;
	for (int i = 0; i < n; i++) {
		maxT = max(maxT, max(x.at(i), L - x.at(i)));
	}
	cout << "min = " << minT << endl;
	cout << "max = " << maxT << endl;
}
