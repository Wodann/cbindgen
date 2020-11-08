#if defined(CBINDGEN_STYLE_TYPE)
/* ANONYMOUS STRUCTS DO NOT SUPPORT FORWARD DECLARATIONS!
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct StructInfo {
  const struct TypeInfo *const *fields;
  uintptr_t num_fields;
} StructInfo;

typedef enum TypeData_Tag {
  Primitive,
  Struct,
} TypeData_Tag;

typedef struct Struct_Body {
  struct StructInfo _0;
} Struct_Body;

typedef struct TypeData {
  TypeData_Tag tag;
  union {
    Struct_Body struct_;
  };
} TypeData;

typedef struct TypeInfo {
  struct TypeData data;
} TypeInfo;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(struct TypeInfo x);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#if defined(CBINDGEN_STYLE_TYPE)
*/
#endif