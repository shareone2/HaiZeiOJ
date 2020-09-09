/*************************************************************************
	> File Name: 589明明的随机数.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep  9 21:08:04 2020
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;

set<int> se;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        se.insert(num);
    }
    cout << se.size() << endl;
    for (set<int> :: iterator it = se.begin(); it != se.end(); it++) {
        cout << *it << ' '; 
    }
    cout << endl;
    return 0;
}
