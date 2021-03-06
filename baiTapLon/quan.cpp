#include <iostream>
#include <iomanip>
#include <vector>
#pragma once
//Bảng hàm chức năng line 130, có chỉnh hàm hay thủ tục thì vào đây chỉnh, hoặc bổ sung hàm
#include <string>
using namespace std;
class nhaTro {
private:
	int soPhong, soDienCu, soDienMoi, soNuocCu, soNuocMoi, soNguoi;
	int heSoNuoc, heSoDien;
	int soNguoiMax;
public:
	void SetsoPhong(int po) {
		soPhong = po;
	}
	int GetsoPhong() {
		return soPhong;
	}
	void SetsoDienCu(int po1) {
		soDienCu = po1;
	}
	int GetsoDienCu() {
		return soDienCu;
	}
	void SetsoDienMoi(int po2) {
		soDienMoi = po2;
	}
	int GetsoDienMoi() {
		return soDienMoi;
	}
	void SetsoNuocCu(int po3) {
		soNuocCu = po3;
	}
	int GetsoNuocCu() {
		return soNuocCu;
	}
	void SetsoNuocMoi(int po4) {
		soNuocMoi = po4;
	}
	int GetsoNuocMoi() {
		return soNuocMoi;
	}
	void SetsoNguoi(int po5) {
		soNguoi = po5;
	}
	int GetsoNguoi() {
		return soNguoi;
	}
	void SetheSoNuoc(int po6) {
		heSoNuoc = po6;
	}
	int GetheSoNuoc() {
		return heSoNuoc;
	}
	void SetheSoDien(int po7) {
		heSoDien = po7;
	}
	int GetheSoDien() {
		return heSoDien;
	}
	void SetsoNguoiMax(int po8) {
		soNguoiMax = po8;
	}
	int GetsoNguoiMax() {
		return soNguoiMax;
	}
};



typedef struct {
	int ngay, thang, nam;
}birth;



class Nguoi {
private:
	char Ten[100];
	birth Ngaysinh;
	int Gioi;			//0 là Nữ, 1 là Nam
	char Quequan[100];
	int CMND;
	int soPhong;
public:
	void SetTen(char tenIn[100]) {
		for (int i = 0; i < 100; i++) Ten[i] = tenIn[i];
	}
	string GetTen() {
		string s;
		s = Ten;
		return s;
	}
	void SetNgaysinh(birth nGaysinh) {
		Ngaysinh = nGaysinh;
	}
	birth GetNgaysinh() {
		return Ngaysinh;
	}
	string GetQuequan() {
		string s1;
		for (int i = 0; i < 100; i++) {
			if ((Quequan[i] == ' ') || ((Quequan[i] >= 'A') && (Quequan[i] <= 'z')) || ((Quequan[i] >= '0') && (Quequan[i] <= '9')))
				s1 += Quequan[i];
		}
		return s1;
	}
	void SetQuequan(char quequan[100]) {
		for (int i = 0; i < 100; i++) Quequan[i] = quequan[i];
	}
	void SetGioi(int a) {
		Gioi = a;			//a=0:Nữ,a=1:Nam;chỉ có 0 và 1
	}
	int GetGioi() {
		return Gioi;
	}
	void SetCMND(int Cm) {
		CMND = Cm;
	}

	int GetCMND() {
		return CMND;
	}
	void SetsoPhong(int po0) {
		soPhong = po0;
	}
	int GetsoPhong() {
		return soPhong;
	}
};

void showThongTin1Phong();
void menuChucNang();
void timKiem(); //{ hàm bao gồm các hàm từ 39 đến 44 + hiển thị thông tin bằng hàm 53 }
void timThongTinTheoTen();
void timThongTinTheoCMND();
void timThongTinTheoGioiTinh();
void timThongTinTheoThangSinh();
void timThongTinTheoNamSinh();
void timTheoSoPhong();
void tinhTienDien();
void tinhTienNuoc();
void tinhTongTien(); //{ bao gồm các hàm 44 + 45 }
void themNguoi();
void xoaNguoi();
void chinhSuaThongTinPhong(); //{ lấy thông tin từ hàm 44 + hiển thị và chỉnh sửa bằng các hàm get và set }
void chinhSuaThongTinNguoi(); //{ lấy thông tin từ hàm 39 đến 41 + hiển thị và sửa bằng các hàm get set }
void chinhSuaThongTin();//(menu lựa chọn + bao gồm các hàm 50 và 51}

vector <Nguoi> nguoi;

void showThongTin1Nguoi(Nguoi person)
{
	cout << person.GetTen() << setw(10) << person.GetNgaysinh().ngay << "/" << person.GetNgaysinh().thang << "/" << person.GetNgaysinh().nam << setw(20) << person.GetCMND() << setw(10) << person.GetQuequan() << setw(10) << person.GetsoPhong() << endl;
}

