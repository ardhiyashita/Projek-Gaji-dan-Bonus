#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define BONUS 0.2


int i,j,k;
int bonus_tawaran;
char namaBulan[15];

void login();
void menu_utama();
void daftar_barang();
int bonus(int bonus_tawaran, int i);
int absen();

typedef struct{

	char npegawai[100];
	char npelanggan[100];
	char nproduk[100];
	int hargaProduk;
	int bonus_tawaran;
	
}input1;
 input1 data1[10];
 
typedef struct{
	
	int absn;
	char namaPegawai[100];
	int kodePegawai;
	
}input2;
 input2 data2[10];

typedef struct{
	
	char namaP[100];
	int kodeP;
	int absenP;
	
}input3;
input3 data3[10];

int main()
{
	//agar tidak menyalahi aturan syntax yang berlaku
	//maka diputuskan untuk membuat fungsi void_menu baru agar program dapat dikembalikan ke awal
	login();
	return 0;
}

void login()
{
	
	char user_name[10];
	char password[10];
	
	login:
	printf("\t\t\t\t      Selamat Datang di Toko DELUXE\n");
    printf("\t\t\t\tJalan Raya Kampus Udayana, Jimbaran, Bali\n");
    printf("\t\t\t\t    Contact Person : +62 812 3456 7890\n");
    printf("\t\t\t\t          Instagram : @deluxe.id\n\n\n");
    printf(" NOTE!!! HARAP MEMASUKAN PILIHAN SESUAI DENGAN MENU YANG TERSEDIA\n\n");
	
	printf("Masukkan username anda  : "); scanf("%s", &user_name);
	printf("Masukkan password	: "); scanf("%s", &password);
		
		
			if (strcmp(user_name, "admin")==0 && strcmp(password, "deluxepass")==0 ){
				printf("\nLogin Sukses");
				system ("cls");
				menu_utama();
			}
			
			else if(strcmp(user_name, "pegawai")==0 && strcmp(password, "deluxepass")==0 ){
				printf("\nLogin Sukses");
				system ("cls");
				menu_utama();
			}
			
			else{
				printf("\nAnda impostor yaaaa:v");
				/*printf("\nUsername atau Password yang anda masukkan salah!");
				printf("\nSilahkan mencoba kembali");*/
				system ("cls");
				goto login;
			}
}

void menu_utama()
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
	
	switch(pilihan)
	{
		case 1 : 
			daftar_barang(); 
			break;
		
		case 2 : 
			bonus(bonus_tawaran, i);
			break;
			
		case 3 :
			absen();
			break;
		
		default :
			printf("\nPeriksa kembali inputan anda!");
	}
}


void daftar_barang()
{
	char pilihan1;
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|   DAFTAR NAMA DAN HARGA BARANG |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("Nama Produk Tersedia: \n\n");
	printf("  #1 ParfumA	Rp.30.000\n");
	printf("  #2 ParfumB  	Rp.40.000\n");
	printf("  #3 ParfumC  	Rp.48.000\n");
	printf("  #4 ParfumD 	Rp.60.000\n");
	printf("  #5 ParfumE 	Rp.35.000\n\n");
	
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
		menu_utama();
	}
	
}

int bonus(int bonus_tawaran, int i)
{
	int banyak;
	char pilihan2;
	char pilihan3;
	
	
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|  	 INPUT BONUS PEGAWAI	 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");	
	
		printf("Masukkan banyak inputan : "); scanf("%d", &banyak);
		
		for(i=0; i<banyak; i++){
		printf("\nNama pegawai		 : "); scanf("%s", data1[i].npegawai);
		printf("Nama pelanggan/konsumen	 : "); scanf("%s", data1[i].npelanggan);
		printf("Nama barang yang dibeli	 : "); scanf("%s", data1[i].nproduk);
		printf("Harga barang yang dibeli : "); scanf("%d", &data1[i].hargaProduk);
		fflush(stdin);
		}
		system ("cls");
	
	
	
	menu3:	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP BONUS		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
		printf("Daftar nama pegawai beserta bonus :\n\n");
	
		for(i=0; i<banyak; i++)
		{
			printf("\n\nNama pegawai 		: %s", data1[i].npegawai);
			printf("\nKeberhasilan penawaran 	: 1");
			
			data1[i].bonus_tawaran = BONUS*data1[i].hargaProduk;
			printf("\nTotal bonus sebesar 	: Rp.%d", data1[i].bonus_tawaran);
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
			menu_utama();
		}
			
	return data1[i].bonus_tawaran, i;
}

