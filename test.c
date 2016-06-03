#include "3052.h"
//copylight sasai
main(){
	long j,a;
	P1.DDR=0xff;
	while(1){
		a=1;
		while(a<=0x80){
			P1.DR.BYTE=a;
			a=a*2;
			for(j=1;j<10000;j++);
		}
		while(a>=2){
			a=a/2;
			P1.DR.BYTE=a;
			for(j=1;j<10000;j++);
		}
	}
}

