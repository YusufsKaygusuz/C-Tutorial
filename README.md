# C-Tutorial

## 📚 İçindekiler
| Ders | Ders İçerik                             |
|-------|--------------------------------------------|
| 📆 Ders 1 | [**Değişkenlerin Tanımlanması**](#ders-1-değişkenlerin-tanımlanması) |

## Ders 1: Değişkenlerin Tanımlanması

<h2>Veri Türleri</h2>

<p>int: Tam sayı türüdür. Örneğin: 42</p>
<p>float: Ondalıklı sayı türüdür, tek hassasiyete sahiptir. Örneğin: 3.14</p>
<p>double: Ondalıklı sayı türüdür, çift hassasiyete sahiptir. Örneğin: 2.71828</p>
<p>char: Tek karakter türüdür. Örneğin: 'A'</p>
<p>char[]: Karakter dizisi veya string olarak kullanılır. Örneğin: "Merhaba, dunya!"</p>
<p>bool: Mantıksal değerler için kullanılır. C dilinde doğrudan bool türü yoktur, genellikle int olarak temsil edilir. Örneğin: 1 (true) veya 0 (false)</p>

```c
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
```

<h2>Pozitif, Negatif veya Sıfırı Belirleme</h2>
Bu basit C programı, kullanıcıdan alınan bir sayının pozitif, negatif veya sıfır olduğunu belirler.

<h3>Program İşleyişi</h3>

<p>Kullanıcıya bir sayı girmesi istenir.</p>
<p>Girilen sayı değeri kontrol edilir:</p>
<p>Eğer sayı pozitifse, "Girilen sayı pozitif." mesajı yazdırılır.</p>
<p>Eğer sayı negatifse, "Girilen sayı negatif." mesajı yazdırılır.</p>
<p>Eğer sayı sıfırsa, "Girilen sayı sıfır." mesajı yazdırılır.</p>



<h2>İf-Else Koşullarının Tanımlanması</h2>

```c
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
```



<h2>For ve Switch-Case Kullanımı</h2>

Bu basit C programı, for döngüsü kullanarak belirli bir aralıktaki sayıları ekrana yazdırmayı ve kullanıcının girdiği sayıya göre switch-case yapısıyla farklı durumları işlemeyi gösterir.

<h3>Program İşleyişi</h3>

For Döngüsü İle Sayıları Yazdırma:
<p>Program, 1'den 5'e kadar olan sayıları for döngüsü kullanarak ekrana yazdırır.</p>
<p>Kullanıcının Seçtiği Sayıya Göre switch-case Yapısı:</p>
<p>Kullanıcıdan bir sayı girmesi istenir.</p>
<p>Girilen sayıya göre switch-case yapısı kullanılarak farklı durumlar işlenir:</p>
<p>Eğer kullanıcı 1'i seçerse, "Birinci durum seçildi." mesajı yazdırılır.</p>
<p>Eğer kullanıcı 2'yi seçerse, "İkinci durum seçildi." mesajı yazdırılır.</p>
<p>Eğer kullanıcı 3'ü seçerse, "Üçüncü durum seçildi." mesajı yazdırılır.</p>
<p>Eğer kullanıcı 1-3 aralığında bir sayı girmemişse, "Geçersiz giriş. 1-3 arasında bir sayı giriniz." mesajı yazdırılır.</p>


```c
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
```

<h2>Dizilere Giriş</h2>

```c
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
```

<h2>Sizeof ile İleri Algoritma</h2>

<h3>Program İşleyişi</h3>

Dizi Tanımlama:
<p>Program, 5 adet double türünden oluşan bir dizi tanımlar ve notları içine atar.</p>
<p>Dizi Boyutunu Öğrenme:</p>
<p>sizeof() işlevi kullanılarak dizinin boyutu hesaplanır.</p>
<p>Dizi Elemanlarına Erişim ve Toplam Hesaplama:</p>
<p>for döngüsü kullanılarak dizideki her bir elemana erişilir ve ekrana yazdırılır.</p>
<p>Her elemanın değeri toplam değişkenine eklenir.</p>
<p>Ortalama Hesaplama ve Ekrana Yazdırma:</p>
<p>Toplam değer dizinin boyutuna bölünerek ortalama hesaplanır ve ekrana yazdırılır.</p>

```c
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
```





