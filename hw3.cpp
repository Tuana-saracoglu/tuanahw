#include <iostream>
#include <cassert>
#include <vector>
#include <array>
#include <algorithm>
template <typename myType>
int myArray (myType Array[], int size) {

    std::sort(Array, Array + size);
    
    for(int i=size-2;i>=0;i--) {

        if(Array[i]!=Array[size-1]) {
            std::cout<<"The second largest element is: "<<Array[i]<<"\n";
            return 0;
        }
    }
    
    if(Array[0]==Array[size-1]) {
        return 1;
    }
    std::cout<<"There is no second largest element \n";
    return 0;
    
    }
int main() {
    int n;
    std::cout<<"Please enter the number of elements in your array:";
    std::cin>>n;
    float a[n];
    std::cout<<"Please enter the elements of your array:"<<std::endl;
    for(int i;i<n;i++) {
        std::cin>>a[i];
    }
    int size =sizeof(a) / sizeof(a[0]) ;
    myArray<float>(a,size);

    return 0;
}

