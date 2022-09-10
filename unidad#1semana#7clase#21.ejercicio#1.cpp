#include <iostream>
using namespace std;

int main(){
 int numeros[100];
 
 for(int i = 0; i < 100; i++){
  if(i % 3 == 0){ numeros[i] = i; }
 }
 for(int i = 0; i < 100; i++){ 
  if(i % 3 == 0){ cout << numeros[i] << endl; }
 }
 return 0;
}
