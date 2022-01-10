#include <string>
#include <iostream>
using namespace std;
int getUserinput()
{
int i {};
cin >> i;
return i;
}


int main()
{
cout<< "¿Cuantas manzanas te comiste hoy ? \n";
if (int iappleEaten{ getUserinput()}; iappleEaten <= 2)
{
cout << "Yummy\n";
}
else 
{
cout << iappleEaten << "son muchas !\n ";

}
return 0;
}