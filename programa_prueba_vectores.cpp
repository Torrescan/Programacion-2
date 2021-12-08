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
void escribir ()
{
ofstream finanzas;
finanzas.open("finanzas.txt",ios::out);
if(finanzas.fail())
{
   cout<<"no se pudo crear el archivo";
   exit(1); 
}
}

