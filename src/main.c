#include "my_header.h"
#include <math.h>
#include <stdlib.h>

int main(void)
{
     int long S2=0,S3=0,S4=0;
	 int n2=0,n3=0,n4=1;
	 int a=((rand())%10)+1;
	 int c=1;
	  
	  
	 while(S2<9876){
    S2=S2+3*n2;
    n2=n2+1; 
	 }
	 

	while(n3<12) {
		S3=S3+a;
		n3=n3+1;
	}

	   
	 while(n4<20){
		if(c%3==0 || c%7==0){
			S4=S4+c;
			c=c+1;
			n4=n4+1;
	  }
	  else
		  c=c+1;
	 }
	  
    return 0;
}
