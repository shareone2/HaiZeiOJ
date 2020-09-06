/*************************************************************************
> File Name: 271滑动窗口.cpp
> Author: LiShiJie
> Mail: 2659002865@qq.com
> Created Time: Tue 11 Aug 2020 11:20:45 AM CST
************************************************************************/

#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int n, k, arr[300005], cnt = 0;
deque <int> de1, de2; //升序，降序单调队列
vector <int> vec1, vec2; //答案处理容器

void keep(int x) { //维护双端队列
    if (de1[0] < cnt) de1.pop_front();
    if (de2[0] < cnt) de2.pop_front();
    while (!de1.empty() && arr[*(de1.end() - 1)] > arr[x]) {
        de1.pop_back();
    }
    de1.push_back(x);
    while (!de2.empty() && arr[*(de2.end() - 1)] < arr[x]) {
        de2.pop_back();
    }
    de2.push_back(x);
    return ;
}

void ans_dispose() {
    vec1.push_back(arr[de1[0]]);
    vec2.push_back(arr[de2[0]]);
    cnt++;
    return ;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) { //输入值
        cin >> arr[i];
    }
    for (int i = 0; i <= k - 2; i++) { //初始化单调队列
        keep(i);
    }
    for (int i = k - 1; i < n; i++) { //窗口移动
        keep(i);
        ans_dispose();
    }
    for (vector <int> :: iterator it = vec1.begin(); it != vec1.end(); it++) {
        if (it != vec1.begin()) cout << ' ';
        cout << *it;
    }
    cout << endl;
    for (vector <int> :: iterator it = vec2.begin(); it != vec2.end(); it++) {
        if (it != vec2.begin()) cout << ' ';
        cout << *it;
    }
    cout << endl;
    return 0;
}
