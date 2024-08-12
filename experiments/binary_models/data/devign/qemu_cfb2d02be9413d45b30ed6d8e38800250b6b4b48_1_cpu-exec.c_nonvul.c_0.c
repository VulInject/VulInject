static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 **VAR5, int *VAR6)
{
    uintptr_t VAR7;
    int32_t VAR8;
    if (FUN2(FUN3(&VAR2->VAR9)))
    {
        return;
    }
    FUN4(VAR4, VAR4->VAR10);
    VAR7 = FUN5(VAR2, VAR4);
    VAR4 = (VAR3 *)(VAR7 & ~VAR11);
    *VAR6 = VAR7 & VAR11;
    if (*VAR6 != VAR12)
    {
        *VAR5 = VAR4;
        return;
    }
    *VAR5 = NULL;
    VAR8 = FUN3(&VAR2->VAR13.VAR14);
    FUN6(&VAR2->VAR13.VAR15.VAR16, 0);
    if (VAR8 < 0)
    {
        FUN7();
        return;
    }
    assert(VAR17);
    if (VAR2->VAR18)
    {
        VAR2->VAR18 += VAR8;
        VAR8 = FUN8(0xffff, VAR2->VAR18);
        VAR2->VAR18 -= VAR8;
        VAR2->VAR13.VAR15.VAR19 = VAR8;
    }
    else
    {
        if (VAR8 > 0)
        {
            FUN9(VAR2, VAR8, VAR4, false);
        }
    }
}