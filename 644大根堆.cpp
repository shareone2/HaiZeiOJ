/*************************************************************************
	> File Name: 644大根堆.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Sep 27 15:38:07 2020
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, less<int> > que;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char a;
        cin >> a;
        switch(a) {
            case '1': 
                int num;
                cin >> num;
                que.push(num);
                break; 
            case '2':
                if (que.empty()) cout << "empty" << endl;
                else cout << que.top() << endl;
                break;
            case '3':
                if (que.empty()) break;
                que.pop();
        }
    }
    return 0;
}
