
#include <stdio.h>
#include <stdbool.h>

struct agacdugumu { // �lk �nce, a�a� d���m�n�n yap�s�n� tan�ml�yoruz.
    int k;
    struct agacdugumu* soldugum; // sol alt d���m� tan�mlad�m.
    struct agacdugumu* sagdugum; // sa� alt d���m� tan�mlad�m.
};


bool koktoplam(struct agacdugumu* kok) { // k�k d���m�n�n alt d���mlerinin toplam�n� kontrol eden fonksiyon
    if (kok == NULL) { // k�k d���m NULL ise, alt d���mleri olmad��� i�in toplamlar� da 0'd�r
        return true; // bu y�zden do�rudan true d�nd�r�yoruz
    }

    int toplam = 0;
    if (kok->soldugum != NULL) {  // sol alt d���m NULL de�ilse, de�erini toplama ekliyoruz
        toplam += kok->soldugum->k;
    }
    if (kok->sagdugum != NULL) { // sa� alt d���m NULL de�ilse, de�erini toplama ekliyoruz
        toplam += kok->sagdugum->k;
    }

    if (kok->k == toplam) { // k�k�n de�eri, alt d���mlerin toplam�na e�itse
        return true; 		// true d�nd�r�yoruz
    } else { 				// de�ilse
        return false;		// false d�nd�r�yoruz
    }
}

int main() {
	int kokundegeri,soldugumdegeri,sagdugumdegeri;

    struct agacdugumu* kok = (struct agacdugumu*)malloc(sizeof(struct agacdugumu));  // k�k d���m i�in bellek ayr�ld�
    printf("Lutfen  kok degerini giriniz:\n");
    scanf("%d",&kokundegeri);
    kok->k = kokundegeri; // k�k d���m�n�n de�eri atand�
	
    kok->soldugum = (struct agacdugumu*)malloc(sizeof(struct agacdugumu)); // sol alt d���m i�in bellek ayr�ld�
    printf("Lutfen sol kokun degerini giriniz:\n");
    scanf("%d",&soldugumdegeri);
    kok->soldugum->k = soldugumdegeri; // sol alt d���m�n de�eri atan�yor
    kok->soldugum->soldugum = NULL;// sol alt d���m�n alt d���mleri NULL olarak atan�yor
    kok->soldugum->sagdugum = NULL;

    kok->sagdugum = (struct agacdugumu*)malloc(sizeof(struct agacdugumu)); // sa� alt d���m i�in bellek ayr�ld�
    printf("Lutfen sag kokun degerini giriniz:\n");
    scanf("%d",&sagdugumdegeri);
    kok->sagdugum->k = sagdugumdegeri; // sa� alt d���m�n de�eri atan�yor
    kok->sagdugum->soldugum = NULL; // sa� alt d���m�n alt d���mleri NULL olarak atan�yor
    kok->sagdugum->sagdugum = NULL;

    bool toplam1 = koktoplam(kok);

    if (toplam1) {
        printf("Kokun degeri alt dugumlerinin toplamina esittir.\n");
    } else {
        printf("Kokun degeri alt dugumlerinin toplamina esit degildir.\n");
    }

   
    free(kok->soldugum);
    free(kok->sagdugum);
    free(kok);

    return 0;
}

