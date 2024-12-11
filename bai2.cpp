#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	printf("Nhap vao chuoi: ");
	fgets(str,1000,stdin);
	printf("In: ");
	for (int i=0; i<strlen(str); i++){
		printf("%c ", str[i]);
	}
	return 0;
}
