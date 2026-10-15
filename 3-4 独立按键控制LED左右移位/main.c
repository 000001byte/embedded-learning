#include <REGX52.H>
void Delay(unsigned int xms)	//@12.000MHz
{
	while(xms--){
	unsigned char data i, j;

	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
}
}
void main()
{
	unsigned char LEDnum=0;
	P2=~0x80; //0111 1111
	while(1){
		if(P3_1==0){
			Delay(20);
			while(P3_1==0);
			Delay(20);
			LEDnum++;
			if(LEDnum>=8){
				LEDnum=0;
			}
		}
			if(P3_0==0){
			Delay(20);
			while(P3_1==0);
			Delay(20);
				if(LEDnum==0){
					LEDnum=8;
				}
				LEDnum--;
			}
			P2=~(0x80>>LEDnum);
	}
}