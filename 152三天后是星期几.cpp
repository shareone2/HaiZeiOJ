#include <iostream>

using namespace std;

string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int n;

int main() {
    cin >> n;
    n += 3;
    cout << day[n % 7] << endl;
    return 0;
}