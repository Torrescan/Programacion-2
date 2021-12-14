#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int age{};
    while (true)
    {
        cout << "Ingresa tu edad: ";
        cin >> age;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric ::limits<streamsize>::max(), '\n');
            continue;
        }
cin.ignore(numeric::limits<streamsize>::max(), '\n');
if (age <= 0)
    continue;
break;
    }   
    cout << "Ingresaste: " << age << '\n';
}