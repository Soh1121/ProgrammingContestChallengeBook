#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <cstdlib>
#include <math.h>
#include <numeric>
#include <set>
using namespace std;


int fib (int n) {
	if (n <= 1) return n;
	return fib(n - 1) + fib(n - 2);
}


int main () {
	cout << fib(5) << endl;
}
