#include <iostream>
#include <math.h>
using namespace std;

void nhapMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuatMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void xoaSo(int a[], int b, int n) {
	for(int i = b; i < n; i++)
		a[i] = a[i+1];
	n--;
}

void xoaSNT(int a[], int n) {
	for(int i = 0; i < n; i++) {
		if(IsPrime(a[i])) {
			xoaSo(a, i, n);
			i--;
		}
	}
}

int main() {
	int a[100];
	int n;
	cin >> n;
	nhapMang(a, n);
	cout << "----- Mang -----" << endl;
	xuatMang(a, n);
	cout << "----- Mang sau khi xoa SNT ----" << endl;
	xoaSNT(a, n);
	xuatMang(a, n);
	return 0;
}
