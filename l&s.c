#include<stdio.h>
int main()
{
  int a[5],i,n,j,t;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  	    if(a[i]>a[j])
  	
  	{
  		t=a[i];
  		a[i]=a[j];
  		a[j]=t;
  		
  	}
  }
  }
 
 
     printf("l & s %d & %d",a[n-1],a[0]);
   
     return 0;
  }
