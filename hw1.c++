#include <iostream>
#include <cstdlib>
int main() {
int N,M;
std::cout << "N:";
std::cin >> N;
std::cout << "M:";
std::cin >> M ;
int numberofb1=N/9;
int remainderB1=N%9;
int numberofb2=N/M;
int remainderB2=N%M;
std::cout << "If you use box1, the number of boxes you fill will be:"<< numberofb1 << std::endl;
std::cout << "The number of candies that are left out:"<< remainderB1 << std::endl;
std::cout << "If you use box2, the number of boxes you fill will be:"<< numberofb2 << std::endl;
std::cout << "The number of candies that are left out:"<< remainderB2 << std::endl;
return 0;
}
