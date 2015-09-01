#ifndef __UTILS_H__
#  define __UTILS_H__
#  include "constants.h"
#  include <cstring>
#  include <fcntl.h>
#  include <unistd.h>


// Read
int get_int(cstring file);
shared_cstring get_line(cstring file);
shared_cstrings get_lines(cstring file);

// Write
bool write_int(cstring file, u32 & num);
bool write_line(cstring file, cstring line);
bool write_lines(cstring file, cstring lines);

// Misc
int open_file_r(cstring file);
int open_file_w(cstring file);
int open_file_rw(cstring file);
bool close_file(int fd);


#endif
