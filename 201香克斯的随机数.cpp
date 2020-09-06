/*************************************************************************
	> File Name: 201香克斯的随机数.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 11:45:03 AM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, flog[1005];
vector <int> ve;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int base_num;
        cin >> base_num;
        if (!flog[base_num]) {
            ve.push_back(base_num);
            flog[base_num] = 1;
        }
    }
    cout << ve.size() << endl;
    sort(ve.begin(), ve.end());
    for (vector <int> :: iterator it = ve.begin(); it != ve.end(); it++) {
        if (it != ve.begin()) {
            cout << ' ';
        }
        cout << *it; 
    }
    cout << endl;
    return 0;
}
