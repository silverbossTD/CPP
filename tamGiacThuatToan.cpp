#include <iostream>
#include <math.h>
using namespace std;

float chuVi(int a, int b, int c) {
    return a + b + c;
}

float dienTich(int a, int b, int c) {
    float p = chuVi(a, b, c) / 2.0;
    return sqrt(p*(p - a)*(p - b)*(p - c));
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (a >= b + c || b >= a + c || c >= a + b) {
        cout << "Ba canh vua nhap khong phai la canh cua tam giac";
    }else {
        cout << "Chu vi tam giac ABC: " << chuVi(a, b, c) << endl;
        cout << "Dien tich tam giac ABC: "  << dienTich(a, b, c) << endl;
    }
    return 0;
}