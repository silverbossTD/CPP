#include <iostream>
using namespace std;

void hoanVi(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    cout << "Sau khi hoan vi" << endl;
    hoanVi(a, b);
    return 0;
}