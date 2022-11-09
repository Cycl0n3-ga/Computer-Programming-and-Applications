#include <stdio.h>


void swap_ref(int *a ,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	printf("swap ref %p  a = %d %p b =%d\n", a, *a, b, *b);
}



void swap_value(int &a ,int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("swap val %p  a = %d %p b =%d\n", &a, a, &b, b);
}


int main(){

	int a = 3;
	int b = 5;

	printf("main %p  a = %d %p b =%d\n", &a, a, &b, b);
	swap_value(a,b);
	
	printf("after swap value main %p  a = %d %p b =%d\n\n\n\n", &a, a, &b, b);



	printf("main %p  a = %d %p b =%d\n", &a, a, &b, b);
	swap_ref(&a,&b);
	
	printf("after swap ref main %p  a = %d %p b =%d\n", &a, a, &b, b);



}
