#include <userint.h>
#include <ansi_c.h>

int main (void)
{ 
	char phrase[100];
	char prenom [100];
	char nom [100];
	char msg[100];
	long unsigned int age;
	long unsigned int annee;



scanf("%s %s %lu" ,prenom,nom,&annee);

age=2018-annee;

printf("je m'appelle %s %s et j'ai %lu ans",prenom,nom,age);

sprintf(msg,"je m'appelle %s %s et j'ai %lu ans",prenom,nom,age);
MessagePopup("Bonjour",msg); 




return 0 ;
}
