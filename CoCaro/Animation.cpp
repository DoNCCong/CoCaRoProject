#include "Animation.h"
#include<iostream>
#include<conio.h>
#include "NgoaiCanh.h"
#include<windows.h>

using namespace std;
void gotoxy(int x,int y)
{    
	HANDLE hConsoleOutput;    
	COORD Cursor_an_Pos = {x-1,y-1};   
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);    
	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}
// Ta them cac nut di chuyen cheo a cheo phai len, b cheo trai len, c cheo phai xuong, d cheo trai xuong 
void DiChuyen(char A[][100],int& x,int& y,int &i,int &j,int n){
	int c,x_old,y_old,temp;
	int dk_hang=n*4;
	int dk_cot=n*2;
	do{
		temp=1;
		gotoxy(x,y);
		i=(y-2)/2;j=x/4;//Quan trong da duoc cap nhat
		cout<<" ";
		c=getch();
		if(c==13) {
			//thoat khoi vong lap tai day de ben ngoai tien hanh ghi gia tri
			break;	
		}
		if(c==224) c=getch();
		x_old=x;y_old=y;
		switch(c){
			case 72:{
				if(y>2) y-=2;
				break;
			}
			case 80:{
				if(y<=dk_cot-2) y+=2;
				break;
			}
			case 77:{
				if(x<=dk_hang-4) x+=4;
				break;
			}
			case 75:{
				if(x>3) x-=4;
				break;
			}
		}
		gotoxy(x_old,y_old);
		cout<<" ";
	}while(1);
}
