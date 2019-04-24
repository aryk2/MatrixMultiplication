//Matrix Multiplcation functions
#include "m_mult.h"

int matrix_multiply(matrices & mtrs) {
    bool multiply = is_possible(mtrs);
    if (!multiply)
	return 0;
    mtrs.result = new float*[mtrs.rows1];
    for(int i = 0; i < mtrs.rows1; ++i) 
	mtrs.result[i] = new float[mtrs.columns2];

    for(int i = 0; i < mtrs.rows1; ++i) {
	for(int k = 0; k < mtrs.columns2; ++k) 
            mtrs.result[i][k] = dot_product(mtrs, i, k);
    }
    return 1;
}

bool is_possible(matrices & mtrs) {
    if(mtrs.columns1 == mtrs.rows2)
	return true;
    return false;
}

int dot_product(matrices & mtrs, int row, int column) {
    int result = 0;
    int k = 0;
    for(int i = 0; i < mtrs.columns1; ++i) {
        result += mtrs.matrix1[row][i] * mtrs.matrix2[k][column];
        ++k;
    }
    return result;
}
 
