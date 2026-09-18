#include <iostream>
using namespace std;

int main() {
    char pesan[100];
    char hasil[100];

    cout << "Masukkan pesan rahasia (huruf kapital semua, misal: ALIENS): ";
    cin >> pesan;

    int panjangPesan = 0;
    while (pesan[panjangPesan] != '\0') {
        panjangPesan = panjangPesan + 1;
    }

    hasil[0] = pesan[0];

    for (int i = 1; i < panjangPesan; i++) {
        char hurufSekarang = pesan[i];
        char hurufSebelumnya = pesan[i - 1];

        int nilaiGeser = hurufSebelumnya - 'A' + 1;

        int posisiAwal = hurufSekarang - 'A';

        int posisiBaru = posisiAwal + nilaiGeser;

        if (posisiBaru >= 26) {
            posisiBaru = posisiBaru - 26;
        }
        hasil[i] = 'A' + posisiBaru;
    }

    hasil[panjangPesan] = '\0';

    cout << "Hasil Pesan Terenkripsi: " << hasil << "\n";

    return 0;
}