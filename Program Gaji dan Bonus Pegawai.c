#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define BONUS 0.05

int bulan, tahun, alpha, total;
int bulan2, tahun2, alpha2, total2;
int bulan3, tahun3, alpha3, total3;
int bulan4, tahun4, alpha4, total4;
int bulan5, tahun5, alpha5, total5;
int i,j,k,jumlah_hari;

int pilihan, pilihan2, pilihan4, pilihan5, pilihan7, pilihan9, pilihan12, pilihan_absen;
char pilihan1, pilihan3, pilihan6, pilihan8, pilihan10, piihan11;
int kode_pegawai;

char nama_pelanggan1[100], nama_pelanggan2[100], nama_pelanggan3[100], nama_pelanggan4[100], nama_pelanggan5[100];
char nama_barang1[100], nama_barang2[100], nama_barang3[100], nama_barang4[100], nama_barang5[100];
int harga_barang1, harga_barang2, harga_barang3, harga_barang4, harga_barang5;
	
int data_bonus1=0, data_bonus2=0, data_bonus3=0, data_bonus4=0, data_bonus5=0;
int bonus_pegawai1, bonus_pegawai2, bonus_pegawai3, bonus_pegawai4, bonus_pegawai5;
int *total_bonus1, *total_bonus2, *total_bonus3, *total_bonus4, *total_bonus5;

int rekap_harian1, rekap_harian2, rekap_harian3, rekap_harian4, rekap_harian5;
int min_gaji1=0, min_gaji2=0, min_gaji3=0, min_gaji4=0, min_gaji5=0;
int pilihann, pilihann1, pilihann2, pilihann3;
int final_gaji1, final_gaji2, final_gaji3, final_gaji4, final_gaji5;

char awalan_rkp1[255], awalan_rkp2[255], awalan_rkp3[255], awalan_rkp4[255], awalan_rkp5[255];
int bns1, bns2, bns3, bns4, bns5;
char awalan_absn1[255], awalan_absn2[255], awalan_absn3[255], awalan_absn4[255], awalan_absn5[255];
int absen_1, absen_2, absen_3, absen_4, absen_5;

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
void hapus_data();
void log_out();
int admin();
int admin2();

int main(){	
	system("color 70");
	char user_name[10];
	char password[10];
	
	login:
	printf("\t\t\t\t      Selamat Datang di Toko DELUXE\n");
    printf("\t\t\t\tJalan Raya Kampus Udayana, Jimbaran, Bali\n");
    printf("\t\t\t\t    Contact Person : +62 812 3456 7890\n");
    printf("\t\t\t\t          Instagram : @deluxe.id\n\n\n");
	
	printf("  LOGIN PROGRAM\n\n");
	printf("  Masukkan username anda : "); scanf("%s", &user_name);
	printf("  Masukkan password      : "); scanf("%s", &password);
			if (strcmp(user_name, "admin")==0 && strcmp(password, "deluxepass")==0 ){
				printf("\nLogin Sukses");
				system ("cls");
				admin();
			}
			else if(strcmp(user_name, "pegawai")==0 && strcmp(password, "deluxepass")==0 ){
				printf("\nLogin Sukses");
				system ("cls");
				input_pegawai();
			}
			else{
				printf("\nUsername atau Password yang anda masukkan salah!");
				printf("\nSilahkan mencoba kembali");
				system ("cls");
				goto login;
			}
}

int input_pegawai(){
	
	
	
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
	
	printf(" LOGIN PEGAWAI\n");
	printf(" Silahkan masukkan kode pegawai anda untuk melakukan login!\n\n"); 
	printf("\tKode pegawai : "); scanf("%d", &kode_pegawai);
	
	if(kode_pegawai==181201 || kode_pegawai==181202 || kode_pegawai==190303 || kode_pegawai==190604 || kode_pegawai==200105){
		system("cls");
		menu_utama();
	}
	else{
		printf("\nPeriksa kembali inputan anda!");
		system("cls");
		goto menu_utama;
	}
	return kode_pegawai;
}

int menu_utama(){
	
	utama:
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
	printf("5. HAPUS DATA			|\n");
	printf("6. LOG OUT			|\n"); 
	printf("7. KELUAR			|\n");
	printf("=================================\n\n"); 
		
	printf("=================================\n");
	printf("| 	 MASUKKAN MENU 		| \n"); 
	printf("=================================\n");
	printf("Pilihan Menu: ");
	scanf("%d", &pilihan);
	system ("cls");
	
	switch (pilihan){
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
			hapus_data();
			break;

		case 6 :
			log_out();
			break;
			
		case 7 : 
			exit(0);


		default :
			printf("\nPeriksa kembali inputan anda!");
			system("cls");
			goto utama;	
	}
	return pilihan;
}

