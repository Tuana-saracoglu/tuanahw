#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

namespace printM
{
int rows,cols;
void printmatrices(std::vector<std::vector<int>> array) {

    for (int i = 0; i < rows; ++i)
    {
    
        for (int j = 0; j < cols; ++j)
            std::cout << array[i][j] << '\t';
        std::cout << std::endl;
    }
} 
}
void addmatrices(std::vector<std::vector<int>> matrix_1 ,std::vector<std::vector<int>> matrix_2) {
 for (int i = 0; i < printM::rows; ++i)
    {
    
        for (int j = 0; j < printM::cols; ++j)
            std::cout << matrix_1[i][j]+matrix_2[i][j] << '\t';
            std::cout<< std::endl;

    }
} 
void substractmatrices(std::vector<std::vector<int>> matrix_1 ,std::vector<std::vector<int>> matrix_2) {
 for (int i = 0; i < printM::rows; ++i)
    {
    
        for (int j = 0; j < printM::cols; ++j)
            std::cout << matrix_1[i][j]-matrix_2[i][j] << '\t';
            std::cout<< std::endl;

    }
} 
int main() {
    int NofRows;
    int NofCols;
   
    std::cout<<"Please enter the number of rows:";
    std::cin>>NofRows;
    printM::rows=NofRows;
    std::cout<<"Please enter the number of columns:";
    std::cin>>NofCols;
    printM::cols=NofCols;
    std::vector<std::vector<int>> matrix1;

    int input;
    
    for(int i=0;i<NofRows;i++) {
        std::vector<int> tempV; 
        for(int k=0;k<NofCols;k++) {
            std::cout<<"Please enter value for ("<<i<<","<<k<<")"<<std::endl;
            std::cin >> input;
            tempV.push_back(input);
           

        }
        matrix1.push_back(tempV);
    }
   
    
    std::vector<std::vector<int>>matrix2;
    for(int i=0;i<NofRows;i++) {
        std::vector<int> tempV2;
        for(int k=0;k<NofCols;k++) {
            std::cout<<"Please enter value for ("<<i<<","<<k<<")"<<std::endl;
            std::cin>>input;
            tempV2.push_back(input);
            
        }
        matrix2.push_back(tempV2);
    } 
    printM::printmatrices(matrix1);
    printM::printmatrices(matrix2);
    addmatrices(matrix1,matrix2);
    substractmatrices(matrix1,matrix2);
    return 0;
}
