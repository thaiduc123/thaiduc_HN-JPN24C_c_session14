#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	printf("Nhap vao chuoi: ");
	fgets(str,1000,stdin);
	int count=0;
	for (int i=0; i<strlen(str); i++){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			count++;
		}
	}
	printf("So ki tu la chu cai la: %d", count);
	return 0;
}
