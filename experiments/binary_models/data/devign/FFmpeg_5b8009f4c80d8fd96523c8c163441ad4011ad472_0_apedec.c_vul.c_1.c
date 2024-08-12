static inline void FUN1(VAR1 *VAR2)
{
    while (VAR2->VAR3.VAR4 <= VAR5)
    {
        VAR2->VAR3.VAR6 <<= 8;
        if (VAR2->VAR7 < VAR2->VAR8)
            VAR2->VAR3.VAR6 += *VAR2->VAR7;
        VAR2->VAR7++;
        VAR2->VAR3.VAR9 = (VAR2->VAR3.VAR9 << 8) | ((VAR2->VAR3.VAR6 >> 1) & 0xFF);
        VAR2->VAR3.VAR4 <<= 8;
    }
}