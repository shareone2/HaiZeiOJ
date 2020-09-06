/*************************************************************************
	> File Name: 248逆序对个数.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 09:33:39 PM CST
 ************************************************************************/

#include <iostream>
#include <climits>
#define max_n 1000000

using namespace std;

long long merge(int A[], int n, int left, int mid, int right) {
    int L[max_n / 2 + 2], R[max_n / 2 + 2];
    int i, j, k;
    long long cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for (i = 0; i < n1; i++) L[i] = A[left + i];
    for (i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = INT_MAX;
    i = j = 0;
    for (k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += (n1 - i); 
        }
    }
    return cnt;
}

long long mergeSort(int A[], int n, int left, int right) {
    if (left + 1 >= right) return 0;
    int mid = (left + right) / 2;
    long long v1 = mergeSort(A, n, left, mid);
    long long v2 = mergeSort(A, n, mid, right);
    long long v3 = merge(A, n, left, mid, right);
    return v1 + v2 + v3;
}

int main() {
    int n;
    while (cin >> n && n) {
        int A[max_n + 2];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        cout << mergeSort(A, n, 0, n) << endl;
    }
    return 0;
}
