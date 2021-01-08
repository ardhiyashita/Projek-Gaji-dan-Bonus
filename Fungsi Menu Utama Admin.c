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
