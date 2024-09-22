#include<stdio.h>

int fun()

{ static int n=0;
 
n++;

return n;

}

int main()

{ printf("%d ",fun());
  
printf("%d ",fun());
  
printf("%d \n",fun());

return 0;

}