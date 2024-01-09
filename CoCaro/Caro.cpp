#ifndef __CARO_H__
#define __CARO_H__
#include<iostream>
#include<fstream>
#include"Caro.h"
using namespace std;

struct Caro{
	short cheo_xuong_phai;//1
	short xuong;//2
	short cheo_xuong_trai;//3
	short ngang_phai;//4
	short ngang_trai;//6
	short cheo_len_phai;//7
	short len;//8
	short cheo_len_trai;//9
};
void Print(Caro& co){
	cout<<co.cheo_xuong_phai<<" "<<co.xuong<<" "<<co.cheo_xuong_trai<<co.ngang_phai<<"\n"
	      <<co.ngang_trai<<" "<<co.cheo_len_phai<<" "<<co.len<<" "<<co.cheo_len_trai;
}
int KiemTra(Caro& co,short n){
	if(co.cheo_len_phai==n||co.cheo_len_trai==n||co.cheo_xuong_phai==n||co.cheo_xuong_trai==n
		||co.len==n||co.xuong==n||co.ngang_phai==n||co.ngang_trai==n){
		return 1;		
	}
	return 0;
}
//++bien
/*
Caro operator++(Caro& co){
	co.cheo_len_phai++;
	co.cheo_len_trai++;
	co.cheo_xuong_phai++;
	co.cheo_xuong_trai++;
	co.len++;
	co.ngang_phai++;
	co.ngang_trai++;
	co.xuong++;
	return co;
}*/

void CongMot(Caro& co,Caro& old_co,short n){
	switch(n){
		case 1:
			co.cheo_xuong_phai=old_co.cheo_xuong_phai+1;
			break;
		case 2:
			co.xuong=old_co.xuong+1;
			break;
		case 3:
			co.cheo_xuong_trai=old_co.cheo_xuong_trai+1;
			break;
		case 4:
			co.ngang_phai=old_co.ngang_phai+1;
			break;
		case 6:
			co.ngang_trai=old_co.ngang_trai+1;
			break;
		case 7:
			co.cheo_len_trai=old_co.cheo_len_trai+1;
			break;
		case 8:
			co.len=old_co.len+1;
			break;
		case 9:
			co.cheo_len_phai=old_co.cheo_len_phai+1;
			break;
	}
}
#endif
