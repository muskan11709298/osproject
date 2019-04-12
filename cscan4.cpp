#include<conio.h>
#include<stdio.h>
int main()
{
 int elements[]={86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130};
   
  int disk=143;
   int max=4999;
    int min=0;
     int sum=0;
     int sum2=0;
    
     int ct1;
     int ct;
     int i=0;
    for(i=0;i<9;i++)
      {
      	 
     if(elements[i]>=disk)
          {
          	
          	ct++;
          }
      }}
      int b[]=new int[ct];
      for(int i=0;i<9;i++)
            {
            	
			if(elements[i]>=disk)
            {

          b[i]=elements[i];
             }
         }
         for(int i=0;i<9;i++)
      {
      	 
     if(elements[i]<=disk)
          {
          	ct1++;
          }
      }}
      int a[ct1];
      for(int i=0;i<9;i++)
            {
            	
			if(elements[i]<=disk)
            {

          a[i]=elements[i];
             }
         }
      int c=(b.length)-1;
	int d=(a.length)-1;
	  
	    for(i=0;i<n-1;i++)
	      {
	      	 for(j=0;j<n-1;i++)
	      	   {
	      	   	if(b[j]>b[j+1])
	      	   	  {
	      	   	  	t=b[j];
	      	   	  	b[j]=b[j+1];
				b[j+1]=t;					   
				 }
		  }}
		  for(i=0;i<n-1;i++)
	      {
	      	 for(j=0;j<n-1;i++)
	      	   {
	      	   	if(a[j]>a[j+1])
	      	   	  {
	      	   	  	t=a[j];
	      	   	  	a[j]=a[j+1];
				a[j+1]=t;					   
				 }
		      }
		  }
		  int sum=sum+max-b[0];
		  int sum2=sum2+sum1+max-min+a[d-1]-min;
		  printf("%d",sum2);
	}
      
