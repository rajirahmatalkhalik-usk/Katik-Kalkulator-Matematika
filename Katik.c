#include <stdio.h>
#include <math.h>

void menuBangun();

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
    printf("=== KATIK - Kalkulator Matematika ===\n");
    menuBangun();
    printf("Pilih jenis bangun datar (1-8): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            persegi();
            break;
        case 2:
            persegiPanjang();
            break;
        case 3:
            segitiga();
            break;
        case 4:
            jajarGenjang();
            break;
        case 5:
            trapesium();
            break;
        case 6:
            layangLayang();
            break;
        case 7:
            belahKetupat();
            break;
        case 8:
            lingkaran();
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

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

void persegi() {
    int pilihan;
    float s;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    printf("Masukkan sisi: ");
    scanf("%f", &s);
    if (pilihan == 1)
        printf("Luas persegi = %.2f\n", s * s);
    else
        printf("Keliling persegi = %.2f\n", 4 * s);
}

void persegiPanjang() {
    int pilihan;
    float p, l;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    printf("Masukkan panjang dan lebar: ");
    scanf("%f %f", &p, &l);
    if (pilihan == 1)
        printf("Luas persegi panjang = %.2f\n", p * l);
    else
        printf("Keliling persegi panjang = %.2f\n", 2 * (p + l));
}

void segitiga() {
    int pilihan;
    float a, t, s1, s2, s3;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        printf("Masukkan alas dan tinggi: ");
        scanf("%f %f", &a, &t);
        printf("Luas segitiga = %.2f\n", 0.5 * a * t);
    } else {
        printf("Masukkan tiga sisi segitiga: ");
        scanf("%f %f %f", &s1, &s2, &s3);
        printf("Keliling segitiga = %.2f\n", s1 + s2 + s3);
    }
}

void jajarGenjang() {
    int pilihan;
    float a, t, s;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        printf("Masukkan alas dan tinggi: ");
        scanf("%f %f", &a, &t);
        printf("Luas jajar genjang = %.2f\n", a * t);
    } else {
        printf("Masukkan dua sisi sejajar: ");
        scanf("%f %f", &a, &s);
        printf("Keliling jajar genjang = %.2f\n", 2 * (a + s));
    }
}

void trapesium() {
    int pilihan;
    float a, b, t, s1, s2;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        printf("Masukkan sisi atas, sisi bawah, dan tinggi: ");
        scanf("%f %f %f", &a, &b, &t);
        printf("Luas trapesium = %.2f\n", 0.5 * (a + b) * t);
    } else {
        printf("Masukkan keempat sisi trapesium: ");
        scanf("%f %f %f %f", &a, &b, &s1, &s2);
        printf("Keliling trapesium = %.2f\n", a + b + s1 + s2);
    }
}

void layangLayang() {
    int pilihan;
    float d1, d2, s1, s2;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        printf("Masukkan diagonal 1 dan diagonal 2: ");
        scanf("%f %f", &d1, &d2);
        printf("Luas layang-layang = %.2f\n", 0.5 * d1 * d2);
    } else {
        printf("Masukkan dua pasang sisi yang sama panjang: ");
        scanf("%f %f", &s1, &s2);
        printf("Keliling layang-layang = %.2f\n", 2 * (s1 + s2));
    }
}

void belahKetupat() {
    int pilihan;
    float d1, d2, s;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        printf("Masukkan diagonal 1 dan diagonal 2: ");
        scanf("%f %f", &d1, &d2);
        printf("Luas belah ketupat = %.2f\n", 0.5 * d1 * d2);
    } else {
        printf("Masukkan panjang sisi: ");
        scanf("%f", &s);
        printf("Keliling belah ketupat = %.2f\n", 4 * s);
    }
}

void lingkaran() {
    int pilihan;
    float r;
    printf("\n1. Luas\n2. Keliling\nPilih jenis pengukuran (1/2): ");
    scanf("%d", &pilihan);
    printf("Masukkan jari-jari: ");
    scanf("%f", &r);
    if (pilihan == 1)
        printf("Luas lingkaran = %.2f\n", M_PI * r * r);
    else
        printf("Keliling lingkaran = %.2f\n", 2 * M_PI * r);
}
