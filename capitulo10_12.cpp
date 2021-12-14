#include <iostream>


int main()
{
std::fstream iofile{ "Sample.dat", ios::in | ios::out };
 if (!iofile)
 {
std::cerr << "Uh oh, Sample.dat no se puede abrir!\n";
 return 1;
 }
char chchar{};
while (iofile.get(chchar)) 
{
switch (chchar) 
{ 
case 'a': case 'e': case 'A': case 'E':
case 'i': case 'I': case 'o': case 'o':
case 'u': case 'U':

iofile.seekg(-1, std::ios::cur);
 iofile << '#'; 
 iofile.seekg(iofile.tellg(), std::ios::beg);
break;
return 0;
}