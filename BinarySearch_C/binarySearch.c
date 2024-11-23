#include <stdio.h>

// Binary search fonksiyonu
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;

    // Dizi sýralý olmalý, bu yüzden her defasýnda ortadaki elemaný kontrol et
    while (low <= high) {
        mid = (low + high) / 2;  // Ortadaki elemaný bul

        // Eðer target ortadaki elemana eþitse, o zaman bulundu
        if (arr[mid] == target) {
            return mid;  // Eleman bulundu, indexini döndür
        }

        // Eðer target ortadaki elemandan küçükse, sað tarafa git
        if (arr[mid] > target) {
            high = mid - 1;
        }
        // Eðer target ortadaki elemandan büyükse, sol tarafa git
        else {
            low = mid + 1;
        }
    }

    return -1;  // Eleman bulunamadýysa -1 döndür
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};  // Sýralý dizi
    int size = sizeof(arr) / sizeof(arr[0]);  // Dizi boyutunu hesapla
    int target;

    // Kullanýcýdan aranacak elemaný al
    printf("Aramak istediginiz sayiyi girin: ");
    scanf("%d", &target);

    // Binary search fonksiyonunu çaðýr ve sonucu kontrol et
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("Eleman %d dizide %d. index'te bulundu.\n", target, result);
    } else {
        printf("Eleman dizide bulunamadi.\n");
    }

    return 0;
}

