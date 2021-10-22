#include<stdio.h>
#include<conio.h>
main()
{
      printf("*************SIMPLE CALCULATOR**************");
      int add,sub,mul,div,a,b,c;
      printf("\n 1: ADDITION");
      printf("\n 2: SUBTRACTION");
      printf("\n 3: MULTIPLICATION");
      printf("\n 4: DIVISION");
      printf("\n ENTER YOUR SELECTION:");
      scanf("%d",&c);
      printf("\n ENTER FIRST NUMBER:");
      scanf("%d",&a);
       printf("\n ENTER SECOND NUMBER:");
      scanf("%d",&b);
      add=a+b;
      sub=a-b; 
      mul=a*b;
      div=a/b;
      if(c==1)
      printf("\nAddition of the two numbers is:%d",add);
      else
      if(c==2)
      printf("\nSubtraction of the two numbers is:%d",sub);
      else
      if(c==3)
      printf("\nMultiplication of the two numbers is:%d",mul);
      else
      if(c==4)
      printf("\nDivision of the two numbers is:%d",div);
      getch();
      }

