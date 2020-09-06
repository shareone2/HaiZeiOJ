/*************************************************************************
	> File Name: 208挑选队员.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 07:52:44 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int m, n, score[102] = {0}, flog = 0;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int tmp;
        cin >> tmp;
        score[tmp]++;
    }
    cin >> n;
    for (int i = 100; i >= 0; i--) {
        if (score[i] >= n) {
            cout << score[i] << endl;
            break;
        } 
    }
    return 0;
}
