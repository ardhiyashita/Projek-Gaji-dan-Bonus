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
	    fflush(stdin);
			
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

    	printf("\n");
		printf("Silahkan tekan 'Enter' untuk kembali"); getchar();
		fflush(stdin);			
		system("cls");
		menu_utama();
 
}
