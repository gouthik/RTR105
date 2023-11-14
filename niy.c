#include<stdio.h>
#include<math.h>
void main()
{
double x=0,y,a,s;
int k=0;
y=esp(x);
printf("y=esp%.2f\n",x,y);
a=x/k;
s=a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,s);
while(k<3)
{
k++;
a=x/k;
s=s+a;
printf("%2f\t%8.2f\t%8.2f\n",x,a,s);
}
}

