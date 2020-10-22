#include <stdio.h>
#include <conio.h>
void main()
{
   ch grade;
    float s,b=0;
    printf("\n enter salary and grade of employ ");
    scanf("%f",&s);
    fflush(stdin);
    scanf("%c",&grade);
    if(grade=='A'||grade=='a')
    b=b+s*0.1;
    else
      if(grade=='B'||grade=='b')
      b=b+s*0.2; 
    else
     if(grade=='Cgrade=='c)
     b=b+s*0.3;
    else
     b=b+s*0.08;
    printf("bonus = %2f ",b);
    getch();
          
  }

