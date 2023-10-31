#include <stdio.h>
#include <stdlib.h>


// Fonction pour charger les données à partir d'un fichier
char load_data(const char *file_name, int *num_lines) 
{

}

// Fonction pour retourner le nombre de lignes d'un fichier
int file_count(const char *file_name) 
{
    FILE *file = fopen(file_name, "r");
}

// Fonction pour retourner le nombre de champs
int field_count(const char *line, const char *sep) {

}

// Fonction pour afficher la matrice
void display_matrix(int tab[][] , int num_lines, int num_fields) 
{

}

// fonction pour calculer le nombre de points
int calculer_nb_points(int win, int draw)
{

}

// fonction pour calculer la différence de buts
int calculer_diff_buts(int goalsFor, int goalsAgainst)
{

}
// Affiche un texte en utilisant uniquement les trois premières lettres
void afficher_nom_trois_lettres(char str[])
{

}

int main() 
{

    int win 	= 0;
  	int draw 	= 0; 
  	int nbPts 	= 0;
	// ... 
  
 	// calculer le nombre de points
  	nbPts = calculer_nb_points( win, draw);
  	// afficher les points 
  	print("%d pts\n", nbPts);
	
	// calculer le différence de buts


    return 0;
}
