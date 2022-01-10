#include <string>
#include <iostream>
using namespace std;
int getUserinput()
{
int i {};
cin >> i;
return i;
}
enum color
{
color_black,
color_red,
color_blue,
color_green,
color_white,
color_cyan,
color_yellow,
color_magneta,
};

int main()
{
color paint = color_white;
color house (color_blue);
color apple {color_red};
}