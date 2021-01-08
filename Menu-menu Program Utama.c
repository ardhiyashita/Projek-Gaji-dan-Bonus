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
	
		printf(" NOTE!! HARAP UNTUK MENGINGAT NAMA DAN HARGA BARANG YANG BERHASIL DIPROMOSIKAN!\n");
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
		printf("   DISARANKAN UNTUK MENGISI ABSEN BULANAN SETELAH SATU BULAN KERJA\n");
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
		
		final_gaji1 = gaji_pokok+bns1-min_gaji1;
		final_gaji2 = gaji_pokok+bns2-min_gaji2;
		final_gaji3 = gaji_pokok+bns3-min_gaji3;
		final_gaji4 = gaji_pokok+bns4-min_gaji4;
		final_gaji5 = gaji_pokok+bns5-min_gaji5;
		
		printf("  +---------------------------------------------------------------------------------------------+\n");		
		printf("  | No |   Nama    | Kode Pegawai |	Gaji Pokok	|   Bonus 	|	Total Gaji	|\n");
		printf("  +---------------------------------------------------------------------------------------------+\n");	
		printf("  | 1  |  Ardhiya  |    181201    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns1, final_gaji1);
		printf("  | 2  |  Prianka  |    181202    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns2, final_gaji2);
		printf("  | 3  |  Dextiro  |    190303    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns3, final_gaji3);
		printf("  | 4  |  Yukita   |    190604    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns4, final_gaji4);
		printf("  | 5  |  Cahaya   |    200105    |	%d		|	%d	|	%d		|\n", gaji_pokok, bns5, final_gaji5);
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
					fprintf(rekapgaji,"  | 1  |  Ardhiya  |    181201    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns1, final_gaji1);
					fprintf(rekapgaji,"  | 2  |  Prianka  |    181202    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns2, final_gaji2);
					fprintf(rekapgaji,"  | 3  |  Dextiro  |    190303    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns3, final_gaji3);
					fprintf(rekapgaji,"  | 4  |  Yukita   |    190604    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns4, final_gaji4);
					fprintf(rekapgaji,"  | 5  |  Cahaya   |    200105    |	%d		|   %d  |	%d		|\n", gaji_pokok, bns5, final_gaji5);
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
