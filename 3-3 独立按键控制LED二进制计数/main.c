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
		while(1){
			if(P3_1==0){
				Delay(20);
				while(P3_1==0);
				Delay(20);
				LEDnum++;
				P2=~LEDnum;
			}
		}
}