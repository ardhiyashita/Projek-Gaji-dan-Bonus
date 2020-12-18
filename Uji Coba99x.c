#include<string.h>
#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<time.h>
#define BONUS 0.2

typedef struct{
	
	//char namaP[100];
	int bulan;
	int tahun;
	int kodeP;
	int absenP;
	int alpha;
	int total;
	
}data_absen;
data_absen absen[5];

typedef struct{
	
	//char namaP[100];
	int bulan2;
	int tahun2;
	int kodeP2;
	int absenP2;
	int alpha2;
	int total2;
	
}data_absen2;
data_absen2 absen2[5];

int i,j;
int jumlah_hari, jumlah_hari2;

int pilihan, pilihan1, pilihan2, pilihan3, pilihan4, pilihan5, pilihan6, pilihan7, pilihan8, pilihan9, pilihan10, pilihan_absen;
int kode_pegawai;

char nama_pelanggan1[100], nama_pelanggan2[100], nama_pelanggan3[100], nama_pelanggan4[100], nama_pelanggan5[100];
char nama_barang1[100], nama_barang2[100], nama_barang3[100], nama_barang4[100], nama_barang5[100];
int harga_barang1, harga_barang2, harga_barang3, harga_barang4, harga_barang5;
int detail_rekap_bonus1;
int bonus_pegawai1, bonus_pegawai2, bonus_pegawai3, bonus_pegawai4, bonus_pegawai5;
int *rekap_bonus1, *rekap_bonus2, *rekap_bonus3, *rekap_bonus4, *rekap_bonus5;

int pegawai_satu, pegawai_dua, pegawai_tiga, pegawai_empat, pegawai_lima;
int *rekap_absensi1, *rekap_absensi2, *rekap_absensi3, *rekap_absensi4, *rekap_absensi5;

int menu_utama();
int input_pegawai();
int gaji_bonus();
void absen_bulanan();
void absen_bulanan2();

void rekapan();
void rekap_absen();

int main()
{
	
	char user_name[10];
	char password[10];
	
	login:
	printf("\t\t\t\t      Selamat Datang di Toko DELUXE\n");
    printf("\t\t\t\tJalan Raya Kampus Udayana, Jimbaran, Bali\n");
    printf("\t\t\t\t    Contact Person : +62 812 3456 7890\n");
    printf("\t\t\t\t          Instagram : @deluxe.id\n\n\n");
	
	printf("Masukkan username anda  : "); scanf("%s", &user_name);
	printf("Masukkan password	: "); scanf("%s", &password);
		
		
			if (strcmp(user_name, "admin")==0 && strcmp(password, "deluxepass")==0 ){
				printf("\nLogin Sukses");
				system ("cls");
				input_pegawai();
			}
			
			else if(strcmp(user_name, "pegawai")==0 && strcmp(password, "deluxepass")==0 ){
				printf("\nLogin Sukses");
				system ("cls");
				input_pegawai();
			}
			
			else{
				printf("\nAnda impostor yaaaa:v");
				/*printf("\nUsername atau Password yang anda masukkan salah!");
				printf("\nSilahkan mencoba kembali");*/
				system ("cls");
				goto login;
			}
}

int input_pegawai()
{
	
	menu_utama:
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|   	DAFTAR NAMA PEGAWAI	 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("  +--------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|   Kode Pegawai   |\n");
	printf("  +--------------------------------------------------------+\n");	
	printf("  |	1	|	  Ardhiya	|   	181201	   |\n");
	printf("  |	2	|	  Prianka	|   	181202	   |\n");
	printf("  |	3	|	  Anastacia	|   	190303	   |\n");
	printf("  |	4	|	  Yukita	|   	190604	   |\n");
	printf("  |	5	|	  Cahaya	|   	200105	   |\n");
	printf("  +--------------------------------------------------------+\n");

	//printf("Masukkan banyaknya input pegawai: "); scanf("%d", &input1);
	printf("\nSilahkan masukkan kode pegawai anda: "); scanf("%d", &kode_pegawai);
	
	if(kode_pegawai==181201 || kode_pegawai==181202 || kode_pegawai==190303 || kode_pegawai==190604 || kode_pegawai==200105)
	{
		system("cls");
		menu_utama();
	}
	else
	{
		printf("\nPeriksa kembali inputan anda!");
		system("cls");
		goto menu_utama;
	}
		
	return kode_pegawai;
}

