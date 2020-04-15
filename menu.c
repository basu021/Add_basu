#include <stdio.h>
#include <stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RE "\x1B[0m"


int main()
{
char command[50];
strcpy(command, "./banner.sh");
printf("");
system(command);

    printf("\n\n\tTool by Basudev\n\n\n");
	
    float a,b,c,d;
    int e,f,g,h,choice;	
    unsigned long int fact;

    while(1)
    {
        printf(YEL "\n-----------------------\n" RE);
        printf("\n         \n");
	printf(GRN"["RE);
	printf("1");
	printf(GRN"] "RE);
	printf(" Add two Numbers\n ");
 	printf("\n         \n");
        printf(GRN"["RE);
        printf("2");
        printf(GRN"] "RE);
        printf(" Subtract two numbers\n" );
	printf("\n         \n");
        printf(GRN"["RE);
        printf("3");
        printf(GRN"] "RE);
	printf(" Multiply two numbers\n" );
	printf("\n         \n");
        printf(GRN"["RE);
        printf("4");
        printf(GRN"] "RE);        
	printf(" Division of two numbers\n");
	printf("\n         \n");
        printf(GRN"["RE);
        printf("*");
        printf(GRN"] "RE);        
	printf(RED" Press CTRL + z to exit\n\n\n" RE);
	printf("\n         \n");
        printf(GRN"["RE);
        printf("*");
        printf(GRN"] "RE);
        printf(GRN"Choose an option :  " RE);
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf(BLU"Enter 1st number:- "RE);

scanf("%f",&a);

printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf(BLU"Enter 2nd number:- "RE);

scanf("%f",&b);

c=a+b;

printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf("The addition of ");

printf(MAG"%.2f "RE,a);

printf("and ");

printf(MAG"%.2f "RE,b);

printf("is ");

printf(MAG"%.2f .\n"RE,c);

printf("\n         \n");

printf(YEL"\t Coding is fun!!\n"RE);

printf("\n         \n");
char command[50];
strcpy(command, "sleep 5s");
printf("");
system(command);

break;
           case 2:
printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf(BLU"Enter 1st number:- "RE);

scanf("%f",&a);

printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf(BLU"Enter 2nd number:- "RE);

scanf("%f",&b);

c=a-b;

printf("\n         \n");

printf(GRN"["RE);

printf(WHT"*"RE);

printf(GRN"] "RE);

printf("The Subtraction of ");

printf(MAG"%.2f "RE,a);

printf("and ");
printf(MAG"%.2f "RE,b);
printf("is ");
printf(MAG"%.2f .\n"RE,c);
printf("\n         \n");
printf(YEL"\t Coding is fun!!\n"RE);
printf("\n         \n");
char com[50];
strcpy(com, "sleep 5s");
printf("");
system(command);

break;
           case 3:

printf("\n         \n");
printf(GRN"["RE);
printf(WHT"*"RE);
printf(GRN"] "RE);
printf(BLU"Enter 1st  number: "RE);
scanf("%f" , &a);
printf("\n         \n");
printf(GRN"["RE);
printf(WHT"*"RE);
printf(GRN"] "RE);
printf(BLU"Enter 2nd number: "RE);
scanf("%f", &b);
c = a*b;
printf("\n         \n");
printf(GRN"["RE);
printf(WHT"*"RE);
printf(GRN"] "RE);
printf("» The multiplication of"MAG " %.2f"RE" and"MAG" %.2f"RE " is"MAG" %.2f"RE,a,b,c);


break;


          case 4:



printf("Enter dividend: ");
scanf("%d", &e);
printf("Enter divisor: ");
scanf("%d" , &f);
h=e/f;
g=e%f;
printf("»The quotient is %d and reminder is %d",h,g);
                
char and[50];
strcpy(and, "sleep 5s");
printf("");
system(command);


break;

            case 5:
                

printf("   ");


	   } 

 }

   printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
