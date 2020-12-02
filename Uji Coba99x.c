#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define BONUS 0.2

int i,j;
int bonus_tawaran;

void menu();
void daftar_barang();
int bonus(int bonus_tawaran, int i);
void absen();

typedef struct{

	char npegawai[100];
	char npelanggan[100];
	char nproduk[100];
	int hargaProduk;
	
}input1;
 input1 data1[10];
 
typedef struct{
	
	char absn[2];
	char namaPegawai[100];
	int kodePegawai;
	
}input2;
 input2 data2[10];
	
int main()
{
	//agar tidak menyalahi aturan syntax yang berlaku
	//maka diputuskan untuk membuat fungsi void_menu baru agar program dapat dikembalikan ke awal
	menu();
	return 0;
}
	
void menu()
{
	int pilihan;
		
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   TOKO DELUXE		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");


	printf("=================================\n"); 
	printf("| 	  PILIHAN MENU	 	|\n"); 
	printf("=================================\n"); 
	printf("=================================\n");
	printf("1. DAFTAR NAMA DAN HARGA BARANG  |\n"); 
	printf("2. INPUT DAN REKAP BONUS PEGAWAI |\n"); 
	printf("3. ABSENSI PEGAWAI		 |\n"); 
	printf("4. TOTAL GAJI			 |\n");
	printf("5. KELUAR			 |\n"); 
	printf("=================================\n\n"); 
	
	printf("=================================\n");
	printf("| 	 MASUKKAN MENU 		| \n"); 
	printf("=================================\n");
	
	printf("Pilihan Menu: ");
	scanf("%d", &pilihan);
	system ("cls");
	
	switch(pilihan){
		case 1 : 
			daftar_barang(); 
			break;
		
		case 2 : 
			bonus(bonus_tawaran, i);
			break;
			
		case 3 :
			absen();
			break;
		
	}
}
	
void daftar_barang()
{
	char pilihan1;
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|   DAFTAR NAMA DAN HARGA BARANG |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("Nama Produk Tersedia: \n\n");
	printf("  #1 Parfum A	Rp.30.000\n");
	printf("  #2 Parfum B 	Rp.40.000\n");
	printf("  #3 Parfum C 	Rp.48.000\n");
	printf("  #4 Parfum D 	Rp.60.000\n");
	printf("  #5 Parfum E 	Rp.35.000\n\n");
	
	printf("Ingin melanjutkan ke menu berikutnya? (y/n) --> ");
	scanf("%s", &pilihan1);
	
	switch (pilihan1)
	{
		case 'Y':
		case 'y':
		system ("cls");
		bonus(bonus_tawaran, i);
		
		case 'N':
		case 'n':
		system ("cls");
	}
	
}

int bonus(int bonus_tawaran, int i)
{
	int banyak;
	char pilihan2;
	char pilihan3;
	char pilihan4[2];
	//char tambah_input1[2];
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|  	 INPUT BONUS PEGAWAI	 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");	
	
	//do{
		
		printf("Masukkan banyak inputan : "); scanf("%d", &banyak);
		
		for(i=0; i<banyak; i++){
		printf("\nNama pegawai		 : "); scanf("%s", data1[i].npegawai);
		printf("Nama pelanggan/konsumen	 : "); scanf("%s", data1[i].npelanggan);
		printf("Nama barang yang dibeli	 : "); scanf("%s", data1[i].nproduk);
		printf("Harga barang yang dibeli : "); scanf("%d", &data1[i].hargaProduk);
		fflush(stdin);
		}
		
		system ("cls");
		/*printf("Tambah inputan? (y/n) --> "); scanf("%s", &tambah_input1);
		printf("\n");
		
	}while(strcmp(tambah_input1, "n")==1);*/
	
	
	/*printf("Ingin melanjutkan ke menu berikutnya? (y/n) --> ");
	scanf("%s", &pilihan2);
	
	switch (pilihan2)
	{
		case 'Y':
		case 'y':
		system ("cls");
		goto menu3;
		
		case 'N':
		case 'n':
		system ("cls");
	}*/
	
	menu3:	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP BONUS		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("Daftar nama pegawai beserta bonus :\n\n");
	
	for(i=0; i<banyak; i++){
	printf("\n\nNama pegawai 		: %s", data1[i].npegawai);
	printf("\nKeberhasilan penawaran 	: 1");
	
	bonus_tawaran = BONUS*data1[i].hargaProduk;
	printf("\nTotal bonus sebesar 	: Rp.%d", bonus_tawaran);
	}
	
	printf("\nIngin melanjutkan ke menu berikutnya? (y/n) --> ");
	scanf("%s", &pilihan3);
	
		switch (pilihan3)
	{
		case 'Y':
		case 'y':
		system ("cls");
		absen();
		
		case 'N':
		case 'n':
		system ("cls");
		menu();
	}
	
	return bonus_tawaran, i;
}

