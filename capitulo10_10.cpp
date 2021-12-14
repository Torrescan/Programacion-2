#include <iostream>
 #include <fstream>
using namespace std;

int main()
{
ofstream outf{ "Sample.dat", ios::app };
if (!outf)
{
cerr << "Uh oh, Sample.dat no se puede abrir en modo escritura!\n";
 return 1;
}
outf « "This is line 3" << '\n'; 
outf << "This is line 4" << '\n';
return 0;
}