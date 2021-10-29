#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <numeric>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

int fact (int n) {
	if (n == 0) return 1;
	return n * fact(n - 1);
}

int main () {
	cout << fact(10) << endl;
}
