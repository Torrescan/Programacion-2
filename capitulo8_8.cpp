#include <iostream>
using namespace std;
double getdouble(){
cout<<"Ingrese un valor double : ";
double x{};cin>>x;if (cin.fail()){ cin.clear();cin.ignore(32767,'\n');}else{cin.ignore(32767,'\n');return x;}

}
char getoperation(){
cout<<"Ingrese uno de los siguientes caracteres +,-,*, ur /:";
char op{};cin>>op;if (cin.fail()){ cin.clear();cin.ignore(32767,'\n');}else{cin.ignore(32767,'\n');return op;}
}
void printresult(double x,char operation,double y){
switch (operation)
{
case '+': cout<<x<<" + "<<y<<" is "<<x+y<<'\n'; break;
case '-': cout<<x<<" - "<<y<<" is "<<x-y<<'\n'; break;
case '*': cout<<x<<" * "<<y<<" is "<<x*y<<'\n'; break;
case '/': cout<<x<<" / "<<y<<" is "<<x/y<<'\n'; break;
}
}
int main(){

double x{getdouble()};  char operation{getoperation()};
double y{getdouble()};
printresult(x,operation,y);
return 0;
}