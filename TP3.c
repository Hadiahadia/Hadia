#include <stdio.h>
#include <stdlib.h>

// تعريف بنية العنصر في القائمة
typedef struct element {
    int val; // القيمة التي تخزنها العقدة 
    struct element *suivant;// مؤشر الى العقدة التالية 
} element;

// دالة لإنشاء قائمة فارغة
element* creerListe() {
return NULL;// ترجع المؤشر للقائمة الفارغة 
}

// دالة لإضافة عنصر إلى نهاية القائمة
element* ajouterEnFin(element* liste, int n) {
    element* nouveau = (element*)malloc(sizeof(element)); // تخصيص ذاكرة لعقدة جديدة 
    nouveau->val= n; // وضع القيمة الجديدة 
    nouveau->suivant = NULL;// نهاية القائمة تشير الى null

    if (liste== NULL) { // اذا كانت القائمة فارغة 
        return nouveau;// العنصر الجديد يصبح العقدة الاولى 
    }
    element* courant = liste;// البدء من العقدة الاولى 
    while (courant->suivant != NULL) {
        courant = courant->suivant;// الانتقال الى العقدة الاخيرة 
    }
    courant->suivant = nouveau;// اضافة العقدة الجديدة في النهاية 
    return liste;
}

// دالة لإضافة عنصر إلى بداية القائمة
element* ajouterEnDebut(element* liste, int valeur) {
    element* nouveau = (element*)malloc(sizeof(element));//تخصيص ذاكرة لعقدة جديدة 
    nouveau->val = valeur;//وضع القيمة الجديدة 
    nouveau->suivant = liste;// تشير العقدة الجديدة الى العقدة الجديدة تصبح الاولى 
    return nouveau; العقدة الجديدة تصبح الاولى 
}

// دالة لحذف العنصر الأخير من القائمة
element* supprimerEnFin(element* liste) {
    if (liste == NULL || liste->suivant == NULL) {
        return NULL;// اذا كانت القائمة فارغة او بها عنصر واحد تعاد كقائمة فارغة 
    }

    element* courant = liste;// البدء من العقدة الاولى 
    while (courant->suivant->suivant != NULL) {
        courant = courant->suivant;// الانتقال الى العقدة قبل الاخيرة 
    }
    free(courant->suivant);//تحرير ذاكرة العقدة الاخيرة 
    courant->suivant = NULL;// العقدة قبل الاخيرة تصبح النهاية 
    return liste;
}

// دالة لطباعة عناصر القائمة
void afficherListe(element* liste) {
    element* courant = liste;// البدء من العقدة الاولى 
    while (courant != NULL) {
        printf("%d -> ", courant->val);// طباعة القيمة الحالية 
        courant = courant->suivant;// الانتقال الى العقدة التالية 
    }
    printf("NULL\n");// تشير الى نهاية القائمة 
}

int main() {
    int Tab[] = {1, 3, 5, 7, 9, 11, 13, 20};
    int tailleTab = sizeof(Tab) / sizeof(Tab[0]);//حساب عدد العناصر في المصفوفة 

    element* liste = creerListe();// انشاء قائمة فارغة 
    for (int i = 0; i < tailleTab; i++) {
        liste = ajouterEnFin(liste, Tab[i]);// اضافة عناصر المصفوفة الى نهاية القائمة 
    }

    afficherListe(liste);// تطبع القيمة الموجودة في القائمة 

    liste = supprimerEnFin(liste);// يتم حذف العنصر الاخير من القائمة وطباعة القائمة بعد الحذف
    afficherListe(liste);

    liste = ajouterEnDebut(liste, 40);
    afficherListe(liste);// يتم اضافة الرقم 40 الى بداية القائمة وطباعة القائمة بعد الاضافة 

    return 0;
}
