
#include <iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
main(){
 int cantidad=0;//Almacena la cantidad de entradas compradas
//Almacena la opcion de menu seleccionada por el usuario
 char opcion=' ';
 float precio=0, total=0;
 cout<<"\n\t***************************************"<<endl;
 cout<<"\t* BIENVENIDO AL ESTADIO CUSCATLAN *"<<endl;
 cout<<"\t*****************************************"<<endl;
 cout<<"\t* Sectores del estadio *"<<endl;
 cout<<"\t* A- Sol general *"<<endl;
 cout<<"\t* B- Sol preferente *"<<endl;
 cout<<"\t* C- Sombra *"<<endl;
 cout<<"\t* D- Tribuna *"<<endl;
 cout<<"\t* E- Platea *"<<endl;
 cout<<"\t******************************************"<<endl;
 cout<<"\n\t Selecciona la letra del sector del estadio : ";
 opcion=getche(); //Capturamos la seleccion del usuario
 cout<<"\n\t Ingresa la cantidad de entradas requeridas: ";
 cin>>cantidad;
 if(cantidad<1){ //Cantidad de entradas no puede ser menor de 1
cout<<"\n\t\a ERROR: Cantidad de entradas debe ser mayor que 1"<<endl;
 system("PAUSE");
 return 0;//si pone menos de 1 el programa "se cierra"
 }
 system("cls");
 switch(opcion){
 case 'A': case 'a':
 cout<<"\n\t Sector seleccionado: Sol general"<<endl;
 precio=3;
 break;
 case 'B': case 'b':
cout<<"\n\t Sector seleccionado: Sol preferente"<<endl;
 precio=5;
 break;
 case 'C': case 'c':
 cout<<"\n\t Sector seleccionado: Sombra"<<endl;
 precio=8;
 break;
 case 'D': case 'd':
 cout<<"\n\t Sector seleccionado: Tribuna"<<endl;
 precio=15;
 break;
 case'E': case 'e':
 cout<<"\n\t Sector seleccionado: Platea"<<endl;
 precio=20;
 break;
 default:
cout<<"\n\t\a ERROR: El sector seleccionado no existe"<<endl;
 system("PAUSE");
 return 0;//Cerramos el programa
 }
 total=precio*cantidad;//Calculando total a pagar
 cout<<"\t Precio unitario: $"<<precio<<endl;
 cout<<"\t Cantidad de entradas:"<<cantidad<<endl;
 cout<<"\t TOTAL A PAGAR: $"<<total<<endl;
 cout<<"\n\n\t GRACIAS POR VISITARNOS!"<<endl;
 system("PAUSE");
}
