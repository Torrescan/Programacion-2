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


int main (){
int  importe, centavos,neto_pagar,entero,residu;
int u_millon,c_millar,d_millar,u_millar,centena,decena,unidad;
string importe3;
cout<<"INGRESE EL MONTO AL QUE QUIERA TRANSFORMAR\n";
cin>>entero;

   

importe3 = " ";
c_millar=(entero/100000);
d_millar=(entero/10000);
u_millar = (entero/1000);
centena= (entero/100);
decena = (entero/10); 
unidad= (entero%10);

switch (c_millar)
{
case 1:
residu = (entero%100000);
if (residu == 0)
{
    importe3 += "CIEN MIL ";
}
else
{
    importe3 += "CIENTO Y  ";
}

    break;
    case 2:importe3 += "DOCIENTOS  ";
    residu = (entero%100000);
    break;
    case 3:importe3 += "TRESIENTOS  ";
    residu = (entero%100000);
    break;
    case 4:importe3 += "CUATROCIENTOS ";
    residu = (entero%100000);
    break;
    case 5:importe3 += "QUINIENTOS  ";
    residu = (entero%100000);
    break;
    case 6:importe3 += "SEISIENTOS  ";
    residu = (entero%100000);
    break;
    case 7:importe3 += "SETECIENTOS  ";
    residu = (entero%100000);
    break;
    case 8:importe3 += "OCHOCIENTOS  ";
    residu = (entero%100000);
    break;
    case 9:importe3 += "NOVECIENTOS  ";
    residu = (entero%100000);
    break;

default:
    break;
}
if(residu !=0){
d_millar = (residu/10000);
u_millar =(residu%10000);
}


switch (d_millar)
{
case 1:
 residu = (entero%10000);
if(residu==0){
importe3 += "DIEZ MIL ";
switch(u_millar)
{
case 1:importe3 += "ONCE MIL ";
    break;
    case 2:importe3 += "DOCE MIL ";
    break;
    case 3:importe3 += "TRECE MIL ";
    break;
    case 4:importe3 += "CATORCE MIL ";
    break;
    case 5:importe3 += "QUINCE MIL ";
    break;

default:
    break;
}
}

else
{
importe3 += "DIECE Y ";
}
    break;
    residu = (entero%10000);
    if(residu == 0){
    case 2:importe3 += "VEINTE MIL ";
    }
    else{
      importe3 += "VEINTI  ";  
    }
    residu = (entero%10000);
    break;
    case 3:importe3 += "TREINTA Y ";
     residu = (entero%10000);
    break;
    case 4:importe3 += "CUARENTA Y ";
     residu = (entero%10000);
    break;
    case 5:importe3 += "CINCUENTA Y ";
     residu = (entero%10000);
    break;
    case 6:importe3 += "SESENTA Y ";
     residu = (entero%10000);
    break;
    case 7:importe3 += "SETENTA Y ";
     residu = (entero%10000);
    break;
    case 8:importe3 += "OCHENTA Y ";
     residu = (entero%10000);
    break;
    case 9 :importe3 += "NOVENTA Y ";
     residu = (entero%10000);
    break;

default:
    break;
}
if(residu !=0){
u_millar= (residu/1000);
centena =(residu%1000);
}

switch (u_millar)
{
case 1:importe3 += "MIL ";
residu = (entero%1000);
    break;
case 2:importe3 += "DOS MIL ";
residu = (entero%1000);
break;

case 3:importe3 += "TRES MIL ";
residu = (entero%1000);
break;
case 4:importe3 += "CUATRO MIL ";
residu = (entero%1000);
break;

case 5:importe3 += "CINCO MIL ";
residu = (entero%1000);
break;

case 6:importe3 += "SEIS MIL ";
residu = (entero%1000);
break;

case 7:importe3 += "SIETE MIL ";
residu = (entero%1000);
break;

case 8:importe3 += "OCHO MIL ";
residu = (entero%1000);
break;

case 9:importe3 += "NUEVE MIL ";
residu = (entero%1000);
break;
default:
    break;
}
if(residu !=0){
centena= (residu/100);
decena =(residu%100);
}



switch (centena)
{
case 1:
residu = (entero%100);
if (residu == 0){
importe3 += "CIEN ";

}
else
{
    importe3 += "CIENTO ";
    
}

 


    break;
case 2:
importe3 += "DOSCIENTOS ";
residu = (entero%100);
break;

case 3: importe3 += "TRESIENTOS ";
 residu = (entero%100);
break;
case 4:importe3 += "CUATROCIENTOS ";
residu = (entero%100);
break;
case 5:importe3 += "QUINIENTOS ";
residu = (entero%100);
break;
case 6:importe3 += "SEISIENTOS  ";
residu = (entero%100);
break;
case 7:importe3 += "SETESIENTOS ";
 residu = (entero%100);
break;
case 8:importe3 += "OCHOCIENTOS  ";
 residu = (entero%100);
break;
case 9 : importe3 += "NOVECIENTOS  ";
residu = (entero%100);
break;
default:
    break;
}
if(residu !=0){
decena= (residu/10);
unidad =(residu%10);
}
switch (decena)
{
case 1:
if(unidad == 0){
    importe3 += "DIEZ";
    switch(unidad)
    {
    case 1:
        importe3 += "ONCE";
        break;
    
    case 2:
     importe3 += "DOCE";
        break;

        case 3:
 importe3 += "TRECE";
        break;

        case 4:
         importe3 += "CATORCE";
        break;
        case 5:
         importe3 += "QUINCE";
        break;
    }
}
else
{
importe3+="DIECI ";


}
    break;

    case 2:
    if (unidad ==0){
importe3 += "VEINTE";
    }
    else
    {
        importe3 += "VEINTI ";
    }
    
break;

case 3:
importe3 += "TREINTA ";
break;
case 4:
importe3 += "CUARENTA";
break;
case 5 :
importe3 += "CINCUENTA";
break;
case 6 :
importe3 += "SESENTA";
break;
case 7 : 
importe3 += "SETENTA";
break;
case 8:
importe3 += " OCHENTA";
break;
case 9 :
importe3 += " NOVENTA";
break;
default:
    break;

}
if(unidad!=0 && decena>2 ){
    importe3 +=" Y ";
}
switch (unidad)
{
case 0:
    if (decena==0){
       importe3 +=" CERO";  
    }

    break;
    case 1:
     importe3 +=" UNO";
    break;
case 2:
 importe3 +=" DOS";
break;
case 3:
 importe3 +=" TRES";
break;
case 4:
 importe3 +=" CUATRO";
break;
case 5:
 importe3 +=" CINCO";
break;
case 6:
 importe3 +=" SEIS";
break;
case 7:
 importe3 +=" SIETE";
break;
case 8:
 importe3 +=" OCHO";
break;
case 9:
 importe3 +=" NUEVE";
 
break;
default:
    break;
}







cout<<"    "<< importe3<<" PESOS";
return 0;
}