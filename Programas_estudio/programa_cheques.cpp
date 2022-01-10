#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include<conio.h>
using namespace std;
string regresar(int monto);

int main (){
int  importe, centavos,neto_pagar,entero;
string importe2;
cout<<"INGRESE EL MONTO AL QUE QUIERA TRANSFORMAR";

cin>>entero;
importe = entero;
importe2 = regresar(entero);

cout<<importe2 << "  PESOS";








}

string regresar(int monto){
int intentos;
string monto2;




switch (monto)
{
case 0: monto2+= "CERO";
break;

case 1:monto2 += "UNO";
    break;
    case 2:monto2 += "DOS";
    break;
    case 3:monto2 += "TRES";
    break;
    case 4:monto2 += "CUATRO";
    break;
    case 5:monto2 += "CINCO"; 
    break; 
    case 6:monto2 += "SEIS";
    break;
    case 7:monto2+= "SIETE";
    break;
    case 8:monto2 += "OCHO";
    break;
    case 9:monto2 += "NUEVE";
    break;
    case 10:monto2 += "DIEZ";
    break;
    case 11:monto2 += "ONCE";
    break;
    case 12:monto2 += "DOCE";
    break;
    case 13:monto2 += "TRECE";
    break;
    case 14:monto2 += "CATORCE";
    break;
    case 15 :monto2 += "QUINCE";
    break;
    
   // case is <20:

default:
    break;
}


return monto2;



}

