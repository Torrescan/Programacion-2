#include <algorithm>
#include <iostream> 
#include <iterator>
using namespace std;
 int array[9]{12,15,16,17,18,19,20,21,22};
 void imprimirvalor(int valor){
switch (valor)
{
case 1:
cout<<"El valor del numero que ingresaste es :"<<array[0];
    break;
case 2:cout<<"El valor del numero que ingresaste es :"<<array[1];
    break;
    case 3:cout<<"El valor del numero que ingresaste es :"<<array[2];
    break;
    case 4:cout<<"El valor del numero que ingresaste es :"<<array[3];
    break;
    case 5:cout<<"El valor del numero que ingresaste es :"<<array[4];
    break;
    case 6:cout<<"El valor del numero que ingresaste es :"<<array[5];
    break;
    case 7:cout<<"El valor del numero que ingresaste es :"<<array[6];
    break;
    case 8:cout<<"El valor del numero que ingresaste es :"<<array[7];
    break;
    case 9:cout<<"El valor del numero que ingresaste es :"<<array[8];
    break;
default:
    break;
}



 }

int main (){
volver:
int valor;
cout<<"ingresa un numero del 1 al 9 ";cin>>valor;
if (std::cin.fail()){
std::cin.clear(); std::cin.ignore(32767, '\n');cout<<"Numero no invalido";goto volver;}
else{
 std::cin.ignore(32767, '\n');

}
imprimirvalor(valor);


}

