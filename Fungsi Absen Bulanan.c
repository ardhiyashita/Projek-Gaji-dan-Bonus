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
