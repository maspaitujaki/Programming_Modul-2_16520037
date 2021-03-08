#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// PROSEDUR PENJELASAN KALKULATOR
void welcome(){
printf("\nKalkulator dapat melakukan 6 fungsi matematika\n");
printf("pilih nomor operasi yang ingin digunakan (tulis nomornya):\n");
printf("1. Penjumlahan\n");
printf("2. Pengurangan\n");
printf("3. Perkalian\n");
printf("4. Pembagian\n");
printf("5. Perpangkatan\n");
printf("6. Integral tentu\n");
printf("0. Keluar\n");
printf("Masukkan:");
}


void clrscr(){system("cls");}

// FUNGSI PENJUMLAHAN
float penjumlahan(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan kedua:");
    scanf("%f",&angkaKedua);
    return (angkaPertama + angkaKedua);
}


// FUNGSI PENGURANGAN
float pengurangan(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan pengurang:");
    scanf("%f",&angkaKedua);
    return (angkaPertama - angkaKedua);
}


// FUNGSI PERKALIAN
float perkalian(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan pengali:");
    scanf("%f",&angkaKedua);
    return (angkaPertama * angkaKedua);
}


// FUNGSI PEMBAGIAN
float pembagian(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan pembagi:");
    scanf("%f",&angkaKedua);
    return (angkaPertama / angkaKedua);
}

// FUNGSI PEMANGKATAN
float perpangkatan(){
    float angkaPertama;  //ANGKA YANG INGIN DIPANGKATKAN
    float angkaPertamai; 
    float angkaKedua; // BILANGAN PANGKAT
    printf("\nMasukkan bilangan :");
    scanf("%f",&angkaPertama);
    angkaPertamai =angkaPertama;
    printf("\nMasukkan pangkat:");
    scanf("%f",&angkaKedua);
    for(int i=0; i<angkaKedua;i++){angkaPertama *= angkaPertamai;} // PROSES PEMANGKATAN BERBASIS LOOP
    return angkaPertama;
}

// FUNGSI INTEGRAL TENTU DENGAN METODE RIEMANN TRAPESIUM
float integralTentuang()
{
    #define f(x) 1/(1+x*x) // PADA TEST CASE INI DILAKUKAN FUNGSI 1/1+X^2
    
    float bb, ba, hasil=0.0, langkah, k;
    int i, partisi;
    
    /* Input */
    printf("Masukkan batas bawah dari integral tentu: ");
    scanf("%f", &bb);
    printf("Masukkan batas atas dari integral tentu: ");
    scanf("%f", &ba);
    printf("Masukkan banyak partisi jumlah Riemann: ");
    scanf("%d", &partisi);

    /* PERHITUNGAN */
    /* LANGKAH JUMLAH RIEMANN */
    langkah = (ba - bb)/partisi;

    /* MENCARI NILAI INTEGRAL */
    hasil = f(bb) + f(ba);
    for(i=1; i<= partisi-1; i++)
    {
    k = bb + i*langkah;
    hasil = hasil + 2 * f(k);
    }
    hasil = hasil * langkah/2;
       
    return hasil;
}


// FUNGSI UTAMA
int main()
{
    printf("Selamat datang di Kalkulator");
    
    

    // MENGGUNAKAN LOOP WHILE UNTUK KALKULATOR TETAP AKTIF SAMPAI INGIN KELUAR
    while (1==1)
    {
        clrscr();
        welcome();
        float hasil;
        int masukkan=0;
        
        scanf("%d", &masukkan);
        if(masukkan==0){exit(0);}
        else if(masukkan==1){hasil = penjumlahan();}
        else if(masukkan==2){hasil = pengurangan();}
        else if(masukkan==3){hasil = perkalian();}
        else if(masukkan==4){hasil = pembagian();}
        else if(masukkan==5){hasil = perpangkatan();}
        else if(masukkan==6){hasil = integralTentuang();}
        else {
            printf("Input tidak valid!");
            getch();
            continue;
        }
        printf("\nHasil perhitungan adalah=");
        printf("%.2f\n",hasil);
        printf("\nTekan enter untuk lanjut");
        getch();
        
        
        
    }
}