//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <koolplot.h>
//#include <Plotstream.h>
//#include <sstream>
#define PI 3.14159265358979323846

int main() 
{
    int i;
	char greeting[]="hello";
	char greeting2[]="world";
	char *message[2];
    
    double *x[2];
    double x1[100], x2[100];
    
    x[0]=x1;
    x[1]=x2;
	
    for(i=0; i<100; i++)
    {
        x1[i]=sin(2*PI*i*0.01);
        x2[i]=cos(2*PI*i*0.01);
    }
	message[0]=greeting;
	message[1]=greeting2;
	
	
	printf("%s\n%s\n",message[0], message[1]);
    printf("%f\n",x[1][0]);

return 0;
}