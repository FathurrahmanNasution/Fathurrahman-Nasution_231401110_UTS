#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan n (2 < n <= 10): ";
    cin >> angka;

    if (angka >= 2 && angka <= 10) {
        // Segitiga atas
        int i = 1;
        while (i <= angka) {
            int j = 1;
            while (j <= i) {
                cout << "X ";
                j++;
            }
            cout << endl;
            i++;
        }

        // Segitiga bawah
        int i2 = 1;
        while (i2 <= angka) {
            int spasi = 1;
            while (spasi <= angka) {
                cout << "  ";
                spasi++;
            }

            int j2 = 2;
            while (j2 <= i2) {
                cout << "  ";
                j2++;
            }

            int k = angka;
            while (k >= i2) {
                cout << "X ";
                k--;
            }

            cout << endl;
            i2++;
        }
    } else {
        cout << "Inputan Melewati Range" << endl;
    }

    return 0;
}