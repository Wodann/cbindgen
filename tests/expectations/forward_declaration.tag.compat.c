#if defined(CBINDGEN_STYLE_TYPE)
/* ANONYMOUS STRUCTS DO NOT SUPPORT FORWARD DECLARATIONS!
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct StructInfo {
  const struct TypeInfo *const *fields;
  uintptr_t num_fields;
};

enum TypeData_Tag {
  Primitive,
  Struct,
};

struct Struct_Body {
  struct StructInfo _0;
};

struct TypeData {
  enum TypeData_Tag tag;
  union {
    struct Struct_Body struct_;
  };
};

struct TypeInfo {
  struct TypeData data;
};

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
