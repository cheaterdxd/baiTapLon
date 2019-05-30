#pragma once
#include <iostream>
#include <vector>
#include "class.h"
using namespace std;
int tmp = 0;
vector <nhaTro> nhatro;
vector <Nguoi> nguoi;
void chinhSuaThongTinPhong() {
	int phongso = 0, menu = -1;
	do {
		cout << "Chon phong muon sua:";
		cin >> phongso;
		if (!phongso) {
			cout << "Ban nhap so phong khong hop le, vui long nhap lai.";
			cin.ignore();
		}
		else break;
	} while (phongso==0);
	system("cls");
	cout << "**Phong so:" << phongso << "\n";
	cout << "1.Chi So Nuoc Cu\n2.Chi So Nuoc Moi\n3.Chi So Dien Cu\n4.Chi So Dien Moi\n5.He So Nuoc\n6.He So Dien\n7.So Nguoi\nHoac nhap bat ki de ve menu truoc\n";
	cout << "(Luu y: Khi thay doi He So Dien va He So Nuoc se thay doi tren tat ca cac phong con lai)\n";
	cout << "Chon thong so can sua:";
	cin >> menu;
	cin.ignore();
	switch (menu) {
		case 0:{
			system("cls");
			chinhSuaThongTin();
			break;
	}
		case 1: {
			cout << "Thong so cu:" << nhatro.at(menu - 1).GetsoNuocCu() << '\n';
			cout << "Nhap chi so moi:";
			do {
				cin >> tmp;
				if (!tmp) {
					cout << "Gia tri ban vua nhap khong hop le, vui long nhap lai.\n";
				}
				else break;
				// cai nay chon sua la phai sua luon, khong hoi lai.
			} while (!tmp);
			nhatro.at(menu-1).SetsoNuocCu(tmp);
			cin.ignore();
		}
		case 2: {
			cout << "Thong so cu:" << nhatro.at(menu - 1).GetsoNuocMoi() << '\n';
			cout << "Nhap thong so moi:";
			do {
				cin >> tmp;
				if (!tmp) {
					cout << "Gia tri ban vua nhap khong hop le, vui long nhap lai.\n";
				}
				else break;
			} while (!tmp);
			nhatro.at(menu - 1).SetsoNuocMoi(tmp);
			cin.ignore();
		}
		case 3: {
			cout << "Thong so cu:" << nhatro.at(menu - 1).GetsoDienCu << '\n';
			cout << "Nhap thong so moi:";
			do {
				cin >> tmp;
				if (!tmp) {
					cout << "Gia tri ban vua nhap khong hop le, vui long nhap lai.\n";
				}
				else break;
			} while (!tmp);
			nhatro.at(menu - 1).SetsoDienCu(tmp);
			cin.ignore();
		}
		case 4: {
			cout << "Thong so cu:" << nhatro.at(menu - 1).GetsoDienMoi() << '\n';
			cout << "Nhap thong so moi:";
			do {
				cin >> tmp;
				if (!tmp) {
					cout << "Gia tri ban vua nhap khong hop le, vui long nhap lai.\n";
				}
				else break;
			} while (!tmp);
			nhatro.at(menu - 1).SetsoDienMoi(tmp);
			cin.ignore();
		}
		case 5: {
			cout << "Thong so cu:" << nhatro.at(menu - 1).GetheSoNuoc << '\n';
			cout << "Nhap thong so moi:";
			do {
				cin >> tmp;
				if (!tmp) {
					cout << "Gia tri ban vua nhap khong hop le, vui long nhap lai.\n";
				}
				else break;
			} while (!tmp);
			nhatro.at(menu - 1).SetheSoNuoc(tmp);
			cin.ignore();
		}
		case 6: {
			cout << "Thong so cu:" << nhatro.at(menu - 1).GetheSoDien << '\n';
			cout << "Nhap thong so moi:";
			do {
				cin >> tmp;
				if (!tmp) {
					cout << "Gia tri ban vua nhap khong hop le, vui long nhap lai.\n";
				}
				else break;
			} while (!tmp);
			nhatro.at(menu - 1).SetheSoDien(tmp);
			cin.ignore();
		}
		case 7: {
			cout << "Thong so cu:" << nhatro.at(menu - 1).GetsoNguoi << '\n';
			cout << "Nhap thong so moi:";
			do {
				cin >> tmp;
				if (!tmp) {
					cout << "Gia tri ban vua nhap khong hop le, vui long nhap lai.\n";
				}
				else break;
			} while (!tmp);
			nhatro.at(menu - 1).SetsoNguoi(tmp);
			cin.ignore();
		}
	};
};
void chinhSuaThongTinNguoi() {
	showThongTin1Phong();

}
void showThongTin1Phong(int phongso) {
	cout << "Thong tin phong so:" << nhatro.at(phongso-1).GetsoPhong() << '\n';
	for (int i = 0; i < nguoi.size();i++) {
		int a = 0;
		if (nguoi.at(i).GetsoPhong() == nhatro.at(phongso - 1).GetsoPhong()) {
			cout << a+1 << ".\n"<< "Ten:" << nguoi.at(i).GetTen() << "\tNgay thang nam sinh:" << nguoi.at(i).GetNgaysinh.ngay << "/" << nguoi.at(i).GetNgaysinh.thang << "/" << nguoi.at(i).GetNgaysinh.nam << "\tGioi tinh:" << nguoi.at(i).GetGioi() << "\tQue quan:" << nguoi.at(i).GetQuequan();
			a++;
		}
	}
}
void chinhSuaThongTinNguoi() {
	showThongTin1Phong();
	int SoPhong;
	cout << "Nhap so phong can chinh sua so luong nguoi o:"; cin >> SoPhong;

}