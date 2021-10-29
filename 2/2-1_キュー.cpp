#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <cstdlib>
#include <numeric>
#include <stack>
#include <queue>
#include <math.h>
#include <set>
using namespace std;


int main () {
	queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	printf("%d\n", que.front());
	que.pop();
	printf("%d\n", que.front());
	que.pop();
	printf("%d\n", que.front());
	que.pop();
	return 0;
}