int absen()
{

	int pilihan_bulan;
	
	char pilihan4;
	int banyak;
	char konfirmasi;
	
	int absn;
	char namaPegawai[100];
	int kodePegawai;
	
	int pilihan5;
	
	
	
	absen_menu:
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   ABSENSI PEGAWAI	 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("=================================\n");
	printf("1. ABSENSI HARIAN		 |\n"); 
	printf("2. ABSENSI BULANAN		 |\n");
	printf("=================================\n");
	
	printf("Masukkan pilihan absensi : "); scanf("%d", &pilihan_bulan);
	
	switch (pilihan_bulan){
		
	case 1 :
		system("cls");
		goto absen_hrn;
	
	case 2 :
		system("cls");
		goto absen_bln;
	
	default :
		printf("\nPilihan yang Anda masukkan tidak tersedia!");
		printf("\nSilahkan coba kembali");
		system("cls");
		goto absen_menu;
	}
	
	
	
	absen_hrn:
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|     ABSENSI HARIAN PEGAWAI     |\n");
	printf("\t\t\t\t\t==================================\n\n");
	
	    struct tm *Sys_T;
	 
	    time_t Tval;
	    Tval = time(NULL);
	    Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
	 
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
		
		for(j=0; j<banyak; j++)
		{
			printf("\nMasukkan nama 		: "); scanf("%s", data2[j].namaPegawai);
			printf("Masukkan kode pegawai	: ");	scanf("%d", &data2[j].kodePegawai);
			printf("Hadir (1/0)		: "); scanf("%d", &data2[j].absn);
		}
		system ("cls");
	
	
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|     ABSENSI HARIAN PEGAWAI     |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("Berhasil melakukan absensi!! \n");
	printf("Berikut keterangannya : \n\n");
	printf("  +-------------------------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |	Kehadiran   |\n");
	printf("  +-------------------------------------------------------------------------+\n");	
	
	for(j=0; j<banyak; j++){
	printf("  |	%d	|	  %s	  |   	%d	   |	   %d	    |\n", j+1, data2[j].namaPegawai, data2[j].kodePegawai, data2[j].absn);
	}
	printf("  +-------------------------------------------------------------------------+\n");
	
		printf("\nIngin mengisi absen bulanan? (y/n) --> ");
		scanf("%s", &pilihan4);
		
		switch (pilihan4)
		{
		case 'Y':
		case 'y':
		system ("cls");
		goto absen_bln;
			
		case 'N':
		case 'n':
		system ("cls");
		menu_utama();
		}
	}
	
	else if(konfirmasi == 'n'){
		system ("cls");
		menu_utama();
	}
	
	
	
	absen_bln:	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|     ABSENSI BULANAN PEGAWAI    |\n");
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("Masukkan nama bulan	: "); scanf("%s", namaBulan);
	printf("Daftar Nama Pegawai: \n\n");
	printf("  +----------------------------------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |	Absensi Bulan ini    |\n");
	printf("  +----------------------------------------------------------------------------------+\n");	
	printf("  |	1	|	  Ardhiya	|   	181201	   |		-	     |\n");
	printf("  |	2	|	  Prianka	|   	181202	   |		-	     |\n");
	printf("  |	3	|	  Anastacia	|   	190303	   |		-	     |\n");
	printf("  |	4	|	  Yukita	|   	190604	   |		-	     |\n");
	printf("  |	5	|	  Cahaya	|   	200105	   |		-	     |\n");
	printf("  +----------------------------------------------------------------------------------+\n");
	
	printf("Masukkan banyak inputan : "); scanf("%d", &banyak);
	
	for(k=0; k<banyak; k++)
	{
		printf("\nMasukkan nama 		: "); scanf("%s", data3[k].namaP);
		printf("Masukkan kode pegawai	: "); scanf("%d", &data3[k].kodeP);
		printf("Total Kehadiran		: "); scanf("%d", &data3[k].absenP);
	}
	system ("cls");
	
	
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|     ABSENSI BULANAN PEGAWAI    |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("Berhasil melakukan absensi!! \n");
	printf("Berikut keterangannya : \n\n");
	printf("  +---------------------------------------------------------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |	   Bulan	   |	Absensi Bulan ini   |\n");
	printf("  +---------------------------------------------------------------------------------------------------------+\n");	
	
	for(k=0; k<banyak; k++){
	printf("  |	%d	|	  %s	|   	%d	   |	   %s	   |		%d	    |\n", k+1, data3[k].namaP, data3[k].kodeP, namaBulan, data3[k].absenP);
	}
	printf("  +---------------------------------------------------------------------------------------------------------+\n");
	
	printf("\nIngin melanjutkan ke menu berikutnya? (y/n) --> ");
	scanf("%s", &pilihan5);
	
		switch (pilihan5)
	{
		case 'Y':
		case 'y':
		system ("cls");
		absen();
		
		case 'N':
		case 'n':
		system ("cls");
		menu_utama();
	}
	
}

