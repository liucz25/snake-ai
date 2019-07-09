#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>

using namespace std;
////#define _CRT_SECURE_NO_DEPRECATE

int r, c;
char mp[45][45];
int visited[45][45];
typedef struct Node {
	int x;
	int y;
	int step;
}node;

int dir[4][2] = { -1,0,1,0,0,-1,0,1 };
int bfs(int u, int v) {
	node tmp,nxt;
	tmp.x = u, tmp.y = v;
	tmp.step = 1;
	queue<node> q;
	q.push(tmp);
	while (!q.empty()) {
		tmp = q.front();
		q.pop();
		///cout << "tmp.x:" << tmp.x << "    tmp.y:" << tmp.y << "    tmp.step:" << tmp.step << endl;

		for (int i = 0; i < 4; i++) {
			nxt.x = tmp.x + dir[i][0];
			nxt.y = tmp.y + dir[i][1];
			nxt.step = tmp.step + 1;
			if (nxt.x < 0 || nxt.y < 0 ||nxt.x >r ||nxt.y > c||(mp[nxt.x][nxt.y]!='.')||visited[nxt.x][nxt.y])
				continue;	
			if (nxt.x == r - 1 && nxt.y == c - 1)return nxt.step;
			visited[nxt.x][nxt.y] = 1;
			q.push(nxt);			
			
		}	
		cout << "nxt.x" << nxt.x << "nxt.y" << nxt.y << "nxt.step" << nxt.step << endl;
	}
}

int main()
{
	cout << "请输入R，C，迷宫大小：";
	//cin>>r>>c;
	r = 5;
	c = 7;
	cout <<endl<< "r:"<<r<<"\n"<<"c:"<<c<< endl;
	strcpy_s(mp[0], "..#####");
	strcpy_s(mp[1], "#.#...#");
	strcpy_s(mp[2], "#.....#");
	strcpy_s(mp[3], "#.#.#.#");
	strcpy_s(mp[4], "#...#..");

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << mp[i][j];
		}
		cout << endl;
	}
	int ans = bfs(0, 0);
	cout << ans;
	return 0;
}
