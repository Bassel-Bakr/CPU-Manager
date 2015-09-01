#include "utils.h"

// Read
int get_int(cstring file) {
  int fd = open_file_r(file);
  u32 num;
  read(fd, &num, sizeof(num));
  close_file(fd);
  return num;
}

shared_cstring get_line(cstring file) {
  int fd = open_file_r(file);
  shared_cstring line(new char[LINE_MAX]);
  char c;
  int i;
  for (i = 0; read(fd, &c, sizeof(c)) > 0 && c != '\n'; i++)
    line.get()[i] = c;
  line.get()[i] = 0;
  close_file(fd);
  return line;
}

shared_cstrings get_lines(cstring file) {
  int fd = open_file_r(file);
  shared_cstrings lines;        //(new char[LINES_MAX], arr_del);
  // TODO: implement this function
  return lines;
}

// Write
bool write_int(cstring file, u32 & num) {
  int fd = open_file_w(file);
  int success = write(fd, &num, sizeof(num));
  close_file(fd);
  if (success > 0) {
    return true;
  }
  return false;
}

bool write_line(cstring file, cstring line) {
  int fd = open_file_w(file);
  int success = write(fd, line, strlen(line));
  close_file(fd);
  if (success == strlen(line)) {
    return true;
  }
  return false;
}

bool write_lines(cstring file, cstring lines) {
  // TODO; implement this function
  return false;
}

int open_file_r(cstring file) {
  int fd = open(file, O_RDONLY);
  ASSERT(fd < 0);
  return fd;
}

int open_file_w(cstring file) {
  int fd = open(file, O_WRONLY);
  ASSERT(fd < 0);
  return fd;
}

int open_file_rw(cstring file) {
  int fd = open(file, O_RDWR);
  ASSERT(fd < 0);
  return fd;
}

bool close_file(int fd) {
  ASSERT(fd < 0);
  return close(fd);
}
