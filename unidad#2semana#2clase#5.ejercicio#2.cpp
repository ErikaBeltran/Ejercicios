#include<iostream>
using namespace std;
#include<conio.h>

int mayorde(int a,int b,int c);

main( ){
 int a,b,c;
 cout<<"Ingrese tres valores enteros (a,b y c):"<<endl;
 cin>>a>>b>>c;

cout<<"El numero mayor es: "<<mayorde(a,b,c)<<endl;
 getch();
}
int mayorde(int a,int b,int c){
 if((a>b)&&(a>c)) return(a);
 if((b>a)&&(b>c)) return(b);
 if((c>a)&&(c>b)) return(c);
 if((a==b)&&(b==c)){
 cout<<"Los 3 numeros son iguales entre si"<<endl;
 return(a);
 }
}
