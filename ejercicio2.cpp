/*Leer 5 numeros y mostrarlos*/
#include <iostream>
using namespace std;
#define MAX 5
int numeros [MAX];
int fila;

void agregar(int num);
void mostrar();

main()
{
    int cant;
    int num;
    cout << "Dime cuantos numeros deseas ingresar: ";
    cin >> cant;
    for(int i = 0; i < cant; i++){
        cout << "Dime un numero: ";
        cin >> num;
        agregar(num);
    }
}
void agregar(int num){
    if(fila >= MAX){
        cout << "No se puede agregar mas numeros" << endl;
    }else{
        numero[fila] = num;
        fila++;
    }
}
void mostrar(){
    if(fila == 0){
        cout << "No hay elementos" << endl;
    }else{
        for(int i = 0; i < fila; i++){
            cout << numeros[i] << endl;
        }
    }
}