#include <stdio.h>

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

float penjumlahan(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan kedua:");
    scanf("%f",&angkaKedua);
    return (angkaPertama + angkaKedua);
}

float pengurangan(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan pengurang:");
    scanf("%f",&angkaKedua);
    return (angkaPertama - angkaKedua);
}

float perkalian(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan pengali:");
    scanf("%f",&angkaKedua);
    return (angkaPertama * angkaKedua);
}

float pembagian(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan pembagi:");
    scanf("%f",&angkaKedua);
    return (angkaPertama / angkaKedua);
}

float perpangkatan(){
    float angkaPertama;
    float angkaPertamai;
    float angkaKedua;
    printf("\nMasukkan bilangan :");
    scanf("%f",&angkaPertama);
    angkaPertamai =angkaPertama;
    printf("\nMasukkan pangkat:");
    scanf("%f",&angkaKedua);
    for(int i=0; i<angkaKedua;i++){angkaPertama *= angkaPertamai;}
    return angkaPertama;
}

float integralTentu(){
    float angkaPertama;
    float angkaKedua;
    printf("\nMasukkan bilangan pertama:");
    scanf("%f",&angkaPertama);
    printf("\nMasukkan bilangan pembagi:");
    scanf("%f",&angkaKedua);
    return (angkaPertama / angkaKedua);
}

int main()
{
    printf("Selamat datang di Kalkulator");
    
    int status = 1;
    while(status == 1)
    {
        welcome();
        float hasil;
        int masukkan=0;
        
        scanf("%d", &masukkan);
        if(masukkan==0){status=0;}
        else if(masukkan==1){hasil = penjumlahan();}
        else if(masukkan==2){hasil = pengurangan();}
        else if(masukkan==3){hasil = perkalian();}
        else if(masukkan==4){hasil = pembagian();}
        else if(masukkan==5){hasil = perpangkatan();}
        else if(masukkan==6){hasil = integralTentu();}
        printf("\nHasil perhitungan adalah=");
        printf("%.2f\n",hasil);
        
        
    }
}