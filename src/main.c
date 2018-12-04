#include <userint.h>
#include <ansi_c.h>
int main()
{
	char ligne1[80] = "Nom: pentagonr_B";
	char ligne2[80] = "Nb point: 5";
	char ligne3[80] = "Coordonnees: 10 20 30 20 30 40 43 53 35 10";
	
	char nom_fig[80];
	int nb_pts[1];
	int x[5];
	int y[5];
	int i;
	char msg[80], a[80];
	
	
	sscanf(ligne1,"%*s %s",nom_fig);
	sscanf(ligne2,"%*s %*s %u",nb_pts);
	sscanf(ligne3,"%*s %u %*u %u %*u %u %*u %u %*u %u %*u",&x[0],&x[1],&x[2],&x[3],&x[4]);
	sscanf(ligne3,"%*s %*u %u %*u %u %*u %u %*u %u %*u %u",&y[0],&y[1],&y[2],&y[3],&y[4]);
	
	for(i=0; i<80;i++)
	{
		if (ligne3[41]==0)
		{
		sprintf(msg,"il manque une coordonnee");
		MessagePopup("ERREUR",msg);
		}}
		
	sprintf(a,"la figure %s possede 5 sommets",nom_fig,nb_pts);
	MessagePopup("BRAVO",a);
	
	return 0;
} 