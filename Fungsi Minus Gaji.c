int minus_gaji(){
	
	if(kode_pegawai==181201 || kode_pegawai==181202 || kode_pegawai==190303 || kode_pegawai==190604 || kode_pegawai==200105){
		if(alpha>3){
			min_gaji1 = 500000;
		}
		else if(alpha2>3){
			min_gaji2 = 500000;
		}
		else if(alpha3>3){
			min_gaji3 = 500000;
		}
		else if(alpha4>3){
			min_gaji4 = 500000;
		}
		else if(alpha5>3){
			min_gaji5 = 500000;
		}
		else if(alpha=0){
			min_gaji1 = 0;
		}
		else if(alpha2=0){
			min_gaji2 = 0;
		}
		else if(alpha3=0){
			min_gaji3 = 0;
		}
		else if(alpha4=0){
			min_gaji4 = 0;
		}
		else if(alpha5=0){
			min_gaji5 = 0;
		}
	}
}
