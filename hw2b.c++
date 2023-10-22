#include <iostream>
#include <string>
#include <cassert>
#include <cstring>
#include <algorithm>
#include <array>
#include <ios>
#include <cctype>
using namespace std;
int main() {
    
string str;

while(true) { 
std::cout<<"Please enter a string:";

std::cin >> str; 

int n=0;
    for(int i=0;i<str.length();i++) {
    if(isalpha(str.at(i))) {
    n++;
    }
    }
    if (n<str.length()) {
    std::cout<<"This isn't a string \n";
    break;
    }
    else if(n==str.length()){
    std::cout<<"This is a string, and \n";
    } 
    

int m=0;
    for(int i=0;i<str.length();i++) {
        if(str.at(i)==str.at(str.length()-1-i)) {
        m++;
    } 
    }

    if(m==str.length()) {
    std::cout<<"it's also a palindrome \n";
    }
    else {
    std::cout<<"This string isn't a palindrome \n";
    }

std::cout<<"Do you want to check another string(y/n)?:";
char answer;
std::cin>>answer;
    if(answer='y') {
        true;
    }
    else if(answer='n') {
    break;
    }



}

 
return 0;
}