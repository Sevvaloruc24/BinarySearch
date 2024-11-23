#include <stdio.h>

// Binary search fonksiyonu
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;

    // Dizi s�ral� olmal�, bu y�zden her defas�nda ortadaki eleman� kontrol et
    while (low <= high) {
        mid = (low + high) / 2;  // Ortadaki eleman� bul

        // E�er target ortadaki elemana e�itse, o zaman bulundu
        if (arr[mid] == target) {
            return mid;  // Eleman bulundu, indexini d�nd�r
        }

        // E�er target ortadaki elemandan k���kse, sa� tarafa git
        if (arr[mid] > target) {
            high = mid - 1;
        }
        // E�er target ortadaki elemandan b�y�kse, sol tarafa git
        else {
            low = mid + 1;
        }
    }

    return -1;  // Eleman bulunamad�ysa -1 d�nd�r
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};  // S�ral� dizi
    int size = sizeof(arr) / sizeof(arr[0]);  // Dizi boyutunu hesapla
    int target;

    // Kullan�c�dan aranacak eleman� al
    printf("Aramak istediginiz sayiyi girin: ");
    scanf("%d", &target);

    // Binary search fonksiyonunu �a��r ve sonucu kontrol et
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("Eleman %d dizide %d. index'te bulundu.\n", target, result);
    } else {
        printf("Eleman dizide bulunamadi.\n");
    }

    return 0;
}

