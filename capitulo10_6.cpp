#include <iostream> 
#include <limits> 
using namespace std;

int main()
{
int age{};
 while (true)
 {
cout << "Ingrese su edad: ";
 cin >> age;
if (cin.fail())
cin.clear(); /
cin.ignore (numeric_limits<streamsize>:: max(), '\n'); 
continue;
 
 if (age <= 0)

continue;

break;
 }
cout << "Ingresaste: "«c age << '\n';
}