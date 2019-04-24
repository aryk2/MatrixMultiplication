//Matrix multiplcation header file
#include <iostream>
using namespace std;

//function prototypes

struct matrices {
    int rows1;
    int rows2;
    int columns1;
    int columns2;
    float ** matrix1;
    float ** matrix2;
    float ** result;
};

int matrix_multiply(matrices & mtrs);
bool is_possible(matrices & mtrs);
int dot_product(matrices & mtrs, int row, int column);

void user_input_matrix(matrices & mtrs);
void test_display(matrices & mtrs);
void free_mem(matrices & mtrs);



