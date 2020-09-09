/*************************************************************************
	> File Name: 383周末舞会.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep  9 21:19:43 2020
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int x, y, n;
queue<int> ma, wo;

int main() {
    cin >> x >> y >> n;
    for (int i = 1; i <= x; i++) {
        ma.push(i);
    }
    for (int i = 1; i <= y; i++) {
        wo.push(i);
    }
    for (; n; n--) {
        ma.push(ma.front());
        cout << ma.front() << ' ';
        ma.pop();
        wo.push(wo.front());
        cout << wo.front() << endl;
        wo.pop();
    }
    return 0;
}
