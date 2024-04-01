﻿#include <stdio.h>
// Hàm kiểm tra xem số có phải là bội của 7 không
int kiemTraBoiSo7(int num)
{
	return (num % 7 == 0);
}

int main()
{
	printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
	// Duyệt qua tất cả các số nguyên có 2 chữ số
	for (int i = 10; i < 100; i++) {
		// Kiểm tra xem số có phải là bội của 7 không
		if (kiemTraBoiSo7(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}