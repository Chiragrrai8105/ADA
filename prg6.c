#include<stdio.h>
void main()
{
   int i,j;
   float m,p[10],w[10],ratio[10],temp,total,n;
   printf("Enter the number of products");
   scanf("%f",&n);
   printf("Enter the bag capacity");
   scanf("%f",&m);
   printf("Enter the profit");
   for(int i=0;i<n;i++)
   {
   	scanf("%f",&p[i]);
   }
   printf("Enter the weight");
   for(int i=0;i<n;i++)
   {
   	scanf("%f",&w[i]);
   }
   for(int i=0;i<n;i++)
   {
      ratio[i]=p[i]/w[i];
   }
   for(int i=0;i<n;i++)
   for(int j=i+1;j<n;j++)
   {
   	temp=ratio[j];
   	ratio[j]=ratio[i];
   	ratio[i]=temp;
   	
   	temp=w[j];
   	w[j]=w[i];
        w[i]=temp;

	temp=p[j];
   	p[j]=p[i];
        p[i]=temp;
   }
   printf("knapsack problems using greedy algorithm\n");
   for(int i=0;i<n;i++)
   {
   	if(w[i]>m)break;
   	else
   	{
   		total=total+p[i];
   		m=m-w[i];
   	}
   }
   if(i<n)
   {
   	total=total+(ratio[i]*m);
   }
   printf("the maximum profit is %f",total);			
 }  		
        
   	  
   	
   
