/*************************************************************************
	> File Name: 566上网统计.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 12:15:15 AM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <deque>

using namespace std;

int n, m, cnt = 1;
map <string, int> ma;
deque <string> vec[1005];
string name[1005];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        if (!ma[s1]) ma[s1] = cnt++;
        int x = ma[s1];
        name[x] = s1;
        vec[x].push_back(s2);
    }
    for (int i = 1; i <= n; i++) {
        cout << name[i];
        while (!vec[i].empty()) {
            cout << ' ' << vec[i][0];
            vec[i].pop_front();
        }
        cout << endl;
    }
    return 0;
}
