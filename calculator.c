#include <stdio.h>
int main() {

    char operator;

    printf("enter the operator(+,-,*,/)");

    scanf("%c",&operator);

    printf("enter the two numbers:");

      float a,b;

    scanf("%f%f",&a,&b);

    switch(operator) {

        case '+':
        printf("the sum of two numbers:%f",a+b);

        break;

        case'-':
        
        printf("the difference of two numbers is %f",a-b);

        break;

        case'*':

        printf("the product of two numbers are %f",a*b);

        break;

        case'/':

        printf("the division of two numbers are %f",(a/b));

        break;
        
        



}
    return 0;

}
