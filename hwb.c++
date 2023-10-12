#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>  
int main() {
float x,y,z;
std::cout << "First side of the tile:";
std::cin >> x;
std::cout << "Second side of the tile:";
std::cin >> y ;
std::cout << "Third side of the tile:";
std::cin >> z;
float u=(x+y+z)/2;
float area=sqrt(u*(u-x)*(u-y)*(u-z));
float cost=area*(0.8);
std::cout << "The cost of the tile:" << cost << " " << "dollars" << std::endl;
return 0;
}


