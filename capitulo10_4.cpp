#include <algorithm>
 #include <cctype>
 #include <iostream> 
 #include <string> 
 #include <string, view>
using namespace std;

bool isvalidName(string view name)
{
return ranges::all_of(name, [](char ch) {
return (isalpha(ch) || isspace (ch)); 
});
}
int main()
{
string name{};
do
{
cout << "ingrese su nombre: ";
getline(cin, name);
 } while (!isvalidName(name));
cout << "Hola " << name << "!\n";
}