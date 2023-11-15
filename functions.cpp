#include <iostream>
#include "Header.h"
using namespace std;

//constructor implicit
Matrix::Matrix(){
    cout << "A fost apelat constructorul implicit\n";
    arr = nullptr;
}

//constructor cu un parametru
Matrix::Matrix(int size){
    n = m = size;
    arr = new long *[n];
    
    for(int i = 0;i < n;i++){
        arr[i] = new long[m];
        for(int j = 0;j < m;j++){
            cout << "Matrix["<<i+1<<"]["<<j+1<<"] - ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
}

//constructor cu doi parametri
Matrix::Matrix(int size1, int size2){
    n = size1;
    m = size2;
    arr = new long *[n];
    for(int i = 0;i < n;i++){
        arr[i] = new long[m];
        for(int j = 0;j < m;j++){
            cout << "Matrix["<<i+1<<"]["<<j+1<<"] - ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
}

//destructor
Matrix::~Matrix(){
    if(arr != nullptr){
        for(int i = 0;i < n;i++){
            delete[] arr[i];
        }
        delete[] arr;
    }
}

//afisarea datelor
void Matrix::afiseaza(){
    cout << endl << "-";
    for(int l = 0;l < m;l++){
        cout << "----";
    }
    
    for(int i = 0;i < n;i++){
        cout << "\n| ";
        for(int j = 0;j < m;j++){
            cout << arr[i][j] << " | ";
        }
        cout << endl << "-";
        for(int l = 0;l < m;l++){
            cout << "----";
        }
    }
    cout << endl << endl;
}

//adunarea
void Matrix::adunare(Matrix &fisrt, Matrix &second){
    if((fisrt.n == second.n)&&(fisrt.m == second.m)){
        eror = false;
    }else{
        eror = true;
    }
    
    if(eror){
        cout << "Eroare de dimensiune !!\n";
        return;
    }
    
    n = fisrt.n;
    m = fisrt.m;
    arr = new long *[n];
    for(int i = 0;i < n;i++){
        arr[i] = new long[m];
        for(int j = 0;j < m;j++){
            arr[i][j] = fisrt.arr[i][j] + second.arr[i][j];
        }
    }
    
    afiseaza();
}

//scaderea
void Matrix::scadere(Matrix &fisrt, Matrix &second){
    if((fisrt.n == second.n)&&(fisrt.m == second.m)){
        eror = false;
    }else{
        eror = true;
    }
    
    if(eror){
        cout << "Eroare de dimensiune !!\n";
        return;
    }
    
    n = fisrt.n;
    m = fisrt.m;
    arr = new long *[n];
    for(int i = 0;i < n;i++){
        arr[i] = new long[m];
        for(int j = 0;j < m;j++){
            arr[i][j] = fisrt.arr[i][j] - second.arr[i][j];
        }
    }
    
    afiseaza();
}

//inmultire cu un numar
void Matrix::inmultire1(int num){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            arr[i][j] *= num;
        }
    }
}

//inmultirea a doua matrice
void Matrix::inmultire2(Matrix &fisrt, Matrix &second){
    if((fisrt.n == second.n)&&(fisrt.m == second.m)){
        eror = false;
    }else{
        eror = true;
    }
    
    if(eror){
        cout << "Eroare de dimensiune !!\n";
        return;
    }
    
    n = fisrt.n;
    m = fisrt.m;
    arr = new long *[n];
    for(int i = 0;i < n;i++){
        arr[i] = new long[m];
        for(int j = 0;j < m;j++){
            arr[i][j] = fisrt.arr[i][j] * second.arr[i][j];
        }
    }
    
    afiseaza();
}
