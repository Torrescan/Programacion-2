#include <iostream>
using namespace std;


int main(){
int selection;

do{

cout <<"Por favor seleccione una opcion : \n";
cout <<"1) Suma\n 2) Resta\n  3)Multiplicacion\n 4)Division\n";cin>> selection;
}while(selection !=1 && selection !=2 && selection !=3 && selection !=4);
cout<<"Seleccionaste la opcion #"<< selection << "\n";
return 0;
}