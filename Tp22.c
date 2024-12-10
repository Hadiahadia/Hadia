#include <stdio.h>
#include <string.h>
#include <stdlib.h>
يدخل شان كلمة 
char *ChargerChaine(int N) {
	char *chaine = (char*)malloc(N+1);
	printf("Veuillez saisir la chaine:\n");
	fgets(chaine, N, stdin);
	chaine[strcspn(chaine, "\n")] = '\0';
	return chaine;
}
يحسب طول الكلمة شان 
int Longueur(char *ch) {
    int i = 0;
    while (ch[i] != '\0') 
    i++;
    return i;
}
}
اجراء يملأ الجدول 
void ChargerTab(char *p, char Tab[]) {
    int i = 0;
    while (*p != '\0') {
        Tab[i++] = *p;
        p++;
    }
    Tab[i] = '\0';        // إاضافة nullفي اخر الجدول
}
}
تقلب الجدول 
void InverserTab(char Tab[], char T[], int m) {
	for (int i = 0; i < m; i++) {
    	T[i] = Tab[m-i-1];
	}
}
تظهر النتيجة تاع الجدول 
void AfficherTab(char Tab[], int m) {
	for (int i = 0; i < m; i++) {
    	printf("%c", Tab[i]);
	}
	printf("\n");
}

int main() {
	int n;
	printf("Veuillez saisir la taille maximale de la chaine:\n");
	scanf("%d", &n);
	char *ch = ChargerChaine(n);
	int m = Longueur(ch);
	char Tab[m], T[m];
	ChargerTab(ch, Tab);
	printf("La chaine originale: \n");
	AfficherTab(Tab, m);
	InverserTab(Tab, T, m);
	printf("La chaine inversée:\n");
	AfficherTab(T, m);
	free(ch);
	return 0;
}
