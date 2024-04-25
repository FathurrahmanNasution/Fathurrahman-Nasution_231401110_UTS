#include <iostream>
using namespace std;
int main() {
    int input, nilai = 0;
    double total, rata_rata= 0;

    cout << "Masukkan nilai (masukkan -1 untuk mengakhiri):\n";
    
    while (true) {
        cout << "Nilai ke-" << nilai + 1 << ": ";
        cin >> input;

        if (input == -1) {
            break;
        } else if (input < -1) {
            cout << "Error: Masukkan bilangan bulat positif.\n";
            continue;
        }
        
        total += input;
        nilai++;
    }

    if (nilai == 0) {
        cout << "Tidak ada nilai yang dimasukkan.\n";
    } else {
        rata_rata = total / nilai;
        cout << "Nilai rata-rata: " << rata_rata << endl;
    }

    return 0;
}