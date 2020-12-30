/*
* @Author: GUNK
* @Date:   2020-12-29 18:35:57
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 18:36:28
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:isupper function
*/
#include "mctype.h"
int (isupper)(int c)
{
	return (_Ctype[c] & (_UP));
}