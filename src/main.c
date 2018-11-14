#include "TP_lib.h"

int main (void)
{
	int short total, val;
	val=LancerDe();
	while(val>1)
	{
		if(val==2 || val==4 || val==6)
		total=total+val;
		else if(val==3)
		total=total*2;
		else if(val==5 && total>0)
		total=total-2;
	}
	
	return 0;
}
