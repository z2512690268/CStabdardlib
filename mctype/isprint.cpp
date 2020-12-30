/*
* @Author: GUNK
* @Date:   2020-12-29 18:29:07
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 18:29:43
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isprint function
*/
#include "mctype.h"
int (isprint)(int c)
{
	return (_Ctype[c] & (_LO|_UP|_XA|_PU|_DI|_SP));
}