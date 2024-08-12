static inline VAR1 FUN1(u32 VAR2, u8 VAR3)
{
return (VAR2 << VAR3) | (VAR2 >> (sizeof(VAR2) * 8 - VAR3));
}