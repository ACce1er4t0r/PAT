#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, k = 0;
    int a[100000];
    cin >> n;
    int j;
    for(int i = 2; i <= n; i++) {
        for(j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                break;
            }
        }
        if(j > sqrt(i)) {
            a[k++] = i;
        }
    }
    int prime = 0;
    for(int i = 0; i < k; i++) {
        if(a[i + 1] - a[i] == 2) {
            prime++;
        }
    }
    cout << prime;
    return 0;
}
