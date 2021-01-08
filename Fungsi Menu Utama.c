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

