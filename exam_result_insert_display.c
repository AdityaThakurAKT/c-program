#include<stdio.h>
int main()
{
    int r[10],p[10],c[10],m[10],tm[10],i=0,j;
    char ch;
	printf("Welcome CyberAnya Result Portal \nAdd data of students result\n");
	
while(1)
{   printf("Enter Roll : ");
    scanf("%d",&r[i]);
    printf("Enter Marks of Physics : ");
    scanf("%d",&p[i]);
    printf("Enter Marks of Chemistry : ");
    scanf("%d",&c[i]);
    printf("Enter Marks of Math : ");
    scanf("%d",&m[i]);
    
    tm[i] = p[i]+c[i]+m[i];
  
    printf("\nYou Want to add more data (y / n ) : ");
    scanf(" %c",&ch);
    if (ch == 'n'){
    	break;
	}else if(ch=='y'){
		i++;
	}else{
		printf("Invalid input\n");
	}
}


printf("\n \t Exam Report \nRoll Physics Chemistry Math total_marks \n");

for(j=0;j<=i;j++)
{
    printf("\n %d \t %d \t %d \t %d \t %d",r[j],p[j],c[j],m[j],tm[j]);
}


}
