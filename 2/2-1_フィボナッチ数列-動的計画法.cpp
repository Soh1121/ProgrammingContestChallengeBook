#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <cstdlib>
#include <numeric>
#include <math.h>
#include <set>
using namespace std;


int fib (int n, vector<int> memo) {
	if (n <= 1) return n;
	if (memo.at(n) != 0) return memo[n];
	return memo.at(n) = fib(n - 1, memo) + fib(n - 2, memo);
}

int main () {
	int MAX_N = 10;
	vector<int> memo(MAX_N + 1);
	cout << fib(MAX_N, memo) << endl;
}
