/*
* @Author: GUNK
* @Date:   2020-12-29 15:47:22
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-29 15:47:52
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:iscntrl function
*/
#include "mctype.h"
int (iscntrl)(int c)
{
	return (_Ctype[c] & (_BB|_CN));
}