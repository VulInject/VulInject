int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10;
    AVProbeData VAR11, *VAR12 = &VAR11;
    VAR13 *VAR14 = NULL;
    VAR12->VAR3 = "";
    if (VAR3)
        VAR12->VAR3 = VAR3;
    VAR12->VAR15 = NULL;
    VAR12->VAR6 = 0;
    if (!VAR5)
    {
        VAR5 = FUN2(VAR12, 0);
    }
    if (!VAR5 || !(VAR5->VAR16 & VAR17))
    {
        if ((VAR9 = FUN3(&VAR14, VAR3, VAR18)) < 0)
        {
            goto VAR19;
        }
        if (VAR6 > 0)
        {
            FUN4(VAR14, VAR6);
        }
        for (VAR10 = VAR20; VAR10 <= VAR21 && !VAR5; VAR10 <<= 1)
        {
            int VAR22 = VAR10 < VAR21 ? VAR23 / 4 : 0;
            VAR12->VAR15 = FUN5(VAR12->VAR15, VAR10 + VAR24);
            VAR12->VAR6 = FUN6(VAR14, VAR12->VAR15, VAR10);
            memset(VAR12->VAR15 + VAR12->VAR6, 0, VAR24);
            if (FUN7(VAR14, 0, VAR25) < 0)
            {
                FUN8(VAR14);
                if (FUN3(&VAR14, VAR3, VAR18) < 0)
                {
                    VAR14 = NULL;
                    VAR9 = FUN9(VAR26);
                    goto VAR19;
                }
            }
            VAR5 = FUN10(VAR12, 1, &VAR22);
        }
        FUN11(&VAR12->VAR15);
    }
    if (!VAR5)
    {
        VAR9 = VAR27;
        goto VAR19;
    }
    if (VAR5->VAR16 & VAR28)
    {
        if (!FUN12(VAR3))
        {
            VAR9 = VAR29;
            goto VAR19;
        }
    }
    VAR9 = FUN13(VAR2, VAR14, VAR3, VAR5, VAR8);
    if (VAR9)
        goto VAR19;
    return 0;
VAR19:
    FUN11(&VAR12->VAR15);
    if (VAR14)
        FUN8(VAR14);
    *VAR2 = NULL;
    return VAR9;
}