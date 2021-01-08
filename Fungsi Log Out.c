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
