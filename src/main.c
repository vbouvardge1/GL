#include "TP_lib_suite.h"



	
int main (void)
{
	
	int j;
	unsigned char i;
	 unsigned char nbr_gagnant, meilleur=0;
	 unsigned char joueur[6]={2,15,26,11,34,4}; 
	 
	for ( j=0; j<100; j++)
	{
	 initialiserTirage();
	 unsigned short gagnant[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()};



	 	 nbr_gagnant=0;
	 
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

	  	 if (nbr_gagnant > meilleur)
		 meilleur = nbr_gagnant;
	 

}
	 

	 return 0 ;
}
		 
