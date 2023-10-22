#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <math.h>
int main() {
int p;
std::cout<<"Please enter a prime number:";
std::cin>>p;
std::vector<int> kvector= {};
std::vector<int> potentialks= {};
for(int i=1; i<p; i++) {
    if((p-1)%i==0) {
    potentialks.push_back(i);
    } 
}
for(int m=2; m<p;m++) {
    for(int j=0;j<potentialks.size() ; j++) { 
        int numb=pow(int (m), int (potentialks[j]));
        if(numb%p==1) {
            kvector.push_back(potentialks[j]);
            break;
        }
    }
}   
for (int i=0; i<kvector.size(); i++) {
    std::cout << kvector[i] << " ";   
}





return 0;
}