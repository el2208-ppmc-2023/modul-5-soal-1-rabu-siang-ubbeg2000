/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int sortingNilai(int n, int arr[]){
    int temp[n];
    if (n == 0){
        return arr[n];
    }
    for (int i = n - 2; i >= 0; i--){
        if (arr[n-1] > arr[i]){
            temp[i] = arr[n-1];
            arr[n-1] = arr[i];
            arr[i] = temp[i];
        }
    }
    sortingNilai(n-1, arr); 
}

float mean(int n, int arr[]){
    if (n > 0){
        return (arr[n-1] + (n-1) * mean(n-1, arr)) / n;
    }
}

int mahasiswaLulus(int n, int arr[], float mean){
    if (arr[n-1] >= mean){
        return n;
    }
    mahasiswaLulus(n-1, arr, mean);
}

void dataNilai(int n, int arr[]){
    sortingNilai(n, arr);
    printf("\nData nilai setelah diurutkan:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    float rata = mean(n, arr);
    printf("\nRata-rata nilai: %.2f", rata);
    int mahasiswa = mahasiswaLulus(n, arr, rata);
    printf("\nJumlah mahasiswa yang lulus adalah %d mahasiswa dari %d mahasiswa", mahasiswa, n);
}

int main(){
    printf("-- Ayo Bantu Erep --\n");
    int banyakMahasiswa;
    printf("\nMasukkan banyaknya mahasiswa: ");
    scanf("%d",&banyakMahasiswa);
    while (banyakMahasiswa < 1){
        printf("Input tidak valid!\n");
        printf("Masukkan banyaknya mahasiswa: ");
        scanf("%d",&banyakMahasiswa);
    }

    int nilai[banyakMahasiswa];
    for(int i = 0; i < banyakMahasiswa; i++){
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    dataNilai(banyakMahasiswa, nilai);
    
    return 0;
}
