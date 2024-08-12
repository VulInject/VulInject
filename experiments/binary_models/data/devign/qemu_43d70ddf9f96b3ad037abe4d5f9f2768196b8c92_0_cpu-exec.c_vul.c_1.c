static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 **VAR5, int *VAR6, VAR7 *VAR8)
{
    uintptr_t VAR9;
    if (FUN2(FUN3(&VAR2->VAR10)))
    {
        return;
    }
    FUN4(VAR4, VAR4->VAR11);
    VAR9 = FUN5(VAR2, VAR4);
    *VAR5 = (VAR3 *)(VAR9 & ~VAR12);
    *VAR6 = VAR9 & VAR12;
    switch (*VAR6)
    {
    case VAR13:
        FUN6();
        *VAR5 = NULL;
        break;
    case VAR14:
    {
        FUN7();
        int VAR15 = VAR2->VAR16.VAR17;
        if (VAR2->VAR18 && VAR15 >= 0)
        {
            VAR2->VAR18 += VAR15;
            VAR15 = FUN8(0xffff, VAR2->VAR18);
            VAR2->VAR18 -= VAR15;
            VAR2->VAR16.VAR19.VAR20 = VAR15;
        }
        else
        {
            if (VAR15 > 0)
            {
                FUN9(VAR2, VAR15, *VAR5, false);
                FUN10(VAR8, VAR2);
            }
            VAR2->VAR21 = VAR22;
            *VAR5 = NULL;
            FUN11(VAR2);
        }
        break;
    }
    default:
        break;
    }
}