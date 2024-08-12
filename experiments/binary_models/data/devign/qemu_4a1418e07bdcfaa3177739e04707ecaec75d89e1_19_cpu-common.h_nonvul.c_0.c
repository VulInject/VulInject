void FUN1(target_phys_addr_t VAR1, ram_addr_t VAR2, ram_addr_t VAR3, ram_addr_t VAR4);
static inline void FUN2(target_phys_addr_t VAR1, ram_addr_t VAR2, ram_addr_t VAR3) { FUN1(VAR1, VAR2, VAR3, 0); }