#include <stdio.h>

//int swap()
int main(){

    int input1;
    int input2;
    int tmp;

    printf("請輸入第一個與第二個數字: ");
    scanf("%d %d", &input1, &input2);

    printf("Before %d %d\n",input1,input2);

    tmp = input1;
    input1 = input2;
    input2 = tmp;

    printf("After %d %d",input1,input2);
}
