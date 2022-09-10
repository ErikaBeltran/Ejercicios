#include <iostream>
 
using namespace std;
 
int main()
{
    int sz, pos = 0;
 
    cout << "\nTamanio del arreglo: ";
    cin >> sz;
 
    int a[sz];
 
    cout << "\nDatos del arreglo:\n";
    for( int i = 0; i < sz; i++ ) {
        cout << "(" << i + 1 << "/" << sz << "): ";
        cin >> a[i];
        if( a[i] > 0 ) pos++;
    }
 
    cout << "\nEl arreglo tiene " << pos << " numeros positivos" << endl;
 
    return 0;
}
