#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Student{
    string name, gender;
    int year, month;
};

Student student[100];
int n;

bool cmp(Student x, Student y) {
    if (x.year == y.year) {
        return x.month > y.month;
    }
    return x.year > y.year;
}

int main() {
    cin >> n;
    for (int i = 0; i < n ; i++) {
        cin >> student[i].name >> student[i].gender >> student[i].year >> student[i].month;
    }
    sort(student, student + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << student[i].name << ' ' << student[i].gender << ' ' << student[i].year << ' ' << student[i].month << endl;
    }
    return 0;
}