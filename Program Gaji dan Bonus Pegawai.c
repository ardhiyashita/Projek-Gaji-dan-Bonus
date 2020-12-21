#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include<time.h>
#define BONUS 0.2

	int bulan, tahun, alpha, total;
	int bulan2, tahun2, alpha2, total2;
	int bulan3, tahun3, alpha3, total3;
	int bulan4, tahun4, alpha4, total4;
	int bulan5, tahun5, alpha5, total5;
	int i,j,k,jumlah_hari;


int pilihan, pilihan2, pilihan4, pilihan5, pilihan7, pilihan9, pilihan10, pilihan_absen;
char pilihan1, pilihan3, pilihan6, pilihan8;
int kode_pegawai;

	char nama_pelanggan1[100], nama_pelanggan2[100], nama_pelanggan3[100], nama_pelanggan4[100], nama_pelanggan5[100];
	char nama_barang1[100], nama_barang2[100], nama_barang3[100], nama_barang4[100], nama_barang5[100];
	int harga_barang1, harga_barang2, harga_barang3, harga_barang4, harga_barang5;
	
	int data_bonus1=0, data_bonus2=0, data_bonus3=0, data_bonus4=0, data_bonus5=0;
	int bonus_pegawai1, bonus_pegawai2, bonus_pegawai3, bonus_pegawai4, bonus_pegawai5;
	int *total_bonus1, *total_bonus2, *total_bonus3, *total_bonus4, *total_bonus5;

int data_abs_harian1=0, data_abs_harian2=0, data_abs_harian3=0, data_abs_harian4=0, data_abs_harian5=0;
int pegawai_satu, pegawai_dua, pegawai_tiga, pegawai_empat, pegawai_lima;
int *rekap_harian1, *rekap_harian2, *rekap_harian3, *rekap_harian4, *rekap_harian5;
int min_gaji1=0, min_gaji2=0, min_gaji3=0, min_gaji4=0, min_gaji5=0;

int menu_utama();
int input_pegawai();
int gaji_bonus();
int absen_bulanan();
int absen_bulanan2();
int absen_bulanan3();
int absen_bulanan4();
int absen_bulanan5();

int rekapan();
int rekap_absen();
int minus_gaji();