int menu_utama(){
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   TOKO DELUXE		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");

	printf(" NOTE!!! HARAP MEMASUKAN PILIHAN SESUAI DENGAN MENU YANG TERSEDIA\n\n");
	printf("=================================\n"); 
	printf("| 	  PILIHAN MENU	 	|\n"); 
	printf("=================================\n"); 
	printf("=================================\n");
	printf("1. DAFTAR NAMA DAN HARGA BARANG  |\n"); 
	printf("2. INPUT DAN REKAP BONUS PEGAWAI |\n"); 
	printf("3. ABSENSI PEGAWAI		 |\n"); 
	printf("4. TOTAL GAJI			 |\n");
	printf("5. LOG OUT			 |\n"); 
	printf("6. KELUAR			 |\n");
	printf("=================================\n\n"); 
	
	printf("=================================\n");
	printf("| 	 MASUKKAN MENU 		| \n"); 
	printf("=================================\n");
	
	printf("Pilihan Menu: ");
	scanf("%d", &pilihan);
	system ("cls");
	
	switch (pilihan)
	{
		case 1 : 
			gaji_bonus();
			break;
		
		case 2 : 
			gaji_bonus();
			break;
			
		case 3 : 
			gaji_bonus();
			break;
		
		case 4 : 
			gaji_bonus();
			break;
		
		case 5 :
			input_pegawai();
			break;
			
		case 6 : 
			return 0;
			break;
			
		default :
			printf("\nPeriksa kembali inputan anda!");
	}
	return pilihan;
}


