/*
* @Author: GUNK
* @Date:   2020-12-29 15:48:41
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 18:27:56
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isgraph function
*/
#include "mctype.h"
int (isgraph)(int c)
{
	return (_Ctype[c] & (_LO|_UP|_XA|_PU|_DI));
}