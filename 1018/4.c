#include <stdio.h>
#define n 100
int main()
{
    int i;
    int x=0;
    for(i=0;i<n;i++){
        
        if(i%4){
            x+=1;
            //printf("%d\t",i);
        }
    }
    printf("\n\n %d",x);
    return 0;
}

