#include <iostream>

using namespace std;

int year, month, day;

bool judge();

int main() {
    cin >> year >> month >> day;
    cout << (judge() ? "Yes" : "No") << endl;
    return 0;
}

bool judge() {
    if (day < 1) {
        return false;
    } else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31) { //大月
        return true;
    } else if (month == 2) {
        if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && day <= 29) {
            return true;
        } else if (day <= 28) {
            return true;
        }
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) { //小月
        return true;
    }
    return false;
}