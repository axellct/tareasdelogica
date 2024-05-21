#include <iostream>
#include "variables.h"
using namespace std;

/*
C - CREATE
R - READ
U - UPDATE
D - DELETE
*/

//CREATE
void addReg();
void addReg(){
cout << "Datos del estudiante";
cout << "CIF: ";
scanf( "%[^\n]", people[pos].cif);
cout << "NOMBRES: ";
scanf(" %[^\n]", people[pos].name);
cout << "APELLIDOS: ";
scanf(" %[^\n]", people[pos].lastName);
cout << "AÑO: ";
scanf("%d", & people[pos].year);
pos++;
}
void showReg();
void showReg(){
    for(int i = 0; i < pos; i++){
    printf("Nombre: %s %s \nAño: %d"
    , people[i].name, people[i].lastName
    , people[i].year);
    cout << "*************************\n";
    }
}