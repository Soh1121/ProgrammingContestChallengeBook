#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <cstdlib>
#include <numeric>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;

int MAX_N = 100;
int n, k;
vector<int> a(MAX_N);

bool dfs(int i, int sum) {
	if (i == n) return sum == k;
	if (dfs(i + 1, sum)) return true;
	if (dfs(i + 1, sum + a.at(i))) return true;
	return false;
}

int main () {

	n = 4;
	a = {1, 2, 4, 7};
	k = 13;

	int i = 0;
	int sum = 0;
	if (dfs(0, 0)) printf("Yes\n");
	else printf("No\n");
}
