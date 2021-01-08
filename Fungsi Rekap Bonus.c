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
