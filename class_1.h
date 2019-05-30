#include <iostream>
#include <string>
using namespace std;
class nhaTro{
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
	void SetsoDienMoi(int po2) {   // (soDienMoi-soDienCu)*heSoDien 
		soDienMoi = po2;		//  (soNuocMoi-soNuocCu)*heSoNuoc
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
class Nguoi{
private:
	char Ten[100];
	birth Ngaysinh;
	int Gioi;			//0 là Nữ, 1 là Nam
	char Quequan[100];
	int CMND;
	int soPhong;
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
		a = Gioi;			//a=0:Nữ,a=1:Nam;chỉ có 0 và 1
	}
	void GetGioi() {
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



void showThongTin1Nguoi();
void showThongTin1Phong();
void menuChucNang();
void timKiem(); //{ hàm bao gồm các hàm từ 39 đến 44 + hiển thị thông tin bằng hàm 53 }
void timThongTinTheoTen();
void timThongTinTheoCMND();
void timThongTinTheoGioiTinh();
void timThongTinTheoThangSinh();
void timThongTinTheoNamSinh();
void timTheoSoPhong();
void tinhTienDien(){
	int a0;
	a0.timTheoSoPhong();
	vector <nhaTro> ;
	
}
void tinhTienDien(){
	int a0;
	cout<<"Nhap so phong can tinh: ";
	cin>>a0;
	if(soPhong[]==a0){
		float a;
		a=(soDienMoi-soDienCu)*heSoDien;
		return a;
	}
	else
	{
		cout<<"Khong tim duoc so phong!";
		return 1;
		}	
};
void tinhTienNuoc(){
	float a1;
	a1=(soNuocMoi-soNuocCu)*heSoNuoc;
	return a1;
};
void tinhTongTien(){
	float a2;
	a2= tienPhong + (soDienMoi - soDienCu) * heSoDien + (soNuocMoi - soNuocCu) * heSoNuoc ;
	return a2;
};
void themNguoi();
void xoaNguoi();
void chinhSuaThongTinPhong(); //{ lấy thông tin từ hàm 44 + hiển thị và chỉnh sửa bằng các hàm get và set }
void chinhSuaThongTinNguoi(); //{ lấy thông tin từ hàm 39 đến 41 + hiển thị và sửa bằng các hàm get set }
void chinhSuaThongTin();//(menu lựa chọn + bao gồm các hàm 50 và 51}
