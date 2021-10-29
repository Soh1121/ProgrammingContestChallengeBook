#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <cstdlib>
#include <numeric>
#include <math.h>
#include <stack>
#include <set>
using namespace std;


int main () {
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	printf("%d\n", s.top());
	s.pop();
	printf("%d\n", s.top());
	s.pop();
	printf("%d\n", s.top());
	s.pop();
	return 0;
}
