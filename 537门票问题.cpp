/*************************************************************************
	> File Name: 537门票问题.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 17 Aug 2020 11:20:27 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int l, c, ans, yuan, fu, flog, sum;
char arr[30], base[30];

bool judge_yuan(char x) {
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') return true;
    return false;
}

void dfs(int x, int cnt) {
    if (cnt == l) {
        if (!(yuan >= 1 && fu >= 2 && sum < 25000)) return ;
        sum++;
        cout << base << endl;
        return ;
    }
    for (int i = x + 1; i <= c; i++) {
        if (sum > 25000) return ;
        (judge_yuan(arr[i]) ? yuan : fu) += 1;
        base[flog++] = arr[i];
        dfs(i, cnt + 1);
        base[--flog] = '\0';
        (judge_yuan(arr[i]) ? yuan : fu) -= 1;
    }
    return ;
}

int main() {
    cin >> l >> c;
    for (int i = 1; i <= c; i++) {
        cin >> arr[i];
    }
    sort(arr + 1, arr + c + 1);
    dfs(0, 0);
    return 0;
}
