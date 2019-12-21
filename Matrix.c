#include <stdio.h>
int main()
{


      int matrixA[2][2];
      int matrixB[2][2];
      int result [2][2];
      int i,j,k,l,m,n,o,p,q;

      
      printf("\nEnter the Values of Matrix A :\n");
      for (i=0;i<2;++i)
      {

      	 for(j=0;j<2;++j)
      	 {
      	 	printf("Enter Element %d %d th :",i,j);
      	 	scanf("%d", &matrixA[i][j]);
		   }
	  }

	        
      printf("\nEnter the Values of Matrix B :\n");

      for (k=0;k<2;++k)
      {
      	 for(l=0;k<2;++k)
      	 {
      	 	printf("Enter Element %d %d th :",k,l);
      	 	scanf("%d", &matrixB[k][l]);

		   }
	  }

	 
	  	
	for (m = 0; m < 3; m++)
	{
		for (n = 0; n< 3; n++)
		{
			result[m][n] = 0;
			for (k = 0; k < 3; k++)
				result[m][n] += matrixA[n][k]*matrixB[k][j];
		}
	}


	printf("\n The multiplication of Matrix A and B gives us \n");

	for (p=0;p<3;++p)
	{
		for (q=0;q<3;++q)
		{
			printf("%d ",result[p][q]);
		}
		printf("\n");
	}

	return 0;

}
