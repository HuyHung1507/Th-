//#include <iostream>
//using namespace std;
////Chuong trinh nam nhuan
//bool lanamnhuan(int nam)
//{
//	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 = 0)
//		return true;
//	return false;
//	return lanamnhuan(nam);
//}
//// Chuong trinh nhap ngya trong thang hop le
//bool dayofmonth(int nam, int thang)
//{
//	int day;
//	switch (thang)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//	case 2: 
//		if (nam = lanamnhuan(nam))
//		{
//			day = 29;
//		}
//		else
//			day = 28;
//	}
//	return dayofmonth(nam, thang);
//}
//// Chuong trinh kiem tra ngay hop le
//bool ngayhople(int ngay, int thang, int nam)
//{
//	if (nam < 0)
//		return false;
//	if (thang < 1 || thang > 13)
//		return false;
//	if (ngay < 1 || ngay > dayofmonth(nam, thang))
//		return false;
//	return true;
//	return ngayhople(ngay, thang, nam);
//}
//
////// Ham tinh so thu tu ngay do trong nam da nhap
////int songaytrongnam(int ngay, int thang, int nam)
////{
////	int demngay = ngay;
////	for (int i = 1; i < thang; i++)
////	{
////		demngay = demngay + dayofmonth(i, nam);
////	}
////	return demngay;
////}
//int main()
//{
//	int ngay, thang, nam;
//	cout << "Ngay: " ; cin >> ngay;
//	cout << "Thang: "; cin >> thang;
//	cout << "Nam: "  ; cin >> nam;
//	lanamnhuan(nam);
//	dayofmonth(nam, thang);
//	ngayhople(ngay, thang, nam);
//	if (ngayhople(ngay, thang, nam))
//		cout << ngay << " / " << thang << " / " << nam;
//	cout << "Nhap sai, nhap lai";
//
//
//}