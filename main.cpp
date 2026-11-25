#include <iostream>
#include <string>
using namespace std;

// ===== DECLARE VARIABEL =====
string nama;
string kelas;
string sekolah;
int nomor = 0;
char ulang;

int main() {
    // Perulangan do-while
    do {
        nomor = nomor + 1;

        // Input
        cout << "Masukkan nama    : ";
        cin >> nama;
        cout << "Masukkan kelas   : ";
        cin >> kelas;
        cout << "Masukkan sekolah : ";
        cin >> sekolah;

        // Output
        cout << "\nData ke-" << nomor << endl;
        cout << "Nama    : " << nama << endl;
        cout << "Kelas   : " << kelas << endl;
        cout << "Sekolah : " << sekolah << endl;

        // Tanya mengulang
        cout << "\nInput lagi? (y/t) : ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y');

    cout << "Terima kasih!" << endl;
    return 0;
}
