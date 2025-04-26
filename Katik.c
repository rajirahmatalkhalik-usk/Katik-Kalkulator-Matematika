#include <stdio.h>
#include <math.h>
#include <stdlib.h> // untuk exit()

void menuBangun();
void menuUkuran(int bangun);

// Fungsi luas dan keliling per bangun datar
void persegi();
void persegiPanjang();
void segitiga();
void jajarGenjang();
void trapesium();
void layangLayang();
void belahKetupat();
void lingkaran();

int main() {
    int pilihan;
    char ulang;

    do {
        printf("=== KATIK - Kalkulator Matematika ===\n");
        menuBangun();
        printf("Pilih jenis bangun datar (1-8): ");
        scanf("%d", &pilihan);

        if (pilihan < 1 || pilihan > 8) {
            printf("Pilihan tidak valid. Program keluar.\n");
            exit(0);
        }

        switch (pilihan) {
            case 1: persegi(); break;
            case 2: persegiPanjang(); break;
            case 3: segitiga(); break;
            case 4: jajarGenjang(); break;
            case 5: trapesium(); break;
            case 6: layangLayang(); break;
            case 7: belahKetupat(); break;
            case 8: lingkaran(); break;
        }

        printf("\nIngin menghitung lagi? (y/n): ");
        scanf(" %c", &ulang);

        if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
            printf("Input tidak valid. Program keluar.\n");
            exit(0);
        }

    } while (ulang == 'y' || ulang == 'Y');

    printf("Terima kasih telah menggunakan KATIK!\n");
    return 0;
}

void menuBangun() {
    printf("\nPilih Bangun Datar:\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Segitiga\n");
    printf("4. Jajar Genjang\n");
    printf("5. Trapesium\n");
    printf("6. Layang-layang\n");
    printf("7. Belah Ketupat\n");
    printf("8. Lingkaran\n");
}

void menuUkuran(int bangun) {
    char* nama[] = {
        "Persegi", "Persegi Panjang", "Segitiga", "Jajar Genjang",
        "Trapesium", "Layang-Layang", "Belah Ketupat", "Lingkaran"
    };
    printf("\n1. Luas %s\n2. Keliling %s\nPilih jenis pengukuran (1 atau 2): ", nama[bangun - 1], nama[bangun - 1]);
}

void persegi() {
    int pilihan;
    float s;
    menuUkuran(1);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    printf("Masukkan sisi: ");
    scanf("%f", &s);
    if (s <= 0) {
        printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Rumus: sisi x sisi\n");
        printf("Luas persegi = %.2f\n", s * s);
    } else {
        printf("Rumus: 4 x sisi\n");
        printf("Keliling persegi = %.2f\n", 4 * s);
    }
}

void persegiPanjang() {
    int pilihan;
    float p, l;
    menuUkuran(2);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    printf("Masukkan panjang: ");
    scanf("%f", &p);
    printf("Masukkan lebar: ");
    scanf("%f", &l);
    if (p <= 0 || l <= 0) {
        printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Rumus: panjang x lebar\n");
        printf("Luas persegi panjang = %.2f\n", p * l);
    } else {
        printf("Rumus: 2 x (panjang + lebar)\n");
        printf("Keliling persegi panjang = %.2f\n", 2 * (p + l));
    }
}

void segitiga() {
    int pilihan;
    float a, t, s1, s2, s3;
    menuUkuran(3);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Masukkan alas: ");
        scanf("%f", &a);
        printf("Masukkan tinggi: ");
        scanf("%f", &t);
        if (a <= 0 || t <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: 0.5 x alas x tinggi\n");
        printf("Luas segitiga = %.2f\n", 0.5 * a * t);
    } else {
        printf("Masukkan sisi pertama: ");
        scanf("%f", &s1);
        printf("Masukkan sisi kedua: ");
        scanf("%f", &s2);
        printf("Masukkan sisi ketiga: ");
        scanf("%f", &s3);
        if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: sisi1 + sisi2 + sisi3\n");
        printf("Keliling segitiga = %.2f\n", s1 + s2 + s3);
    }
}

