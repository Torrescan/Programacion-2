#include <iostream>
 #include <fstream>
int main()
{
    ifstream inf{"Sample.dat"};
    if (!inf)
    {
        cerr << "Uh oh, Sample.dat no puede ser abierto en modo escritura!\n";
        return 1;
    }

    string strData;
    inf.seekg(5);
    getline(inf, strData);
    cout << strData << '\n';

    inf.seekg(8, ios::cur);
    getline(inf, strData);
    cout << strData << '\n';

    inf.seekg(-15, ios::end);
    getline(inf, strData);
    cout << strData << '\n';
    return 0;
}