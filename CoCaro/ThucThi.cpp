#include<iostream>
#include<conio.h>
#include"ThucThi.h"

using namespace std;

ostream& operator<<(ostream& outDev,Caro& co){
	outDev<<co.cheo_phai_trai<<" "<<co.xuong<<" "<<co.cheo_trai_phai<<" "<<co.ngang;//4
	return outDev;
}
bool operator>=(Caro& co,short n){
	if(co.cheo_phai_trai>=n||co.xuong>=n||co.cheo_trai_phai>=n||co.ngang>=n){
		return true;		
	}
	return false;
}
Caro& operator++(Caro& co){
	co.cheo_phai_trai++;//1
	co.xuong++;//2
	co.cheo_trai_phai++;//3
	co.ngang++;//4
	return co;
}
//Ham dong vai tro cap nhat tung phan tu theo truong hop
void PhanTuGiaTri(Caro NguoiChoi[][100],int hang,int cot,int select,int giatri1=0,int giatri2=0){
	switch(select){
		case 1:
			NguoiChoi[hang][cot].cheo_phai_trai=giatri1+giatri2;
			break;
		case 2:
			NguoiChoi[hang][cot].xuong=giatri1+giatri2;
			break;
		case 3:
			NguoiChoi[hang][cot].cheo_trai_phai=giatri1+giatri2;
			break;
		case 4:
			NguoiChoi[hang][cot].ngang=giatri1+giatri2;
			break;
	}
}
//Ham nay dong vai tro cap nhat lai cac chieu gia tri lon nhat cho tung phan tu
void CapNhat(Caro NguoiChoi[][100],char A[][100],int hang,int cot,int i,int j,int giatri,int select){
	int hang1=hang-i,cot1=cot-j;
	int hang2=hang+i,cot2=cot+j;
	while(A[hang1][cot1]==A[hang][cot]){
		PhanTuGiaTri(NguoiChoi,hang1,cot1,select,giatri);
		hang1-=i,cot1-=j;
	}
	while(A[hang2][cot2]==A[hang][cot]){
		PhanTuGiaTri(NguoiChoi,hang2,cot2,select,giatri);
		hang2+=i,cot2+=j;
	}
}
void CongMot(Caro NguoiChoi[][100],char A[][100],int hang,int cot,int select){
	int them1=0,them2=0,result=0;//Dai dien cho hai ben gia tri
	switch(select){
		case 1:{
			//cheo_phai_trai ~ 1
			if(A[hang-1][cot-1]==A[hang][cot]) them1=NguoiChoi[hang-1][cot-1].cheo_phai_trai;
			if(A[hang+1][cot+1]==A[hang][cot]) them2=NguoiChoi[hang+1][cot+1].cheo_phai_trai;
			result=NguoiChoi[hang][cot].cheo_phai_trai+=them1+them2;
			CapNhat(NguoiChoi,A,hang,cot,1,1,result,1);
			break;
		}
		case 2:{	
			//co.xuong ~ 2
			if(A[hang-1][cot]==A[hang][cot]) them1=NguoiChoi[hang-1][cot].xuong;
			if(A[hang+1][cot]==A[hang][cot]) them2=NguoiChoi[hang+1][cot].xuong;
			result=NguoiChoi[hang][cot].xuong+=them1+them2;
			CapNhat(NguoiChoi,A,hang,cot,1,0,result,2);
			break;
		}
		case 3:{
			//co.cheo_trai_phai ~ 3
			if(A[hang-1][cot+1]==A[hang][cot]) them1=NguoiChoi[hang-1][cot+1].cheo_trai_phai;
			if(A[hang+1][cot-1]==A[hang][cot]) them2=NguoiChoi[hang+1][cot-1].cheo_trai_phai;
			result=NguoiChoi[hang][cot].cheo_trai_phai+=them1+them2;
			CapNhat(NguoiChoi,A,hang,cot,1,-1,result,3);
			break;
		}
		case 4:{
			//co.ngang ~ 4
			if(A[hang][cot+1]==A[hang][cot]) them1=NguoiChoi[hang][cot+1].ngang;
			if(A[hang][cot-1]==A[hang][cot]) them2=NguoiChoi[hang][cot-1].ngang;
			result=NguoiChoi[hang][cot].ngang+=them1+them2;
			CapNhat(NguoiChoi,A,hang,cot,0,1,result,4);
			break;
		}
	}
}
