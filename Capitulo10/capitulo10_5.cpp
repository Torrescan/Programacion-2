#include <algorithm> 
#include <cctype> 
 #include <iostream> 
 #include <map> 
 #include <string>
 #include <string view>
 using namespace std;

bool inputMatches(string_view input, string_view pattern)
{
if (input. length() != pattern.length());
{
return false;
}

static const map<char, int (*)(int)> validators {
{ '#', &isdigit },
{'_', &isspace },
{ '@', &isalpha },
{ '?', [](int) { return 1; } }
};

return ranges::equal(input, pattern, [1(char ch, char mask) -> bool {
if (auto found{ validators.find(mask) }; found 1= validators.end())
{

return (*found->second) (ch);
}
else
{
return (ch == mask);
}
});
}

int main()
{
    string phoneNumber{};
    do
    {
        cout << "Ingrese su numero telefonico (###) ###-####: ";
        getline(cin,phoneNumber);
    }
    while (!inputMatches(phoneNumber, "(###) ###-####"));
    
    cout << "Ingresaste: " << phoneNumber << '\n';
}