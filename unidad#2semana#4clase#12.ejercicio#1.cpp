#include <iostream> 
using namespace std; 

 int main (){ 
int arreglo[100];
for(int i=1; i<=100;i++ ) { 
 arreglo [i-1] =i; 
}
for(int i=99; i>=0; i -- ){
cout << arreglo[i] << endl; 
}
return 0;
}
