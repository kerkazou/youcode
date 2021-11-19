#include <stdio.h>

int main()
{
    int Annee,a,b,BS,Mois,Jours,Heurs,Minutes,Secondes;
    printf("prenais une année qui vous convertie :\n");
    scanf("%d",&Annee);
    a = Annee%4;
    b = a%100;
    BS = b%400;
    if (BS==0){
        printf("L'année qui vous chousire est une année bissextile.\n");
        printf("Mois = %d\n",Mois = 12);
        printf("Jours = %d\n",Jours =((6*30)+(6*31))-1);
        printf("Heurs = %d\n",Heurs = Jours*24);
        printf("Minutes = %d\n",Minutes =Heurs*60);
        printf("Secondes = %d\n",Secondes =Minutes*60);
    }
    else {
        printf("L'année qui vous chousire est une année simple.\n");
        printf("Mois = %d\n",Mois = 12);
        printf("Jours = %d\n",Jours =(6*30)+(6*31));
        printf("Heurs = %d\n",Heurs = Jours*24);
        printf("Minutes = %d\n",Minutes =Heurs*60);
        printf("Secondes = %d\n",Secondes =Minutes*60);
    }
    return 0;
}