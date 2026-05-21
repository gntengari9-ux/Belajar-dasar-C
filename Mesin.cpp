#include <stdio.h>

void mesin() {
    printf("Mesin jalan tanpa nilai\n");
}

void mesin(int jumlah) {
    printf("Mesin jalan dengan jumlah: %d\n", jumlah);
}

int main() {
    mesin();      // panggil yang tanpa parameter
    mesin(50);    // panggil yang dengan parameter
    return 0;
}    
