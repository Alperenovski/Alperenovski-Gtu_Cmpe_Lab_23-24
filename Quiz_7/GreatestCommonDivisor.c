#include <stdio.h>

// EBOB (En Büyük Ortak Bölen)
int ebob(int a, int b) { 
    if (b == 0) 
    {
        return a;
    } 
    else 
    {
        return ebob(b, a % b);
    }
}

// EKOK (En Küçük Ortak Kat)
int ekok(int a, int b) {
    return a * b / ebob(a, b);
}

int main() {
    int sayi1, sayi2;

    printf("Iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    int ebob_sonucu = ebob(sayi1, sayi2);
    int ekok_sonucu = ekok(sayi1, sayi2);

    printf("EBOB: %d\n", ebob_sonucu);
    printf("EKOK: %d\n", ekok_sonucu);

    return 0;
}