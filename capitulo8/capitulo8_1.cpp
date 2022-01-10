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
enum Color
{
black = 1,
red,
blue,
green,
white,
cyan,
yellow,
magenta
};


void imprimicolor(Color color){

switch (color)
{
case black: 
cout<<"Negro";
break;
case white:
cout<<"Blanco";
break;
case red: 
cout<<"Rojo";
break;
case green: 
cout<<"Verde";
break;
}
}

int main(){
int color;

cout<<"INGRESE UN NUMERO DEL 1 AL 5\n"; cin >> color;


switch (color)
{
case 1:imprimicolor(Color::black);
    break;
    case 2:imprimicolor(Color::red);
    break;
    case 3:imprimicolor(Color::green);
    break;
    case 4:imprimicolor(Color::red);
    break;
    case 5:
    break;
    case 6:
    break;

default:
    break;
}



}