#include <stdio.h>

int main()
{
    int num; // khai báo biến num để lưu số nguyên nhập vào
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &num); // nhập vào biến num

    // kiểm tra xem num chia hết cho 2 hay không
    if (num % 2 == 0)
    {
        printf("%d là số chẵn.\n", num); // nếu chia hết, in ra màn hình "num là số chẵn"
        return 0;
    }

    printf("%d là số lẻ.\n", num); // nếu không chia hết, in ra màn hình "num là số lẻ"

    return 0; // kết thúc chương trình với giá trị trả về 0, cho biết chương trình đã chạy thành công
}
