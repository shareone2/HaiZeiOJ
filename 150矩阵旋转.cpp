#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int matrix[n][m]; //æÿ’Û
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            cin >> matrix[i][j];
        } 
    }
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (j == n - 1) {
                cout << matrix[j][i];
            } else {
                cout << ' ' << matrix[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}