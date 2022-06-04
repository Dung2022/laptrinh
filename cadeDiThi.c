#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	int m;
	int D;
		printf("nhap tong so buoi: \n");
		scanf("%d",&n);
		printf("so buoi nghi hoc; \n");
		scanf("%d",&m);
		D= m*100/n;
	
	if(D<=n*0.25){
		printf("ban duoc di thi: \n");
	
		int LT;
		int TH;
		int BTL;
			printf("nhap diem LT:\n");
			scanf("%d",&LT);
			printf("nhap diem TH:\n");	
			scanf("%d",&TH);
			printf("nhap diem BTL:\n");
			scanf("%d",&BTL);
		if(LT<20*0.4){
		printf("ban thi lai LT: \n");
		}
		else{ 
		printf("ban da do LT: \n");
		}	
		if(TH<15*0.4){
			printf("ban thi lai TH: \n");
		}
		else{
			printf("ban da do TH: \n");
		}	
		if(TH<10*0.4){
			printf("ban thi lai BTL: \n");
		}
		else{
			printf("ban da do BTL: \n");
		}
	}
	 else{
		printf("ban bi truot: \n");
	}
	return 0;
	}	
