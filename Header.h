#include <iostream>
using namespace std;

class Matrix{
    int n, m;
    long **arr;
    bool eror;
public:
    //constructor implicit
    Matrix();
    //constructor cu un parametru
    Matrix(int size);
    //constructor cu doi parametri
    Matrix(int size1, int size2);
    //destructot
    ~Matrix();
    
    //afisarea datelor
    void afiseaza();
    //adunarea
    void adunare(Matrix &fisrt, Matrix &second);
    //scaderea
    void scadere(Matrix &fisrt, Matrix &second);
    //inmultire cu un numar
    void inmultire1(int num);
    //inmultirea a doua matrice
    void inmultire2(Matrix &fisrt, Matrix &second);
};
