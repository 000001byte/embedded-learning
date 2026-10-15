#include <REGX52.H>
unsigned char num[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71,0x00};
//0 1 2 3 4 5 6 7 8
void shumaguan(int location,int number){
	switch(location){
		case 1:P2_4=1;P2_3=1;P2_2=1;break;  //Y->7 6 5 4 3 2 1 0
		case 2:P2_4=1;P2_3=1;P2_2=0;break;  //4 2 1
	  case 3:P2_4=1;P2_3=0;P2_2=1;break;
	  case 4:P2_4=1;P2_3=0;P2_2=0;break;
	  case 5:P2_4=0;P2_3=1;P2_2=1;break;
	  case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=num[number];
}
void main(){
	shumaguan(2,13);
	while(1);
}