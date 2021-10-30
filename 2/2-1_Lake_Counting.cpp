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
int N, M;
vector<vector<char>> field(MAX_N, MAX_N);

void dfs(int x, int y) {
	field.at(x).at(y) = '.';
	for (int dx = -1; dx <= 1; dx++) {
		for (int dy = -1; dy <= 1; dy++) {
			int nx = x + dx, ny = y + dy;
			if (0 <= nx && nx < N && 0 <= ny && ny < M && field.at(nx).at(ny) == 'W') dfs(nx, ny);
		}
	}
}

void solve () {
	int res = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (field[i][j] == 'W') {
				dfs(i, j);
				res++;
			}
		}
	}
	printf("%d\n", res);
}

int main () {
	N = 10;
	M = 12;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> field;
		}
	}
	solve();
}
