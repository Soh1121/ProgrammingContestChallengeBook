#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <unordered_map>
#include <numeric>
#include <cstdlib>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;

const int INF = 1000000;
// 状態を表すクラスpairの場合、typedefしておくと便利
typedef pair<int, int> P;

// 入力
char maze[MAX_N][MAX_M + 1];	// 迷路を表す文字列の配列
int N, M;
int sx, sy;										// スタートの座標
int gx, gy;										// ゴールの座標

int d[MAX_N][MAX_M];					// 各点までの最短距離の配列

// 移動4方向のベクトル
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

// (sx, sy)から(gx, gy)への最短距離を求める
// たどり着けないとINF
int bfs() {
	queue<P> que;
	// すべての点をINFで初期化
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) d[i][j] = INF;
	// スタート地点をキューに入れ、その点の距離を0にする
	que.push(P(sx, sy));
	d[sx][sy] = 0;

	// キューが空になるまでループ
	while (que.size()) {
		// キューの先頭を取り出す
		P p = que.front(); que.pop();
		// 取り出してきた状態がゴールなら探索をやめる
		if (p.first == gx && p.second == gy) break;
		// 移動4方向をループ
		for (int i = 0; i < 4; i++) {
			// 移動した後の点を(nx, ny)とする
			int nx = p.first + dx[i], ny = p.second + dy[i];

			// 移動が可能化の判定とすでに訪れたことがあるかの判定（d[nx][ny] != INFであれば訪れたことがある）
			if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != "#" && d[nx][ny] != INF) {
				// 移動できるならキューに入れ、その点の距離をpからの距離+1で確定する
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy];
}

void solve () {
	int res = bfs();
	printf("%d\n", res);
}
