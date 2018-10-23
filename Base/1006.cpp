#include <iostream>
using namespace std;
int main() {
    int n, i, j, l, k = 1;

    cin >> n;

    i = n / 100;
    l = n % 10;
    n = n % 100;
    j = n / 10;

    while (k <= i) {
        cout << 'B';
        k++;
    }
    k = 1;

    while (k <= j) {
        cout << 'S';
        k++;
    }
    k = 1;

    while (k <= l) {
        cout << k;
        k++;
    }
    
    return 0;
}
