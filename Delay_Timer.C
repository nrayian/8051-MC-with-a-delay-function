#include<reg51.h>
void DELAY(void);
unsigned char i;
void main(void){
	while(1){
		P1 = 0x55;
		DELAY();
		P1 = 0xAA;
		DELAY();
	}
}

void DELAY(void){
	TMOD = 0x01;
	for(i=0;i<20;i++){
	TH0 = 0x35;
	TL0 = 0x00;
	TR0 = 1;
	while(TF0==0);
	TR0 = 0;
	TF0 = 0;
	}
}