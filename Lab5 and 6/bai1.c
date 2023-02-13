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

    // Yêu cầu người dùng nhập điểm toán
    printf("Nhap diem toan: ");
    scanf("%f", &toan);

    // Yêu cầu người dùng nhập điểm lý
    printf("Nhap diem ly: ");
    scanf("%f", &ly);

    // Yêu cầu người dùng nhập điểm hóa
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình
    float TB =(toan + ly + hoa) / 3;
    switch ((int)TB)
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
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("%s dat loai Loai D", name);
        break;

    default:
        printf("Diem khong hop le!");
        break;
    }
    return 0;
}