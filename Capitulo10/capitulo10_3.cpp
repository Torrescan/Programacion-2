#include <iostream>
using namespace std;

int main()
{
char strBuf[100];
cin.getline(strBuf,100);
cout << strBuf << '\n';
cout << cin.gcount() << " caracteres fueron leidos " << endl;
return 0;
}