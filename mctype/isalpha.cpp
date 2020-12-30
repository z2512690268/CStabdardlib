/*
* @Author: GUNK
* @Date:   2020-12-29 15:46:36
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 15:47:08
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isalpha function
*/
#include "mctype.h"
int (isalpha)(int c)
{
	return (_Ctype[c] & (_LO|_UP|_XA));
}