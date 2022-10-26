#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	char a[100];
	int len = 0;
	int bracket_opened = 0;
	int i = 0;

	scanf("%s",a);
	len = strlen(a);

	for(i=0;i<len;i++){
		if(a[i] == '(') bracket_opened += 1;
		else if(a[i] == ')') bracket_opened -= 1;
	}

	if(bracket_opened) printf("false");
	else printf("true");

}
