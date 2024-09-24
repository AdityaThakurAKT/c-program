#include <stdio.h>
int main(){
    double num1,num2,oadd,osub,omlt,odiv,add;
    char ope[10];

    printf("Welcome! to the AKT Calculater.\n \n");
    
    printf("Code for Operations \n");
    printf(" Enter add for Addition \n Enter sub for Subtraction \n Enter mlt for mltplication \n Ender div for Division.\n \n");
	do{
	printf("\nEnter operation code : ");
    scanf("%s",&ope);
    printf("Enter first num  : ");
    scanf("%lf",&num1);
    printf("Enter second num : ");
    scanf("%lf",&num2);


if(strcmp(ope,"add")==0){

	//printf("Enter first num  : ");
	//scanf("%d",&num1);
	//printf("Enter second num : ");
	//scanf("%d",&num2);
    oadd=num1+num2;
    printf("Sum of %lf and %lf is %lf",num1,num2,oadd);
    printf(" \n");
    
}if(strcmp(ope,"sub")==0){

    // printf("Enter first num  : ");
    // scanf("%d",&num1);
    // printf("Enter second num : ");
    // scanf("%d",&num2);
    osub=num1-num2;
    printf("Subtraction of %d and %d is %d",num1,num2,osub);
    printf(" \n");
    
}if(strcmp(ope,"mlt")==0){
    // printf("Enter first num  : ");
    // scanf("%d",&num1);
    // printf("Enter second num : ");
    // scanf("%lf",&num2);
    omlt=num1*num2;
    printf("multiply of %lf and %lf is %lf",num1,num2,omlt);
    printf(" \n");
    
}if(strcmp(ope,"div")==0){
    // printf("Enter first num  : ");
    // scanf("%lf",&num1);
    // printf("Enter second num : ");
    // scanf("%lf",&num2);
    odiv=num1/num2;
    printf("Division of %lf and %lf is %lf",num1,num2,odiv);
    printf(" \n");
 }
} while (1==1);
    return 0;
}
