#include <stdio.h>
#define N 5


int main(){
	int *p[N];
	int (*q)[5];//={1,2,3,4,5,6,7,8,9,10};

	printf("%lu\n",sizeof(*p));
	printf("%lu\n",sizeof(p));
//	printf("%lu\n",*p);

	printf("%lu\n",sizeof(*q));
	printf("%lu\n",sizeof(q));
}
