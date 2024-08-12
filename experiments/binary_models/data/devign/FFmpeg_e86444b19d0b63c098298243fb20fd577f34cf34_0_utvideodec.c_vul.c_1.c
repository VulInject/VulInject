static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    const VAR7 *VAR16[5];
    int VAR17, VAR18 = 0, VAR19, VAR20, VAR21;
    int VAR22;
    GetByteContext VAR23;
    ThreadFrame VAR24 = {.VAR25 = VAR3};
    if ((VAR22 = FUN2(VAR2, &VAR24, 0)) < 0)
        return VAR22;
    FUN3(&VAR23, VAR8, VAR9);
    for (VAR14 = 0; VAR14 < VAR12->VAR26; VAR14++)
    {
        VAR16[VAR14] = VAR23.VAR27;
        if (FUN4(&VAR23) < 256 + 4 * VAR12->VAR28)
        {
            FUN5(VAR2, VAR29, "");
            return VAR30;
        }
        FUN6(&VAR23, 256);
        VAR19 = 0;
        VAR20 = 0;
        for (VAR15 = 0; VAR15 < VAR12->VAR28; VAR15++)
        {
            VAR20 = FUN7(&VAR23);
            VAR21 = VAR20 - VAR19;
            if (VAR20 < 0 || VAR21 < 0 || FUN4(&VAR23) < VAR20)
            {
                FUN5(VAR2, VAR29, "");
                return VAR30;
            }
            VAR19 = VAR20;
            VAR18 = FUN8(VAR18, VAR21);
        }
        VAR17 = VAR20;
        FUN6(&VAR23, VAR17);
    }
    VAR16[VAR12->VAR26] = VAR23.VAR27;
    if (FUN4(&VAR23) < VAR12->VAR31)
    {
        FUN5(VAR2, VAR29, "");
        return VAR30;
    }
    VAR12->VAR32 = FUN7(&VAR23);
    FUN5(VAR2, VAR33, "" VAR34 "", VAR12->VAR32);
    VAR12->VAR35 = (VAR12->VAR32 >> 8) & 3;
    if (VAR12->VAR35 == VAR36)
    {
        FUN9(VAR2, "");
        return VAR37;
    }
    FUN10(&VAR12->VAR38, &VAR12->VAR39, VAR18 + VAR40);
    if (!VAR12->VAR38)
    {
        FUN5(VAR2, VAR29, "");
        return FUN11(VAR41);
    }
    switch (VAR12->VAR2->VAR42)
    {
    case VAR43:
    case VAR44:
        for (VAR14 = 0; VAR14 < VAR12->VAR26; VAR14++)
        {
            VAR22 = FUN12(VAR12, VAR14, VAR24.VAR25->VAR3[0] + VAR45[VAR14], VAR12->VAR26, VAR24.VAR25->VAR46[0], VAR2->VAR47, VAR2->VAR48, VAR16[VAR14], VAR12->VAR35 == VAR49);
            if (VAR22)
                return VAR22;
            if (VAR12->VAR35 == VAR50)
            {
                if (!VAR12->VAR51)
                {
                    FUN13(VAR24.VAR25->VAR3[0] + VAR45[VAR14], VAR12->VAR26, VAR24.VAR25->VAR46[0], VAR2->VAR47, VAR2->VAR48, VAR12->VAR28, 0);
                }
                else
                {
                    FUN14(VAR24.VAR25->VAR3[0] + VAR45[VAR14], VAR12->VAR26, VAR24.VAR25->VAR46[0], VAR2->VAR47, VAR2->VAR48, VAR12->VAR28, 0);
                }
            }
        }
        FUN15(VAR24.VAR25->VAR3[0], VAR12->VAR26, VAR24.VAR25->VAR46[0], VAR2->VAR47, VAR2->VAR48);
        break;
    case VAR52:
        for (VAR14 = 0; VAR14 < 3; VAR14++)
        {
            VAR22 = FUN12(VAR12, VAR14, VAR24.VAR25->VAR3[VAR14], 1, VAR24.VAR25->VAR46[VAR14], VAR2->VAR47 >> !!VAR14, VAR2->VAR48 >> !!VAR14, VAR16[VAR14], VAR12->VAR35 == VAR49);
            if (VAR22)
                return VAR22;
            if (VAR12->VAR35 == VAR50)
            {
                if (!VAR12->VAR51)
                {
                    FUN13(VAR24.VAR25->VAR3[VAR14], 1, VAR24.VAR25->VAR46[VAR14], VAR2->VAR47 >> !!VAR14, VAR2->VAR48 >> !!VAR14, VAR12->VAR28, !VAR14);
                }
                else
                {
                    FUN14(VAR24.VAR25->VAR3[VAR14], 1, VAR24.VAR25->VAR46[VAR14], VAR2->VAR47 >> !!VAR14, VAR2->VAR48 >> !!VAR14, VAR12->VAR28, !VAR14);
                }
            }
        }
        break;
    case VAR53:
        for (VAR14 = 0; VAR14 < 3; VAR14++)
        {
            VAR22 = FUN12(VAR12, VAR14, VAR24.VAR25->VAR3[VAR14], 1, VAR24.VAR25->VAR46[VAR14], VAR2->VAR47 >> !!VAR14, VAR2->VAR48, VAR16[VAR14], VAR12->VAR35 == VAR49);
            if (VAR22)
                return VAR22;
            if (VAR12->VAR35 == VAR50)
            {
                if (!VAR12->VAR51)
                {
                    FUN13(VAR24.VAR25->VAR3[VAR14], 1, VAR24.VAR25->VAR46[VAR14], VAR2->VAR47 >> !!VAR14, VAR2->VAR48, VAR12->VAR28, 0);
                }
                else
                {
                    FUN14(VAR24.VAR25->VAR3[VAR14], 1, VAR24.VAR25->VAR46[VAR14], VAR2->VAR47 >> !!VAR14, VAR2->VAR48, VAR12->VAR28, 0);
                }
            }
        }
        break;
    }
    VAR24.VAR25->VAR54 = 1;
    VAR24.VAR25->VAR55 = VAR56;
    VAR24.VAR25->VAR57 = !!VAR12->VAR51;
    *VAR4 = 1;
    return VAR9;
}