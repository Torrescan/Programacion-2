#include <iomanip>
#include <iostream>

int main ()
{
float f { 12345678.0f};
std ::cout << std :: setprecision(9);
std :: cout << f << '\n';
return 0;
}