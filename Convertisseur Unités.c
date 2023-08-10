#include <stdio.h>
#include <stdlib.h>

void Temperature()
{
    float Resultat;
    char Symbole;
    float Valeur;
    printf("Menu Temperature\n");
    printf("Entrer F pour Fahrenheit -> Degres Celcius\n");
    printf("Entrer D pour Degres Celcius -> Fahrenheit\n");
    fflush(stdin);
    scanf("%c",&Symbole);
    if(Symbole=='F' || Symbole=='f')
    {
        printf("Quelle valeur en Fahrenheit ?\n");
        scanf("%f",&Valeur);
        Resultat=((Valeur-32)*(5.0/9.0));
        printf("En degres,cela donne %.2f degres\n",Resultat);
    }
    else if(Symbole=='D' || Symbole=='d')
    {
        printf("Quelle valeur en Degres Celcius\n");
        scanf("%f",&Valeur);
        Resultat=((9.0/5.0)*Valeur+32);
        printf("En Fahrenheit,cela donne %.2f\n",Resultat);
    }
    printf("\n");
}

void Monnaie()
{
    float Resultat;
    char Symbole;
    float Valeur;
    printf("Menu Monnaie\n");
    printf("Entrer E pour Euro -> DollarsUS\n");
    printf("Entrer $ pour DollarsUS -> Euro\n");
    printf("Entrer £ pour Euro -> LivresGB\n");
    fflush(stdin);
    scanf("%c",&Symbole);
    if(Symbole=='E' || Symbole=='e')
    {
        printf("Saisir le montant d'Euros\n");
        scanf("%f",&Valeur);
        Resultat=Valeur*1.09830;
        printf("Le montant saisi vaut %.2f Dollars US\n",Resultat);
    }
    else if(Symbole=='$')
    {
        printf("Saisir le montant de Dollars US\n");
        scanf("%f",&Valeur);
        Resultat=Valeur*0.87;
        printf("Le montant saisi vaut %.2f Euros\n",Resultat);
    }
    else if(Symbole=='L' ||Symbole=='l')
    {
        printf("Veuillez saisir le montant en Euros\n");
        scanf("%f",&Valeur);
        Resultat=Valeur*0.8252;
        printf("Le montant saisi vaut %.2f Livres Sterling\n",Resultat);
    }
    printf("\n");
}

float Masse()
{
    float Resultat;
    char Symbole;
    float Valeur;
    printf("Menu Masse\n");
    printf("Entrer G pour Grammes -> Pounds\n");
    printf("Entrer O pour Ounce -> Pounds\n");
    fflush(stdin);
    scanf("%c",&Symbole);
    if(Symbole=='G' ||Symbole=='g')
    {
        printf("Saisir le nombre de grammes\n");
        scanf("%f",&Valeur);
        Resultat=Valeur*0.00220462;
        printf("Le nombre saisi vaut %.2f pounds\n",Resultat);
    }
    else if(Symbole=='O' ||Symbole=='o')
    {
        printf("Saisir le nombre de Ounce\n");
        scanf("%f",&Valeur);
        Resultat=Valeur*0.0625;
        printf("Le montant saisi vaut %.2f pounds\n",Resultat);
    }
    printf("\n");
}
int main()
{
    int choixType=0;
    float ResultatTemperature=0;
    float ResultatMonnaie=0;
    do{
        printf("                       ************************************\n");
        printf("                Bienvenue dans le convertisseur d'uniter de mesure\n");
        printf("1. Temperature\n");
        printf("2. Monnaie\n");
        printf("3. Masse\n");
        printf("Que voulez vous ?\n");
        scanf("%d",&choixType);
        printf("\n");
        switch(choixType)
        {
            case 1:
            Temperature();
            break;
            case 2:
            Monnaie();
            break;
            case 3:
            Masse();
            break;
            default:
            return 0;
            break;
        }
    }while(choixType!=4);
    return 0;
}
