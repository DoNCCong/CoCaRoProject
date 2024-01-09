#include<iostream>
#include<string.h>
#include "NgoaiCanh.h"
#include "Animation.h"
#include "TinhToan.h"
#include "Caro.h"
#include "ThucThi.h"
#include "PhuTro.h"
using namespace std;

int main(){
	char A[100][100]={' '};
	string ket_qua="HOA!";
	string Player_A="";
	string Player_B="";
	cout<<"Nhap ten nguoi choi dau tien:"<<endl;
	getline(cin,Player_A);
	cout<<"Nhap ten nguoi choi thu hai:"<<endl;
	getline(cin,Player_B);
	system("cls");
	Caro NguoiChoiA[100][100]={(0)},NguoiChoiB[100][100]={0};
	int x=2,y=2,n=10,i=0,j=0;char c;bool flag=true;
	int dk=n*n;
	A[x][y]=(char)219;
	KhoiTaoMang(A,n);
	BanCo(n);
	do{
		if(flag){
			c='X';
		}else{
			c='O';
		}
		DiChuyen(A,x,y,i,j,n);
		if(A[i][j]==' '){
			A[i][j]=c;
			cout<<c;
			if(c=='X'){
				TinhGiaTri(NguoiChoiA,A,i,j);
				if(NguoiChoiA[i][j]>=5){
					ket_qua="Nguoi Choi "+Player_A+" THANG";
					break;
				}
				//NguoiChoiA
			}else{
				TinhGiaTri(NguoiChoiB,A,i,j);
				if(NguoiChoiB[i][j]>=5){
					ket_qua="Nguoi Choi "+Player_B+" THANG";
					break;
				}
				//NguoiChoiB
			}
			dk--;
			flag=!flag;
		}
		
	}while(dk!=0);
	gotoxy(1,n*2+2);
	if(dk==0){
		cout<<ket_qua<<endl;
	}else{
		cout<<ket_qua<<endl;
	}
	/*cout<<"Bang Gia Tri"<<endl;
	Print(A,n);
	cout<<"NguoiChoiA"<<endl;
	Print(NguoiChoiA,n);
	cout<<"NguoiChoiB"<<endl;
	Print(NguoiChoiB,n);*/
	return 0;
}
