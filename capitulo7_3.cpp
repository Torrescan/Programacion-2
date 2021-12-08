#include <string>
#include <iostream>
using namespace std;
int main()
{
cout << "ingrese su nombre completo : ";
string name {};
getline(cin,name);

cout << "Ingrese su edad : ";
string age {};
getline(cin,age);
cout << "tu nombre es "<< name << " y tu edad es " << age << '\n';
return 0;



}