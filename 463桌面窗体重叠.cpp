/*************************************************************************
	> File Name: 463桌面窗体重叠.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Thu 13 Aug 2020 08:29:37 AM CST
 ************************************************************************/

#include <stdio.h>

int max(int a, int b) {
	return (a > b) ? a : b;
}

int min(int a, int b) {
	return (a < b) ? a : b;
}

struct win {
	int left, right, top, bottom;
};

win winA, winB, t; //窗体a, 窗体b, 临时变量。
 
int main() {
	scanf("%d%d%d%d", &winA.left, &winA.right, &winA.top, &winA.bottom); //输入
	scanf("%d%d%d%d", &winB.left, &winB.right, &winB.top, &winB.bottom);
    t.left = max(winA.left, winB.left);
	t.right = min(winA.right, winB.right);
	t.top = max(winA.top, winB.top);
	t.bottom = min(winA.bottom, winB.bottom);
	int s = (t.right - t.left) * (t.bottom - t.top);
	if((t.right <= t.left) || t.bottom <= t.top) s = 0;
	printf("%d\n", s);
	return 0;
}

