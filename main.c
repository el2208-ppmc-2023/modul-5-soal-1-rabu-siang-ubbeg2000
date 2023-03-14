/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

// urutkan nilai dari terbesar ke terkecil
int sortingNilai(..,..){
    // Lengkapi fungsi berikut ini
    // boleh menambah parameter bila diperlukan
    sortingNilai(..);
}

// menghitung rata-rata nilai
float mean(..,..){
    // Lakukan perhitungan rata-rata dengan fungsi rekursif
    // boleh menambah parameter bila diperlukan
    // hint: rata-rata = (mean(n-1,..) * (n-1) + ..) / n 
    // lengkapi rumus diatas atau cari rata-rata dengan cara lainnya
    // ingat fungsi mean harus dipanggil kembali pada fungsi ini
}

// cari jumlah mahasiswa yang lulus
// dinyatakan lulus apabila nilai >= rata-rata
int mahasiswaLulus(..,..,..){
    // Lengkapi fungsi berikut ini
    // boleh menambah parameter bila diperlukan
    mahasiswaLulus(..,..,..);
}

void dataNilai(.., ..){
    sortingNilai(..);

    // print urutan nilai
    printf("\nData nilai setelah diurutkan:\n");
    printf("%d ", ..);
    
    // panggil fungsi mean
    printf("\nRata-rata nilai: %.2f", ..);
    // panggil fungsi mahasiswaLulus
    printf("\nJumlah mahasiswa yang lulus adalah %d mahasiswa dari %d mahasiswa", .., ..);
}

int main(){
    printf("-- Ayo Bantu Erep --\n");

    printf("\nMasukkan banyaknya mahasiswa: ");
    printf("Input tidak valid!\n");

    printf("Masukkan nilai mahasiswa ke-%d: ", ..);

    dataNilai(.., ..); // hanya fungsi dataNilai yang dipanggil pada main
    
    return 0;
}
