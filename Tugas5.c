#include <stdio.h>
int main() {
     int jumlahLembar, totalHarga, uangDibayar, kembalian;

     printf("====================================================\n");
     printf("Hallo, selamat datang di Fotocopy Kopikopi!\n");
     printf ("Masukan jumlah lembar :");
     scanf("%d", &jumlahLembar);

     if (jumlahLembar >= 100){ 
        totalHarga = jumlahLembar * 100;
     } else {
        totalHarga = jumlahLembar * 150;
     }  
      printf("Jumlah yang harus dibayar: %d rupiah\n", totalHarga);

      printf("Masukan uang yang dibayar:");
      scanf("%d", &uangDibayar);

      kembalian = uangDibayar - totalHarga;

      if (uangDibayar >= totalHarga){
         kembalian = uangDibayar - totalHarga;
      printf("Kembalian: %d rupiah\n", kembalian);
      } else {
      printf("Uang anda tidak cukup\n");
      }
      
      printf("====================================================");


    return 0;

}
