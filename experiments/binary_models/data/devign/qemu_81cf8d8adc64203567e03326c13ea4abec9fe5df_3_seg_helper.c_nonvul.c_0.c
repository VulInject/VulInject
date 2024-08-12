static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7;
    if (!(VAR2->VAR8.VAR9 & VAR10) || ((VAR2->VAR8.VAR9 >> VAR11) & 0xf) != 9 || VAR2->VAR8.VAR12 < 103)
    {
        goto VAR13;
    }
    VAR5 = FUN2(VAR2, VAR2->VAR8.VAR14 + 0x66);
    VAR5 += (VAR3 >> 3);
    if ((VAR5 + 1) > VAR2->VAR8.VAR12)
    {
        goto VAR13;
    }
    VAR6 = FUN2(VAR2, VAR2->VAR8.VAR14 + VAR5);
    VAR6 >>= (VAR3 & 7);
    VAR7 = (1 << VAR4) - 1;
    if ((VAR6 & VAR7) != 0)
    {
    VAR13:
        FUN3(VAR2, VAR15, 0);
    }
}