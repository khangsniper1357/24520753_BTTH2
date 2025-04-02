#pragma once
#include <iostream>
using namespace std;
class NgayThangNam {
private:
	int iNgay, iThang, iNam;
public:
	void Nhap();
	void Xuat();
	void NgayTiepTheo();
};
bool CheckNamNhuan(int year);

