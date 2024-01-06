#include <iostream>
using namespace std;

int factorial (int n){
    return(n == 1 || n == 0) ? 1 : n * factorial(n-1);
}

int main(){
    int n1,r;
    char op;

    cout << "P untuk permutasi K untuk kombinatorik : ";
    cin >> op;

    cout << "Masukkan nilai n : ";
    cin >> n1;

    cout << "Masukkan nilai r : ";
    cin >> r;

    if(r <= n1){
    switch (op)
  {
    case 'f' :
      printf("hasil dari %d dan %d menggunakan rumus pemutasi dari elemen yang berbeda adalah %d", n1, r, factorial(n1)/factorial(n1-r));
      break;
    case 'k':
      int down ;
      down = factorial(n1-r)*factorial(r);
      printf("hasil dari %d dan %d menggunakan rumus kombinatorik adalah %d ", n1, r, factorial(n1)/down);
      break;
    default :
      cout << "Error bg cuma bisa f atau k"; 
  }
}
  else {
    cout << "nilai r harus <= nilai n";
  }
    return 0;
}
