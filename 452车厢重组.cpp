/*************************************************************************
	> File Name: 452车厢重组.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 04 Aug 2020 09:33:32 AM CST
 ************************************************************************/

#include <iostream>
#include <climits>

#define MAX 10000
#define SENTINEL INT_MAX

using namespace std;

int L[MAX / 2 + 5], R[MAX / 2 + 5];

long long merge(int A[], int n, int left, int mid, int right) {
    int i, j, k;
    long long cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for (i = 0; i < n1; i++) L[i] = A[left + i];
    for (i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = SENTINEL;
    i = j = 0;
    for (k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

long long mergeSort(int A[], int n, int left, int right) {
    int mid;
    long long v1, v2, v3;
    if (left + 1 < right) {
        mid = (left + right) / 2;
        v1 = mergeSort(A, n, left, mid);
        v2 = mergeSort(A, n, mid, right);
        v3 = merge(A, n, left, mid, right);
        return v1 + v2 + v3;
    }
    return 0;
}

int main() {
    int A[MAX + 5], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << mergeSort(A, n, 0, n) << endl;
    return 0;
}
