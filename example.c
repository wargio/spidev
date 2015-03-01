#include <stdio.h>
#include <time.h>
#include "spidev.h"

// MCP3008 example

int main(){
	printf("MCP3008 Example\n");
	spi s;
	spi_open(&s, "/dev/spidev0.0");
	int ret, ch = 0;
	while(ch < 8){
		ret = spi_getadc(&s, ch);
		printf("channel: %d got: %d/1023\n", ch, ret);
		++ch;
	}
	spi_close(&s);
	return 0;
}

