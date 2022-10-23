#include <stdio.h>

#define M 9
#define N 7


int main(){


	int i = 0;
	int j = 0;
	int x = 0;
	double array[M][N];
	while(i<M){
		for(j=0;j<N;j++){
			x = (i+1)*(j+1);
			array[i][j] = x;

			printf("%d X %d = %p,\t",i+1,j+1,&array[i][j]);
		}
		printf("\n");
		i++;
	}






}
