#include <stdint.h>

typedef struct _spi{
	int dev;
	uint8_t mode;
	uint8_t bits;
	uint32_t speed;
}spi;

int  spi_open(spi* s, const char* device);
void spi_close(spi* s);
int  spi_getadc(spi* s, int channel);
