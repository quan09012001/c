#include <stdio.h>
#include <stdlib.h>

void kiemTraSoNguyen()
{
    printf("Thuc hien chuc nang kiem tra so nguyen");
}

void timUocBoiSo()
{
    printf("Thuc hien chuc nang tim uoc so chung va boi so chung cua 2 so");
}

void tinhTienKaraoke()
{
    printf("Thuc hien chuc nang tinh tien cho quan Karaoke");
}

void tinhTienDien()
{
    printf("Thuc hien chuc nang tinh tien dien");
}

void doiTien()
{
    printf("Thuc hien chuc nang doi tien");
}

void laiSuatVay()
{
    printf("Thuc hien chuc nang tinh lai suat vay ngan hang vay tra gop");
}

void vayTienMuaXe()
{
    printf("Thuc hien chuc nang vay tien mua xe");
}

void sapXepSinhVien()
{
    printf("Thuc hien chuc nang sap xep thong tin sinh vien");
}

void fpolyLott()
{
    printf("Thuc hien chuc nang xay dung game Fpoly-LOTT");
}

void tinhToanPhanSo()
{
    printf("Thuc hien chuc nang tinh toan phan so");
}

void menu()
{
    int luachon;
    printf("\n+-------------------------Menu-------------------------+\n");
    printf("\n  1.Kiem tra so nguyen");
    printf("\n  2.Tim uoc so chung va boi so chung cua 2 so");
    printf("\n  3.Tinh tien cho quan Karaoke");
    printf("\n  4.Tinh tien dien");
    printf("\n  5.Chuong trinh doi tien");
    printf("\n  6.Tinh lai suat vay ngan hang vay tra gop");
    printf("\n  7.Chuong trinh vay tien mua xe");
    printf("\n  8.Sap xep thong tin sinh vien");
    printf("\n  9.Xay dung game Fpoly-LOTT");
    printf("\n  10.Chuong trinh tinh toan phan so");
    printf("\n  0.Thoat\n");
    printf("\n+------------------------------------------------------+");
    printf("\n\nChon chuong trinh: ");
    scanf("%d", &luachon);

    switch (luachon)
    {
    case 1:
        kiemTraSoNguyen();
        break;

    case 2:
        timUocBoiSo();
        break;

    case 3:
        tinhTienKaraoke();
        break;

    case 4:
        tinhTienDien();
        break;

    case 5:
        doiTien();
        break;

    case 6:
        laiSuatVay();
        break;

    case 7:
        vayTienMuaXe();
        break;

    case 8:
        sapXepSinhVien();
        break;

    case 9:
        fpolyLott();
        break;

    case 10:
        tinhToanPhanSo();
        break;

    case 0:
        exit(0);
    }
}

int main()
{
    while (1)

    {
        menu();
    }

    return 0;
}