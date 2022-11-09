#include <stdio.h>



int main(){

	char a[]="Hello";
	char* p = a;

	printf("sizeof(short)=%ld\n",sizeof(short));
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(long)=%ld\n",sizeof(long));
	printf("sizeof(long long)=%ld\n",sizeof(long long));
	printf("sizeof(short)=%ld\n",sizeof(short));

	printf("\n");

	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("sizeof(p)=%ld\n",sizeof(p));


}