void themNguoi() {
	Nguoi person;
	char Ten[100];
	birth Ngaysinh;
	char gioi[3];
	int Gioi;			//0 là Nữ, 1 là Nam
	char Quequan[100];
	int CMND;
	int soPhong;
	cout << "\nNhap ten:";
	cin >> Ten;
	cout << "\nNhap ngay sinh:";
	cin >> Ngaysinh.ngay;
	cout << "\nNhap thang sinh:";
	cin >> Ngaysinh.thang;
	cout << "\nNhap nam sinh:";
	cin >> Ngaysinh.nam;
	cout << "\nNhap Gioi:";
	cin >> gioi;
	if (gioi == "nam") Gioi = 1;
	if (gioi == "nu") Gioi = 0;
	while (gioi != "nam"&&gioi != "nu") {
		cout << "\nGioi tinh khong hop le xin nhap lai gioi tinh:";
		cin >> gioi;
		if (gioi == "nam") Gioi = 1;
		if (gioi == "nu") Gioi = 0;
	}
	cout << "\nNhap que quan:";
	cin >> Quequan;
	cout << "\nNhap CMND:";
	cin >> CMND;
	cout << "\nNhap vao so phong:";
	cin >> soPhong;
	if (soPhong > 10 && soPhong < 1) {
		cout << "\nSo phong khong hop le xin vui long nhap lai:";
		cin >> soPhong;
	}
	person.SetTen(Ten);
	person.SetGioi(Gioi);
	person.SetCMND(CMND);
	person.SetNgaysinh(Ngaysinh);
	person.SetsoPhong(soPhong);
	person.SetQuequan(Quequan);
	nguoi.push_back(person);

}

void xoaNguoi(int i) {
	nguoi.erase(nguoi.begin() + i);
}

void timKiem() {
	cout << "____________________________________________" << endl;
	cout << "|   1.Tim kiem thong tin theo ten.          |" << endl;
	cout << "|   2.Tim kiem thong tin theo CMND.         |" << endl;
	cout << "|   3.Tim kiem thong tin theo gioi tinh.    |" << endl;
	cout << "|   4.Tim kiem thong tin theo thang sinh.   |" << endl;
	cout << "|   5.Tim kiem thong tin theo nam sinh.     |" << endl;
	cout << "|   6.Tim kiem thong tin theo so phong.     |" << endl;
	cout << "|   7.Quay lai.                             |" << endl;
	cout << "|___________________________________________|" << endl;
	int a;
	do {
		cout << endl << "Nhap vao chuc nang su dung:";
		cin >> a;
		while (a < 0 || a>7) {
			cout << "\nChuc nang khong phu hop! Hay nhap lai chuc nang:";
			cin >> a;
		}
		if (a == 1) {
			 timThongTinTheoTen();
		}
		if (a == 2) {
			 timThongTinTheoCMND();
		}
		if (a == 3) {
			timThongTinTheoGioiTinh();
		}
		if (a == 4) {
			 timThongTinTheoThangSinh();
		}
		if (a == 5) {
			 timThongTinTheoNamSinh();
		}
		if (a == 6) {
			 timTheoSoPhong();
		}
	} while (a != 7);
	void menuChucNang();
}

void timThongTinTheoTen() {
	char a[100];
	cin.getline(a, 100);
	for (int i = 0; i < nguoi.size(); i++) {

		if (nguoi[i].GetTen() == a) {
			showThongTin1Nguoi(nguoi[i]);
		}
	}
}

void timThongTinTheoCMND() {
	int a;
	cout << "\nNhap so CMND can tim:";
	cin >> a;
	for (int i = 0; i < nguoi.size(); i++) {
		if (nguoi[i].GetCMND() == a) {
			showThongTin1Nguoi(nguoi[i]);
		}
	}
}

void timThongTinTheoGioiTinh() {
	cout << "\n Nhap gioi tinh can tim: ";
	string a;
	int kiem;
	getline(cin, a);
	if (a == "nam") kiem = 1;
	if (a == "nu") kiem = 0;
	while (a != "nam"&&a != "nu") {
		cout << "\nGioi tinh khong hop le xin nhap lai gioi tinh:";
		cin >> a;
		if (a == "nam") kiem = 1;
		if (a == "nu") kiem = 0;
	}
	for (int i = 0; i < nguoi.size(); i++) {
		if (nguoi[i].GetGioi() == kiem) {
			showThongTin1Nguoi(nguoi[i]);
		}
	}
}

void timThongTinTheoNamSinh() {
	int a;
	cout << "\nNhap nam sinh:";
	cin >> a;
	if (a > 3000 && a < 1800) {
		do {
			cout << "\nNam sinh khong hop le xin vui long nhap lai:";
			cin >> a;
		} while (a > 3000 && a < 1800);
	}
	for (int i = 0; i < nguoi.size(); i++) {
		if (nguoi[i].GetNgaysinh().thang == a) {
			showThongTin1Nguoi(nguoi[i]);
		}
	}
}

void timTheoSoPhong() {
	int a;
	cin >> a;
	if (a < 0 && a>10) {
		do {
			cout << "\nSo phong khong hop le xin vui long nhap lai:";
			cin >> a;
		} while (a < 0 && a>10);
	}
	for (int i = 0; i <= nguoi.size(); i++) {
		if (nguoi[i].GetsoPhong() == a) {
			showThongTin1Nguoi(nguoi[i]);
		}
	}
}

int main()
{
	
}

