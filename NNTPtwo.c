#include <stdio.h>
#include <string.h>
#include <unistd.h>

int o = 1;
int io = 0;
int ii;

int main(void){

	for (;;){

		for(int i=0x20 + o; i<(0x20 + 72 + o); i++){
			io = i + o;
			ii = i;

			if (ii < 0x20){putchar((i + 0x20) + 0x2e);}

			while (ii > 0x7e){
				ii = ((ii+0x20) - 0x7e);
			}

			putchar(ii);
		}
		o++;
		putchar(0x0a);
	}
	return 0;
}

