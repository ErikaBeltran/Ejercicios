#include <iostream>
#include <ctime>  
using namespace std;

int main(){
 int numeros[100];
 srand(time(0));
 
 for(int i = 0; i < 100; i++){
  numeros[i] = rand() % 100; 
 }
 for(int i = 0; i < 100; i++){ 
  cout << numeros[i] << endl; 
 }
 return 0;
}
