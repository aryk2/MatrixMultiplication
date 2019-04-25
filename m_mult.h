//Matrix multiplcation header file
#include <iostream>
using namespace std;

// struct interface for input into the matrix
//multiplcation functions 
struct matrices {
    int rows1;
    int rows2;
    int columns1;
    int columns2;
    float ** matrix1;
    float ** matrix2;
    float ** result;
};

//matrix multiplication function prototypes
int matrix_multiply(matrices & mtrs);
bool is_possible(matrices & mtrs);
int dot_product(matrices & mtrs, int row, int column);