int gaji_bonus(){
	if(pilihan==1){
		
		satu:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|   DAFTAR NAMA DAN HARGA BARANG |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("=======================================================\n");
		printf("  NO |      Produk Tersedia       |       Harga       |\n");
		printf("=======================================================\n");
		printf("  #1 |  Victoria's Secret	        Rp.275.000    |\n");
		printf("  #2 |  Beyonce Heat  		        Rp.400.000    |\n");
		printf("  #3 |  Katy Perry  		        Rp.600.000    |\n");
		printf("  #4 |  Bvlgari 	                Rp.680.000    |\n");
		printf("  #5 |  Dolce & Gabbana 	        Rp.500.000    |\n");
		printf("  #6 |  CK One 		                Rp.500.000    |\n");
		printf("  #7 |  Platinum Egoiste  	        Rp.350.000    |\n");
		printf("  #8 |  Legend 		                Rp.850.000    |\n");
		printf("  #9 |  Pour Homme 	                Rp.1.000.000  |\n");
		printf("  #10|  Samourai Eau de Toilette 	Rp.470.000    |\n");
		printf("=======================================================\n");
		
		printf("Ingin melanjutkan ke menu berikutnya? (y/n) --> ");
		scanf("%s", &pilihan1);
		
		switch (pilihan1){
			case 'Y':
			case 'y':
			system ("cls");
			goto input_rekap;
			
			case 'N':
			case 'n':
			system ("cls");
			menu_utama();
			
			default :
			printf("\nPeriksa kembali inputan anda!");
			system("cls");
			goto satu;
		}
	}
	else if(pilihan==2){	
		
		input_rekap:
		total_bonus1 = &data_bonus1;
		total_bonus2 = &data_bonus2;
		total_bonus3 = &data_bonus3;
		total_bonus4 = &data_bonus4;
		total_bonus5 = &data_bonus5;
		
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|  	 INPUT BONUS PEGAWAI	 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");	
	
		printf(" NOTE!! HARAP UNTUK MENGINGAT NAMA BARANG YANG BERHASIL DIPROMOSIKAN!\n");
		printf(" ====================================================================\n"); 
		printf(" Ingin kembali melihat daftar nama dan harga barang? (y/n) --> "); scanf("%s", &pilihan10);
		fflush(stdin);
		
		switch(pilihan10){
			case 'Y':
			case 'y':
			system("cls");
			goto satu;
			
			case 'N':
			case 'n':
			break;
		}
		
		if(kode_pegawai==181201){
			
			printf("\n");
			printf(" Pegawai Ardhiya_181201\n");
			printf(" Masukkan nama pelanggan: "); gets(nama_pelanggan1); 
			printf(" Masukkan nama barang   : "); gets(nama_barang1);
			printf(" Masukkan harga barang  : "); scanf("%d", &harga_barang1);
			
			if(*total_bonus1 == 0){
				bonus_pegawai1 = BONUS*harga_barang1;
				*total_bonus1 = bonus_pegawai1;
			}
			else if(*total_bonus1 != 0){
				bonus_pegawai1 = BONUS*harga_barang1;
				*total_bonus1 = *total_bonus1 + bonus_pegawai1;
			}
			goto menu1;			
		}
		else if(kode_pegawai==181202){
			
			printf("\n");
			printf(" Pegawai Prianka_181202\n");
			printf(" Masukkan nama pelanggan: "); gets(nama_pelanggan2);
			printf(" Masukkan nama barang   : "); gets(nama_barang2);
			printf(" Masukkan harga barang  : "); scanf("%d", &harga_barang2);	
			
			if(*total_bonus2 == 0){
				bonus_pegawai2 = BONUS*harga_barang2;
				*total_bonus2 = bonus_pegawai2;
			}
			else if(*total_bonus2 != 0){
				bonus_pegawai2 = BONUS*harga_barang2;
				*total_bonus2 = *total_bonus2 + bonus_pegawai2;
			}	
			goto menu1;	
		}
		else if(kode_pegawai==190303){
						
			printf("\n");
			printf(" Pegawai Dextiro_190303\n");
			printf(" Masukkan nama pelanggan: "); gets(nama_pelanggan3);
			printf(" Masukkan nama barang   : "); gets(nama_barang3);
			printf(" Masukkan harga barang  : "); scanf("%d", &harga_barang3);	
						
			if(*total_bonus3 == 0){
				bonus_pegawai3 = BONUS*harga_barang3;
				*total_bonus3 = bonus_pegawai3;
			}
			else if(*total_bonus3 != 0){
				bonus_pegawai3 = BONUS*harga_barang3;
				*total_bonus3 = *total_bonus3 + bonus_pegawai3;
			}	
			goto menu1;	
		}
		else if(kode_pegawai==190604){
						
			printf("\n");
			printf(" Pegawai Yukita_190604\n");
			printf(" Masukkan nama pelanggan: "); gets(nama_pelanggan4);
			printf(" Masukkan nama barang   : "); gets(nama_barang4);
			printf(" Masukkan harga barang  : "); scanf("%d", &harga_barang4);	
			
			if(*total_bonus4 == 0){
				bonus_pegawai4 = BONUS*harga_barang4;
				*total_bonus4 = bonus_pegawai4;
			}
			else if(*total_bonus4 != 0){
				bonus_pegawai4 = BONUS*harga_barang4;
				*total_bonus4 = *total_bonus4 + bonus_pegawai4;
			}	
			goto menu1;	
		}
		else if(kode_pegawai==200105){
						
			printf("\n");
			printf(" Pegawai Cahaya_200105\n");
			printf(" Masukkan nama pelanggan: "); gets(nama_pelanggan5);
			printf(" Masukkan nama barang   : "); gets(nama_barang5);
			printf(" Masukkan harga barang  : "); scanf("%d", &harga_barang5);	
			
			if(*total_bonus5 == 0){
				bonus_pegawai5 = BONUS*harga_barang5;
				*total_bonus5 = bonus_pegawai5;
			}
			else if(*total_bonus5 != 0){
				bonus_pegawai5 = BONUS*harga_barang5;
				*total_bonus5 = *total_bonus5 + bonus_pegawai5;
			}	
			goto menu1;	
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
			goto input_rekap;
			
			case 3 :
			system ("cls");
			rekapan();
			
			case 4 :
			system("cls");
			menu_utama();
				
			default :
			printf("\nPeriksa kembali inputan anda!");
			system("cls");
			goto menu1;
		}
	}
	else if(pilihan==3){
		
		absen_pegawai:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   ABSENSI PEGAWAI	 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("NOTE!! \n");
		printf("   DIHARAPKAN UNTUK MENGISI ABSEN BULANAN SETELAH SATU BULAN KERJA\n");
		printf("   ABSEN BULANAN HANYA DAPAT DIISI APABILA PEGAWAI TELAH MELAKUKAN ABSEN HARIAN!\n");
		printf(" ===============================================================================\n\n"); 
		
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
		
		printf("NOTE: -\n");
		printf(" ====================================================================\n"); 
		
		printf("Ingin melakukan absensi? (y/n) --> "); scanf("%s", &pilihan3);
	    
	    struct tm *Sys_T;		 
		time_t Tval;
		Tval = time(NULL);
		Sys_T = localtime(&Tval); //Untuk mendapatkan waktu lokal komputer
		char copy[] = "melakukan absen pada tanggal dan waktu : ";
		/* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
	    
		switch(pilihan3)
		{
			case 'Y':
			case 'y':
				if(kode_pegawai==181201){
					
					do{
					printf("Masukkan angka 1 sebagai kehadiran : "); scanf("%d", &rekap_harian1);
					}while(rekap_harian1 != 1);
					printf("====================================================================\n"); 
				    printf ("Ardhiya_181201 %s %s", copy, asctime (Sys_T));
					goto menu4;
					break;
				}
				else if(kode_pegawai==181202){
				
					do{
					printf("Masukkan angka 1 sebagai kehadiran : "); scanf("%d", &rekap_harian2);
					}while(rekap_harian2 != 1);
					printf("====================================================================\n"); 
				    printf ("Prianka_181202 %s %s", copy, asctime (Sys_T));
					goto menu4;
					break;	
				}
				else if(kode_pegawai==190303){
					
					do{
					printf("Masukkan angka 1 sebagai kehadiran : "); scanf("%d", &rekap_harian3);
					}while(rekap_harian3 != 1);
					printf("====================================================================\n"); 
					printf("Dextiro_190303 %s %s", copy, asctime (Sys_T));
					goto menu4;
					break;
				}
				else if(kode_pegawai==190604){
					
					do{
					printf("Masukkan angka 1 sebagai kehadiran : "); scanf("%d", &rekap_harian4);
					}while(rekap_harian4 != 1);
					printf("====================================================================\n"); 
					printf("Yukita_190604 %s %s", copy, asctime (Sys_T));
					goto menu4;
					break;
				}
				else if(kode_pegawai==200105){
					
					do{
					printf("Masukkan angka 1 sebagai kehadiran : "); scanf("%d", &rekap_harian5);
					}while(rekap_harian5 != 1);
					printf(" ====================================================================\n"); 
					printf("Cahaya_200105 %s %s", copy, asctime (Sys_T));
					goto menu4;
					break;	
				}
				
			case 'N':
			case 'n':
			system ("cls");
			menu_utama();
				
			default :
			printf("\nPilihan yang Anda masukkan tidak tersedia!");
			printf("\nSilahkan coba kembali");
			system("cls");
			goto absen_hrn;
				
		}
		
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
				
			default :
			printf("\nPilihan yang Anda masukkan tidak tersedia!");
			printf("\nSilahkan coba kembali");
			system("cls");
			goto menu4;
		}		
		
		absen_bln:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|     ABSENSI BULANAN PEGAWAI    |\n");
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("NOTE: -\n");
		printf(" ====================================================================\n"); 
		printf("Ingin melakukan absensi? (y/n) --> "); scanf("%s", &pilihan8);
		printf("\n");
	    
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
				
			default :
			printf("\nPilihan yang Anda masukkan tidak tersedia!");
			printf("\nSilahkan coba kembali");
			system("cls");
			goto absen_bln;
		}
	
		menu7:
			printf("\n");
			printf("1. Koreksi input absensi bulanan\n");
			printf("2. Lihat hasil rekapan\n");
			printf("3. Kembali ke menu utama\n");
			printf("Piihan Anda: "); scanf("%d", &pilihan7);
			
			switch (pilihan7)
			{
				/*case 1 :
				system ("cls");
				gaji_bonus(pilihan==4);*/
				
				case 1 :
				system ("cls");
				goto absen_bln;
				
				case 2 :
				system ("cls");
				rekap_absen();
				
				case 3 :
				system("cls");
				menu_utama();
				
				default :
				printf("\nPilihan yang Anda masukkan tidak tersedia!");
				printf("\nSilahkan coba kembali");
				system("cls");
				goto menu7;
			}
		
	}
	
	else if(pilihan==4)
	{
		//----------------------------------------------------------------------//
		FILE*rekapbonus=fopen("Data_Rekap_Bonus.txt","r");
			fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp1, &bns1); fflush(stdin);
			fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp2, &bns2); fflush(stdin);
			fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp3, &bns3); fflush(stdin);
			fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp4, &bns4); fflush(stdin);
			fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp5, &bns5); fflush(stdin);
		//----------------------------------------------------------------------//
			  
		minus_gaji();
		int gaji_pokok = 3000000;
		
		total_bonus1 = &data_bonus1;
		total_bonus2 = &data_bonus2;
		total_bonus3 = &data_bonus3;
		total_bonus4 = &data_bonus4;
		total_bonus5 = &data_bonus5;
		
		gaji_pegawai:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   GAJI PEGAWAI		 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("NOTE!!\n  PASTIKAN ANDA MENGAKSES MENU INI PADA AKHIR BULAN!\n");
		printf(" ===========================================================\n"); 
		
		printf("Berikut Daftar Nama Pegawai dan Detail Gaji Per-Orang : \n");
		printf("  +---------------------------------------------------------------------+\n");		
		printf("  | No |   Nama    | Kode Pegawai | Rekap Absensi | Pengurangan Gaji 	|\n");
		printf("  +---------------------------------------------------------------------+\n");
		printf("  | 1  |  Ardhiya  |    181201    |     %-7d   |	%d		|\n", total, min_gaji1); 
		printf("  | 2  |  Prianka  |    181202    |     %-7d   |	%d		|\n", total2, min_gaji2); 
		printf("  | 3  |  Dextiro  |    190303    |     %-7d   |	%d		|\n", total3, min_gaji3); 
		printf("  | 4  |  Yukita   |    190604    |     %-7d   |	%d		|\n", total4, min_gaji4); 
		printf("  | 5  |  Cahaya   |    200105    |     %-7d   |	%d		|\n", total5, min_gaji5); 
		printf("  +---------------------------------------------------------------------+\n\n");	
		
		final_gaji1 = gaji_pokok+bns1+*total_bonus1-min_gaji1;
		final_gaji2 = gaji_pokok+bns2+*total_bonus2-min_gaji2;
		final_gaji3 = gaji_pokok+bns3+*total_bonus3-min_gaji3;
		final_gaji4 = gaji_pokok+bns4+*total_bonus4-min_gaji4;
		final_gaji5 = gaji_pokok+bns5+*total_bonus5-min_gaji5;
		
		printf("  +---------------------------------------------------------------------------------------------+\n");		
		printf("  | No |   Nama    | Kode Pegawai |	Gaji Pokok	|   Bonus 	|	Total Gaji	|\n");
		printf("  +---------------------------------------------------------------------------------------------+\n");	
		printf("  | 1  |  Ardhiya  |    181201    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns1+ *total_bonus1, final_gaji1);
		printf("  | 2  |  Prianka  |    181202    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns2+ *total_bonus2, final_gaji2);
		printf("  | 3  |  Dextiro  |    190303    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns3+ *total_bonus3, final_gaji3);
		printf("  | 4  |  Yukita   |    190604    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns4+ *total_bonus4, final_gaji4);
		printf("  | 5  |  Cahaya   |    200105    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns5+ *total_bonus5, final_gaji5);
		printf("  +---------------------------------------------------------------------------------------------+\n");	
		
		
		printf("\nIngin mencetak rekapan? (y/n) --> ");
		scanf("%s", &pilihan5);
		
			if(pilihan5 == 'Y' || pilihan5 == 'y'){
				printf("Rekap gaji sudah dicetak ke dalam file Gaji_Pegawai.txt, mohon untuk di cek kembali.");
					FILE*rekapgaji;
					rekapgaji = fopen ("Gaji_Pegawai.txt", "w+");
				
					fprintf(rekapgaji,"\t\t\t\t\t==================================\n"); 
					fprintf(rekapgaji,"\t\t\t\t\t|	   GAJI PEGAWAI		 |\n"); 
					fprintf(rekapgaji,"\t\t\t\t\t==================================\n\n");
			
					fprintf(rekapgaji,"  +---------------------------------------------------------------------+\n");		
					fprintf(rekapgaji,"  | No |   Nama    | Kode Pegawai | Rekap Absensi | Pengurangan Gaji	|\n");
					fprintf(rekapgaji,"  +---------------------------------------------------------------------+\n");	
					fprintf(rekapgaji,"  | 1  |  Ardhiya  |    181201    |     %-7d   |   	     %d  	|\n", total, min_gaji1);
					fprintf(rekapgaji,"  | 2  |  Prianka  |    181202    |     %-7d   |   	     %d  	|\n", total2, min_gaji2);
					fprintf(rekapgaji,"  | 3  |  Dextiro  |    190303    |     %-7d   |   	     %d  	|\n", total3, min_gaji3);
					fprintf(rekapgaji,"  | 4  |  Yukita   |    190604    |     %-7d   |   	     %d  	|\n", total4, min_gaji4);
					fprintf(rekapgaji,"  | 5  |  Cahaya   |    200105    |     %-7d   |   	     %d  	|\n", total5, min_gaji5);
					fprintf(rekapgaji,"  +---------------------------------------------------------------------+\n\n");	
					
					fprintf(rekapgaji,"  +-------------------------------------------------------------------------------------+\n");		
					fprintf(rekapgaji,"  | No |   Nama    | Kode Pegawai |	Gaji Pokok	|   Bonus |	Total Gaji	|\n");
					fprintf(rekapgaji,"  +-------------------------------------------------------------------------------------+\n");	
					fprintf(rekapgaji,"  | 1  |  Ardhiya  |    181201    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns1+ *total_bonus1, final_gaji1);
					fprintf(rekapgaji,"  | 2  |  Prianka  |    181202    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns2+ *total_bonus2, final_gaji2);
					fprintf(rekapgaji,"  | 3  |  Dextiro  |    190303    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns3+ *total_bonus3, final_gaji3);
					fprintf(rekapgaji,"  | 4  |  Yukita   |    190604    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns4+ *total_bonus4, final_gaji4);
					fprintf(rekapgaji,"  | 5  |  Cahaya   |    200105    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns5+ *total_bonus5, final_gaji5);
					fprintf(rekapgaji,"  +-------------------------------------------------------------------------------------+\n");	
					fclose(rekapgaji);
					
					goto menu9;
			}
			else if(pilihan5 == 'N' || pilihan5 == 'n'){
				system("cls");
				menu_utama();
			}
			else{
				printf("\nPilihan yang Anda masukkan tidak tersedia!");
				printf("\nSilahkan coba kembali");
				system("cls");
				goto gaji_pegawai;	
			}
		
		menu9:
		printf("\n");
		printf("1. Keluar program\n");
		printf("2. Kembali ke menu utama\n");
		printf("Piihan Anda: "); scanf("%d", &pilihan9);
		
		switch (pilihan9){
			case 1 :
			system ("cls");
			exit(0);
						
			case 2 :
			system("cls");
			menu_utama();
					
			default :
			printf("\nPilihan yang Anda masukkan tidak tersedia!");
			printf("\nSilahkan coba kembali");
			system("cls");
			goto menu9;
		}		
		/*Total gaji dari seluruh pegawai:
		Nama pegawai		: (otomatis)
		Rekap absensi		: (otomatis)
		Total gaji pegawai		: (otomatis)
		gaji pokok 3 jt*/
	}
}

int rekapan(){	
	
	FILE*rekapbonus=fopen("Data_Rekap_Bonus.txt","r");
	if(!rekapbonus){
		
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP BONUS		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("  +--------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|      Bonus	   |\n");
	printf("  +--------------------------------------------------------+\n");	
	printf("  |	1	|	  Ardhiya	|   	%d	   |\n", *total_bonus1);
	printf("  |	2	|	  Prianka	|   	%d	   |\n", *total_bonus2);
	printf("  |	3	|	  Dextiro	|   	%d	   |\n", *total_bonus3);
	printf("  |	4	|	  Yukita	|   	%d	   |\n", *total_bonus4);
	printf("  |	5	|	  Cahaya	|   	%d	   |\n", *total_bonus5);
	printf("  +--------------------------------------------------------+\n");
	fflush(stdin);
	
		rekapbonus = fopen ("Data_Rekap_Bonus.txt", "w+");
		fprintf(rekapbonus,"  |	1	|	  Ardhiya	#   	%d	   |\n", *total_bonus1);
		fprintf(rekapbonus,"  |	2	|	  Prianka	#   	%d	   |\n", *total_bonus2);
		fprintf(rekapbonus,"  |	3	|	  Dextiro	#   	%d	   |\n", *total_bonus3);
		fprintf(rekapbonus,"  |	4	|	  Yukita	#   	%d	   |\n", *total_bonus4);
		fprintf(rekapbonus,"  |	5	|	  Cahaya	#   	%d	   |\n", *total_bonus5);
		fclose(rekapbonus);
	}
	else{
		
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP BONUS		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("  +--------------------------------------------------------+\n");		
	printf("  |	No	|	  Nama		|      Bonus	   |\n");
	printf("  +--------------------------------------------------------+\n");
	
        while(!feof(rekapbonus)){
        fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp1, &bns1); fflush(stdin);
		fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp2, &bns2); fflush(stdin);
		fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp3, &bns3); fflush(stdin);
		fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp4, &bns4); fflush(stdin);
		fscanf(rekapbonus,"%[^#]#%d\n", &awalan_rkp5, &bns5); fflush(stdin);
		   }
           fclose(rekapbonus);
    
			    printf("  |	1	|	  Ardhiya	|   	%d	   |\n", bns1+ *total_bonus1);
				printf("  |	2	|	  Prianka	|   	%d	   |\n", bns2+ *total_bonus2);
				printf("  |	3	|	  Dextiro	|   	%d	   |\n", bns3+ *total_bonus3);
				printf("  |	4	|	  Yukita	|   	%d	   |\n", bns4+ *total_bonus4);
				printf("  |	5	|	  Cahaya	|   	%d	   |\n", bns5+ *total_bonus5);
				printf("  +--------------------------------------------------------+\n");
					
					rekapbonus = fopen ("Data_Rekap_Bonus.txt", "w+");
					fprintf(rekapbonus,"  |	1	|	  Ardhiya	#   	%d	   |\n", bns1+ *total_bonus1);
					fprintf(rekapbonus,"  |	2	|	  Prianka	#   	%d	   |\n", bns2+ *total_bonus2);
					fprintf(rekapbonus,"  |	3	|	  Dextiro	#   	%d	   |\n", bns3+ *total_bonus3);
					fprintf(rekapbonus,"  |	4	|	  Yukita	#   	%d	   |\n", bns4+ *total_bonus4);
					fprintf(rekapbonus,"  |	5	|	  Cahaya	#   	%d	   |\n", bns5+ *total_bonus5);
			    	fclose(rekapbonus);
	}
	
		printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);
		system("cls");
		menu_utama();
		
}

int absen_bulanan(){					
	printf("MASUKKAN BULAN          : ");
	scanf("%d", &bulan);
	if(bulan==1||bulan==3||bulan==5||bulan==7||bulan==8||bulan==10||bulan==12){
		jumlah_hari=27;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha); 
		total=jumlah_hari-alpha;
	}
	else if(bulan==4 ||bulan==6 ||bulan==9 ||bulan==11){
		jumlah_hari=26;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha); 
		total=jumlah_hari-alpha;
	}
	else if(bulan==2){
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun);
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
	printf("MASUKKAN BULAN          : ");
	scanf("%d", &bulan2);
	if(bulan2==1||bulan2==3||bulan2==5||bulan2==7||bulan2==8||bulan2==10||bulan2==12){
		jumlah_hari=27;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun2);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha2); 
		total2=jumlah_hari-alpha2;
	}
	else if(bulan2==4 ||bulan2==6 ||bulan2==9 ||bulan2==11){
		jumlah_hari=26;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun2);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha2); 
		total2=jumlah_hari-alpha2;
	}
	else if(bulan2==2){
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun2);
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
	printf("MASUKKAN BULAN          : ");
	scanf("%d", &bulan3);
	if(bulan3==1||bulan3==3||bulan3==5||bulan3==7||bulan3==8||bulan3==10||bulan3==12){
		jumlah_hari=27;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun3);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha3); 
		total3=jumlah_hari-alpha3;
	}
	else if(bulan3==4 ||bulan3==6 ||bulan3==9 ||bulan3==11){
		jumlah_hari=26;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun3);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha3); 
		total3=jumlah_hari-alpha3;
	}
	else if(bulan3==2){
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun3);
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
	printf("MASUKKAN BULAN          : ");
	scanf("%d", &bulan4);
	if(bulan4==1||bulan4==3||bulan4==5||bulan4==7||bulan4==8||bulan4==10||bulan4==12){
		jumlah_hari=27;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun4);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha4); 
		total4=jumlah_hari-alpha4;
	}
	else if(bulan4==4 ||bulan4==6 ||bulan4==9 ||bulan4==11){
		jumlah_hari=26;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun4);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha4); 
		total4=jumlah_hari-alpha4;
	}
	else if(bulan4==2){
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun4);
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
	printf("MASUKKAN BULAN          : ");
	scanf("%d", &bulan5);
	if(bulan5==1||bulan5==3||bulan5==5||bulan5==7||bulan5==8||bulan5==10||bulan5==12){
		jumlah_hari=27;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun5);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha5); 
		total5=jumlah_hari-alpha5;
	}
	else if(bulan5==4 ||bulan5==6 ||bulan5==9 ||bulan5==11){
		jumlah_hari=26;
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun5);
		printf("MASUKKAN KETIDAKHADIRAN	: "); scanf("%d", &alpha5); 
		total5=jumlah_hari-alpha5;
	}
	else if(bulan5==2){
		printf("MASUKKAN TAHUN          : "); scanf("%d", &tahun5);
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
	
	FILE*absen=fopen("Data_Absensi_Pegawai.txt","r");
	if(!absen){
	rekap_absen:
	printf("\t\t\t\t\t==================================\n"); 
	printf("\t\t\t\t\t|	   REKAP ABSEN		 |\n"); 
	printf("\t\t\t\t\t==================================\n\n");
	
	printf("+-----------------------------------------------------------------+\n"); 
	printf("| NO  |     NAMA     |	BULAN KE- | ABSEN_BULAN  |  ABSEN_HARIAN  |\n"); 
	printf("+-----------------------------------------------------------------+\n");
	printf("|  1	   Ardhiya        %-8d       %-7d         %d	  |\n", bulan, total, rekap_harian1);
	printf("|  2	   Prianka        %-8d       %-7d         %d	  |\n", bulan2, total2, rekap_harian2);
	printf("|  3	   Dextiro        %-8d       %-7d         %d	  |\n", bulan3, total3, rekap_harian3);
	printf("|  4	   Yukita         %-8d       %-7d         %d	  |\n", bulan4, total4, rekap_harian4);
	printf("|  5	   Cahaya         %-8d       %-7d         %d	  |\n", bulan5, total5, rekap_harian5);
	printf("+-----------------------------------------------------------------+\n");
	fflush(stdin);
	
		absen = fopen ("Data_Absensi_Pegawai.txt", "w+");
		fprintf(absen,"\t\t\t\t\t==================================\n"); 
		fprintf(absen,"\t\t\t\t\t|	   REKAP ABSEN		 |\n"); 
		fprintf(absen,"\t\t\t\t\t==================================\n\n");
		
		fprintf(absen,"|  1	   Ardhiya     #     %d      |\n", rekap_harian1);
		fprintf(absen,"|  2	   Prianka     #     %d      |\n", rekap_harian2);
		fprintf(absen,"|  3	   Dextiro     #     %d      |\n", rekap_harian3);
		fprintf(absen,"|  4	   Yukita      #     %d      |\n", rekap_harian4);
		fprintf(absen,"|  5	   Cahaya      #     %d      |\n", rekap_harian5);	
		fclose(absen);
	}
	else{
		
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   REKAP ABSEN		 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
	
		printf("+-----------------------------------------------------------------+\n"); 
		printf("| NO  |     NAMA     |	BULAN KE- | ABSEN_BULAN  |  ABSEN_HARIAN  |\n"); 
		printf("+-----------------------------------------------------------------+\n");
		
		 while(!feof(absen)){
              fscanf(absen,"%[^#]#%d\n", &awalan_absn1, &absen_1); fflush(stdin);
			  fscanf(absen,"%[^#]#%d\n", &awalan_absn2, &absen_2); fflush(stdin);
			  fscanf(absen,"%[^#]#%d\n", &awalan_absn3, &absen_3); fflush(stdin);
			  fscanf(absen,"%[^#]#%d\n", &awalan_absn4, &absen_4); fflush(stdin);
			  fscanf(absen,"%[^#]#%d\n", &awalan_absn5, &absen_5); fflush(stdin);
		   }
           fclose(absen);
			
				printf("|  1	   Ardhiya        %-8d       %-7d         %d	  |\n", bulan, total, absen_1 + rekap_harian1);
				printf("|  2	   Prianka        %-8d       %-7d         %d	  |\n", bulan2, total2, absen_2 + rekap_harian2);
				printf("|  3	   Dextiro        %-8d       %-7d         %d	  |\n", bulan3, total3, absen_3 + rekap_harian3);
				printf("|  4	   Yukita         %-8d       %-7d         %d	  |\n", bulan4, total4, absen_4 + rekap_harian4);
				printf("|  5	   Cahaya         %-8d       %-7d         %d	  |\n", bulan5, total5, absen_5 + rekap_harian5);
				printf("+-----------------------------------------------------------------+\n");
				
				absen = fopen ("Data_Absensi_Pegawai.txt", "w+");
				fprintf(absen,"|  1	   Ardhiya     #     %d      |\n", absen_1 + rekap_harian1);
				fprintf(absen,"|  2	   Prianka     #     %d      |\n", absen_2 + rekap_harian2);
				fprintf(absen,"|  3	   Dextiro     #     %d      |\n", absen_3 + rekap_harian3);
				fprintf(absen,"|  4	   Yukita      #     %d      |\n", absen_4 + rekap_harian4);
				fprintf(absen,"|  5	   Cahaya      #     %d      |\n", absen_5 + rekap_harian5);
				fclose(absen);
	}
	
		printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);
		system("cls");
		menu_utama();			
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

