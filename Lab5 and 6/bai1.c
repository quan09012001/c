#include <stdio.h>
#include <string.h>

int main()
{
    // Khai báo mảng kí tự name để lưu tên học sinh
    char name[50];
    // Khai báo biến toan, ly, hoa để lưu điểm toán, lý, hóa
    float toan, ly, hoa;
    // Yêu cầu người dùng nhập tên học sinh
    printf("Nhap ten hoc sinh: ");
    scanf("%s", &name);

    // Yêu cầu người dùng nhập điểm toán với điều kiện kiểm tra
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    while (toan < 0 || toan > 10)
    {
        printf("Diem toan khong hop le! Nhap lai: ");
        scanf("%f", &toan);
    }

    // Yêu cầu người dùng nhập điểm lý với điều kiện kiểm tra
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    while (ly < 0 || ly > 10)
    {
        printf("Diem ly khong hop le! Nhap lai: ");
        scanf("%f", &ly);
    }

    // Yêu cầu người dùng nhập điểm hóa với điều kiện kiểm tra
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    while (hoa < 0 || hoa > 10)
    {
        printf("Diem hoa khong hop le! Nhap lai: ");
        scanf("%f", &hoa);
    }

    // Tính điểm trung bình
    float tb = (toan + ly + hoa) / 3;
    switch ((int)tb)
    {
    case 10:
    case 9:
        printf("%s dat loai Loai A", name);
        break;
    case 8:
    case 7:
        printf("%s dat loai Loai B", name);
        break;
    case 6:
    case 5:
        printf("%s dat loai Loai C", name);
        break;
    default:
        printf("%s dat loai Loai D", name);
        break;
    }
    return 0;
}