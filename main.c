#include <stdio.h>

enum JenisSampah {
    ORGANIK = 1,
    ANORGANIK,
    B3
};

int main() {
    int pilihan;
    enum JenisSampah sampah;

    printf("=== SISTEM KLASIFIKASI SAMPAH ===\n");
    printf("1. Sampah Organik\n");
    printf("2. Sampah Anorganik\n");
    printf("3. Sampah B3\n");
    printf("Pilih jenis sampah: ");

    if (scanf("%d", &pilihan) != 1) {
        printf("Input harus berupa angka!\n");
        return 1;
    }

    if (pilihan < ORGANIK || pilihan > B3) {
        printf("Pilihan tidak valid!\n");
        return 0;
    }

    sampah = pilihan;

    switch (sampah) {
        case ORGANIK:
            printf("\nKategori: ORGANIK\n");
            printf("Contoh: daun dan sisa makanan.\n");
            printf("Penanganan: dapat diolah menjadi kompos.\n");
            break;

        case ANORGANIK:
            printf("\nKategori: ANORGANIK\n");
            printf("Contoh: botol plastik dan kaleng.\n");
            printf("Penanganan: pilah untuk didaur ulang.\n");
            break;

        case B3:
            printf("\nKategori: B3\n");
            printf("Contoh: baterai bekas.\n");
            printf("Penanganan: pisahkan dan serahkan ke");
            printf(" fasilitas pengelolaan yang sesuai.\n");
            break;
    }

    printf("\nProgram selesai.\n");

    return 0;
}2