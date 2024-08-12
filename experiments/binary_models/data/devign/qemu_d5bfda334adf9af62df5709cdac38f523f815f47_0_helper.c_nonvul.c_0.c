void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, uint64_t VAR6, uint64_t VAR7, uint64_t VAR8, uint64_t VAR9, int VAR10)
{
    MCEInjectionParams VAR11 = {
        .VAR2 = VAR2,
        .VAR12 = VAR4,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR7 = VAR7,
        .VAR8 = VAR8,
        .VAR9 = VAR9,
        .VAR10 = VAR10,
    };
    unsigned VAR13 = VAR4->VAR14 & 0xff;
    VAR3 *VAR12;
    int VAR15 = 0;
    if (!VAR4->VAR14)
    {
        FUN2(VAR2, "");
        return;
    }
    if (VAR5 >= VAR13)
    {
        FUN2(VAR2, "");
        return;
    }
    if (!(VAR6 & VAR16))
    {
        FUN2(VAR2, "");
        return;
    }
    if ((VAR10 & VAR17) && !FUN3(VAR4))
    {
        FUN2(VAR2, "");
        return;
    }
    if (FUN4())
    {
        if (VAR10 & VAR17)
        {
            VAR15 |= VAR18;
        }
        FUN5(VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR15);
    }
    else
    {
        FUN6(VAR4, VAR19, &VAR11);
        if (VAR10 & VAR17)
        {
            VAR11.VAR5 = 1;
            VAR11.VAR6 = VAR16 | VAR20;
            VAR11.VAR7 = VAR21 | VAR22;
            VAR11.VAR8 = 0;
            VAR11.VAR9 = 0;
            for (VAR12 = VAR23; VAR12 != NULL; VAR12 = VAR12->VAR24)
            {
                if (VAR4 == VAR12)
                {
                    continue;
                }
                VAR11.VAR12 = VAR12;
                FUN6(VAR4, VAR19, &VAR11);
            }
        }
    }
}