void hapus_data(){
	
	int remove_data1, remove_data2, remove_data3;
	FILE *hapus1;
	FILE *hapus2;
	FILE *hapus3;
	
		menu11:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   HAPUS DATA		 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
	
		printf("NOTE: -\n");
		printf(" ====================================================================\n\n"); 
		
		printf("===============================\n");
		printf("  NO |      Nama File         |\n");
		printf("===============================\n");
		printf("  #1 |  Data_Absensi_Pegawai  |\n");
		printf("  #2 |  Data_Rekap_Bonus      |\n");
		printf("  #3 |  Gaji_Pegawai          |\n");
		printf("===============================\n\n");
		
		printf("Masukkan angka sesuai file yang ingin dihapus : \n");
		printf("Pilihan Anda : "); scanf("%d", &pilihan12);
	
	switch(pilihan12){
		
		case 1 :
			hapus1 = fopen("Data_Absensi_Pegawai.txt", "w");
			remove_data1 = remove("Data_Absensi_Pegawai.txt");
			if(remove_data1 == 0){
			printf("File terhapus");
			}
			else{
			printf("Error: file ini tidak dapat dihapus / tidak ada");
			}
			break;
		
		case 2 :
			hapus2 = fopen("Data_Rekap_Bonus.txt", "w");
			remove_data2 = remove("Data_Rekap_Bonus.txt");
			if(remove_data2 == 0){
			printf("File terhapus");
			}
			else{
			printf("Error: file ini tidak dapat dihapus / tidak ada");
			}
			break;
		
		case 3 :
			hapus3 = fopen("Gaji_Pegawai.txt", "w");
			remove_data3 = remove("Gaji_Pegawai.txt");
			if(remove_data3 == 0){
			printf("File terhapus");
			}
			else{
			printf("Error: file ini tidak dapat dihapus / tidak ada");
			}
			break;
		
		default :
			printf("\nPilihan yang Anda masukkan tidak tersedia!");
			printf("\nSilahkan coba kembali");
			system("cls");
			goto menu11;
			
	}
	    fflush(stdin);
    	printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);			
		system("cls");
		menu_utama();
 
}

