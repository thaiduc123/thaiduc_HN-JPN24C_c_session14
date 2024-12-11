#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	printf("Nhap vao chuoi: ");
	fgets(str,1000,stdin);
	char c;
	int count = 0;
	printf("Nhap bat ki: ");
	scanf("%c", &c);
	for (int i=0; i<strlen(str); i++){
		if (c==str[i]){
			count++;
		}
	}
	printf("So lan xuat hien: %d", count);
	return 0;
}
