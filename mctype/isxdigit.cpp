/*
* @Author: GUNK
* @Date:   2020-12-29 18:36:39
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 18:36:59
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isxdigit function
*/
#include "mctype.h"
int (isxdigit)(int c)
{
	return (_Ctype[c] & (_XD));
}