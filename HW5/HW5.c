/*****************
 * Author: CHUNG-NING, KAO
 * FileName: HW5.c, a.out
 * Version:1.0	
 * Contact: B11002108@mail.ntust.edu.tw
 * Date: Oct.16.2022
 * ***************/

#include <stdio.h>

int main(){

    int iteration_times = 0;
    int i = 0;
    double div = 1;
    double exp_o = 1.0;

    printf("How Many Times u WANT!: ");
    scanf("%d",&iteration_times);

    for(i=1;i<iteration_times+1;i++){
	div = i*div;
	exp_o = exp_o + 1/div;
	printf("%d. e = %5.20f      \n",i ,exp_o);
    }
}
//float p
