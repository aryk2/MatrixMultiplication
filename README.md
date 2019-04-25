# MatrixMultiplication
Allows for input of 2 matrices of any size and outputs their product

The functions in the matrix.cpp file are provided to test the functions in the m_mult.cpp file. m_mult stands for matrix multiplication.

The struct that is defined in the header file must have two 2d arrays of floats and their dimensions properly stored in its members. 
This is done through user input. These are the matrices that will be multiplied.The condition for matrix multiplcation is that 
the # of columns in the first matrix must equal the number of rows in the second matrix to ensure that the dimensions of the 
result will be correct. The dimensions of the result are the rows of the first matrix and the columns of the second matrix. 
If these conditions are not met, then the function will not multiply and it will output an error. 

The resulting matrix is determined by taking the dot product for each index in the array. The dot product of the 2 input arrays for a 
result matrix index (X,Y) can be explained as the first index in the X row of the first matrix times the first index in the Y column
of the second matrix + the second index in the X row of the first matrix times the second index in the Y column of the second matrix which
continues till there are not more rows or columns to multiply. 
