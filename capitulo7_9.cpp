#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include<conio.h>
#include<fstream>
using namespace std;
int clicks;
struct Web
{
 int usuarios;
 double ganancias;
 double valor_anuncio;

};
void Anuncioo(Web anuncio){
    
cout<<"Cuantos click realizaron estos usuarios ?";
cin>>clicks;
cout<<"La ganancia total acumulada es:  "<< anuncio.ganancias <<'\n';

}

int main(){
    int usu;
cout<< "Cuantos usuarios hay de espectadores en este anuncio ?";
cin>>usu;

Web anuncio{usu,clicks,10};
Anuncioo(anuncio);
anuncio.ganancias = anuncio.usuarios * anuncio.valor_anuncio,anuncio.ganancias;

}
void ganancias(Web gana){

cout<<"La ganancia total acumulada es:  "<< gana.ganancias <<'\n';

}