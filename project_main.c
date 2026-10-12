#include<lpc21xx.h>
#include"header_uart.h"
#define green (1<<17)
#define yellow (1<<18)
#define red (1<<19)
#define PIR (1<<30)
#define FLAME (1<<5)


void lcd_float(float f);
void uart0_float(float f);
void lcd_init(void);

int main()
{
	
adc_init();
	IODIR0=1<< 17 | 1<< 18 | 1<< 19;
	IOSET0=1<< 17 | 1<< 18 | 1<< 19;
uart0_init(9600);
lcd_init();
float vout,temperature;
	while(1)
{
	vout=(90*3.3)/1023;
	temperature=vout*100;
	if(35>=temperature)
	{
		IOCLR0=green;
		IOSET0=yellow;
		IOSET0=red;
  	lcd_cmd(0x80);	
		lcd_string("temp :");	
		lcd_float(temperature);
		lcd_string(" c");
		lcd_cmd(0xc0);	
		lcd_string("status :SAFE ");
		uart0_tx_string("temperature :");
		uart0_float(temperature);
		uart0_tx_string(" C\r\n");
		delay_ms(100);
		uart0_tx_string("Machine Status :SAFE\r\n");
		delay_ms(100);	
		uart0_tx_string("LED Status :green LED ON\r\n");
		//uart0_tx_string("\r\n");
		delay_ms(200);
	}

		else if(36<=temperature && 40>=temperature)
	{
		IOCLR0=yellow;
		IOSET0=green;
		IOSET0=red;
	lcd_cmd(0x80);	
		lcd_string("temp :");	
		lcd_float(temperature);
		lcd_string(" C");
		lcd_cmd(0xc0);	
		lcd_string("status :Modurate ");
		uart0_tx_string("temperature :");
		uart0_float(temperature);
		uart0_tx_string(" C\r\n");
		delay_ms(100);	
		uart0_tx_string("Machine Status :Modurate\r\n");
		delay_ms(100);	
			uart0_tx_string("LED Status :yellow LED ON\r\n");
//uart0_tx_string("\r\n");
		delay_ms(200);	
	}

//(40<=temperature)
	else
	{
		IOCLR0=red;
		IOSET0=green;
		IOSET0=yellow;
	lcd_cmd(0x80);	
		lcd_string("temp :");	
		lcd_float(temperature);
		lcd_string(" C");
		lcd_cmd(0xc0);	
		lcd_string("status :NOT SAFE");
		uart0_tx_string("temperature :");
		uart0_float(temperature);
		uart0_tx_string(" C\r\n");
		delay_ms(250);	
		
		uart0_tx_string("Machine Status :NOT SAFE\r\n");
		delay_ms(250);	
			uart0_tx_string("LED Status :red LED ON\r\n");
	//uart0_tx_string("\r\n");	
		delay_ms(300);	
	}
		
if(PIR==0)		
	uart0_tx_string("PIR Sensor :Worker Detected\r\n");
	
else		
uart0_tx_string("PIR Sensor :Worker Not Detected\r\n");
		

if(FLAME==0)
uart0_tx_string("Flame Sensor : SAFE\r\n");
else
	uart0_tx_string("FLAME SensoR :Not SAFE\r\n");
 uart0_tx_string("\r\n");	
}
}

