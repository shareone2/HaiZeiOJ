#include <iostream>
#include <cstring>

using namespace std;

string year[12] = {"monkey", "rooster", "dog", "pig", "rat", "ox", "tiger",
                   "rabbit", "dragon", "snake", "horse", "sheep"};
int y;
int main() {
    cin >> y;
    cout << year[y % 12] << endl;
    return 0;
}