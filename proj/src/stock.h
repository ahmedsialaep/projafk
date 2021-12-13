#include<gtk/gtk.h>
typedef struct {
int jour;
int moins;
int annee;
}Date;
typedef struct {
char identifiant[20];
char nom[20];
char prix[20];
int quantite;
Date date;
char place[20];
}stock;

void Add_Product(stock p);
void Display_Stock(GtkWidget *list,char *filename);
void delete_Product(stock p1,char *filename);
stock search_product(char iden[],char *filename,int *v);
void modifier(stock b,char *fichier);
void verif_empty(stock p);