int main()
{
	
	char user_name[10];
	char password[10];
	
	login:
	printf("\t\t\t\t      Selamat Datang di Toko DELUXE\n");
    printf("\t\t\t\tJalan Raya Kampus Udayana, Jimbaran, Bali\n");
    printf("\t\t\t\t    Contact Person : +62 812 3456 7890\n");
    printf("\t\t\t\t          Instagram : @deluxe.id\n\n\n");
	
	printf("Halaman ini merupakan menu login program\n");
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
	printf("  |	3	|	  Dextiro	|   	190303	   |\n");
	printf("  |	4	|	  Yukita	|   	190604	   |\n");
	printf("  |	5	|	  Cahaya	|   	200105	   |\n");
	printf("  +--------------------------------------------------------+\n\n");

	printf("Halaman ini merupakan menu login pegawai\n");
	printf("Silahkan masukkan kode pegawai anda untuk melakukan login!\n\n"); 
	printf("Kode pegawai : "); scanf("%d", &kode_pegawai);
	
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
	printf("1. DAFTAR NAMA DAN HARGA BARANG |\n"); 
	printf("2. INPUT BONUS PEGAWAI		|\n"); 
	printf("3. ABSENSI PEGAWAI		|\n"); 
	printf("4. TOTAL GAJI			|\n");
	printf("5. LOG OUT			|\n"); 
	printf("6. KELUAR			|\n");
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
			exit(0);

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
		
		input_rekap:
		total_bonus1 = &data_bonus1;
		total_bonus2 = &data_bonus2;
		total_bonus3 = &data_bonus3;
		total_bonus4 = &data_bonus4;
		total_bonus5 = &data_bonus5;
		
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|  	 INPUT BONUS PEGAWAI	 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");	
	
		if(kode_pegawai==181201){
						
			printf("Pegawai Ardhiya_181201\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan1);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang1);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang1);
			
			if(*total_bonus1 == 0){
				bonus_pegawai1 = BONUS*harga_barang1;
				*total_bonus1 = bonus_pegawai1;
			}
			else if(*total_bonus1 != 0){
				bonus_pegawai1 = BONUS*harga_barang1;
				*total_bonus1 = *total_bonus1 + bonus_pegawai1;
			}
			goto menu1;		
			return data_bonus1, *total_bonus1, bonus_pegawai1;
		}
		else if(kode_pegawai==181202){
			
			printf("Pegawai Prianka_181202\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan2);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang2);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang2);	
			
			if(*total_bonus2 == 0){
				bonus_pegawai2 = BONUS*harga_barang2;
				*total_bonus2 = bonus_pegawai2;
			}
			else if(*total_bonus2 != 0){
				bonus_pegawai2 = BONUS*harga_barang2;
				*total_bonus2 = *total_bonus2 + bonus_pegawai2;
			}	
			goto menu1;
			return data_bonus2, *total_bonus2, bonus_pegawai2;
		}
		else if(kode_pegawai==190303){
						
			printf("Pegawai Anastacia_190303\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan3);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang3);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang3);	
						
			if(*total_bonus3 == 0){
				bonus_pegawai3 = BONUS*harga_barang3;
				*total_bonus3 = bonus_pegawai3;
			}
			else if(*total_bonus3 != 0){
				bonus_pegawai3 = BONUS*harga_barang3;
				*total_bonus3 = *total_bonus3 + bonus_pegawai3;
			}	
			goto menu1;
			return data_bonus3, *total_bonus3, bonus_pegawai3;
		}
		else if(kode_pegawai==190604){
						
			printf("Pegawai Yukita_190604\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan4);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang4);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang4);	
			
			if(*total_bonus4 == 0){
				bonus_pegawai4 = BONUS*harga_barang4;
				*total_bonus4 = bonus_pegawai4;
			}
			else if(*total_bonus4 != 0){
				bonus_pegawai4 = BONUS*harga_barang4;
				*total_bonus4 = *total_bonus4 + bonus_pegawai4;
			}	
			goto menu1;
			return data_bonus4, *total_bonus4, bonus_pegawai4;
		}
		else if(kode_pegawai==200105){
						
			printf("Pegawai Cahaya_200105\n");
			printf("Masukkan nama pelanggan: "); scanf("%s", &nama_pelanggan5);
			printf("Masukkan nama barang   : "); scanf("%s", &nama_barang5);
			printf("Masukkan harga barang  : "); scanf("%d", &harga_barang5);	
			
			if(*total_bonus5 == 0){
				bonus_pegawai5 = BONUS*harga_barang5;
				*total_bonus5 = bonus_pegawai5;
			}
			else if(*total_bonus5 != 0){
				bonus_pegawai5 = BONUS*harga_barang5;
				*total_bonus5 = *total_bonus5 + bonus_pegawai5;
			}	
			goto menu1;
			return data_bonus5, *total_bonus5, bonus_pegawai5;
		}
		else{
			printf("\nPeriksa kembali inputan anda!");
		}
	
		
		menu1:
		printf("\n");
		printf("1. Lanjut ke menu berikutnya\n");
		printf("2. Menambah inputan bonus\n");
		printf("3. Lihat hasil rekapan\n");
		printf("4. Kembali ke menu utama\n");
		printf("Piihan Anda: "); scanf("%d", &pilihan2);
		
		switch (pilihan2)
		{
			case 1 :
			system ("cls");
			goto absen_pegawai;
			
			case 2 :
			system ("cls");
			gaji_bonus();
			
			case 3 :
			system ("cls");
			rekapan();
			
			case 4 :
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
		rekap_harian1 = &data_abs_harian1;
		rekap_harian2 = &data_abs_harian2;
		rekap_harian3 = &data_abs_harian3;
		rekap_harian4 = &data_abs_harian4;
		rekap_harian5 = &data_abs_harian5;
		
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|     ABSENSI HARIAN PEGAWAI     |\n");
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("Ingin melakukan absensi? (y/n) --> "); scanf("%s", &pilihan3);
	    
	    struct tm *Sys_T;		 
		time_t Tval;
		Tval = time(NULL);
		Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
		char copy[] = "melakukan absen pada tanggal dan waktu : ";
	    
		switch(pilihan3)
		{
			case 'Y':
			case 'y':
				if(kode_pegawai==181201){

				    printf ("Ardhiya_181201 %s %s", copy, asctime (Sys_T));
					pegawai_satu = *rekap_harian1 + 1;
					*rekap_harian1 = pegawai_satu;
					goto menu4;
					
					return pegawai_satu, *rekap_harian1;
				}
				else if(kode_pegawai==181202){
					
				    printf ("Prianka_181202 %s %s", copy, asctime (Sys_T));
					pegawai_dua = *rekap_harian2 + 1;
					*rekap_harian2 = pegawai_dua;
					goto menu4;
					
					return pegawai_dua, *rekap_harian2;
				}
				else if(kode_pegawai==190303){
					
					printf("Dextiro_190303 %s %s", copy, asctime (Sys_T));
					pegawai_tiga = *rekap_harian3 + 1;
					*rekap_harian3 = pegawai_tiga;
					goto menu4;
					
					return pegawai_tiga, *rekap_harian3;
				}
				else if(kode_pegawai==190604){
					
					printf("Yukita_190604 %s %s", copy, asctime (Sys_T));
					pegawai_empat = *rekap_harian4 + 1;
					*rekap_harian4 = pegawai_empat;
					goto menu4;
					
					return pegawai_empat, *rekap_harian4;
				}
				else if(kode_pegawai==200105){
					
					printf("Cahaya_200105 %s %s", copy, asctime (Sys_T));
					pegawai_lima = *rekap_harian5 + 1;
					*rekap_harian5 = pegawai_lima;
					goto menu4;
					
					return pegawai_lima, *rekap_harian5;
				}
				
			case 'N':
			case 'n':
			system ("cls");
			menu_utama();
		}
		/* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
		
		menu4:
		printf("\n");
		printf("1. Lanjut ke menu absen bulanan\n");
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
					absen_bulanan3();
					goto menu7;
				}
				else if(kode_pegawai==190604){
					absen_bulanan4();		
					goto menu7;
				}
				else if(kode_pegawai==200105){
					absen_bulanan5();
					goto menu7;
				}
				
			case 'N':
			case 'n':
			system ("cls");
			menu_utama();
		}
	
		menu7:
			printf("\n");
			printf("1. Koreksi input absensi bulanan\n");
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
		minus_gaji();
		int gaji_pokok = 3000000;
		
		gaji_pegawai:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   GAJI PEGAWAI		|\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("Pastikan Anda mengakses menu ini pada akhir bulan!\n");
		
		printf("Berikut Daftar Nama Pegawai dan Detail Gaji Per-Orang : \n");
		printf("  +-------------------------------------------------------------------------------------------------------------+\n");		
		printf("  | No |   Nama    | Kode Pegawai | Rekap Absensi | Pengurangan Gaji |\n");
		printf("  +-------------------------------------------------------------------------------------------------------------+\n");	
		printf("  | 1  |  Ardhiya  |    181201    |     %-7d   |	%d	|\n", total, min_gaji1);
		printf("  | 2  |  Prianka  |    181202    |     %-7d   |	%d	|\n", total2, min_gaji2);
		printf("  | 3  |  Dextiro  |    190303    |     %-7d   |	%d	|\n", total3, min_gaji3);
		printf("  | 4  |  Yukita   |    190604    |     %-7d   |	%d	|\n", total4, min_gaji4);
		printf("  | 5  |  Cahaya   |    200105    |     %-7d   |	%d	|\n", total5, min_gaji5);
		printf("  +-------------------------------------------------------------------------------------------------------------+\n\n");	
		
		printf("  +-------------------------------------------------------------------------------------------------------------+\n");		
		printf("  | No |   Nama    | Kode Pegawai |	Gaji Pokok	|   Bonus |	Total Gaji	|\n");
		printf("  +-------------------------------------------------------------------------------------------------------------+\n");	
		printf("  | 1  |  Ardhiya  |    181201    |	%d		| %d	|	%d		|\n", gaji_pokok, *total_bonus1, gaji_pokok+*total_bonus1-min_gaji1);
		printf("  | 2  |  Prianka  |    181202    |	%d		| %d	|	%d		|\n", gaji_pokok, *total_bonus2, gaji_pokok+*total_bonus2-min_gaji2);
		printf("  | 3  |  Dextiro  |    190303    |	%d		| %d	|	%d		|\n", gaji_pokok, *total_bonus3, gaji_pokok+*total_bonus3-min_gaji3);
		printf("  | 4  |  Yukita   |    190604    |	%d		| %d	|	%d		|\n", gaji_pokok, *total_bonus4, gaji_pokok+*total_bonus4-min_gaji4);
		printf("  | 5  |  Cahaya   |    200105    |	%d		| %d	|	%d		|\n", gaji_pokok, *total_bonus5, gaji_pokok+*total_bonus5-min_gaji5);
		printf("  +-------------------------------------------------------------------------------------------------------------+\n");	
		
		printf("\nIngin mencetak rekapan? (y/n) --> ");
		scanf("%s", &pilihan5);
		
			switch (pilihan5)
			{
				case 'Y':
				case 'y':
				system ("cls");
				
				case 'N':
				case 'n':
				system ("cls");
			}
		
			
		/*Total gaji dari seluruh pegawai:
		Nama pegawai		: (otomatis)
		Rekap absensi		: (otomatis)
		Total gaji pegawai		: (otomatis)
		gaji pokok 3 jt*/
	}
}

int rekapan(){
	
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP BONUS		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("  +--------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|      Bonus		|\n");
	printf("  +--------------------------------------------------------+\n");	
	printf("  |	1	|	  Ardhiya	|   	%d	   |\n", *total_bonus1);
	printf("  |	2	|	  Prianka	|   	%d	   |\n", *total_bonus2);
	printf("  |	3	|	  Dextiro	|   	%d	   |\n", *total_bonus3);
	printf("  |	4	|	  Yukita	|   	%d	   |\n", *total_bonus4);
	printf("  |	5	|	  Cahaya	|   	%d	   |\n", *total_bonus5);
	printf("  +--------------------------------------------------------+\n");
	
	menu5:
		printf("\n");
		printf("1. Menambah inputan bonus\n");
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

int absen_bulanan(){
		
							
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &bulan);
		
		
			if(bulan==1||bulan==3||bulan==5||bulan==7||bulan==8||bulan==10||bulan==12)
			{
				jumlah_hari=27;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha); 
				total=jumlah_hari-alpha;
			}
			
			else if(bulan==4 ||bulan==6 ||bulan==9 ||bulan==11)
			{
				jumlah_hari=26;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha); 
				total=jumlah_hari-alpha;
			}
			
			else if(bulan==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun);
				if(tahun%4==0){
					jumlah_hari=25;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha); 
					total=jumlah_hari-alpha;	
				}
				else if(tahun%4!=0){
					jumlah_hari=24;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha); 
					total=jumlah_hari-alpha;
				}
			}
		
}

