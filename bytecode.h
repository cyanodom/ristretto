#ifndef _BYTECODE_H
#define _BYTECODE_H

#include <stdlib.h>

typedef struct bin bin;

extern bin *createUtf8_info(const char *str);
extern bin *createClass_info(unsigned int idClassUtf8);
extern bin *createNameAndType_info(unsigned int idNameUtf8,
    unsigned int idTypeUtf8);
extern bin *createFieldref_info(unsigned int idClass,
    unsigned int idNameAndType);
extern bin *createMethodref_info(unsigned int idClass,
  unsigned int idNameAndType);
extern bin *createString_info(unsigned int idUtf8);
extern bin *createInteger_info(int int_value);
extern bin *createFloat_info(float float_value);


extern const void *bin_getObject(bin *ptr);
extern size_t bin_getSize(bin *ptr);
extern void bin_dispose(bin *xptr);
extern void *bin_create(void *content, size_t size);


#endif
