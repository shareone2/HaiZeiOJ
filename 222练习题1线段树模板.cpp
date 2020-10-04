/*************************************************************************
*File Name: 222练习题1线段树模板.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Sat Oct  3 18:55:50 2020
 ************************************************************************/

#include <iostream>
#include <cmath>
#define max_n 10000
using namespace std;

char a;
int b, c, n, m, num[max_n * 4 + 5], flog[max_n + 5];


//将每个点放到对应的位置
void is_val(int k, int l, int r) { //k:插入的位置 lr:当前的范围
    if (l + 1 == r) { //到叶子了
        num[k] = flog[l]; //对应的叶子更新
        flog[l] = k; //保存叶子位置
        return ;
    }
    is_val(k * 2 + 1, l, (l + r) / 2); 
    is_val(k * 2 + 2, (l + r) / 2, r);
    num[k] = max(num[k * 2 + 1], num[k * 2 + 2]); //区间更新
    return ;
}

//初始化
void init() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> flog[i]; //输入每个点
    } 
    is_val(0, 0, n); //将每个点加载到对应的叶子上
    return ;
}

//单点修改
void updated(int k, int x) {
    num[k] = x;
    while (k > 0) {
        k = (k - 1) / 2;
        num[k] = max(num[k * 2 + 1], num[k * 2 + 2]);
    }
    return ;
}

//查询区间
int query(int l1, int r1, int k, int l2, int r2) { //l1, r1:查询区间.k:查询节点.l2, r2:当前区间.
    if (l1 > r1) return INT32_MIN; //题目要求
    if (l1 >= r2 || r1 <= l2) return INT32_MIN; //当前区间不在查询区间内
    if (l2 >= l1 && r2 <= r1)  return num[k]; //当前区间在查询区间范围内
    int v1 = query(l1, r1, k * 2 + 1, l2, (l2 + r2) / 2);
    int v2 = query(l1, r1, k * 2 + 2, (l2 + r2) / 2, r2);
    return max(v1, v2);
}

//对m组数据进行处理
void handle() {
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> c;
        switch(a) {
            case '1':
                updated(flog[b - 1], c); //b点应是第几号叶子
                break;
            case '2':
                cout << query(b - 1, c, 0, 0, n) << endl; //当前区间为左闭右开
                break;
        }
    }
    return ;
}

int main() {
    init();
    handle();
    return 0;
}
