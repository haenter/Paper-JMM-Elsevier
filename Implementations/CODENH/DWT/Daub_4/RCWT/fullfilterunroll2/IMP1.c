// Program for Calcullating the Daub-4 transform


#include "MAX.h"

#define    N    MAX1
#define    M    N

 float low[] = {-0.1294, 0.2241, 0.8365, 0.4830};
 float high[]= {-0.4830, 0.8365, -0.2241, -0.1294};
  
int i, j, jj, half_row, half_col;
float in_image[N+4][M+4], ou_image[N+4][M+4];

 int  main(void) {
		singleCore
		programName= "DUB4FULDUB4COLUnroll2";

		half_row = N / 2;
		half_col = M / 2;

		assignImagef32(in_image);
 
		begin_rdtsc
			for (i=0; i<N; i++)
			   for(j=0, jj=0; jj<M; j+=8, jj +=16)
			   {
				//j=0 jj=0
				 ou_image[i][j]            = in_image[i][jj]     * low[0]  +  in_image[i][jj + 1] * low[1] +
											 in_image[i][jj + 2] * low[2]  +  in_image[i][jj + 3] * low[3];

				 ou_image[i][j + half_col] = in_image[i][jj]     * high[0] + in_image[i][jj  + 1] * high[1] +
											  in_image[i][jj + 2] * high[2] + in_image[i][jj  + 3] * high[3];
											  
											  //j=1 jj=2
				 ou_image[i][j+1]            = in_image[i][jj+2]     * low[0]  +  in_image[i][jj+2 + 1] * low[1] +
											 in_image[i][jj+2 + 2] * low[2]  +  in_image[i][jj+2 + 3] * low[3];

				 ou_image[i][j+1 + half_col] = in_image[i][jj+2]     * high[0] + in_image[i][jj+2  + 1] * high[1] +
											  in_image[i][jj+2 + 2] * high[2] + in_image[i][jj+2  + 3] * high[3];
											  
											  //j=2 jj=4
				 ou_image[i][j+2]            = in_image[i][jj+4]     * low[0]  +  in_image[i][jj+4 + 1] * low[1] +
											 in_image[i][jj+4 + 2] * low[2]  +  in_image[i][jj+4 + 3] * low[3];

				 ou_image[i][j+2 + half_col] = in_image[i][jj+4]     * high[0] + in_image[i][jj+4  + 1] * high[1] +
											  in_image[i][jj+4 + 2] * high[2] + in_image[i][jj+4  + 3] * high[3];
											  
											  //j=3 jj=6
				 ou_image[i][j+3]            = in_image[i][jj+6]     * low[0]  +  in_image[i][jj+6 + 1] * low[1] +
											 in_image[i][jj+6 + 2] * low[2]  +  in_image[i][jj+6 + 3] * low[3];

				 ou_image[i][j+3 + half_col] = in_image[i][jj+6]     * high[0] + in_image[i][jj+6  + 1] * high[1] +
											  in_image[i][jj+6 + 2] * high[2] + in_image[i][jj+6  + 3] * high[3];
											  
											  //j=4 jj=8
				 ou_image[i][j+4]            = in_image[i][jj+8]     * low[0]  +  in_image[i][jj+8 + 1] * low[1] +
											 in_image[i][jj+8 + 2] * low[2]  +  in_image[i][jj+8 + 3] * low[3];

				 ou_image[i][j+4 + half_col] = in_image[i][jj+8]     * high[0] + in_image[i][jj+8  + 1] * high[1] +
											  in_image[i][jj+8 + 2] * high[2] + in_image[i][jj+8  + 3] * high[3];
											  
											  //j=5 jj=10
				 ou_image[i][j+5]            = in_image[i][jj+10]     * low[0]  +  in_image[i][jj+10 + 1] * low[1] +
											 in_image[i][jj+10 + 2] * low[2]  +  in_image[i][jj+10 + 3] * low[3];

				 ou_image[i][j+5 + half_col] = in_image[i][jj+10]     * high[0] + in_image[i][jj+10  + 1] * high[1] +
											  in_image[i][jj+10 + 2] * high[2] + in_image[i][jj+10  + 3] * high[3];
											  
											  //j=6 jj=12
				 ou_image[i][j+6]            = in_image[i][jj+12]     * low[0]  +  in_image[i][jj+12 + 1] * low[1] +
											 in_image[i][jj+12 + 2] * low[2]  +  in_image[i][jj+12 + 3] * low[3];

				 ou_image[i][j+6 + half_col] = in_image[i][jj+12]     * high[0] + in_image[i][jj+12  + 1] * high[1] +
											  in_image[i][jj+12 + 2] * high[2] + in_image[i][jj+12  + 3] * high[3];
											  
											  //j=7 jj=14
				 ou_image[i][j+7]            = in_image[i][jj+14]     * low[0]  +  in_image[i][jj+14 + 1] * low[1] +
											 in_image[i][jj+14 + 2] * low[2]  +  in_image[i][jj+14 + 3] * low[3];

				 ou_image[i][j+7 + half_col] = in_image[i][jj+14]     * high[0] + in_image[i][jj+14  + 1] * high[1] +
											  in_image[i][jj+14 + 2] * high[2] + in_image[i][jj+14  + 3] * high[3];
			   }
			   

			  for(j=0; j<M; j++)
			  for (i=0,  jj=0; jj<N; i+=8, jj +=16)
			  {
				 //i=0
				in_image[i][j]            = ou_image[jj][j]     * low[0] +  ou_image[jj + 1][j] * low[1] +
											ou_image[jj + 2][j] * low[2] +  ou_image[jj + 3][j] * low[3];

				in_image[i + half_row][j] = ou_image[jj][j]     * high[0] + ou_image[jj + 1][j] * high[1] +
												 ou_image[jj + 2][j] * high[2] + ou_image[jj + 3][j] * high[3];
												 
												 //i=1 jj=2
				in_image[i+1][j]            = ou_image[jj+2][j]     * low[0] +  ou_image[jj +2 + 1][j] * low[1] +
											ou_image[jj+2 + 2][j] * low[2] +  ou_image[jj+2 + 3][j] * low[3];

				in_image[i+1 + half_row][j] = ou_image[jj+2][j]     * high[0] + ou_image[jj+2 + 1][j] * high[1] +
												 ou_image[jj+2 + 2][j] * high[2] + ou_image[jj+2 + 3][j] * high[3];
												 
												 //i=2 jj=4
				in_image[i+2][j]            = ou_image[jj+4][j]     * low[0] +  ou_image[jj+4 + 1][j] * low[1] +
											ou_image[jj+4 + 2][j] * low[2] +  ou_image[jj+4 + 3][j] * low[3];

				in_image[i+2 + half_row][j] = ou_image[jj+4][j]     * high[0] + ou_image[jj+4 + 1][j] * high[1] +
												 ou_image[jj+4 + 2][j] * high[2] + ou_image[jj+4 + 3][j] * high[3];
												 
												 //i=3 jj=6
				in_image[i+3][j]            = ou_image[jj+6][j]     * low[0] +  ou_image[jj+6 + 1][j] * low[1] +
											ou_image[jj+6 + 2][j] * low[2] +  ou_image[jj+6 + 3][j] * low[3];

				in_image[i+3 + half_row][j] = ou_image[jj+6][j]     * high[0] + ou_image[jj+6 + 1][j] * high[1] +
												 ou_image[jj+6 + 2][j] * high[2] + ou_image[jj+6 + 3][j] * high[3];
												 
												 //i=4 jj=8
				in_image[i+4][j]            = ou_image[jj+8][j]     * low[0] +  ou_image[jj+8 + 1][j] * low[1] +
											ou_image[jj+8 + 2][j] * low[2] +  ou_image[jj+8 + 3][j] * low[3];

				in_image[i+4 + half_row][j] = ou_image[jj+8][j]     * high[0] + ou_image[jj+8 + 1][j] * high[1] +
												 ou_image[jj+8 + 2][j] * high[2] + ou_image[jj+8 + 3][j] * high[3];
												 
												 //i=5 jj=10
				in_image[i+5][j]            = ou_image[jj+10][j]     * low[0] +  ou_image[jj+10 + 1][j] * low[1] +
											ou_image[jj+10 + 2][j] * low[2] +  ou_image[jj+10 + 3][j] * low[3];

				in_image[i+5 + half_row][j] = ou_image[jj+10][j]     * high[0] + ou_image[jj+10 + 1][j] * high[1] +
												 ou_image[jj+10 + 2][j] * high[2] + ou_image[jj+10 + 3][j] * high[3];
												 
												 //i=6 jj=12
				in_image[i+6][j]            = ou_image[jj+12][j]     * low[0] +  ou_image[jj+12 + 1][j] * low[1] +
											ou_image[jj+12 + 2][j] * low[2] +  ou_image[jj+12 + 3][j] * low[3];

				in_image[i+6 + half_row][j] = ou_image[jj+12][j]     * high[0] + ou_image[jj+12 + 1][j] * high[1] +
												 ou_image[jj+12 + 2][j] * high[2] + ou_image[jj+12 + 3][j] * high[3];
												 
												 //i=7 jj=14
				in_image[i+7][j]            = ou_image[jj+14][j]     * low[0] +  ou_image[jj+14 + 1][j] * low[1] +
											ou_image[jj+14 + 2][j] * low[2] +  ou_image[jj+14 + 3][j] * low[3];

				in_image[i+7 + half_row][j] = ou_image[jj+14][j]     * high[0] + ou_image[jj+14 + 1][j] * high[1] +
												 ou_image[jj+14 + 2][j] * high[2] + ou_image[jj+14 + 3][j] * high[3];
												 
												 
												 
												 							 
			  }
      
		end_rdtsc  
                  printf ( "output = %f\n", in_image[N/2][M/2]);                                    savefloatMatrixFileForOutPuts(in_image);


return 0;
}
