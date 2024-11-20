#include<stdio.h>
int main(){
	// khai bao 2 so ngau nhien
	int num1 = 20;
	int num2 = 30;
	// khai bao bien ket qua de luu tong cua num1 va num2
	int tong = num1 + num2;
	prinft("Phep tong la: %d \n", tong);
	// khai bao bien ket qua de luu tich cua num1 và num2
	int tich = num1 * num2;
	prinft("Phep tich la: %d \n", tich);
	// khai bao bien ket qua luu hieu cua num1 va num2 
	int hieu = num1 - num2;
	prinft("Phep hieu la: %d \n", hieu);
	// khai bao bien ket qua luu thuong cua num1 va num2 
	int thuong = num1 / num2;
	prinft("Phep thuong la; %d \n", thuong);
	return 0;
}
