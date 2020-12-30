/*
* @Author: GUNK
* @Date:   2020-12-29 19:33:54
* @Last Modified by:   GUNK
* @Last Modified time: 2020-12-30 07:56:37
* @Edited with: sublime Text 3
* @Language: cpp
* @descriptions:test ctype.h and its implement
*/
#include <assert.h>
#include "mctype.h"
#include <limits.h>
#include <stdio.h>

static void prclass(const char *name, int (*fn)(int))
{
	int c;

	fputs(name, stdout);
	fputs(": ", stdout);
	for (c = EOF; c <= UCHAR_MAX; ++c)
	{
		if((*fn)(c)){
			fputc(c, stdout);
		}
	}
	fputs("\n", stdout);
}

int main(int argc, char const *argv[])
{
	const char *s;
	int c;
	//display printable classes
	prclass("ispunct", ispunct);
	prclass("isdigit", isdigit);
	prclass("islower", islower);
	prclass("isupper", isupper);
	prclass("isalpha", isalpha);
	prclass("isalnum", isalnum);
	//test macros for required characters
	for (s = "0123456789"; *s; ++s)
		assert(isdigit(*s) && isxdigit(*s));
	for (s = "abcdefABCDEF"; *s; ++s)
		assert(isxdigit(*s));
	for (s = "abcdefghijklmnopqrstuvwxyz"; *s; ++s)
		assert(islower(*s));
	for (s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; *s; ++s)
		assert(isupper(*s));
	for (s = "!\"#%&'();<=>?[\\]*+,-./:^_{|}~"; *s; ++s)
		assert(ispunct(*s));
	for (s = "\f\n\r\t\v"; *s; ++s)
		assert(isspace(*s) && iscntrl(*s));
	assert(isspace(' ') && isprint(' '));
	assert(iscntrl('\a') && iscntrl('\b'));
	//test macros for all valid codes
	//test for proper class membership
	for(c = EOF; c <= UCHAR_MAX; ++c)
	{
		if(isdigit(c))
			assert(isalnum(c));
		if(isupper(c))
			assert(isalpha(c));
		if(islower(c))
			assert(isalpha(c));
		if(isalpha(c))
			assert(isalnum(c) && !isdigit(c));
		if(isalnum(c))
			assert(isgraph(c) && !ispunct(c));
		if(ispunct(c))
			assert(isgraph(c));
		if(isgraph(c))
			assert(isprint(c));
		if(isspace(c))
			assert(c == ' ' || !isprint(c));
		if(iscntrl(c))
			assert(!isalnum(c));		
	}
	//then test functions
	for (s = "0123456789"; *s; ++s)
		assert((isdigit)(*s) && (isxdigit)(*s));
	for (s = "abcdefABCDEF"; *s; ++s)
		assert((isxdigit)(*s));
	for (s = "abcdefghijklmnopqrstuvwxyz"; *s; ++s)
		assert((islower)(*s));
	for (s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; *s; ++s)
		assert((isupper)(*s));
	for (s = "!\"#%&'();<=>?[\\]*+,-./:^_{|}~"; *s; ++s)
		assert((ispunct)(*s));
	for (s = "\f\n\r\t\v"; *s; ++s)
		assert((isspace)(*s) && (iscntrl)(*s));
	assert((isspace)(' ') && (isprint)(' '));
	assert((iscntrl)('\a') && (iscntrl)('\b'));

	for(c = EOF; c <= UCHAR_MAX; ++c)
	{
		if((isdigit)(c))
			assert((isalnum)(c));
		if((isupper)(c))
			assert((isalpha)(c));
		if((islower)(c))
			assert((isalpha)(c));
		if((isalpha)(c))
			assert((isalnum)(c) && !(isdigit)(c));
		if((isalnum)(c))
			assert((isgraph)(c) && !(ispunct)(c));
		if((ispunct)(c))
			assert((isgraph)(c));
		if((isgraph)(c))
			assert((isprint)(c));
		if((isspace)(c))
			assert(c == ' ' || !(isprint)(c));
		if((iscntrl)(c))
			assert(!(isalnum)(c));		
	}
	puts("SUCCESS testing <mctype.h>");
	return 0;
}