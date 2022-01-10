#include <charconv>
 #include <iostream>
  #include <optional> 
  #include <string> 
  #include <string_view>
using namespace std;

optional <int> extractAge(string_view age)
{
int result{};
 auto end{ age.data() + age.length()};
  if (from_chars(age.data(), end, result).ptr != end)
  {
return {};
  }

if (result <= 0)
{
return {};
}
return result;
}

int main()
{
    int age{};
    while (true)
    {
        cout << "Ingresa tu edad: ";
        string strAge{};
        cin >> strAge;

        if (auto extracted{extractAge(strAge)})
        {
            age = *extracted;
            break;
        }
    }
    cout << "Ingresaste: " << age << '\n';
}