int absen_bulanan2(){
		
							
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &bulan2);
		
		
			if(bulan2==1||bulan2==3||bulan2==5||bulan2==7||bulan2==8||bulan2==10||bulan2==12)
			{
				jumlah_hari=27;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun2);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha2); 
				total2=jumlah_hari-alpha2;
			}
			
			else if(bulan2==4 ||bulan2==6 ||bulan2==9 ||bulan2==11)
			{
				jumlah_hari=26;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun2);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha2); 
				total2=jumlah_hari-alpha2;
			}
			
			else if(bulan2==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun2);
				if(tahun2%4==0){
					jumlah_hari=25;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha2); 
					total2=jumlah_hari-alpha2;	
				}
				else if(tahun2%4!=0){
					jumlah_hari=24;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha2); 
					total2=jumlah_hari-alpha2;
				}
			}
		
}

int absen_bulanan3(){
		
							
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &bulan3);
		
		
			if(bulan3==1||bulan3==3||bulan3==5||bulan3==7||bulan3==8||bulan3==10||bulan3==12)
			{
				jumlah_hari=27;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun3);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha3); 
				total3=jumlah_hari-alpha3;
			}
			
			else if(bulan3==4 ||bulan3==6 ||bulan3==9 ||bulan3==11)
			{
				jumlah_hari=26;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun3);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha3); 
				total3=jumlah_hari-alpha3;
			}
			
			else if(bulan3==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun3);
				if(tahun3%4==0){
					jumlah_hari=25;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha3); 
					total3=jumlah_hari-alpha3;	
				}
				else if(tahun3%4!=0){
					jumlah_hari=24;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha3); 
					total3=jumlah_hari-alpha3;
				}
			}
		
}

