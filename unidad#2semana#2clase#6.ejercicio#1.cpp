#include <iostream>
using namespace std;

void llenarPares(int[100]);
void llenarImpares(int[100]);
void mostrarPares(int[100]);
void mostrarImpares(int[100]);

int main(){
 int numeros[100];
 llenarPares(numeros);
 llenarImpares(numeros);
 mostrarPares(numeros);
 mostrarImpares(numeros);
 return 0;
}

void llenarPares(int numeros[100]){
 for(int i = 0; i < 100; i++){
  if(i % 2 == 0){ numeros[i] = i; }
 }
}

void llenarImpares(int numeros[100]){
 for(int i = 0; i < 100; i++){
  if(i % 2 == 1){ numeros[i] = i; }
 }
}

void mostrarPares(int numeros[100]){
 cout << "NUMEROS PARES" << endl;
 for(int i = 0; i < 100; i++){
  if(i % 2 == 0){ cout << numeros[i] << endl; }
 }
}

void mostrarImpares(int numeros[100]){
 cout << "NUMEROS IMPARES" << endl;
 for(int i = 0; i < 100; i++){
  if(i % 2 == 1){ cout << numeros[i] << endl; }
 }
}
