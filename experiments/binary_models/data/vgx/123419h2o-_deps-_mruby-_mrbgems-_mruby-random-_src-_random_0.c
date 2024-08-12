static inline VAR1
FUN1(const uint32_t VAR2, int VAR3) {
return (VAR2 << VAR3) | (VAR2 >> (32 - VAR3));
}