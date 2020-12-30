/*
* @Author: GUNK
* @Date:   2020-12-29 15:48:03
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 15:48:22
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isdigit function
*/
#include "mctype.h"
int (isdigit)(int c)
{
	return (_Ctype[c] & (_DI));
}