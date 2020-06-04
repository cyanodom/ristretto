#ifndef BYTECODE_CLASS_H
#define BYTECODE_CLASS_H

typedef enum { NO_OP, ADD_OP, SUB_OP, MUL_OP, DIV_OP } op_type;

typedef struct {
  bool hasPrintlnInt;
  bool hasPrintlnFloat;
  bool hasPrintlnBool;
  bool hasPrintInt;
  bool hasPrintFloat;
  bool hasPrintBool;
} constant_pool;

typedef struct {
  bool mainIsInSource;
} source_info;

typedef struct bytecode {
  constant_pool constantPool;
  source_info sourceInfo;
} bytecode_class;

#endif
