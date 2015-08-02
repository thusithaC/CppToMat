/*
The original code is by Zhaou Yu. Modified and maintained by Thusitha Chandrapala (tnc<at>connect.ust.hk)

*/
#include "ToMatlab.h"
#include <stdio.h>
#include <string.h>

Engine *ep;
void tomat::start()
{
	if (!(ep = engOpen("\0"))) {
		fprintf(stderr, "\nCan't start MATLAB engine\n");
		return;
	}
}

void tomat::close()
{
	engClose(ep);
}





