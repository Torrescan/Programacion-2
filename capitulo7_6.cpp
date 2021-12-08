#include<iostream>
#include<string>
using namespace std;
enum Color
{
color_black = 1,
color_red,
color_blue,
color_green,
color_white,
color_cyan,
color_yellow,
color_magenta
};
void printColor(Color color);
void printColor (Color color)
{
   
if (color == color_black)
cout <<"black";
else if (color == color_red)
cout<<"Red";
else if (color == color_blue)
cout<<"Blue";
else if (color == color_green)
cout<<"green";
else if (color == color_white)
cout<<"white";
else if (color == color_cyan)
cout<<"Cyan";
else if (color == color_magenta)
cout<<"Magenta";
else if (color == color_yellow)
cout<<"Yellow";
}
int main()
{

int color1,color2;
cout<<"ingrese un numero del 1 al 8";
cin >> color1;
estado = printColor(Color color);

cout<<"Tu color es "<< color2;

}

