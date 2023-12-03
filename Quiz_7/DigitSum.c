#include <stdio.h>

// Recursive olarak sayının rakamlarını toplayan fonksiyon
int toplamRakamlar(int sayi) {
    if (sayi == 0) {
        return 0; // Temel durum: sayı sıfırsa toplam da sıfırdır
    } else {
        return (sayi % 10) + toplamRakamlar(sayi / 10);
        // Son basamağı al ve geri kalanı ile fonksiyonu çağır
    }
}

int main() {
    // Örnek kullanım
    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    int sonuc = toplamRakamlar(sayi);
    printf("Sayinin rakamlarinin toplami: %d\n", sonuc);

    return 0;
}