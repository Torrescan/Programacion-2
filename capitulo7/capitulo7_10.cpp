#include<iostream>
#include<string>
//using namespace std;
enum ItemType
{
itemtype_sword,
itemtype_torch,
itemtype_potion
};

std::string getItemName(ItemType itemType)
{
if (itemType == itemtype_sword)
return "Sword";
if (itemType == itemtype_torch)
return "Torch";
if(itemType == itemtype_potion)
return "Potion";


return "?????";
}
int main ()
{
ItemType itemtype { itemtype_torch};
std::cout << " Your are carryng a " <<  getItemName(itemtype) << '\n';
return 0;
}