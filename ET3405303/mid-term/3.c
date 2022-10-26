#include <stdio.h>



int main(){

	int a = 0;
	int output = 0;
	scanf("%d",&a);


	while(a){
		output *= 10;
		output += a % 10;
		a /= 10;
	}

	printf("%d",output);


}
