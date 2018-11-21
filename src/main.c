#define seuilb -100
#define seuilh 200
#define N 6
#include <stdlib.h>


int main(void)
{
  unsigned char bin[10]={1,2,3,4,5,6,7,8,9,10};
  int i;
  int sat[10]={rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384};
   unsigned char dist[10]={14,13,11,10,8,7,5,4,2,1};
   unsigned char a[5]={1,5,9,8,11};
   unsigned char b[5];
   unsigned char miroir[N]={0,2,4};
  
   
  
   for (i=0; i<10; i++)
   {
	if (i<5)
		{	bin[i]=1;
		}
	else
	{	bin[i]=0;
	}
   }
   
   for (i=0; i<10 ; i++)
   {
	   if(sat[i]<seuilb)
	   {	sat[i]=seuilb;
	   }
	   else if (sat[i]>seuilh)
	   {	sat[i]=seuilh;
	   }
	   else
		   ;
	}
   
   for (i=0; i<10 ;i++)
   {
	  if(dist[i]!=0)
	  {
	   if( dist[i]<dist[i-1] )
	   {
	 dist[i]=dist[i-1]-dist[i];
	   }
	  else if( dist[i]>dist[i-1])
	  {
	 dist[i]=dist[i]-dist[i-1];
   }
   } } 
   
   for (i=0; i<5 ;i++) 
   {
	   b[i]=a[5-i-1];
   }
   
      for (i=0; i<N/2 ;i++) 
   {
	   miroir[N-i-1]=miroir[i];
   }
		   
		   
	return 0;
}

