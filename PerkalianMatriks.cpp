#include <iostream>
using namespace std;

int main(){
    int mat1[2][2]={{3,4},{5,2}};
    int mat2[2][2]={{4,2},{3,7}};
    int jml, hasil[2][2];

    cout << "===PERKALIAN MATRIKS===\n" << endl;

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<2; k++){
                jml=jml+mat1[i][k]*mat2[k][j];
            }
            hasil[i][j]=jml;
            jml=0;
        }
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
}