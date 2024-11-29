#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int A[10][10],B[10][10],C[10][10],p,q,r,s,i,j,k;    
printf("enter the number of rows and coloums of first matrix : ");    
scanf("%d %d",&p,&q);    
printf("enter the number of rows and coloums of second matrix : ");    
scanf("%d %d",&r,&s);
if(q!=r)
{    
printf("multiplication is not possible.\n");
}
else
{
printf("enter the first matrix element:\n");    
for(i=0;i<p;i++)    
{    
for(j=0;j<q;j++)    
{    
scanf("%d",&A[i][j]);    
}    
}    
printf("enter the second matrix element: \n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<s;j++)    
{    
scanf("%d",&B[i][j]);    
}    
}    
    
printf("Resultant matrix\n");    
for(i=0;i<p;i++)    
{    
for(j=0;j<s;j++)    
{    
C[i][j]=0;    
for(k=0;k<q;k++)  
{    
C[i][j]+=A[i][k]*B[k][j];    
}    
}    
} 
for(i=0;i<p;i++)    
{    
for(j=0;j<s;j++)    
{    
printf("%d\t",C[i][j]);    
}    
printf("\n");    
}    
}
return 0;  
}  
