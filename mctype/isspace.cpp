/*
* @Author: GUNK
* @Date:   2020-12-29 18:34:31
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 18:35:41
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isspace function
*/
#include "mctype.h"
int (isspace)(int c)
{
	return (_Ctype[c] & (_CN|_SP|_XS));
}