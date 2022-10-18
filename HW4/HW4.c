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
        // else{
        //     output += 0;

        // }
        input = input/10;
        point++;
    }
    return output;
}


int d2b(int input){
    
    int num;
    int output=0;
    num = input;
    int point =0;
    int i=0;
    while(input>pow(2,point)){
        point++;
    }
    
    for(i=point;i>=0;i--){
        if(pow(2,point)<num){
            num-=pow(2,point);
            output = output*10+1;
        }else{
            
            //num-=pow(2,point);
            output = output*10;
            
            
        }
        
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