void absen()
{

	char pilihan4;
	int banyak;
	char konfirmasi;
	
	char absn[2];
	char namaPegawai[100];
	int kodePegawai;
	
	int absen1, absen2, absen3, absen4, absen5;
	char refresh;
	
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   ABSENSI PEGAWAI	 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
    struct tm *Sys_T;
 
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval); /* Untuk mendapatkan waktu lokal komputer */
    /* Sys_T = gmtime(&Tval); Untuk mendapatkan waktu komputer berbasis GMT/UTC */
 
    /*Sys_T->tm_mday);
    Sys_T->tm_mon+1); // Ditambah 1 karena Januari dimulai dari 0 
    1900+Sys_T->tm_year); // Ditambah 1900, karena tahun dimulai dari 1900 
 
    Sys_T->tm_hour);
    Sys_T->tm_min);
    Sys_T->tm_sec);
 
    Sys_T->tm_wday); // 0-6 melambangkan Minggu-Sabtu
    Sys_T->tm_yday);*/
 
    printf ( "\n\nTanggal dan waktu : %s", asctime (Sys_T));
    /* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
	
	printf("Daftar Nama Pegawai: \n\n");
	printf("  +-------------------------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |	Kehadiran   |\n");
	printf("  +-------------------------------------------------------------------------+\n");	
	printf("  |	1	|	  Ardhiya	|   	181201	   |	   -	    |\n");
	printf("  |	2	|	  Prianka	|   	181202	   |	   -	    |\n");
	printf("  |	3	|	  Anastacia	|   	190303	   |	   -	    |\n");
	printf("  |	4	|	  Yukita	|   	190604	   |	   -	    |\n");
	printf("  |	5	|	  Cahaya	|   	200105	   |	   -	    |\n");
	printf("  +-------------------------------------------------------------------------+\n");	
	
	printf("\nIngin melakukan absensi? (y/n) --> ");
	scanf("%s", &konfirmasi);
	
	if(konfirmasi == 'y'){
		
	printf("Masukkan banyak inputan : "); scanf("%d", &banyak);
	
	for(j=0; j<banyak; j++){
	printf("\nMasukkan nama 		: "); scanf("%s", data2[j].namaPegawai);
	printf("Masukkan kode pegawai	: ");	scanf("%d", &data2[j].kodePegawai);
	printf("Hadir (y/n)		: "); scanf("%s", data2[j].absn);
	}
	
	system ("cls");
	
	/*printf("\nIngin me-refresh data? (y/n) --> ");
	scanf("%s", &refresh);
	
	if(refresh == 'y')
	{
		goto refresh;
	}
	
	else{
		bonus(bonus_tawaran, i);
	}
	
	
	refresh:*/
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   ABSENSI PEGAWAI	|\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("Berhasil melakukan absensi!! \n");
	printf("Berikut keterangannya : \n\n");
	printf("  +-------------------------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |	Kehadiran   |\n");
	printf("  +-------------------------------------------------------------------------+\n");	
	
	for(j=0; j<banyak; j++){
	printf("  |	%d	|	  %s	  |   	%d	   |	   %s	    |\n", j+1, data2[j].namaPegawai, data2[j].kodePegawai, data2[j].absn);
	}
	printf("  +-------------------------------------------------------------------------+\n");	
	
	printf("\nIngin melanjutkan ke menu berikutnya? (y/n) --> ");
	scanf("%s", &pilihan4);
	
		switch (pilihan4)
	{
		case 'Y':
		case 'y':
		system ("cls");
		bonus(bonus_tawaran, i);
		
		case 'N':
		case 'n':
		system ("cls");
		menu();
		}
	
	}
}



