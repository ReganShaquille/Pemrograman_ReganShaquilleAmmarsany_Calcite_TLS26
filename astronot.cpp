#include <iostream>
using namespace std;

int main() {
    int N, K;
    
    cout << "Masukkan jumlah astronot: ";
    cin >> N;
    cout << "Masukkan nilai K awal: ";
    cin >> K;

    int astronot[100];
    for (int i = 0; i < N; i++) {
        astronot[i] = 1; 
    }

    int sisaAstronot = N;
    int indeksSekarang = 0;

    cout << "hasil:\n";

    while (sisaAstronot > 1) {
        int hitungan = 0;

        while (hitungan < K) {
            if (astronot[indeksSekarang] == 1) {
                hitungan = hitungan + 1;
            }

            if (hitungan == K) {
                break;
            }

            indeksSekarang = indeksSekarang + 1;
            if (indeksSekarang >= N) {
                indeksSekarang = 0;
            }
        }

        astronot[indeksSekarang] = 0;
        int nomorAstronot = indeksSekarang + 1;
        sisaAstronot = sisaAstronot - 1;

        cout << "Astronot nomor " << nomorAstronot << " tereliminasi. (K lama: " << K;

        if (nomorAstronot % 2 == 0) {
            K = K + 2; 
        } else {
            K = K - 1; 
        }
        if (K < 2) {
            K = 2; 
        }

        cout << " -> K baru: " << K << ")\n";
        if (sisaAstronot > 1) {
            while (astronot[indeksSekarang] == 0) {
                indeksSekarang = indeksSekarang + 1;
                if (indeksSekarang >= N) {
                    indeksSekarang = 0;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (astronot[i] == 1) {
            cout << "\nAstronot terakhir yang bertahan adalah Nomor: " << (i + 1) << "\n";
        }
    }

    return 0;
}