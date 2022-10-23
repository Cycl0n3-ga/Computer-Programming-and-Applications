#include <stdio.h>
#include <math.h>

int b2d(int input){

    int point=0;
    int output=0;
    int x;
    while(input>0){
        if(input%2){
            output += pow(2,point);
        }
        input = input/10;
        point++;
    }
    return output;
}


int d2b(int input){
    
	long long output = 0;
    int x, i = 1;


 	while (input!=0) {
    	x = input % 2;
    	input /= 2;
    	output += x * i;
    	i *= 10;
    }
        
    return output;

}


int main(){

    int mode=0;
    int input_num;
    int output_num;

    printf("0 for b2d, 1 for d2b: ");
    scanf("%d",&mode);

    printf("Number: ");
    scanf("%d",&input_num);


    if(mode){
        output_num=d2b(input_num);
    }
    else{
        output_num=b2d(input_num);
    }

    printf("%d",output_num);



    return 0;
}

