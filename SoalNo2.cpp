#include <iostream>
using namespace std;

// Subprogram dengan pointer
void hitung(int *x, int y, int *z) {
    // Inisialisasi nilai awal sesuai spesifikasi
    *x = 0;
    *z = 1;

    for (int n = 1; n <= y; n++) {
        *x += n * n;         // Σ(n^2)
        *z *= (2 * n - 1);   // Π(2n - 1)
    }
}

int main() {
    int y;
    int x;   // hasil jumlah kuadrat
    int z;   // hasil perkalian ganjil (akan overflow jika y besar)

    cout << "Masukkan nilai y: ";
    cin >> y;

    hitung(&x, y, &z);

    cout << "Nilai akhir *x = " << x << endl;
    cout << "Nilai akhir *z = " << z << endl;

    return 0;
}
