#ifndef __CONSTATNTS_H__
#  define __CONSTATNTS_H__
#  include <memory>
#  include <string>

// Array DELETER
auto arr_del =[](auto arr) { delete[]arr;
};

// Signed
typedef char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef double f64;

// Unsigned
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

// Arrays
typedef std::shared_ptr < u8[], arr_del > shared_u8s;
typedef std::shared_ptr < u16[], arr_del > shared_u16s;
typedef std::shared_ptr < u32[], arr_del > shared_u32s;
typedef std::shared_ptr < u64[], arr_del > shared_u64s;

typedef std::unique_ptr < char[] > unique_cstring;
typedef std::unique_ptr < char[][] > unique_cstring;
typedef std::unique_ptr < std::string > unique_string;
typedef std::unique_ptr < std::string[] > unique_strings;

typedef std::shared_ptr < char[], arr_del > shared_cstring;
typedef std::shared_ptr < char[][], arr_del > shared_cstrings
  typedef std::shared_ptr < std::string > shared_string;
typedef std::shared_ptr < std::string[], arr_del > shared_strings;

// Misc
typedef char *cstring;

static const cstring
  affected_cpus =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "affected_cpus",
  bios_limit =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "bios_limit",
  cpuinfo_max_freq =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "cpuinfo_max_freq",
  cpuinfo_min_freq =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "cpuinfo_min_freq",
  cpuinfo_transition_latency =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "cpuinfo_transition_latency",
  freqdomain_cpus =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "freqdomain_cpus",
  related_cpus =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "related_cpus",
  scaling_available_frequencies =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_available_frequencies",
  scaling_available_governors =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_available_governors",
  scaling_cur_freq =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_cur_freq",
  scaling_driver =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_driver",
  scaling_governor =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_governor",
  scaling_max_freq =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_max_freq",
  scaling_min_freq =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_min_freq",
  scaling_setspeed =
  "/sys/devices/system/cpu/cpu%u/cpufreq/"
  "scaling_setspeed",
  time_in_state = "/sys/devices/system/cpu/cpu%u/cpufreq/stats/time_in_state";

#endif
