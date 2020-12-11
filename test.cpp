#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Nhap N:";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << i * i << endl;
        sum += i * i;
    }
    cout << sum;
    return 0;
}