/*
* @Author: GUNK
* @Date:   2020-12-29 15:44:37
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 15:46:15
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isalnum function
*/
#include "mctype.h"
int (isalnum)(int c)
{
	return (_Ctype[c] & (_DI|_LO|_UP|_XA));
}