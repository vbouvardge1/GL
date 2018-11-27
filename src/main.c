#include "TP_lib_suite.h"

initialiserTirage()
{
unsigned char gagnant[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()};
}

int main (void)
{
	 unsigned char joueur[6]={3,5,20,10,1,6};
	 unsigned char i;
	 unsigned char nbr_gagnant=0;
	 
	 initialiserTirage();
	 for ( i=0;i<6;i++)
	 {
		 if(joueur[0]==gagnant[i])
			 nbr_gagnant=nbr_gagnant+1;
		 if(joueur[1]==gagnant[i])
			 nbr_gagnant=nbr_gagnant+1;
		 if(joueur[2]==gagnant[i])
			 nbr_gagnant=nbr_gagnant+1;
		 if(joueur[3]==gagnant[i])
			 nbr_gagnant=nbr_gagnant+1;
		 if(joueur[4]==gagnant[i])
			 nbr_gagnant=nbr_gagnant+1;
		 if(joueur[5]==gagnant[i])
			 nbr_gagnant=nbr_gagnant+1;
	 }
	 
	 return 0 ;
}
