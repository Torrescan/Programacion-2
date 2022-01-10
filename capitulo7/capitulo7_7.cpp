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

struct Employee
{
    short id;
    int age;
    double wage;
};
//ESTA FORMA DE ASIGNAR VALORES ES MAS TEDIOSA
/*Employee joe;
joe.id = 14;
joe.age = 32;
joe.wage = 24,15;

Employee Maria;
maria.id = 15;
maria.age = 28;
maria.wage = 18,27;*/
void imprimirinfo ( Employee employee){
   cout<< "ID:  "<<employee.id<<'\n';
cout<< "Age:  "<<employee.age<<'\n';
cout<< "Wage:  "<<employee.wage<<'\n'; 
}
int main (){
Employee joe{14,32,24.15};
Employee Maria{15,28,18.27};
imprimirinfo(joe);
cout<<'\n';
imprimirinfo(Maria);
return 0;
}
