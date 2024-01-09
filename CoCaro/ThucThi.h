#ifndef __THUCTHI_H__
#define __THUCTHI_H__
#include "Caro.h"
#include <fstream>
//Ham khoi tao nguoi choi
void Init_NguoiChoi(Caro NguoiChoi[][100],int n);
//Ham duoc dinh nghia de in ra cac gia tri trong co caro khi can thiet
ostream& operator<<(ostream& outDev,Caro& co);
//Ham duoc dinh nghia de so sanh de so luong co lon hon hay 0
bool operator>=(Caro& co,short n);
//Ham toan tu cong them mot khi co mot bien moi duoc tao vao mang ++a
Caro& operator++(Caro& co);
//Ham se cong them mot gia tri neu co cac phan tu lien ket voi nhau
void CongMot(Caro NguoiChoi[][100],char A[][100],int hang,int cot,int select);
#endif
