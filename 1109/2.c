#include <stdio.h>


long int* plus(int *a, int *b){
	int i=0;
	int c[5];
	int num = sizeof(a);

	for(i=0;i<5;i++) *(c+i) = *(a+i) + *(b+i);


	return &c[0];
}


int main(){

	int A[5] = {1,2,3,4,5};
	int B[5] = {1,2,3,4,5};
	int* p;
	int i = 0;


	p = plus(A,B);
	for(i=0;i<5;i++){

		printf("%d ",*(p+i));

	}


}
