#include<stdio.h> 
int main(){ 
    int a;
    
    float b,c,d,e;

    while(1){

    printf("Enter 1 if u want to convert miles to kms\nEnter 2 for converting kms to miles\nEnter 10 if u want to end program\n");
    
    scanf("%d",&a);
    
    if (a==1)
       
    {
        printf("Enter the distance in miles:");
        
        scanf("%f",&b);
        
        c=(1.61*b);
        
        printf("The distance in kms is %0.2f",c);
    }
    else if (a==2)
    {
        printf("Enter the distance in kms:");
        
        scanf("%f",&d);
        
        e=(0.62)*d;
        
        printf("The distance is miles is:%0.2f",e);
    }
        else if (a==10){
            printf("Exiting program");
            break;
        }
    else{

        printf("Entered choice is wrong!\nPlease choose from the provided options\n");
    }
}
        return 0;
    
    }
