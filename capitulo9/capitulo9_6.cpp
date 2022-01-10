#include <algorithm>
#include <iostream> 
#include <iterator>
#include <string_view>
using namespace std;

int main(){
int array[]{ 30, 50, 20, 10, 40 }; constexpr int letras{static_cast<int>(size(array))};
for (int startIndex{ 0 }; startIndex < letras - 1; ++startIndex){
int smallestIndex{ startIndex }; 
for (int currentIndex{ startIndex + 1 }; currentIndex < letras; ++currentIndex){
if (array[currentIndex] < array[smallestIndex])
{
smallestIndex = currentIndex;}
std::swap(array[startIndex], array[smallestIndex]);
}
}
for (int index{ 0 }; index < letras; ++index){
std::cout << array[index] << ' ';
std::cout << '\n';
}
return 0;
}