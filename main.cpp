#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    int op;

    while(1){
        cout << "-----------------------------------\n";
        cout << "|0. Iesire                        |\n";
        cout << "|1. Constructor implicit          |\n";
        cout << "|2. Constructor cu un parametru   |\n";
        cout << "|3. Constructor cu doi parametri  |\n";
        cout << "|4. Adunarea a doua matrici       |\n";
        cout << "|5. Scaderea a doua matrici       |\n";
        cout << "|6. Inmultirea cu un numar        |\n";
        cout << "|7. Inmultire a doua matrici      |\n";
        cout << "-----------------------------------\n-->";
        cin >> op;

        switch(op){
            case 0:{
                cout << "Sfarsit de program\n\n";
                exit (0);
            }
                break;
            case 1:{
                Matrix temp;
            }
                break;
            case 2:{
                int size;
                cout << "Introdu marimea matricei\n->";
                cin >> size;
                cout << "Introdu datele in matrice\n";
                Matrix temp(size);
                temp.afiseaza();
            }
                break;
            case 3:{
                int size1, size2;
                cout << "Introdu numarul de randuri - ";
                cin >> size1;
                cout << "Introdu numarul de coloane - ";
                cin >> size2;
                Matrix temp(size1, size2);
                temp.afiseaza();
            }
                break;
            case 4:{
                int s1, s2, s3, s4;
                cout << "Introdu numarul de randuri pentru prima matrice - ";
                cin >> s1;
                cout << "Introdu numarul de coloane pentru prima matrice - ";
                cin >> s2;
                Matrix a(s1, s2);
                cout << "Introdu numarul de randuri pentru a doua matrice - ";
                cin >> s3;
                cout << "Introdu numarul de coloane pentru a doua matrice - ";
                cin >> s4;
                Matrix b(s3, s4), c;
                c.adunare(a, b);
            }
                break;
            case 5:{
                int s1, s2, s3, s4;
                cout << "Introdu numarul de randuri pentru prima matrice - ";
                cin >> s1;
                cout << "Introdu numarul de coloane pentru prima matrice - ";
                cin >> s2;
                Matrix a(s1, s2);
                cout << "Introdu numarul de randuri pentru a doua matrice - ";
                cin >> s3;
                cout << "Introdu numarul de coloane pentru a doua matrice - ";
                cin >> s4;
                Matrix b(s3, s4), c;
                c.scadere(a, b);
            }
                break;
            case 6:{
                int size1, size2, num;
                cout << "Introdu numarul de randuri - ";
                cin >> size1;
                cout << "Introdu numarul de coloane - ";
                cin >> size2;
                Matrix temp(size1, size2);
                cout << "Introduceti numarul cu care se va inmulti matricea - ";
                cin >> num;
                temp.inmultire1(num);
                temp.afiseaza();
            }
                break;
            case 7:{
                int s1, s2, s3, s4;
                cout << "Introdu numarul de randuri pentru prima matrice - ";
                cin >> s1;
                cout << "Introdu numarul de coloane pentru prima matrice - ";
                cin >> s2;
                Matrix a(s1, s2);
                cout << "Introdu numarul de randuri pentru a doua matrice - ";
                cin >> s3;
                cout << "Introdu numarul de coloane pentru a doua matrice - ";
                cin >> s4;
                Matrix b(s3, s4), c;
                c.inmultire2(a, b);
            }
                break;
            default:{
                cout << "Nu exista asa optiune!!\n\n";
            }
                break;
        }
    }
}
