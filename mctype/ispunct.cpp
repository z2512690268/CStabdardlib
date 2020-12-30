/*
* @Author: GUNK
* @Date:   2020-12-29 18:30:03
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 18:34:25
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:ispunct function
*/
#include "mctype.h"
int (ispunct)(int c)
{
	return (_Ctype[c] & (_PU));
}
