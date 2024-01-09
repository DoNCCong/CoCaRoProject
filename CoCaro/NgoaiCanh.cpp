#include "NgoaiCanh.h"
#include<iostream>
using namespace std;

void KhoiTaoMang(char A[][100],int n){
	for(int i=-1;i<=n;i++){
		for(int j=-1;j<=n;j++){
			A[i][j]=' ';
		}
	}
}
void VeDiemKhoiTao(int n,int dk,int kitu1,int kitu2){
	if(n%dk==0){
		cout<<(char)kitu1;
	}else{
		cout<<(char)kitu2;
	}
}
void BanCo(int n){
	//------------------------
	cout<<(char)218;
	for(int i=1;i<=4*n-1;i++){
		VeDiemKhoiTao(i,4,194,196);
	}
	cout<<(char)191<<endl;
	//-------------------------
	for(int i=1;i<=2*n-1;i++){
		VeDiemKhoiTao(i,2,195,179);
		for(int j=1;j<=4*n-1;j++){
			if(i%2==0){
				VeDiemKhoiTao(j,4,197,196);
			}else
			if(j%4==0){
			cout<<(char)179;
			}else{
				cout<<" ";
			}
		}
		VeDiemKhoiTao(i,2,180,179);
		cout<<endl;
	}
	//--------------------------
	cout<<(char)192;
	for(int i=1;i<=4*n-1;i++){
		VeDiemKhoiTao(i,4,193,196);
	}
	cout<<(char)217<<endl;
}