int gaji_bonus()
{
	
	if(pilihan==1)
	{
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
			goto input_rekap;
			
			case 'N':
			case 'n':
			system ("cls");
			menu_utama();
		}
	}
	
	else if(pilihan==2)
	{
		//int simpanan1;
		//rekap_bonus1 = &simpanan1;
		//int loop1;
				
		input_rekap:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|  	 INPUT BONUS PEGAWAI	 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");	
	
		if(kode_pegawai==181201){
			//printf("Ingin memasukkan berapa inputan -> "); scanf("%d", &loop1);
			//for(loop1=0; loop1<1; loop1++){
			
			printf("Pegawai Ardhiya_181201\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan1);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang1);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang1);
			
			bonus_pegawai1 = BONUS*harga_barang1;
			//*rekap_bonus1 = bonus_pegawai1[loop1];
			goto menu1;
						
			return nama_pelanggan1, nama_barang1, harga_barang1;
		}
		else if(kode_pegawai==181202){
			printf("Pegawai Prianka_181202\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan2);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang2);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang2);	
					
			bonus_pegawai2 = BONUS*harga_barang2;	
			goto menu1;
			return nama_pelanggan2, nama_barang2, harga_barang2;
		}
		else if(kode_pegawai==190303){
			printf("Pegawai Anastacia_190303\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan3);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang3);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang3);	
			
			bonus_pegawai3 = BONUS*harga_barang3;
			goto menu1;
			return nama_pelanggan3, nama_barang3, harga_barang3;
		}
		else if(kode_pegawai==190604){
			printf("Pegawai Yukita_190604\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan4);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang4);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang4);	
			
			bonus_pegawai4 = BONUS*harga_barang4;
			goto menu1;
			return nama_pelanggan4, nama_barang4, harga_barang4;
		}
		else if(kode_pegawai==200105){
			printf("Pegawai Cahaya_200105\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan5);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang5);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang5);	
			
			bonus_pegawai5 = BONUS*harga_barang5;
			goto menu1;
			return nama_pelanggan5, nama_barang5, harga_barang5;
		}
		else{
			printf("\nPeriksa kembali inputan anda!");
		}
	
		
		menu1:
		printf("\n");
		printf("1. Lanjut ke menu berikutnya\n");
		printf("2. Lihat hasil rekapan\n");
		printf("3. Kembali ke menu utama\n");
		printf("Piihan Anda: "); scanf("%d", &pilihan2);
		
		switch (pilihan2)
		{
			case 1 :
			system ("cls");
			goto absen_pegawai;
			
			case 2 :
			system ("cls");
			rekapan();
			
			case 3 :
			system("cls");
			menu_utama();
		}
	}
	
	else if(pilihan==3)
	{
		
		absen_pegawai:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   ABSENSI PEGAWAI	 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("=================================\n");
		printf("1. ABSENSI HARIAN		 |\n"); 
		printf("2. ABSENSI BULANAN		 |\n");
		printf("=================================\n");
		
		printf("Masukkan pilihan absensi : "); scanf("%d", &pilihan_absen);
		
		switch (pilihan_absen){
			
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
			goto absen_pegawai;
		}
		
		absen_hrn:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|     ABSENSI HARIAN PEGAWAI     |\n");
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("Ingin melakukan absensi? (y/n) --> "); scanf("%s", &pilihan3);
	    
		switch(pilihan3)
		{
			case 'Y':
			case 'y':
				if(kode_pegawai==181201){
					printf("Ardhiya_181201 melakukan absen pada ");
					struct tm *Sys_T;
				 
				    time_t Tval;
				    Tval = time(NULL);
				    Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
				 
				    printf ("tanggal dan waktu : %s", asctime (Sys_T));
					pegawai_satu += 1;
					//*rekap_absensi1 += pegawai_satu;
					goto menu4;
					
					return pegawai_satu;
				}
				else if(kode_pegawai==181202){
					printf("Prianka_181202 melakukan absen pada ");
					struct tm *Sys_T;
				 
				    time_t Tval;
				    Tval = time(NULL);
				    Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
				 
				    printf ("tanggal dan waktu : %s", asctime (Sys_T));
					pegawai_dua += 1;
					goto menu4;
					
					return pegawai_dua;
				}
				else if(kode_pegawai==190303){
					printf("Anastacia_190303 melakukan absen pada ");
					struct tm *Sys_T;
				 
				    time_t Tval;
				    Tval = time(NULL);
				    Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
				 
				    printf ("tanggal dan waktu : %s", asctime (Sys_T));
					pegawai_tiga += 1;
					goto menu4;
					
					return pegawai_tiga;
				}
				else if(kode_pegawai==190604){
					printf("Yukita_190604 melakukan absen pada ");
					struct tm *Sys_T;
				 
				    time_t Tval;
				    Tval = time(NULL);
				    Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
				 
				    printf ("tanggal dan waktu : %s", asctime (Sys_T));
					pegawai_empat += 1;
					goto menu4;
					
					return pegawai_empat;
				}
				else if(kode_pegawai==200105){
					printf("Cahaya_200105 melakukan absen pada ");
					struct tm *Sys_T;
				 
				    time_t Tval;
				    Tval = time(NULL);
				    Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
				 
				    printf ("tanggal dan waktu : %s", asctime (Sys_T));
					pegawai_lima += 1;
					goto menu4;
					
					return pegawai_lima;
				}
				
			case 'N':
			case 'n':
			system ("cls");
			menu_utama();
		}
		/* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
		
		menu4:
		printf("\n");
		printf("1. Lanjut ke menu berikutnya\n");
		printf("2. Lihat hasil rekapan\n");
		printf("3. Kembali ke menu utama\n");
		printf("Piihan Anda: "); scanf("%d", &pilihan4);
		
		switch (pilihan4)
		{
			case 1 :
			system ("cls");
			goto absen_bln;
			
			case 2 :
			system ("cls");
			rekap_absen();
			
			case 3 :
			system("cls");
			menu_utama();
		}		
		
		absen_bln:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|     ABSENSI BULANAN PEGAWAI    |\n");
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("Ingin melakukan absensi? (y/n) --> "); scanf("%s", &pilihan8);
	    
		switch(pilihan8)
		{
			case 'Y':
			case 'y':
				if(kode_pegawai==181201){
					
					absen_bulanan();
					goto menu7;

				}
				else if(kode_pegawai==181202){
					
					absen_bulanan2();
					goto menu7;

				}
				else if(kode_pegawai==190303){
				
					goto menu7;
				}
				else if(kode_pegawai==190604){
								
					goto menu7;
					
					
				}
				else if(kode_pegawai==200105){
				
					goto menu7;
	
				}
				
			case 'N':
			case 'n':
			system ("cls");
			menu_utama();
		}
	
		menu7:
			printf("\n");
			printf("1. Lanjut ke menu berikutnya\n");
			printf("2. Lihat hasil rekapan\n");
			printf("3. Kembali ke menu utama\n");
			printf("Piihan Anda: "); scanf("%d", &pilihan7);
			
			switch (pilihan7)
			{
				case 1 :
				system ("cls");
				goto absen_bln;
				
				case 2 :
				system ("cls");
				rekap_absen();
				
				case 3 :
				system("cls");
				menu_utama();
			}
		
	}
	
	else if(pilihan==4)
	{
		
		gaji_pegawai:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   GAJI PEGAWAI		|\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		
	}
	
	/*
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
	gaji pokok 3 jt*/

}

void rekapan()
{
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP BONUS		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("  +--------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|      Bonus   |\n");
	printf("  +--------------------------------------------------------+\n");	
	printf("  |	1	|	  Ardhiya	|   	%d	   |\n", bonus_pegawai1);
	printf("  |	2	|	  Prianka	|   	%d	   |\n", bonus_pegawai2);
	printf("  |	3	|	  Anastacia	|   	%d	   |\n", bonus_pegawai3);
	printf("  |	4	|	  Yukita	|   	%d	   |\n", bonus_pegawai4);
	printf("  |	5	|	  Cahaya	|   	%d	   |\n", bonus_pegawai5);
	printf("  +--------------------------------------------------------+\n");

	menu5:
		printf("\n");
		printf("1. Lanjut ke menu berikutnya\n");
		printf("2. Kembali ke menu utama\n");
		printf("Piihan Anda: "); scanf("%d", &pilihan5);
		
		switch (pilihan5)
		{
			case 1 :
			system ("cls");
			gaji_bonus();
						
			case 2 :
			system("cls");
			menu_utama();
		}		
}

void absen_bulanan(){
		
		for(i=0;i<1;i++){
					
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &absen[i].bulan);
		
		
			if(absen[i].bulan==1||absen[i].bulan==3||absen[i].bulan==5||absen[i].bulan==7||absen[i].bulan==8||absen[i].bulan==10||absen[i].bulan==12)
			{
				jumlah_hari=31;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==4 ||absen[i].bulan==6 ||absen[i].bulan==9 ||absen[i].bulan==11)
			{
				jumlah_hari=30;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				if(absen[i].tahun%4==0){
					jumlah_hari=29;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;	
				}
				else if(absen[i].tahun%4!=0){
					jumlah_hari=28;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;
				}
			}
		}
}

void absen_bulanan2(){
		
		for(j=0;j<1;j++){
					
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &absen2[j].bulan2);
		
		
			if(absen2[j].bulan2==1||absen2[j].bulan2==3||absen2[j].bulan2==5||absen2[j].bulan2==7||absen2[j].bulan2==8||absen2[j].bulan2==10||absen2[j].bulan2==12)
			{
				jumlah_hari2=31;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen2[j].tahun2);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen2[j].alpha2); 
				absen2[j].total2=jumlah_hari2-absen2[j].alpha2;
			}
			
			else if(absen2[j].bulan2==4 ||absen2[j].bulan2==6 ||absen2[j].bulan2==9 ||absen2[j].bulan2==11)
			{
				jumlah_hari2=30;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen2[j].tahun2);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen2[j].alpha2); 
				absen2[j].total2=jumlah_hari2-absen2[j].alpha2;
			}
			
			else if(absen2[j].bulan2==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen2[j].tahun2);
				if(absen2[j].tahun2%4==0){
					jumlah_hari2=29;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen2[j].alpha2); 
					absen2[j].total2=jumlah_hari2-absen2[j].alpha2;	
				}
				else if(absen2[j].tahun2%4!=0){
					jumlah_hari2=28;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen2[j].alpha2); 
					absen2[j].total2=jumlah_hari2-absen2[j].alpha2;
				}
			}	
		}
}

