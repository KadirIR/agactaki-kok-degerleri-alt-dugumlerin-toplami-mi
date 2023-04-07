
#include <stdio.h>
#include <stdbool.h>

struct agacdugumu { // Ýlk önce, aðaç düðümünün yapýsýný tanýmlýyoruz.
    int k;
    struct agacdugumu* soldugum; // sol alt düðümü tanýmladým.
    struct agacdugumu* sagdugum; // sað alt düðümü tanýmladým.
};


bool koktoplam(struct agacdugumu* kok) { // kök düðümünün alt düðümlerinin toplamýný kontrol eden fonksiyon
    if (kok == NULL) { // kök düðüm NULL ise, alt düðümleri olmadýðý için toplamlarý da 0'dýr
        return true; // bu yüzden doðrudan true döndürüyoruz
    }

    int toplam = 0;
    if (kok->soldugum != NULL) {  // sol alt düðüm NULL deðilse, deðerini toplama ekliyoruz
        toplam += kok->soldugum->k;
    }
    if (kok->sagdugum != NULL) { // sað alt düðüm NULL deðilse, deðerini toplama ekliyoruz
        toplam += kok->sagdugum->k;
    }

    if (kok->k == toplam) { // kökün deðeri, alt düðümlerin toplamýna eþitse
        return true; 		// true döndürüyoruz
    } else { 				// deðilse
        return false;		// false döndürüyoruz
    }
}

int main() {
	int kokundegeri,soldugumdegeri,sagdugumdegeri;

    struct agacdugumu* kok = (struct agacdugumu*)malloc(sizeof(struct agacdugumu));  // kök düðüm için bellek ayrýldý
    printf("Lutfen  kok degerini giriniz:\n");
    scanf("%d",&kokundegeri);
    kok->k = kokundegeri; // kök düðümünün deðeri atandý
	
    kok->soldugum = (struct agacdugumu*)malloc(sizeof(struct agacdugumu)); // sol alt düðüm için bellek ayrýldý
    printf("Lutfen sol kokun degerini giriniz:\n");
    scanf("%d",&soldugumdegeri);
    kok->soldugum->k = soldugumdegeri; // sol alt düðümün deðeri atanýyor
    kok->soldugum->soldugum = NULL;// sol alt düðümün alt düðümleri NULL olarak atanýyor
    kok->soldugum->sagdugum = NULL;

    kok->sagdugum = (struct agacdugumu*)malloc(sizeof(struct agacdugumu)); // sað alt düðüm için bellek ayrýldý
    printf("Lutfen sag kokun degerini giriniz:\n");
    scanf("%d",&sagdugumdegeri);
    kok->sagdugum->k = sagdugumdegeri; // sað alt düðümün deðeri atanýyor
    kok->sagdugum->soldugum = NULL; // sað alt düðümün alt düðümleri NULL olarak atanýyor
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

