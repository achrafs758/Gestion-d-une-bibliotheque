#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED

typedef enum {
    faux, //0
    vrai //1
}Bool;

typedef struct {
    int jour;
    int mois;
    int annee;
}Date;

struct Livre{
    int cote; // Num�ro s�quentiel du livre
    char titre[60]; // Il ne faut pas oublier que le titre d'un livre peut etre assez long
    char auteur[50];
    char theme[25]; // Le th�me du live : la physique, l'informatique .....
    int edition; // L'ann�e de l'�dition du livre, il est entre 1980 et 2020
    double prix;
    struct Livre *suiv;
};
typedef struct Livre livre;

typedef struct Inscrit
{
    int id; // num�ro d�ordre attribu� � la premi�re inscription
    char nom[25];
    char prenom[25];
    char adresse[60]; // Adresse de l'inscrit
    long tel;
    struct Inscrit *suiv;
} inscrit;

// Un lecteur doit obligatoirement etre inscrit pour pouvoir emprunter un livre

typedef struct Emprunt{
    int COTE;
    int ID;
    Date emprunt;
    Date retour;
    int penalite;
    struct Emprunt *suiv;
}Emprunt;

// Un emprunteur n'a le droit d'emprunter qu'un seul livre


#endif // STRUCTURE_H_INCLUDED
