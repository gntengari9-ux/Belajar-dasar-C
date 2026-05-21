#include<stdio.h>
#include<string.h>

struct Pusat {
    int Data;
    char Nama[50];
};

void Security(struct Pusat Syarat) {
    if(Syarat.Data > 17) {
        printf("Akun anda berhasil di registrasi\n");
    } else {
        printf("Umur anda tidak memenuhi syarat registrasi\n");
    }
}

int main () {
    struct Pusat A1;
    int *Formulirdata1 = &A1.Data;
    char*Formulirnama1 = A1.Nama;
    int batas = 3;
    while(batas > 0) {
        printf("Batas percobaan anda adalah %d\n", batas);
        printf("Masukkan data\n");
        scanf("%d", &A1.Data);
        printf("Masukkan nama\n");
        scanf("%s", A1.Nama);

    if(batas == 3){
        Security(A1);
        printf("Data anda adalah %d\n", *Formulirdata1);
        printf("Nama : %s\n", Formulirnama1);
    } else if(A1.Data >= 17) {
    printf("Jauh jauh sana anak kecil\n");
    batas = batas - 1;
    }
    
    if(batas < 0) {
        printf("Sesi registrasi habis\n");
    break;
    }

    }
return 0;

}
