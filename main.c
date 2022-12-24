#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int bakiye = 10000;

int parayatirma(){
	
	int yatirilacak_para;
	
	printf("KAC TL YATIRMAK ISTERSINIZ\n");
	scanf("%d",&yatirilacak_para);
	
	bakiye += yatirilacak_para;
	printf("BASARIYLA %d TL YATIRDINIZ\nYENI BAKIYENIZ = %d\n",yatirilacak_para,bakiye);
	return 0;
}


int paracekme(){
	
	int cekilecek_para;
	printf("KAC TL CEKMEK ISTERSINIZ?\n");
	scanf("%d",&cekilecek_para);
	
	bakiye -= cekilecek_para;
	printf("BASARIYLA %d TL CEKTINIZ\nYENI BAKIYENIZ = %d\n",cekilecek_para,bakiye);
	return 0;
	
}
int bakiyesorgu(){
	
	printf("BAKIYENIZ = %d\n",bakiye);
	
	return 0;
}

int main(int argc, char *argv[]) {
	int yeniden;

	do{
		int islemsecim;
		printf("YAPMAK ISTEDIGINIZ ISLEMI SECINIZ:\n1-BAKIYE SORGULAMA\n2-PARA CEKME\n3-PARA YATIRMA\n");
		scanf("%d",&islemsecim);
		
		if(islemsecim == 1){
			bakiyesorgu();
			
		} else if(islemsecim == 2){
			paracekme();
		}else if(islemsecim == 3){
			parayatirma();
		}else{
			printf("GECERSIZ SECIM\n");
		}
		printf("YENIDEN ISLEM YAPMAK ISTER MISINIZ\n1-EVET\n2-HAYIR\n");
		scanf("%d",&yeniden);
			
	}while(yeniden == 1);
	return 0;
}