int absen_bulanan4(){
		
							
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &bulan4);
		
		
			if(bulan4==1||bulan4==3||bulan4==5||bulan4==7||bulan4==8||bulan4==10||bulan4==12)
			{
				jumlah_hari=27;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun4);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha4); 
				total4=jumlah_hari-alpha4;
			}
			
			else if(bulan4==4 ||bulan4==6 ||bulan4==9 ||bulan4==11)
			{
				jumlah_hari=26;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun4);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha4); 
				total4=jumlah_hari-alpha4;
			}
			
			else if(bulan4==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun4);
				if(tahun4%4==0){
					jumlah_hari=25;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha4); 
					total4=jumlah_hari-alpha4;	
				}
				else if(tahun4%4!=0){
					jumlah_hari=24;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha4); 
					total4=jumlah_hari-alpha4;
				}
			}
		
}

int absen_bulanan5(){
		
							
		printf("MASUKKAN BULAN	: ");
		scanf("%d", &bulan5);
		
		
			if(bulan5==1||bulan5==3||bulan5==5||bulan5==7||bulan5==8||bulan5==10||bulan5==12)
			{
				jumlah_hari=27;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun5);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha5); 
				total5=jumlah_hari-alpha5;
			}
			
			else if(bulan5==4 ||bulan5==6 ||bulan5==9 ||bulan5==11)
			{
				jumlah_hari=26;
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun5);
				printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha5); 
				total5=jumlah_hari-alpha5;
			}
			
			else if(bulan5==2)
			{
				printf("MASUKKAN TAHUN : "); scanf("%d", &tahun5);
				if(tahun5%4==0){
					jumlah_hari=25;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha5); 
					total5=jumlah_hari-alpha5;	
				}
				else if(tahun5%4!=0){
					jumlah_hari=24;
					printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha5); 
					total5=jumlah_hari-alpha5;
				}
			}
		
}

