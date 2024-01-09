#include"TinhToan.h"
#include"ThucThi.h"
#include<iostream>
using namespace std;
void TinhGiaTri(Caro NguoiChoi[][100],char A[][100],int hang,int cot){
	++NguoiChoi[hang][cot];
	for(int select=1;select<=4;select++){
		CongMot(NguoiChoi,A,hang,cot,select);
	}
	//Xet dieu kien xam pham da co ham tinh toan dam nhan cong viec
}
