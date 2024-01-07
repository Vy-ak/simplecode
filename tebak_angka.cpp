#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int num,guess, percobaan = 0;

    srand(time(0));
    num = rand() % 100 + 1;
    cout << "Game tebak angka \n\n";

    do{
        cout << "Tebak angka antara 1 sampai 100 : ";
        cin >> guess;
        percobaan++;

        if (guess > num)
            cout << "Lebih rendah \n\n";

        else if (guess < num)
            cout << "Lebih tinggi \n\n";

        else
            cout << "\n Benar! anda berhasil menebak dengan " << percobaan << " Kali percobaan \n";
    } while (guess != num);
    return 0;
}