int rekap_absen(){
	
	rekap_absen:
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP ABSEN		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("+-----------------------------------------------------------------+\n"); 
	printf("| NO  |     NAMA     |	BULAN KE- | ABSEN_HARIAN  |  ABSEN_BULAN  |\n"); 
	printf("+-----------------------------------------------------------------+\n");
	printf("|  1	   Ardhiya        %-8d       %d                %-7d  |\n", bulan, *rekap_harian1, total);
	printf("|  2	   Prianka        %-8d       %d                %-7d  |\n", bulan2, *rekap_harian2, total2);
	printf("|  3	   Dextiro        %-8d       %d                %-7d  |\n", bulan3, *rekap_harian3, total3);
	printf("|  4	   Yukita         %-8d       %d                %-7d  |\n", bulan4, *rekap_harian4, total4);
	printf("|  5	   Cahaya         %-8d       %d                %-7d  |\n", bulan5, *rekap_harian5, total5);
		
	printf("+-----------------------------------------------------------------+\n");
	
	FILE*absen;
	absen = fopen ("Absen pegawai.txt", "w+");
	
	fprintf(absen,"\t\t\t\t\t==================================\n"); 
	fprintf(absen,"\t\t\t\t\t|	   REKAP ABSEN		 |\n"); 
	fprintf(absen,"\t\t\t\t\t==================================\n\n");
	
	fprintf(absen,"+-----------------------------------------------------------------+\n"); 
	fprintf(absen,"| NO  |     NAMA     |	BULAN KE- | ABSEN_HARIAN  |  ABSEN_BULAN  |\n"); 
	fprintf(absen,"+-----------------------------------------------------------------+\n");
	fprintf(absen,"|  1	   Ardhiya        %-8d       %d                %-7d  |\n", bulan, *rekap_harian1, total);
	fprintf(absen,"|  2	   Prianka        %-8d       %d                %-7d  |\n", bulan2, *rekap_harian2, total2);
	fprintf(absen,"|  3	   Anastacia      %-8d       %d                %-7d  |\n", bulan3, *rekap_harian3, total3);
	fprintf(absen,"|  4	   Yukita         %-8d       %d                %-7d  |\n", bulan4, *rekap_harian4, total4);
	fprintf(absen,"|  5	   Cahaya         %-8d       %d                %-7d  |\n", bulan5, *rekap_harian5, total5);	
	fprintf(absen,"+-----------------------------------------------------------------+\n");
	fclose(absen);
	
	menu6:
		printf("\n");
		printf("Kembali ke menu utama? (y/n) --> "); scanf("%s", &pilihan6);
		
		switch (pilihan6)
		{
			case 'Y' :
			case 'y' :
			system ("cls");
			menu_utama();
						
			case 'N' :
			case 'n' :
			system("cls");
			goto rekap_absen;
		}		
		
}

int minus_gaji(){
	
	if(kode_pegawai==181201 || kode_pegawai==181202 || kode_pegawai==190303 || kode_pegawai==190604 || kode_pegawai==200105){
		if(alpha>3){
			min_gaji1 = 500000;
		}
		else if(alpha2>3){
			min_gaji2 = 500000;
		}
		else if(alpha3>3){
			min_gaji3 = 500000;
		}
		else if(alpha4>3){
			min_gaji4 = 500000;
		}
		else if(alpha5>3){
			min_gaji5 = 500000;
		}
		else if(alpha=0){
			min_gaji1 = 0;
		}
		else if(alpha2=0){
			min_gaji2 = 0;
		}
		else if(alpha3=0){
			min_gaji3 = 0;
		}
		else if(alpha4=0){
			min_gaji4 = 0;
		}
		else if(alpha5=0){
			min_gaji5 = 0;
		}
	}
}