/*int absen_bulanan3(){
		
		for(i=0;i<1;i++){
					
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &absen[i].bulan);
		
		
			if(absen[i].bulan==1||absen[i].bulan==3||absen[i].bulan==5||absen[i].bulan==7||absen[i].bulan==8||absen[i].bulan==10||absen[i].bulan==12)
			{
				jumlah_hari=31;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==4 ||absen[i].bulan==6 ||absen[i].bulan==9 ||absen[i].bulan==11)
			{
				jumlah_hari=30;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				if(absen[i].tahun%4==0){
					jumlah_hari=29;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;	
				}
				else if(absen[i].tahun%4!=0){
					jumlah_hari=28;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;
				}
			}	
		}
}

int absen_bulanan4(){
		
		for(i=0;i<1;i++){
					
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &absen[i].bulan);
		
		
			if(absen[i].bulan==1||absen[i].bulan==3||absen[i].bulan==5||absen[i].bulan==7||absen[i].bulan==8||absen[i].bulan==10||absen[i].bulan==12)
			{
				jumlah_hari=31;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==4 ||absen[i].bulan==6 ||absen[i].bulan==9 ||absen[i].bulan==11)
			{
				jumlah_hari=30;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				if(absen[i].tahun%4==0){
					jumlah_hari=29;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;	
				}
				else if(absen[i].tahun%4!=0){
					jumlah_hari=28;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;
				}
			}	
		}
}

int absen_bulanan5(){
		
		for(i=0;i<1;i++){
					
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &absen[i].bulan);
		
		
			if(absen[i].bulan==1||absen[i].bulan==3||absen[i].bulan==5||absen[i].bulan==7||absen[i].bulan==8||absen[i].bulan==10||absen[i].bulan==12)
			{
				jumlah_hari=31;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==4 ||absen[i].bulan==6 ||absen[i].bulan==9 ||absen[i].bulan==11)
			{
				jumlah_hari=30;
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
				absen[i].total=jumlah_hari-absen[i].alpha;
			}
			
			else if(absen[i].bulan==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &absen[i].tahun);
				if(absen[i].tahun%4==0){
					jumlah_hari=29;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;	
				}
				else if(absen[i].tahun%4!=0){
					jumlah_hari=28;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &absen[i].alpha); 
					absen[i].total=jumlah_hari-absen[i].alpha;
				}
			}	
		}
}*/

