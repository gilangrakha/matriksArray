#include <iostream>
using namespace std;

int main(){
    int mat[2][2]={{3,4},{5,2}};
    int hasil[2][2];
    int angka;

    cout << "====PERKALIAN SKALAR MATRIKS===\n" << endl;
    cout << "masukkan angka : ";
    cin >> angka;

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            hasil[i][j]=angka*mat[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
}