/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomArray(int arr[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

void printArray(int arr[], int n) {
    printf("Mảng vừa tạo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void timMaxMin(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i]; //
        }
    }

    printf("=> Giá trị lớn nhất (Max): %d\n", max);
    printf("=> Giá trị nhỏ nhất (Min): %d\n", min);
}

int main() {
    int n;
    srand(time(NULL));

    printf("Nhập số lượng phần tử n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Số lượng phần tử không hợp lệ!\n");
        return 0;
    }

    int arr[n];
    randomArray(arr, n, 1, 100);
    printArray(arr, n);
    timMaxMin(arr, n);
    return 0;
}