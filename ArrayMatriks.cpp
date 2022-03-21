#include <iostream>
using namespace std;

int main(){
    int mat1[2][3]={{1,2,5},{3,5,4}};
    int mat2[2][3]={{2,2,3},{3,2,3}};
    int hasil[2][3];

    cout << "====PENJUMLAHAN MATRIKS===\n" << endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            hasil[i][j]=mat1[i][j]+mat2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "====PENGURANGAN MATRIKS===\n" << endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            hasil[i][j]=mat1[i][j]-mat2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
}