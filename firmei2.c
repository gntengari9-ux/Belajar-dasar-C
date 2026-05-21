#include<stdio.h>
#include<string.h>

    struct Mahasiswa {
        char Nama[50];
        long Nim;
        char Jurusan[30];
        double IPK;
        char Untukptr[50];
    };

    void Kelulusan(struct Mahasiswa A1) { 
       // printf("Mahasiswa :  %s\n", A1.Nama);
       // printf("   Nim    :  %ld\n", A1.Nim);
       // printf(" Jurusan  :  %s\n", A1.Jurusan);
       // printf("   IPK    :  %.2f\n", A1.IPK);
    }

    void KelulusanMhs(struct Mahasiswa Kelulusan) {
    if (Kelulusan.IPK > 1.99) {
        printf("Dengan ini mahasiswa yang bernama %s dinyatakan lulus dari kampus takamura\n", Kelulusan.Nama);
    } else {
        printf("Dengan ini mahasiswa yang bernama %s dinyatakan tidak lulus dari kampus takamura,sampai jumpa di semester depan atau selamat tinggal\n", Kelulusan.Nama);
    }
    }

int main() {
    struct Mahasiswa MhsA[5];
    char Inputmahasiswa[50];
    struct Mahasiswa Ptrajah;
    char*Ptrhaja = Ptrajah.Untukptr;
    strcpy(Ptrajah.Untukptr, "Mau nyari siapa woi?");

    strcpy(MhsA[0].Nama, "Budi");
    MhsA[0].Nim = 12345678910;
    strcpy(MhsA[0].Jurusan, "Sistem Informatika");
    MhsA[0].IPK = 3.61;

    strcpy(MhsA[1].Nama, "Supri");
    MhsA[1].Nim = 10987654321;
    strcpy(MhsA[1].Jurusan, "Akutansi");
    MhsA[1].IPK = 1.85;

    strcpy(MhsA[2].Nama, "Fahri");
    MhsA[2].Nim = 11223344;
    strcpy(MhsA[2].Jurusan, "Pertanian");
    MhsA[2].IPK = 2.01;

    strcpy(MhsA[3].Nama, "Akari");
    MhsA[3].Nim = 22334455;
    strcpy(MhsA[3].Jurusan, "Hukum");
    MhsA[3].IPK = 3.98;

    strcpy(MhsA[4].Nama, "Fira");
    MhsA[4].Nim = 33445566;
    strcpy(MhsA[4].Jurusan, "Sistem Informatika");
    MhsA[4].IPK = 3.21;


    while(1) {
    printf("%s\n", Ptrhaja);
    printf("Masukkan nama mahasiswa\n");
        scanf("%s", Inputmahasiswa);

    if(strcmp(Inputmahasiswa, "Keluar") == 0 || strcmp(Inputmahasiswa, "keluar") == 0 || strcmp(Inputmahasiswa, "exit") == 0) {
        printf("Program berhenti\n");
    break;
    }

    if(strcmp(Inputmahasiswa, MhsA[0].Nama) == 0) {
        printf("  Nama  : %s\n", MhsA[0].Nama);
        printf("  Nim   : %ld\n", MhsA[0].Nim);
        printf("Jurusan : %s\n", MhsA[0].Jurusan);
        printf("  IPK   : %.2f\n", MhsA[0].IPK);
        KelulusanMhs(MhsA[0]);
    } else if(strcmp(Inputmahasiswa, MhsA[1].Nama) == 0) {
        printf("  Nama  : %s\n", MhsA[1].Nama);
        printf("  Nim   : %ld\n", MhsA[1].Nim);
        printf("Jurusan : %s\n", MhsA[1].Jurusan);
        printf("  IPK   : %.2f\n", MhsA[1].IPK);
        KelulusanMhs(MhsA[1]);
    } else if(strcmp(Inputmahasiswa, MhsA[2].Nama) == 0) {
        printf("  Nama  : %s\n", MhsA[2].Nama);
        printf("  Nim   : %ld\n", MhsA[2].Nim);
        printf("Jurusan : %s\n", MhsA[2].Jurusan);
        printf("  IPK   : %.2f\n", MhsA[2].IPK);
        KelulusanMhs(MhsA[2]); 
    } else if(strcmp(Inputmahasiswa, MhsA[3].Nama) == 0) {
        printf("  Nama  : %s\n", MhsA[3].Nama);
        printf("  Nim     : %ld\n", MhsA[3].Nim);
	printf("Jurusan: %s\n", MhsA[3].Jurusan);
	printf("  IPK      : %.2f\n", MhsA[3].IPK);
	KelulusanMhs(MhsA[3]);
    } else if(strcmp(Inputmahasiswa, MhsA[4].Nama) == 0) {
        printf("  Nama  : %s\n", MhsA[4].Nama);
	printf("  Nim     : %ld\n", MhsA[4].Nim);
	printf("Jurusan: %s\n", MhsA[4].Jurusan);
	printf("  IPK      : %.2f\n", MhsA[4].IPK);
	KelulusanMhs(MhsA[4]);
    }
    }

return 0;


}

