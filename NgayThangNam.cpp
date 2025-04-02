#include "NgayThangNam.h"
int Months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
void NgayThangNam::Nhap() {
	cout << "Nhap :";
	cin >> iNgay;
	cin >> iThang;
	cin >> iNam;
	if (CheckNamNhuan(iNam)) {
		Months[1] = 29;
	}
	else {
		Months[1] = 28;
	}
	while (iNgay > Months[iThang - 1] || iNgay < 1 || iThang > 12 || iThang < 1) {
		cout << "Ngay khong hop le!" << endl;
		cin >> iNgay;
		cin >> iThang;
		cin >> iNam;
	}
};
void NgayThangNam::Xuat() {
	cout << iNgay << " / " << iThang << " / " << iNam << endl;
};
void NgayThangNam::NgayTiepTheo() {
	if (CheckNamNhuan(iNam)) {
		Months[1] = 29;
	}
	else {
		Months[1] = 28;
	}
	iNgay++;
	if (iNgay > Months[iThang - 1]) {
		iThang++;
		iNgay = 1;
		if (iThang > 12) {
			iNam++;
			iThang = 1;
		}
	}
	cout << "Ngày tiep theo: ";
	cout << iNgay << " / " << iThang << " / " << iNam;
	if (iNgay == 1 && iThang == 1) {
		cout << endl;
		cout << "Happy New Year " << iNam << "!";
	}
};
bool CheckNamNhuan(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}