/*
void gaji_bonus()
{
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   GAJI PEGAWAI	|\n"); 
	printf("\t\t\t\t\t==================================\n\n");

	
	printf("Pastikan Anda mengakses menu ini pada akhir bulan!\n");
	
	
	printf("Berikut Daftar Nama Pegawai dan Detail Gaji Per-Orang : \n");
	printf("  +-------------------------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |	Rekap Absensi   |	Pengurangan Gaji	|\n");
	printf("  +-------------------------------------------------------------------------+\n");	
	
	for(j=0; j<banyak; j++){
	printf("  |	1	|	  	   	%d	   |	   %s	    |\n", j+1, data2[j].namaPegawai, data2[j].kodePegawai, data2[j].absn);
	}
	
	printf("  |	1	|	  Ardhiya	|   	181201	   |	   -	    |	   -	    |\n");
	printf("  |	2	|	  Prianka	|   	181202	   |	   -	    |	   -	    |\n");
	printf("  |	3	|	  Anastacia	|   	190303	   |	   -	    |	   -	    |\n");
	printf("  |	4	|	  Yukita	|   	190604	   |	   -	    |	   -	    |\n");
	printf("  |	5	|	  Cahaya	|   	200105	   |	   -	    |	   -	    |\n");
	printf("  +-------------------------------------------------------------------------+\n");	
	
	printf("  +-------------------------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |	Gaji Pokok	|	Bonus	|	Total Gaji	|\n");
	printf("  +-------------------------------------------------------------------------+\n");	
	
	for(j=0; j<banyak; j++){
	printf("  |	%d	|	  %s	  |   	%d	   |	   %s	    |\n", j+1, data2[j].namaPegawai, data2[j].kodePegawai, data2[j].absn);
	}
	printf("  +-------------------------------------------------------------------------+\n");	
	
	printf("\nIngin mencetak rekapan? (y/n) --> ");
	scanf("%s", &pilihan5);
	
		switch (pilihan5)
	{
		case 'Y':
		case 'y':
		system ("cls");
		bonus(bonus_tawaran, i);
		
		case 'N':
		case 'n':
		system ("cls");
		menu_utama();
		}
	
		
	/*Total gaji dari seluruh pegawai:
	Nama pegawai		: (otomatis)
	Rekap absensi		: (otomatis)
	Total gaji pegawai		: (otomatis)
	gaji pokok 3 jt

}*/
