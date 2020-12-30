/*
* @Author: GUNK
* @Date:   2020-12-29 18:28:31
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 18:28:55
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:islower function
*/
#include "mctype.h"
int (islower)(int c)
{
	return (_Ctype[c] & (_LO));
}