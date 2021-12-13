#include <iostream>
using namespace std;

double getinicial(){
cout<<"ingrese la altura de la torre en metros : ";
double alturainicia{};cin>>alturainicia;return alturainicia;
}
double cacularcaida(){
double distanciacaida{(myConstants::gravedad * pasosegundos * pasosegundos)/2.0};
double concurrencia{alturainicia - distanciacaida}; return concurrencia;
}
void imprimircaida(double caida, int segundospasados){
double caida{calcularcaida(alturainicia,pasosegundos)};imprimircaida(caida)
}