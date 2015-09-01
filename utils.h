#ifndef __UTILS_H__
#  define __UTILS_H__
#  include "constants.h"

// Read
int get_int(cstring file);
shared_string get_line(cstring file);

// Write
bool write_int(cstring file);
bool write_line(cstring file);


#endif
