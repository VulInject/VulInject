static inline int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
    if (VAR3 < 0x02000000)
        VAR3 += VAR2->VAR11.VAR12;
    if ((VAR2->VAR11.VAR13 & 1) == 0)
    {
        *VAR7 = VAR3;
        *VAR8 = VAR14 | VAR15;
        *VAR10 = VAR16;
        return 0;
    }
    else if (FUN2(VAR2, VAR17))
    {
        *VAR10 = VAR16;
        return FUN3(VAR2, VAR3, VAR4, VAR5, VAR7, VAR8);
    }
    else if (VAR2->VAR11.VAR13 & (1 << 23))
    {
        return FUN4(VAR2, VAR3, VAR4, VAR5, VAR7, VAR8, VAR10);
    }
    else
    {
        return FUN5(VAR2, VAR3, VAR4, VAR5, VAR7, VAR8, VAR10);
    }
}