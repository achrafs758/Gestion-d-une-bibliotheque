#ifndef LIVRES_H_INCLUDED
#define LIVRES_H_INCLUDED

void AfficherLivres(livre *premier);
/* Cette fonction � pour objective convertir un chaine de caract�res en Majuscule, elle est appel�e � chaque
   saisie d'une chaine par l'utilisateur pour rendre le programme non sensible � la casse */
// Cette fonction retourne vrai si la cote du livre existe dans la bibliotheque et faux sinon
int VerificationCote(livre *premier,int COT);
void AjouterLivre(livre *premier);
void SupprimerLivres(livre *premier);
livre* TransfererLivres();
void RechercherLivre(livre **premier);
void ModifierTitre(livre **premier,int COT);
void ModifierAuteur(livre **premier,int COT);
void ModifierTheme(livre **premier,int COT);
void ModifierEdition(livre **premier,int COT);
void ModifierPrix(livre **premier,int COT);
void ModifierLivre(livre **premier);
void TrierLivre();
int Nb_copies(livre **premier);




#endif // LIVRES_H_INCLUDED
