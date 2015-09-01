#ifndef __CPU_H__
#  define __CPU_H__

#  include "constants.h"


class cpu {
public:
  cpu(u8 & core);
  cpu(u8 && core);
  cpu(const u8 & core);
   cpu & operator=(u8 & core);
   cpu & operator=(u8 && core);
   cpu & operator=(const u8 & core);
  ~cpu();

  u8 get_core();

  shared_u8s get_affected_cpus();

  u32 get_bios_limit();

  u32 get_cpuinfo_max_freq();
  u32 get_cpuinfo_min_freq();
  u32 get_cpuinfo_transition_latency();

  shared_u8s get_freqdomain_cpus();
  shared_u8s get_related_cpus();

  shared_u32s get_scaling_available_frequencies();
  shared_strings get_scaling_available_governors();
  u32 get_scaling_cur_freq();
  shared_string get_scaling_driver();
  shared_string get_scaling_governor();
  u32 get_scaling_max_freq();
  u32 get_scaling_min_freq();
  u32 get_scaling_setspeed();

  shared_strings get_time_in_state();

  bool set_bios_limit(u32 & limit);
  bool set_scaling_max_freq(u32 & freq);
  bool set_scaling_mix_freq(u32 & freq);
  bool set_scaling_setspeed(u32 & freq);
  bool set_scaling_driver(shared_string & driver);
  bool set_scaling_governor(shared_string & governor);

private:
   u8 core;
};

shared_u8s get_affected_cpus(u8 & core);

u32 get_bios_limit(u8 & core);

u32 get_cpuinfo_max_freq(u8 & core);
u32 get_cpuinfo_min_freq(u8 & core);
u32 get_cpuinfo_transition_latency(u8 & core);

shared_u8s get_freqdomain_cpus(u8 & core);
shared_u8s get_related_cpus(u8 & core);

shared_u32s get_scaling_available_frequencies(u8 & core);
shared_strings get_scaling_available_governors(u8 & core);
u32 get_scaling_cur_freq(u8 & core);
shared_string get_scaling_driver(u8 & core);
shared_string get_scaling_governor(u8 & core);
u32 get_scaling_max_freq(u8 & core);
u32 get_scaling_min_freq(u8 & core);
u32 get_scaling_setspeed(u8 & core);

shared_strings get_time_in_state(u8 & core);

bool set_bios_limit(u8 & core, u32 & limit);
bool set_scaling_max_freq(u8 & core, u32 & freq);
bool set_scaling_mix_freq(u8 & core, u32 & freq);
bool set_scaling_setspeed(u8 & core, u32 & freq);
bool set_scaling_driver(u8 & core, shared_string & driver);
bool set_scaling_governor(u8 & core, shared_string & governor);

#endif
