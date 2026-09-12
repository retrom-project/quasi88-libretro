#include <stddef.h>
#include "file/file_path.h"
_Static_assert(__builtin_types_compatible_p(__typeof__(&path_basedir), size_t (*)(char *)),
               "Pinned RetroArch path_basedir returns size_t");
int main(void) { return 0; }
