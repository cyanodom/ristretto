#include <string.h>
#include <stdbool.h>

#include "bytecode.h"

#define CONSTANT_UTF8 ((unsigned char) 1)
#define CONSTANT_CLASS ((unsigned char) 7)
#define CONSTANT_NAMEANDTYPE ((unsigned char) 12)
#define CONSTANT_FIELDREF ((unsigned char) 9)
#define CONSTANT_METHODREF ((unsigned char) 10)
#define CONSTANT_STRING ((unsigned char) 8)
#define CONSTANT_INT ((unsigned char) 3)
#define CONSTANT_FLOAT ((unsigned char) 4)

struct bin {
  void *object;
  size_t size;
};

char bits(bool first, bool second, bool third, bool fourth,
    bool fifth, bool sixth, bool seventh, bool eightth) { //finally useless
  char res = 0x00;
  if (first) {
    res = res | 0x01;
  }
  if (second) {
    res = res | 0x02;
  }
  if (third) {
    res = res | 0x04;
  }
  if (fourth) {
    res = res | 0x08;
  }
  if (fifth) {
    res = res | 0x10;
  }
  if (sixth) {
    res = res | 0x20;
  }
  if (seventh) {
    res = res | 0x40;
  }
  if (eightth) {
    res = res | 0x80;
  }
  return res;
}

char lsb_int(unsigned int input) {
  return ((char *)((void *)&input))[0];
}

char msb_int(unsigned int input) {
    return ((char *)((void *)&input))[1];
}

void *createId(unsigned int id) {
  void *ptr = malloc(2);
  if (ptr == NULL) {
    return NULL;
  }
  ((unsigned char*)ptr)[0] = msb_int(id);
  ((unsigned char*)ptr)[1] = lsb_int(id);
  return ptr;
}

bin *createBin(size_t size) {
  void *object = malloc(size);
  if (object == NULL) {
    return NULL;
  }
  bin *ptr = malloc(size);
  if (ptr == NULL) {
    free(object);
    return NULL;
  }
  ptr->object = object;
  ptr->size = size;
  return ptr;
}

bin *createUtf8_info(const char *str) {
  size_t len = strlen(str);
  bin *ptr = createBin(len + 3);
  ((unsigned char *)ptr->object)[0] = CONSTANT_UTF8;
  ((unsigned char *)ptr->object)[1] = msb_int(len);
  ((unsigned char *)ptr->object)[2] = lsb_int(len);

  for (unsigned char i = 0; i < len; ++i) {
    ((char *)ptr->object)[i + 3] = str[i];
  }
  return ptr;
}

bin *createClass_info(unsigned int idClassUtf8) {
  bin *ptr = createBin(3);
  ((unsigned char *)ptr->object)[0] = CONSTANT_CLASS;
  void *id = createId(idClassUtf8);
  memcpy(((char *)ptr->object) + 1, id, 2);
  free(id);
  return ptr;
}

bin *createNameAndType_info(unsigned int idNameUtf8,
    unsigned int idTypeUtf8) {
  bin *ptr = createBin(5);
  ((unsigned char *)ptr->object)[0] = CONSTANT_NAMEANDTYPE;
  void *id = createId(idNameUtf8);
  memcpy(((char *)ptr->object) + 1, id, 2);
  free(id);
  id = createId(idTypeUtf8);
  memcpy(((char *)ptr->object) + 3, id, 2);
  free(id);
  return NULL;
}

bin *createFieldref_info(unsigned int idClass,
    unsigned int idNameAndType) {
  bin *ptr = createBin(5);
  ((unsigned char *)ptr->object)[0] = CONSTANT_FIELDREF;
  void *id = createId(idClass);
  memcpy(((char *)ptr->object) + 1, id, 2);
  free(id);
  id = createId(idNameAndType);
  memcpy(((char *)ptr->object) + 3, id, 2);
  free(id);
  return NULL;
}

bin *createMethodref_info(unsigned int idClass,
    unsigned int idNameAndType) {
  bin *ptr = createBin(5);
  ((unsigned char *)ptr->object)[0] = CONSTANT_METHODREF;
  void *id = createId(idClass);
  memcpy(((char *)ptr->object) + 1, id, 2);
  free(id);
  id = createId(idNameAndType);
  memcpy(((char *)ptr->object) + 3, id, 2);
  free(id);
  return NULL;
}

bin *createString_info(unsigned int idUtf8) {
  bin *ptr = createBin(3);
  ((unsigned char *)ptr->object)[0] = CONSTANT_STRING;
  void *id = createId(idUtf8);
  memcpy(((char *)ptr->object) + 1, id, 2);
  free(id);
  return NULL;
}

void *createInt(int int_value) { //this "maybe" may not work well on some comipler
  void *ptr = malloc(4);
  *((int *) ptr) =  int_value;
  return ptr;
}

void *createFloat(float float_value) { //I read som compiler dosent use IEEE754 so
  void *ptr = malloc(4);                           // it may not work on these
  *((int *) ptr) =  float_value;
  return ptr;
}


bin *createInteger_info(int int_value) {
  bin *ptr = createBin(5);
  ((unsigned char *)ptr->object)[0] = CONSTANT_INT;
  void *id = createInt(int_value);
  memcpy(((char *)ptr->object) + 1, id, 4);
  free(id);
  return NULL;
}

bin *createFloat_info(float float_value) {
  bin *ptr = createBin(5);
  ((unsigned char *)ptr->object)[0] = CONSTANT_FLOAT;
  void *id = createFloat(float_value);
  memcpy(((char *)ptr->object) + 1, id, 4);
  free(id);
  return NULL;
}

const void *bin_getObject(bin *ptr) {
  if (ptr == NULL) {
    return NULL;
  }
  return ptr->object;
}

size_t bin_getSize(bin *ptr) {
  if (ptr == NULL) {
    return 0;
  }
  return ptr->size;
}

void bin_dispose(bin *xptr) {
  if (xptr != NULL) {
    free(xptr);
    xptr = NULL;
  }
}

void *bin_create(void *content, size_t size) {
  bin *ptr = createBin(size);
  memcpy(ptr->object, content, size);
  return ptr;
}
