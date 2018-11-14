#include "TP_lib.h" //inclu bibliotheque TP_lib

void main (void)	// initialise le programme
{
	short resultat, i=0; // defini les variables resultat et i sur 2octet avec i=0
	while(i<10) // lance une boucle tant que i<10
	{
		resultat=LancerDe(); // resultat prend la valeur de la fonction LancerDe()
		i++;// la nouvelle valeur de i sera i+1
	}
}
