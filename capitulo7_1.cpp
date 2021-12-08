#include <string>
#include <iostream>
using namespace std;
int main ()
{
cout <<"Selecciona 1 o 2 : ";
int choice {};
cin >> choice;
cin.ignore(32767,'\n' );
cout <<"ahora ingrese tu nombre ";
string name {};
getline(cin,name);

cout <<"Hola,  " << name <<", seleccionaste " << choice << '\n'; 
 return 0;
}