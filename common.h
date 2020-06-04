#ifndef _COMMON_H
#define _COMMON_H

//PARAMETERS :

#define STR_LEN_MAX 1023
#define MIN_CHAR 32
#define MAX_CHAR 128

//STR MARCOS :

#define XSTR(X) #X
#define STR(X) XSTR(X)
#define ERROR(X) "***" STR() "***\n"

//PARSE VALUES :

#define TYPE_INT 0
#define TYPE_FLOAT 1
#define TYPE_BOOL 2
#define INST_RETURN 0
#define INST_PRINT 1
#define INST_PRINTLN 2

#define OP_PLUS 0
#define OP_MINUS 1
#define OP_DIVI 2
#define OP_MULT 3

#define CP_EQUAL 0
#define CP_GREATEREQ 1
#define CP_LESSEQ 2
#define CP_DIFF 3
#define CP_GREATER 4
#define CP_LESS 5

#define BOOL_TYPE_FALSE 0
#define BOOL_TYPE_TRUE 1
#endif
