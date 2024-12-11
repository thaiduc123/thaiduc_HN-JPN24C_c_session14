#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	printf("Nhap vao chuoi: ");
	fgets(str,1000,stdin);
	printf("Do dai cua chuoi la: %d", strlen(str));	
	return 0;
}
