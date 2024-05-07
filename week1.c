// Değişkenlerin Tanımlanması - Example 1
#include <stdio.h>

int main() {
    // int: Tam sayı
    int tamSayi = 42;

    // float: Ondalıklı sayı (tek hassasiyet)
    float ondalikliSayi = 3.14f;

    // double: Ondalıklı sayı (çift hassasiyet)
    double ciftHassasiyetliSayi = 2.71828;

    // char: Tek karakter
    char karakter = 'A';

    // Dizge (string) yerine karakter dizisi kullanılır
    char metin[] = "Merhaba, dunya!";

    // bool: Mantıksal değer (true/false)
    // C dilinde bool veri türü yoktur. Mantıksal değerleri int olarak tutabiliriz.
    int dogruMu = 1; // true için 1, false için 0

    // Değişken değerlerini ekrana yazdırma
    printf("Tam Sayi: %d\n", tamSayi);
    printf("Ondalikli Sayi: %f\n", ondalikliSayi);
    printf("Cift Hassasiyetli Sayi: %lf\n", ciftHassasiyetliSayi);
    printf("Metin: %s\n", metin);
    printf("Mantiksal Deger: %s\n", dogruMu ? "true" : "false");
    printf("Karakter: %c\n", karakter);

    return 0;
}

// İf-Else Koşullarının Tanımlanması - Example 2

#include <stdio.h>

int main() {
    // Kullanıcıdan bir sayı girişi istenir
    printf("Bir sayi giriniz: ");
    int sayi;
    scanf("%d", &sayi);

    // if-else if-else yapısı kullanılarak karar verme
    if (sayi > 0) {
        printf("Girilen sayi pozitif.\n");
    } else if (sayi < 0) {
        printf("Girilen sayi negatif.\n");
    } else {
        printf("Girilen sayi sifir.\n");
    }

    return 0;
}

// For ve Switch-Case Yapılarının Tanımlanması - Example 3
#include <stdio.h>

int main() {
    // for döngüsü ile sayıları ekrana yazdırma
    printf("For Döngüsü İle Sayıları Yazdırma:\n");
    for (int i = 1; i <= 5; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    // Kullanıcının seçtiği sayıya göre switch-case yapısı
    printf("Bir sayı giriniz (1-3 arasında): ");
    int kullaniciSecimi;
    scanf("%d", &kullaniciSecimi);

    switch (kullaniciSecimi) {
        case 1:
            printf("Birinci durum seçildi.\n");
            break;
        case 2:
            printf("İkinci durum seçildi.\n");
            break;
        case 3:
            printf("Üçüncü durum seçildi.\n");
            break;
        default:
            printf("Geçersiz giriş. 1-3 arasında bir sayı giriniz.\n");
    }

    return 0;
}


// Dizilere Giriş - Example 4

#include <stdio.h>

int main() {
    // Dizi tanımlama
    int sayilar[5] = {1, 2, 3, 4, 5};

    // Dizi elemanlarına erişim
    for (int i = 0; i < 5; ++i) {
        printf("sayilar[%d] = %d\n", i, sayilar[i]);
    }

    return 0;
}


// Sizeof ile İleri Algoritma - Example 5

#include <stdio.h>

int main() {
    // Dizi tanımlama
    double notlar[] = {75.5, 80.0, 90.5, 85.0, 88.5};

    // Dizi boyutunu öğrenme
    int dizininBoyutu = sizeof(notlar) / sizeof(notlar[0]);

    // Dizi elemanlarına erişim ve toplam hesaplama
    double toplam = 0.0;
    for (int i = 0; i < dizininBoyutu; ++i) {
        printf("notlar[%d] = %.1lf\n", i, notlar[i]);
        toplam += notlar[i];
    }

    // Ortalama hesaplama ve ekrana yazdırma
    double ortalama = toplam / dizininBoyutu;
    printf("Not Ortalamasi: %.1lf\n", ortalama);

    return 0;
}



