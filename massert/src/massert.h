/* massert.h standard header*/
// #ifndef MASSERT_H
// #define MASSERT_H
// #pragma once 

#undef assert	/*remove existing definition*/

#ifdef NDEBUG
	#define assert(test)	((void)0)
#else			/*NDBUG not defined*/
	void _Assert(const char *);
		/*macros */
	#define _STR(x) _VAL(x)
	#define _VAL(x) #x
	#define assert(test)	((test) ? (void) 0 \
		: _Assert(__FILE__ ":" _STR(__LINE__) "" #test))
#endif

// #endif