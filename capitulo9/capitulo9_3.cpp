#include <iostream> 
#include <iterator>
#include <cctype>
//Este programa no va funcionar
int main(){
constexpr int scores[]{84, 92, 76, 81, 56}; 
constexpr int numstudents { static_cast <int>(std::sizeof(scores))};
int maxScore{ 0 };
for (int student{ 0 }; student <= numstudents; ++student){
if (scores[student] > maxScore){
maxScore = scores[ student];}
std::cout << "El mejor promedio es " << maxScore << '\n';
 }
return 0;
}
