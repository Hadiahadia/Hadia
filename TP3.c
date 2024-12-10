#include <stdio.h>
#include <stdlib.h>

// تعريف بنية العنصر في القائمة
typedef struct element {
    int val;
    struct element *suivant;
} element;

// دالة لإنشاء قائمة فارغة
element* creer Liste() {
    return NULL;
}

// دالة لإضافة عنصر إلى نهاية القائمة
element* ajouterEnFin(element* liste, int valeur) {
    element* nouveau = (element*)malloc(size of(element));
    nouveau->val = valeur;
    nouveau->suivant = NULL;

    if (liste== NULL) {
        return nouveau;
    }

    element* courant = liste;
    while (courant->suivant != NULL) {
        courant = courant->suivant;
    }
    courant->suivant = nouveau;
    return liste;
}

// دالة لإضافة عنصر إلى بداية القائمة
element* ajouterEnDebut(element* liste, int valeur) {
    element* nouveau = (element*)malloc(sizeof(element));
    nouveau->val = valeur;
    nouveau->suivant = liste;
    return nouveau;
}

// دالة لحذف العنصر الأخير من القائمة
element* supprimerEnFin(element* liste) {
    if (liste == NULL || liste->suivant == NULL) {
        return NULL;
    }

    element* courant = liste;
    while (courant->suivant->suivant != NULL) {
        courant = courant->suivant;
    }
    free(courant->suivant);
    courant->suivant = NULL;
    return liste;
}

// دالة لطباعة عناصر القائمة
void afficherListe(element* liste) {
    element* courant = liste;
    while (courant != NULL) {
        printf("%d -> ", courant->val);
        courant = courant->suivant;
    }
    printf("NULL\n");
}

int main() {
    int Tab[] = {1, 3, 5, 7, 9, 11, 13, 20};
    int tailleTab = sizeof(Tab) / sizeof(Tab[0]);

    element* liste = creerListe();
    for (int i = 0; i < tailleTab; i++) {
        liste = ajouterEnFin(liste, Tab[i]);
    }

    afficherListe(liste);

    liste = supprimerEnFin(liste);
    afficherListe(liste);

    liste = ajouterEnDebut(liste, 40);
    afficherListe(liste);

    return 0;
}
