/*_Assert function*/
#include "massert.h"
#include <stdio.h>
#include <stdlib.h>

void _Assert(const char *mesg)
{
	fputs(mesg, stderr);
	fputs(" -- assertion failed\n", stderr);
	abort();
}