void jajarGenjang() {
    int pilihan;
    float a, t, s;
    menuUkuran(4);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Masukkan alas: ");
        scanf("%f", &a);
        printf("Masukkan tinggi: ");
        scanf("%f", &t);
        if (a <= 0 || t <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: alas x tinggi\n");
        printf("Luas jajar genjang = %.2f\n", a * t);
    } else {
        printf("Masukkan alas: ");
        scanf("%f", &a);
        printf("Masukkan sisi miring: ");
        scanf("%f", &s);
        if (a <= 0 || s <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: 2 x (alas + sisi miring)\n");
        printf("Keliling jajar genjang = %.2f\n", 2 * (a + s));
    }
}

void trapesium() {
    int pilihan;
    float a, b, t, s1, s2;
    menuUkuran(5);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Masukkan sisi atas: ");
        scanf("%f", &a);
        printf("Masukkan sisi bawah: ");
        scanf("%f", &b);
        printf("Masukkan tinggi: ");
        scanf("%f", &t);
        if (a <= 0 || b <= 0 || t <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: 0.5 x (sisi atas + sisi bawah) x tinggi\n");
        printf("Luas trapesium = %.2f\n", 0.5 * (a + b) * t);
    } else {
        printf("Masukkan sisi pertama: ");
        scanf("%f", &a);
        printf("Masukkan sisi kedua: ");
        scanf("%f", &b);
        printf("Masukkan sisi ketiga: ");
        scanf("%f", &s1);
        printf("Masukkan sisi keempat: ");
        scanf("%f", &s2);
        if (a <= 0 || b <= 0 || s1 <= 0 || s2 <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: sisi1 + sisi2 + sisi3 + sisi4\n");
        printf("Keliling trapesium = %.2f\n", a + b + s1 + s2);
    }
}

void layangLayang() {
    int pilihan;
    float d1, d2, s1, s2;
    menuUkuran(6);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Masukkan diagonal 1: ");
        scanf("%f", &d1);
        printf("Masukkan diagonal 2: ");
        scanf("%f", &d2);
        if (d1 <= 0 || d2 <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: 0.5 x d1 x d2\n");
        printf("Luas layang-layang = %.2f\n", 0.5 * d1 * d2);
    } else {
        printf("Masukkan sisi pertama: ");
        scanf("%f", &s1);
        printf("Masukkan sisi kedua: ");
        scanf("%f", &s2);
        if (s1 <= 0 || s2 <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: 2 x (sisi1 + sisi2)\n");
        printf("Keliling layang-layang = %.2f\n", 2 * (s1 + s2));
    }
}

void belahKetupat() {
    int pilihan;
    float d1, d2, s;
    menuUkuran(7);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Masukkan diagonal 1: ");
        scanf("%f", &d1);
        printf("Masukkan diagonal 2: ");
        scanf("%f", &d2);
        if (d1 <= 0 || d2 <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: 0.5 x d1 x d2\n");
        printf("Luas belah ketupat = %.2f\n", 0.5 * d1 * d2);
    } else {
        printf("Masukkan panjang sisi: ");
        scanf("%f", &s);
        if (s <= 0) {
            printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
            exit(0);
        }
        printf("Rumus: 4 x sisi\n");
        printf("Keliling belah ketupat = %.2f\n", 4 * s);
    }
}

void lingkaran() {
    int pilihan;
    float r;
    menuUkuran(8);
    scanf("%d", &pilihan);
    if (pilihan != 1 && pilihan != 2) {
        printf("Pilihan tidak valid. Program keluar.\n");
        exit(0);
    }
    printf("Masukkan jari-jari: ");
    scanf("%f", &r);
    if (r <= 0) {
        printf("Nilai tidak boleh nol atau negatif. Program keluar.\n");
        exit(0);
    }
    if (pilihan == 1) {
        printf("Rumus: π x r x r\n");
        printf("Luas lingkaran = %.2f\n", M_PI * r * r);
    } else {
        printf("Rumus: 2 x π x r\n");
        printf("Keliling lingkaran = %.2f\n", 2 * M_PI * r);
    }
}
