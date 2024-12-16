#include <stdio.h>
#include <string.h>
#include <stdlib.h>
يدخل شان كلمة //
char *ChargerChaine(int N) {
	char *chaine = (char*)malloc(N+1);تخصيص ذاكرة لحفظ //السلسلة 
	printf("Veuillez saisir la chaine:\n");
	fgets(chaine, N, stdin);قراءة السلسلة من// المستخدم
	chaine[strcspn(chaine, "\n")] = '\0';//ازالة المحرف الجديد الذي تضيفه fgets
	return chaine;// ارجاع المؤشر الى السلسلة 
}
يحسب طول الكلمة شان 
int Longueur(char *ch) {
    int i = 0;
    while (ch[i] != '\0') 
    i++; // يحسب عدد الاحرف حتى نهاية النص
    return i;
}
}
اجراء يملأ الجدول 
void ChargerTab(char *p, char Tab[]) {
    int i = 0; //تقوم بنسخ النص من مؤشر النص (p) الى جدول( tap)
    
while (*p != '\0') {
        Tab[i++] = *p; //تنسخ كل حرف من نص الى جدول
        p++;
    }
    Tab[i] = '\0';        // إاضافة nullفي اخر  الجدول نهايته
}
}
تقلب الجدول 
void InverserTab(char Tab[], char T[], int m) {
	for (int i = 0; i < m; i++) {
    	T[i] = Tab[m-i-1]; // تنسخ النص بالعكس 
	}
}
تظهر النتيجة تاع الجدول 
void AfficherTab(char Tab[], int m) {
	for (int i = 0; i < m; i++) {
    	printf("%c", Tab[i]); // طباعة كل حرف 
	}
	printf("\n"); // سطر جديد بعد الطباعة 
}

int main() {
	int n;
	printf("Veuillez saisir la taille maximale de la chaine:\n");
	scanf("%d", &n); // ادخال الحجم الاقصى للسلسلة 
	
char *ch = ChargerChaine(n); // استدعاء وظيفة ادخال النص 
	int m = Longueur(ch); // حساب طول النص 

	char Tab[m], T[m]; //تعريف جدولين بحجم النص (المقلوب والاصلي )
	ChargerTab(ch, Tab);// نسخ النص الى جدول 
	printf("La chaine originale: \n");
	AfficherTab(Tab, m); // طباعة النص الاصلي 
	InverserTab(Tab, T, m);// عكس النص 
	printf("La chaine inversée:\n");
	AfficherTab(T, m);// طباعة النص المقلوب 
	free(ch); // تحرير الذاكرة المحجوزة باستخدام 
	return 0;
}
