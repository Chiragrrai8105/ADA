#include<stdio.h>
int min(int,int);
int floyd(int a[10][10],int n)
{
   int i,j,k;
   for(k=1;k<=n;k++)
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
} 
int min(int c,int d)
{
   return(c<d)?c:d;
}    
void main()
{
   int a[10][10],i,j,k,n;
   printf("Enter the no of vertex");
   scanf("%d",&n);
   printf("Enter the adjacency matrix");
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
      
   scanf("%d",&a[i][j]);
    
 
   floyd(a,n);
   printf("\nAll pairs shortest path matrix:\n");
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
      printf("%d\t",a[i][j]);
      printf("\n");
   }
} 
 
        
