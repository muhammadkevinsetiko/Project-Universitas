#include <iostream>
using namespace std;


int main () {
    int angka;
    int jumlah = 0;
    int modulo = 0;

    cout << "Masukkan angka : ";
    cin >> angka;
    cout << endl;

    while (angka > 0) {
        modulo = angka % 10;
        cout << modulo << "---";
        jumlah += modulo;
        angka = angka / 10;
    }

    cout << endl << endl;
    cout << "jumlah tiap digit = " << jumlah << endl;
    cout << "Apakah jumlah tiap digit habis dibagi 9? : ";
    if (jumlah % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}