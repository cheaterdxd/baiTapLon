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
int tinhTienDien(int);
int tinhTienNuoc(int);
void tinhTongTien(); //{ bao gồm các hàm 44 + 45 }
void themNguoi();
void xoaNguoi();
void chinhSuaThongTinPhong(); //{ lấy thông tin từ hàm 44 + hiển thị và chỉnh sửa bằng các hàm get và set }
void chinhSuaThongTinNguoi(); //{ lấy thông tin từ hàm 39 đến 41 + hiển thị và sửa bằng các hàm get set }
void chinhSuaThongTin();//(menu lựa chọn + bao gồm các hàm 50 và 51}

vector <Nguoi> nguoi;
//====================================================================================================
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
			void timThongTinTheoTen();
		}
		if (a == 2) {
			void timThongTinTheoCMND();
		}
		if (a == 3) {
			void timThongTinTheoGioiTinh();
		}
		if (a == 4) {
			void timThongTinTheoThangSinh();
		}
		if (a == 5) {
			void timThongTinTheoNamSinh();
		}
		if (a == 6) {
			void timTheoSoPhong();
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
	cin.ignore();
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
	while (a > 3000 && a < 1800){
			cout << "\nNam sinh khong hop le xin vui long nhap lai:";
			cin >> a;
	}
	for (int i = 0; i < nguoi.size(); i++) {
		if (nguoi[i].GetNgaysinh().nam == a) {
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
//====================================================================================================
void thoat() {
	menuChucNang();
	// đưa tất cả các hàm lớn về menu Lớn. 
}

void menuXoaNguoi() {
	int k;
	xemThongTinNguoi();
	cout << "\n Nhap STT nguoi ban muon xoa: ";
	cin >> k;
	xoaNguoi(k);
}

void menuThemXoaNguoi() {
	cout << "\n1.Xoa nguoi.";
	cout << "\n2.Them nguoi.";
	cout << "\n.Quay lai menu.";
	int luachon;
	cout << "\n====================";
	cout << "\nXin hay nhap lua chon: ";
	cin >> luachon;
	while (luachon < 1 || luachon>3) {
		cout << "\nBan da nhap sai lua chon. Vui long nhap lai (1,2): ";
		cin >> luachon;
	}
	if (luachon == 1) {
		menuXoaNguoi();
	}
	if (luachon == 2) {
		themNguoi();
	}
	else thoat();
}

void chinhSuaThongTin() {
	cout << "\nCHINH SUA THONG TIN";
	cout << "\n========================";
	cout << "\n1.Chinh sua thong tin nguoi.";
	cout << "\n2.Chinh sua thong tin phong.";
	cout << "\n3.Quay lai menu.";
	cout << "\n========================";
	int luachon;
	cout << "Nhap lua chon cua ban (1,2) :";
	while (luachon < 1 || luachon>3) {
		cout << "Ban da nhap sai lua chon. Vui long nhap lai (1,2): ";
		cin >> luachon;
	}
	if (luachon == 1) {
		chinhSuaThongTinPhong();
	}
	if (luachon == 2) {
		chinhSuaThongTinNguoi();
	}
	else thoat();
}

void xemThongTin() {
	cout << "\nXEM THONG TIN";
	cout << "\n==================";
	cout << "\n1.Xem thong tin nguoi.";
	cout << "\n2.Xem thong tin phong cu the.";
	cout << "\n3.Xem thong tin tat ca cac phong.";
	cout << "\n4.Thoat.";
	cout << "\n===================";
	int luachon;
	cout << "Nhap lua chon cua ban: ";
	cin >> luachon;
	while (luachon < 1 || luachon>3) {
		cout << "\nBan da nhap sai lua chon. Vui long nhap lai (1,2,3) : ";
		cin >> luachon;
	}
	switch (luachon) {
	case 1: xemThongTinNguoi();
	case 2: xemPhongCuThe();
	case 3: xemThongTinTatCaPhong();
	case 4: thoat();
	}
}

void xemThongTinNguoi() {
	cout << "\nBan muon tim theo: ";
	cout << "\n1.Tim theo ten.";
	cout << "\n2.Tim theo gioi tinh.";
	cout << "\n3.Tim theo CMND.";
	cout << "\n4.Quay lai menu.";
	cout << "\n======================";
	cout << "Nhap lua chon cua ban: ";
	int luachon;
	cin >> luachon;
	while (luachon < 0 || luachon>3) {
		cout << "\Ban da nhap sai lua chon. Vui long nhap lai (1,2,3): ";
		cin >> luachon;
	}
	switch (luachon) {
	case 1:timThongTinTheoTen();
	case 2:timThongTinTheoGioiTinh();
	case 3:timThongTinTheoCMND();
	case 4:timThongTinTheoThangSinh();
	case 5:thoat();
	}
}

void showDanhSachPhong() {
	//in ra dữ liệu danh sách phòng
	//ví du:
	//1.phòng 1
	//2.phòng 2
	//.....
};

void timTheoSoPhong(int);

void xemPhongCuThe() {
	showDanhSachPhong();
	cout << "Nhap so phong ban muon xem: ";
	int luachon;
	// ở đây còn cần điều kiện của số phòng nữa, mà t chưa thấy được có bao nhiêu phòng nên để trống đây. 
	cin >> luachon;
	timTheoSoPhong(luachon); // hàm này lấy lựa chọn được truyền vào và chỉ in ra dữ liệu của "MỘT" phòng cụ thể 
}

void xemThongTinTatCaPhong() {
	//hàm này cho lặp số thứ tự từ đầu đến cuối, truyền số vào hàm timTheoSoPhong(luachon) để in ra cả danh sách
}

void tinhTongTien() {
	int luachon_2;
	cout << "TÍNH TIỀN ";
	cout << "\n===========";
	do {
		showDanhSachPhong();
		cout << "\nNhap so phong muon tinh: ";
		int luachon;
		cout<<"So tien dien: "<< tinhTienDien(luachon);
		cout<<"So tien nuoc: "<<tinhTienNuoc(luachon);
		//2 hàm trên có chức năng in ra số điện, nước cũ, nhập vào điện nước mới, và trả lại giá tiền
		//lưu ý khi nhập điện và nước mới thì lưu số trước đó ở biến tiền điện mới về biến tiền điện cũ. Rồi mới set giá trị mới vào số điện/nước mới.
		cout << "Tong tien la: " << tinhTienDien(luachon) + tinhTienNuoc(luachon);
		cout << "\nBan co muon tiep tuc tinh tien khong?";
		cout << "\n1.Co";
		cout << "\n2.Khong.";
		cout << "\nVui long chon: ";
		cin >> luachon_2;
	} while (luachon_2 == 1);
}

int shutdown() {
	return 0;
}

void menuChucNang() {
	cout << "\n========================================";
	cout << "\n|           QUAN LY NHA TRO            |";
	cout << "\n|======================================|";
	cout << "\n|        1.Them,xoa nguoi.             |";    // checked xong.
	cout << "\n|        2.Chinh sua thong tin.        |";
	cout << "\n|        3.Xem thong tin.              |";
	cout << "\n|        4.Tinh tien phong.            |";
	cout << "\n|        5.Thoat chuong trinh.         |";
	cout << "\n========================================";
	cout << "\n|   Xin hay nhap lua chon cua ban...   |";
	cout << "\n========================================" << endl;
	int luachon;
	cin >> luachon;
	while (luachon < 0 || luachon>5) {
		cout << "\Ban da chon sai. Vui long chon lai (1,2,3,4,5) : ";
		cin >> luachon;
	}
	switch (luachon) {
	case 1: menuThemXoaNguoi();
	case 2: chinhSuaThongTin();
	case 3:xemThongTin();
	case 4:tinhTongTien();
	case 5: shutdown();
	}
}