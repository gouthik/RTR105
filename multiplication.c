#include <stdio.h>
  int main()
   {
      unsigned char a;
      char b, c; 
        printf("enter the dec number: \n");
        scanf("%d", &a);
        printf("output: \n");
        printf("From (DEC)%d to (BIN)",a);
          
  for(b = 7; b >= 0; b--)
  {
     c = a >> b;
     if(c & 1)
       printf("1");
     else
       printf("0");
  }
     printf("\n");
  return 0; 
}
