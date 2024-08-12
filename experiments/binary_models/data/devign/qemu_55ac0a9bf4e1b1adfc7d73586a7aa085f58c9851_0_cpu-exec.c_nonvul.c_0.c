static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 **VAR5, int *VAR6)
{
    uintptr_t VAR7;
    int32_t VAR8;
    FUN2(VAR4, VAR4->VAR9);
    VAR7 = FUN3(VAR2, VAR4);
    VAR4 = (VAR3 *)(VAR7 & ~VAR10);
    *VAR6 = VAR7 & VAR10;
    if (*VAR6 != VAR11)
    {
        *VAR5 = VAR4;
        return;
    }
    *VAR5 = NULL;
    VAR8 = FUN4(&VAR2->VAR12.VAR13);
    FUN5(&VAR2->VAR12.VAR14.VAR15, 0);
    if (VAR8 < 0)
    {
        FUN6();
        return;
    }
    assert(VAR16);
    if (VAR2->VAR17)
    {
        VAR2->VAR17 += VAR8;
        VAR8 = FUN7(0xffff, VAR2->VAR17);
        VAR2->VAR17 -= VAR8;
        VAR2->VAR12.VAR14.VAR18 = VAR8;
    }
    else
    {
        if (VAR8 > 0)
        {
            FUN8(VAR2, VAR8, VAR4, false);
        }
    }
}