void rekap_absen()
{
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP ABSEN		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("+--------------------------------------------------+\n"); 
	printf("| NO  |     NAMA     |  BULAN  |  TOTAL KEHADIRAN  |\n"); 
	printf("+--------------------------------------------------+\n");
	printf("|  1	Ardhiya  	%-8d	%-7d    |\n", absen[i].bulan, absen[i].total);
	printf("|  2	Prianka  	%-8d	%-7d    |\n", absen2[j].bulan2, absen2[j].total2);
	/*printf("|  3	Anastacia  	%-8d	%-7d    |\n", absen2[j].bulan2, absen2[j].total2);
	printf("|  4	Yukita  	%-8d	%-7d    |\n", absen2[j].bulan2, absen2[j].total2);
	printf("|  5	Cahaya  	%-8d	%-7d    |\n", absen2[j].bulan2, absen2[j].total2);*/
		
	printf("+--------------------------------------------------+\n");
	
	menu6:
		printf("\n");
		printf("1. Lanjut ke menu berikutnya\n");
		printf("2. Kembali ke menu utama\n");
		printf("Piihan Anda: "); scanf("%d", &pilihan6);
		
		switch (pilihan6)
		{
			case 1 :
			system ("cls");
			gaji_bonus();
						
			case 2 :
			system("cls");
			menu_utama();
		}		
		
}
