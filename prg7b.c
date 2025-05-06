#include<stdio.h>
int warshall(int a[10][10],int n)
{
   int i,j,k;
   for(k=1;k<=n;k++)
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
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
    
 
   warshall(a,n);
   printf("\nAll pairs shortest path matrix:\n");
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
      printf("%d\t",a[i][j]);
      printf("\n");
   }
} 
 
        
