#include <iostream>
using namespace std;

int main() {
    int jumlahTeman;
    double diskon;

    cout << "Program Split Bills Kagura" << endl;
    
    // jumlah teman
    cout << "Masukkan jumlah teman Kagura (2 - 99999): ";
    cin >> jumlahTeman;
    if (jumlahTeman <= 1 || jumlahTeman > 99999) {
        cout << "Jumlah teman tidak memenuhi ketentuan batasan!" << endl;
        return 1; // Menghentikan program karena input salah
    }

    // 2. Input Persentase Diskon (Validasi batasan: harus antara 1.01 sampai 49.99)
    cout << "Masukkan persentase diskon n% (1 < n < 50): ";
    cin >> diskon;
    if (diskon <= 1 || diskon >= 50) {
        cout << "Persentase diskon tidak memenuhi ketentuan batasan!" << endl;
        return 1;
    }

    int counter = 1;
    // Perulangan while untuk memproses tagihan masing-masing teman berturut-turut
    while (counter <= jumlahTeman) {
        double tagihanAsli;
        cout << "\nMasukkan total tagihan asli teman ke-" << counter << " (minimal 1000): Rp";
        cin >> tagihanAsli;

        // Validasi batasan tagihan per orang
        if (tagihanAsli < 1000) {
            cout << "Tagihan tidak valid! Minimal harus Rp1000. Silakan ulangi input." << endl;
            continue; // Kembali ke awal loop ke-counter ini tanpa menaikkan angka counter
        }

        // Menghitung nominal diskon dan tagihan bersih setelah dipotong diskon
        double nominalDiskon = tagihanAsli * (diskon / 100.0);
        double tagihanAkhir = tagihanAsli - nominalDiskon;

        // Tampilkan hasil akhir hitungan untuk teman tersebut
        cout << "-> Potongan Diskon (" << diskon << "%): Rp" << nominalDiskon << endl;
        cout << "-> Tagihan yang harus dibayar teman ke-" << counter << ": Rp" << tagihanAkhir << endl;

        counter++; // Naikkan counter ke teman berikutnya
    }

    cout << "\n=========================================" << endl;
    cout << "Semua tagihan teman Kagura berhasil dihitung!" << endl;
    
    return 0;
}