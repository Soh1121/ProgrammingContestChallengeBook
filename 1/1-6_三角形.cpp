#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <cstdlib>
#include <numeric>
#include <math.h>
#include <set>
using namespace std;


int main() {
	// 例1
	// int n = 5;
	// vector<int> a = {2, 3, 4, 5, 10};
	// 例2
	int n = 4;
	vector<int> a = {4, 5, 10, 20};

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				int len = a.at(i) + a.at(j) + a.at(k);
				int ma = max(a.at(i), max(a.at(j), a.at(k)));
				int rest = len - ma;

				if (rest <= ma) {
					continue;
				} else {
					if (ans < len) {
						ans = len;
					}
				}
			}
		}
	}
	cout << ans << endl;
}
