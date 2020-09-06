/*************************************************************************
	> File Name: 151双手石头剪刀布.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 10:16:38 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int judge(char a, char b) {
    if (a == 'O' && b == 'Y' || a == 'H' && b == 'O' || a == 'Y' && b == 'H') return 1; //a赢b
    if (a == b) return 2; //平局
    return 3; //a输b
}

int main() {
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    int cmp = judge(a, c); //小明左手与李华左手比较
    int flog; //1小明胜, 2平局, 3小明输
    if (cmp == 1) {
        cmp = judge(a, d); //小明左手与李华右手比较
        if (cmp == 1 || cmp == 2) flog = 1;
        else if (cmp == 3) {
            cmp = judge(b, d);  //小明右手与李华右手比较
            if (cmp == 1) flog = 1;
            else if (cmp == 2 || cmp == 3) flog = 3;
        }
    } else if (cmp == 2) {
        cmp = judge(b, d); //小明右手和李华右手比较
        if (cmp == 1) flog == 1;
        else if (cmp == 2) flog = 2;
        else if (cmp == 3) flog = 3;
    } else if (cmp == 3) {
        cmp = judge(b, c); //小明右手和李华左手比较
        if (cmp == 3 || cmp == 2) flog = 3;
        else if (cmp == 1) {
            cmp = judge(b, d); //小明右手和李华右手比较
            if (cmp == 1 || cmp == 2) flog = 1;
            else if (cmp == 3) flog = 3;
        }
    }
    if (flog == 1) cout << "MING";
    else if (flog == 2) cout << "TIE";
    else if (flog == 3) cout << "LIHUA";
    cout << endl;
    return 0;
}
