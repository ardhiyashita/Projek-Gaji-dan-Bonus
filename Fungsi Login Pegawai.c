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
