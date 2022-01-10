#include <fstream> 
#include <iostream> 
#include <string>
using namespace std;

int main()
{
ifstream inf{ "Sample.dat" }; 
if (!inf)
{
cerr << "Uh oh, Sample.dat no se puede abrir en modo escritura!\n";
 return 1;
}
while (inf)
{
string strInput; 
getline(inf, strInput);
 cout << strInput << '\n';
}
return 0;
}