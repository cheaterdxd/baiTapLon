#pragma once
//Bảng hàm chức năng line 130, có chỉnh hàm hay thủ tục thì vào đây chỉnh, hoặc bổ sung hàm
#define ll long long
#include <iostream>
#include <string>
using namespace std;
class nhaTro{
private:
	ll soPhong, soDienCu, soDienMoi, soNuocCu, soNuocMoi, soNguoi;
	ll heSoNuoc, heSoDien;
	ll soNguoiMax;
public:
	void SetsoPhong(ll po) { 
		soPhong = po; 
	}
	ll GetsoPhong() {
		return soPhong;
	}
	void SetsoDienCu(ll po1) {
		soDienCu = po1;
	}
	ll GetsoDienCu() {
		return soDienCu;
	}
	void SetsoDienMoi(ll po2) {
		soDienMoi = po2;
	}
	ll GetsoDienMoi() {
		return soDienMoi;
	}
	void SetsoNuocCu(ll po3) {
		soNuocCu = po3;
	}
	ll GetsoNuocCu() {
		return soNuocCu;
	}
	void SetsoNuocMoi(ll po4) {
		soNuocMoi = po4;
	}
	ll GetsoNuocMoi() {
		return soNuocMoi;
	}
	void SetsoNguoi(ll po5) {
		soNguoi = po5;
	}
	ll GetsoNguoi() {
		return soNguoi;
	}
	void SetheSoNuoc(ll po6) {
		heSoNuoc = po6;
	}
	ll GetheSoNuoc() {
		return heSoNuoc;
	}
	void SetheSoDien(ll po7) {
		heSoDien = po7;
	}
	ll GetheSoDien() {
		return heSoDien;
	}
	void SetsoNguoiMax(ll po8) {
		soNguoiMax = po8;
	}
	ll GetsoNguoiMax() {
		return soNguoiMax;
	}
};


typedef struct {
	ll ngay, thang, nam;
}birth;

class Nguoi{
private:
	char Ten[100];
	birth Ngaysinh;
	string Gioi;			//0 là Nữ, 1 là Nam
	char Quequan[100];
	ll CMND;
public:
	void SetTen(char tenIn[100]){
		for (int i = 0; i < 100; i++) Ten[i] = tenIn[i];
	}

	string GetTen(){
		string s;
		for (int i = 0; i < 100; i++){
			if ((Ten[i] == ' ') || ((Ten[i] >= 'A') && (Ten[i] <= 'z')) || ((Ten[i] >= '0') && (Ten[i] <= '9')))
				s += Ten[i];
		}
		return s;
	}

	void SetNgaysinh(birth nGaysinh) {
		Ngaysinh = nGaysinh;
	}

	birth GetNgaysinh() {
		return Ngaysinh;
	}

	string GetQuequan(){
		string s1;
		for (int i = 0; i <100; i++){
			if ((Quequan[i] == ' ') || ((Quequan[i] >= 'A') && (Quequan[i] <= 'z')) || ((Quequan[i] >= '0') && (Quequan[i] <= '9')))
				s1 += Quequan[i];
		}
		return s1;
	}

	void SetGioi(int a) {		
		string k1;
		if (a == 0) {				//a=0:Nữ,a=1:Nam;chỉ có 0 và 1
			k1 = "Nu";
		}
		else {
			k1 = "Nam";
		}
		Gioi = k1;
	}

	string GetGioi() {
		return Gioi;
	}

	void SetCMND(ll Cm) {
		CMND = Cm;
	}

	ll GetCMND() {
		return CMND;
	}
};



void showThongTin1Nguoi();
void showThongTin1Phong();
void menuChucNang();
void timKiem(); //{ hàm bao gồm các hàm từ 39 đến 44 + hiển thị thông tin bằng hàm 53 }
void timThongTinTheoTen();
void timThongTinTheoCMND();
void timThongTinTheoGioiTinh();
void timThongTinTheoThangSinh();
void timThongTinTheoNamSinh();
void timTheoSoPhong(int a);
ll tinhTienDien(ll sophong);
ll tinhTienNuoc(ll sophong);
void tinhTongTien(); //{ bao gồm các hàm 44 + 45 }
void themNguoi();
void xoaNguoi();
void chinhSuaThongTinPhong(); //{ lấy thông tin từ hàm 44 + hiển thị và chỉnh sửa bằng các hàm get và set }
void chinhSuaThongTinNguoi(); //{ lấy thông tin từ hàm 39 đến 41 + hiển thị và sửa bằng các hàm get set }
void chinhSuaThongTin();//(menu lựa chọn + bao gồm các hàm 50 và 51}
