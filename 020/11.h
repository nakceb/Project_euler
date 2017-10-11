#define MAX_LENGTH_MATRIX 20
typedef struct{
  int rows;
  int cols;
  int matrix [MAX_LENGTH_MATRIX][MAX_LENGTH_MATRIX];
} matrix_struct;
int rows(matrix_struct a, int length);
int cols(matrix_struct a, int length);
int diag(matrix_struct a, int length);
int diag_inv(matrix_struct a, int length);
matrix_struct create_struct();
