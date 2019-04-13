#include<conio.h>
#include<stdio.h>
int main()
{
 int i,j=0,n,v;
 int m=0,l,t,t1;
 int k;
 int sum=0;
 int o;
 int elements[20];
 int head;   
 int max;  
 int a[7]; 
 int b[2]; 
 int min=0;  
 //clrscr();
 printf("enter number of location\t");
 scanf("%d",&n);
 printf("enter position of head\t");
 scanf("%d",&head);
 printf("enter elements of disk queue\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&elements[i]);
 }
 for(l=0;l<n;l++)
     {
     	if(elements[l]<head)
     	  {
     	  	b[m]=elements[l];
     	  	m++;
		   }
		   
	 }
 printf("\n elements of array b are ");
   for( o=0;o<2;o++)
      {
      	printf("\n%d",b[o]);
	  }
 //storing all the elements greater than head in other array a[]
 for(i=0;i<n;i++)
     {
     	if(elements[i]>head)
     	  {
     	  	a[j]=elements[i];
		   }
		   j++;
	 }
 printf("\n elements of array a are ");
   for( k=1;k<=7;k++)
      {
      	printf("\n%d",a[k]);
	  }
	  
	  
	  printf("\n elements of array b[] after sorting are ");
 for(i=1;i<=1;i++)
    {
    	for(j=1;j<=1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			t=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t;
			}
		}
	 } 
	 for(v=0;v<2;v++)
	  {
	  	printf("\n %d",b[v]);	
		    }
		    printf("\n elements of array a[] after sorting are ");
 for(i=1;i<=6;i++)
    {
    	for(j=1;j<=6;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			t1=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t1;
			}
		}
	 } 
	 for(i=1;i<=7;i++)
	  {
	  	printf("\n %d",a[i]);	
		    }
		    printf("\n enter the value of max");
		    scanf("%d",&max);
		    sum=sum+(max-1)-head+(max-1-min)+(b[1]-min);
		    printf("\nmovement of total cylinders %d",sum);
		    printf("\n %d ",sum);
	
}

