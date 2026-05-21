#include<stdio.h>
#include<string.h>

   struct Produkbarang {
     char nama[50];
     char  harga[40];
     int jumlah;
   };

   void Infobarang(struct Produkbarang A) {
     printf("Tampilkan Produk\n");
     printf("Nama produk %s\n", A.nama);
     printf("Harga produk %s\n", A.harga);
     printf("Jumlah produk %d\n", A.jumlah);
   }

int main () {

   struct Produkbarang produkA;

   strcpy(produkA.nama, "Teh sari murni");
   strcpy(produkA.harga, "6.500Rp");
   produkA.jumlah = 1;

   Infobarang(produkA);

return 0;
}
    