void log_out(){
		
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   LOG OUT		 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
	
		printf("NOTE: -\n");
		printf(" ==============================================================================================\n"); 
		printf("Silahkan untuk memulai program kembali dan login dengan menggunakan kode pegawai masing-masing!\n");
		printf("Terima kasih...");
		fflush(stdin);
		
		printf("\n\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);			
		system("cls");
		menu_utama();
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------
int admin(){	
	menu_admin:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   TOKO DELUXE		 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");

		printf(" NOTE!!! HARAP MEMASUKAN PILIHAN SESUAI DENGAN MENU YANG TERSEDIA\n\n");
		printf("=================================\n"); 
		printf("| 	  PILIHAN MENU	 	|\n"); 
		printf("=================================\n"); 
		printf("=================================\n");
		printf("1. DAFTAR NAMA DAN HARGA BARANG |\n"); 
		printf("2. DAFTAR NAMA PEGAWAI		|\n"); 
		printf("3. ABSEN DAN TOTAL GAJI PEGAWAI	|\n");
		printf("4. HAPUS DATA			|\n");
		printf("5. KELUAR			|\n");
		printf("=================================\n\n"); 
		
		printf("=================================\n");
		printf("| 	 MASUKKAN MENU 		| \n"); 
		printf("=================================\n");
		
		printf("Pilihan Menu: ");
	scanf("%d", &pilihann);
	system ("cls");
	
	switch (pilihann)
	{
		case 1 : 
			admin2();
			break;
		
		case 2 : 
			admin2();
			break;
			
		case 3 : 
			admin2();
			break;
		
		case 4 :
			admin2();
			
		case 5 : 
			exit(0);

		default :
			printf("\nPeriksa kembali inputan anda!");
			system("cls");
			goto menu_admin;	
	}
	return pilihann;	
}

int admin2(){
	if(pilihann==1){
		daftar:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|   DAFTAR NAMA DAN HARGA BARANG |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("=======================================================\n");
		printf("  NO |      Produk Tersedia       |       Harga       |\n");
		printf("=======================================================\n");
		printf("  #1 |  Victoria's Secret	        Rp.275.000    |\n");
		printf("  #2 |  Beyonce Heat  		        Rp.400.000    |\n");
		printf("  #3 |  Katy Perry  		        Rp.600.000    |\n");
		printf("  #4 |  Bvlgari 	                Rp.680.000    |\n");
		printf("  #5 |  Dolce & Gabbana 	        Rp.500.000    |\n");
		printf("  #6 |  CK One 		                Rp.500.000    |\n");
		printf("  #7 |  Platinum Egoiste  	        Rp.350.000    |\n");
		printf("  #8 |  Legend 		                Rp.850.000    |\n");
		printf("  #9 |  Pour Homme 	                Rp.1.000.000  |\n");
		printf("  #10|  Samourai Eau de Toilette 	Rp.470.000    |\n");
		printf("=======================================================\n");
		
		printf("Ingin melanjutkan ke menu berikutnya? (y/n) --> ");
		scanf("%s", &pilihann1);
		
		switch (pilihann1)
		{
			case 'Y':
			case 'y':
			system ("cls");
			goto nama;
			
			case 'N':
			case 'n':
			system ("cls");
			admin();
			
			default :
			printf("\nPeriksa kembali inputan anda!");
			system("cls");
			goto daftar;
		}
	}
	else if(pilihann==2){
		nama:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|   	DAFTAR NAMA PEGAWAI	 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
		
		printf("NOTE: -\n");
		printf(" ====================================================================\n"); 
		
		printf("  +--------------------------------------------------------+\n");		
		printf("  |	No	|	  Nama		|   Kode Pegawai   |\n");
		printf("  +--------------------------------------------------------+\n");	
		printf("  |	1	|	  Ardhiya	|   	181201	   |\n");
		printf("  |	2	|	  Prianka	|   	181202	   |\n");
		printf("  |	3	|	  Dextiro	|   	190303	   |\n");
		printf("  |	4	|	  Yukita	|   	190604	   |\n");
		printf("  |	5	|	  Cahaya	|   	200105	   |\n");
		printf("  +--------------------------------------------------------+\n\n");
		fflush(stdin);
		
		printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);
		system("cls");
		admin();	
	}
	else if(pilihann==3){
		
		char adminn[1000];
		FILE*rekapgaji;
		if((rekapgaji = fopen("Gaji_Pegawai.txt","r")) == NULL){
      		printf("File tidak ada!");
      		exit(1);
    	}
    	while(fgets(adminn, sizeof(adminn), rekapgaji)){
        	printf("%s", adminn);
		}
    	fclose(rekapgaji);
    	fflush(stdin);
    	printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);			
		system("cls");
		admin();
	}
	else if(pilihann==4){
			int remove_data1, remove_data2, remove_data3;
	FILE *hapus1;
	FILE *hapus2;
	FILE *hapus3;
	
		menu11:
		printf("\t\t\t\t\t==================================\n"); 
		printf("\t\t\t\t\t|	   HAPUS DATA		 |\n"); 
		printf("\t\t\t\t\t==================================\n\n");
	
		printf("NOTE: -\n");
		printf(" ====================================================================\n\n"); 
		
		printf("===============================\n");
		printf("  NO |      Nama File         |\n");
		printf("===============================\n");
		printf("  #1 |  Data_Absensi_Pegawai  |\n");
		printf("  #2 |  Data_Rekap_Bonus      |\n");
		printf("  #3 |  Gaji_Pegawai          |\n");
		printf("===============================\n\n");
		
		printf("Masukkan angka sesuai file yang ingin dihapus : \n");
		printf("Pilihan Anda : "); scanf("%d", &pilihan12);
	
	switch(pilihan12){
		
		case 1 :
			hapus1 = fopen("Data_Absensi_Pegawai.txt", "w");
			remove_data1 = remove("Data_Absensi_Pegawai.txt");
			if(remove_data1 == 0){
			printf("File terhapus");
			}
			else{
			printf("Error: file ini tidak dapat dihapus / tidak ada");
			}
			break;
		
		case 2 :
			hapus2 = fopen("Data_Rekap_Bonus.txt", "w");
			remove_data2 = remove("Data_Rekap_Bonus.txt");
			if(remove_data2 == 0){
			printf("File terhapus");
			}
			else{
			printf("Error: file ini tidak dapat dihapus / tidak ada");
			}
			break;
		
		case 3 :
			hapus3 = fopen("Gaji_Pegawai.txt", "w");
			remove_data3 = remove("Gaji_Pegawai.txt");
			if(remove_data3 == 0){
			printf("File terhapus");
			}
			else{
			printf("Error: file ini tidak dapat dihapus / tidak ada");
			}
			break;
		
		default :
			printf("\nPilihan yang Anda masukkan tidak tersedia!");
			printf("\nSilahkan coba kembali");
			system("cls");
			goto menu11;
			
	}
	    fflush(stdin);
    	printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);			
		system("cls");
		admin();
 
	}
}
