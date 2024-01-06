#include <iostream>
using namespace std;

int main(){
    // angka 1 bisa di ubah sendiri buat nandain kapal
    bool ship[4][4] = {
        {0,0,1,0},
        {0,0,0,0},
        {1,0,0,1},
        {1,0,0,0},
    };

    int hits = 0;
    int turn = 0;

    while(hits < 4){
        int row, colum;

        cout << "masukkan koordinat \n";

        cout << "pilih kolom antara 0 dan 3 :";
        cin >> colum;

        cout << "pilih baris antara 0 dan 3 :";
        cin >> row;

        if(ship[row][colum]){
            ship[row][colum] = 0;

            hits++;

            cout << "kena! kapal tersisa = " << (4 - hits) << "lagi \n\n";
        }

        else{
            cout << "Miss!";
        }
    turn++;
    }
    cout << "Selamat! anda berhasil menumbangkan semua kapal lawan! \n";
    cout << "Anda menang dengan " << turn << "giliran";
}

//notes
//angka 1 di bool ship bisa di ubah kemana aja buat nandain lokasi kapal
// angka 4 di kodingan bisa di ganti sesuai jumlah kapal yang ada
// array bisa di ganti juga buat nandain besar dari ruang lingkup