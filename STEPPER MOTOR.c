#include<lpc214x.h>

unsigned long int delay;

void dly(unsigned int dly);
int i;
unsigned char dir_fl;
int main(void)
{
	IO0DIR=0XFFFFFFFF;
	dir_fl=0;
	while(1)
	{
		if(dir_fl==0)
		{
			IO0SET=0X3;
			dly(2);
			IO0CLR=0X3;
			
			IO0SET=0X6;
			dly(2);
			IO0CLR=0X6;
			
			IO0SET=0XC;
			dly(2);
			IO0CLR=0XC;
			
			IO0SET=0X9;
			dly(2);
			IO0CLR=0X9;
		}
		else if(dir_fl==1)
		{
			IO0SET=0X9;
			dly(2);
			IO0CLR=0X9;
			
			IO0SET=0Xc;
			dly(2);
			IO0CLR=0Xc;
			
			IO0SET=0X6;
			dly(2);
			IO0CLR=0X6;
			
			IO0SET=0X3;
			dly(2);
			IO0CLR=0X3;
		}
	}
}
void dly(unsigned int dly)
{
	for(i=0;i<=dly;i++)
	{
		for(delay=0;delay<=15000;delay++);
	}
}

