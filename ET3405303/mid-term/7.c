#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){

	char a[100];

	int i=0;
	int len = 0;
	int neg = 0;
	char output[100];
    int out_num;

	scanf("%s",a);
	len = strlen(a);

	if(a[0] == '-') {
		neg = 1;
		output[0] = '-';
	}

	for(i=neg;i<len;i++){
		output[i] = a[len-i-1+neg];
		//printf("%c",a[len-i-1+neg]);
	}
	out_num = atoi(output[neg])

		printf("%s",output);


}
