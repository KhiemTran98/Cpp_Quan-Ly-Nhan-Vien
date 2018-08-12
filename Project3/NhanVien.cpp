#include <iostream>
#include <conio.h>
#define MAX 100
using namespace std;

struct NhanVien
{
	char HoTen[50];
	int NamSinh;
	double Luong;
};

void Nhap(NhanVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n>>> Nhan vien thu " << i + 1;
		cout << "\n	Nhap ho ten: ";
		cin.ignore();
		gets_s(a[i].HoTen);
		cout << "	Nhap nam sinh: ";
		cin >> a[i].NamSinh;
		cout << "	Nhap luong: ";
		cin >> a[i].Luong;
	}
}

void Xuat(NhanVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n>>> Nhan vien thu " << i + 1;
		cout << "\n	Ho ten: ";
		puts(a[i].HoTen);
		cout << "	Nam sinh: " << a[i].NamSinh;
		cout << "\n	Nhap luong: " << a[i].Luong;
		cout << endl;
	}
}

int LuongCaoNhat(NhanVien a[], int n)
{
	int max = a[0].Luong;
	for (int i = 0; i < n; i++)
		if (a[i].Luong > max) max = a[i].Luong;
	for (int j = 0; j < n; j++)
		if (a[j].Luong == max) return j;
}

void XuatNhanVien(NhanVien a[], int n)
{
	int t = LuongCaoNhat(a, n);
	cout << "\n>>> Nhan vien thu " << t + 1;
	cout << "\n	Ho ten: ";
	puts(a[t].HoTen);
	cout << "	Nam sinh: " << a[t].NamSinh;
	cout << "\n	Nhap luong: " << a[t].Luong;
}

void main()
{
	NhanVien a[MAX]; int n;
	cout << "Nhap so nhan vien: ";
	cin >> n;
	cout << "\nNHAP DU LIEU NHAN VIEN\n";
	Nhap(a, n);
	cout << "\nDU LIEU NHAN VIEN VUA NHAP\n";
	Xuat(a, n);
	cout << "\nNHAN VIEN LUONG CAO NHAT\n";
	XuatNhanVien(a, n);
	_getch();
}