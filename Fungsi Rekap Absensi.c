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
