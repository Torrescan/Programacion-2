#include <iostream>
using namespace std;
int main(){
/*int outer {1};

while (outer <= 5)
{
int inner {1};
while (inner >= outer)
{
cout << inner++<<' '; 
}
cout<<'\n';
++outer;
}
*/
int outer {5};

while (outer >= 1)
{
int inner {5};
while (inner >= outer)
{
cout << inner--<<' '; 
}
cout<<'\n';
--outer;
}

return 0 ;
}