#include "A2Matrix_INT.h"
void enterIndex_INT(int matrix[30][30],int R, int C)

{
    //initialize the matrix
    int i,j;
	for(i=0; i<=R; i++)
	   for(j=0; j<=C; j++)
	   {
   		  matrix[i][j]=' ';
   	   }
    //enter index of matrix
    printf("\n\n");
    for (i=1;i<=R;i++)

    {
        for (j=1;j<=C;j++)
        {
            printf("Enter a[%d][%d]:  ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
