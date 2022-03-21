#include <iostream>
using namespace std;

int main(){
    float matriks[2][2], invers[2][2], hasil[2][2];
    float det;

    cout << "====PROGRAM MENGHITUNG MATRIKS INVERS===\n" << endl;

    //input matriks
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << "Matriks baris ke " << i+1 << " kolom ke " << j+1 << ":";
            cin >> matriks[i][j];

            //pembalikan matriks invers
            invers[i][j];
            invers[0][0]=matriks[1][1];
            invers[1][1]=matriks[0][0];
            invers[0][1]=-1*matriks[0][1];
            invers[1][0]=-1*matriks[1][0];
        }
    }

    //rumus determinan invers
    det=(matriks[0][0]*matriks[1][1])-(matriks[0][1]*matriks[1][0]);

    //menampilkan matriks
    cout << "\nMatriksnya adalah :\n" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << matriks[i][j] << "\t";
            if(j==1)
            cout << endl;
        }
    }

    //menghitung invers
    cout << "\nMatriks Inversnya adalah :\n" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            hasil[i][j]=(1/det)*invers[i][j];
        }
    }

    //menampilkan hasil invers
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << hasil[i][j] << "\t";
            if(j==1)
            cout << endl;
        }
    }

    return 0;
}