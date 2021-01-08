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
		fflush(stdin);
		
		printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);
		system("cls");
		admin();
		
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
		printf("  +--------------------------------------------------------+\n");
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
			printf("\n");
			}
			else{
			printf("File terhapus");
			}
			break;
		
		case 2 :
			hapus2 = fopen("Data_Rekap_Bonus.txt", "w");
			remove_data2 = remove("Data_Rekap_Bonus.txt");
			if(remove_data2 == 0){
			printf("\n");
			}
			else{
			printf("File terhapus");
			}
			break;
		
		case 3 :
			hapus3 = fopen("Gaji_Pegawai.txt", "w");
			remove_data3 = remove("Gaji_Pegawai.txt");
			if(remove_data3 == 0){
			printf("\n");
			}
			else{
			printf("File terhapus");
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
