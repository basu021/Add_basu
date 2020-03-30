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
    float a,b,c,d,choice;
    unsigned long int fact;

    while(1)
    {
        printf(YEL "\n-----------------------\n" RE);
        printf(MAG "1. Add two integer \n" RE);
        printf(MAG"2. Multiply two numbers\n" RE);
        printf(MAG"3. Division of two numbers\n");
        printf(RED"4. Press CTRL + z to exit\n\n\n" RE);
        printf(WHT"Enter your choice :  " RE);
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                printf(GRN"Enter 1st number: "RE);
                scanf("%f", &a);
 		
		printf("Enter 2nd number: ");
                scanf("%f" ,&b);
                c = a + b; 
                printf("» The addition of %f and %f is %f" , a, b, c); 
                break;
        
            case 2:
                printf("Enter 1st  number: ");
                scanf("%f" , &a);
		printf("Enter 2nd number: ");
		scanf("%d", &b);
		c = a*b;
 		printf("» The multiplication of %f and %f is %f",a,b,c);
                   break;
            
                
            case 3:
           	 printf("Enter dividend: ");
		scanf("%f", &a);
		 
		printf("Enter divisor: ");

		scanf("%f" , &b);

		c=a/b;
		d=a%b;

		printf("»The quotient is %d and reminder is %d",c,d);
                break;
        
            case 4:
                printf("   ");
	   } 
}
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
