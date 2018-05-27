#ifndef __A2MatrixINT_H__
#define __A2MatrixINT_H__

#include "A2Matrix_INT.h"
int additionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
int addition_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
int contain_INT(int m1[30][30],int m2[30][30],int R1,int C1,int R2,int C2);
void delCol_INT(int matrix[30][30],int R, int C, int dC, int temp[30][30]);
int delRCcoFactor_INT(int matrix[30][30], int R, int C, int dR, int dC, int temp[30][30]);
void delRow_INT(int matrix[30][30],int R, int C, int dR, int temp[30][30]);
int det_INT (int matrix[30][30],int R, int C );
int det2_INT(int matrix[30][30], int R, int C);
int divisionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
void enterIndex_INT(int matrix[30][30],int R, int C);
void enterRC_INT(int matrix[30][30],int *R, int *C);
int multiplicationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
void print_INT(int matrix[30][30],int R, int C);
int relationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
int subtraction_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
int subtractionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
int symmetric_INT(int matrix[30][30], int R, int C);
int thesame_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2);
void transpose_INT(int matrix[30][30], int R, int C, int transpose[30][30]);






#endif
