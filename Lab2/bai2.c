#include <stdio.h>
#include <string.h>
/*
Nhập tên học sinh + nhập điểm trung bình toán lý hoá của học sinh đó --> tính ra xếp loại của học sinh đó
*/
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
    printf("\nNhap diem ly: ");
    scanf("%f", &ly);

    // Yêu cầu người dùng nhập điểm hóa
    printf("\nNhap diem hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình
    float TB = (toan + ly + hoa) / 3;

    // Kiểm tra xem điểm trung bình của học sinh thuộc loại nào và in kết quả
    if (TB >= 9)
    {
        printf("diem trung binh cua %s la %.2f xep loai A", name, TB);
    }
    else if (TB >= 7)
    {
        printf("diem trung binh cua %s la %.2f xep loai B", name, TB);
    }
    else if (TB >= 5)
    {
        printf("diem trung binh cua %s la %.2f xep loai C", name, TB);
    }
    else
    {
        printf("diem trung binh cua %s la %.2f xep loai D", name, TB);
    }

    // Kết thúc chương trình với giá trị trả về 0
    return 0;
}
