static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetByteContext VAR14;
    int VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19;
    int VAR20 = VAR9 - VAR21;
    if (VAR9 <= VAR21)
    {
        FUN2(VAR2, VAR22, "");
        return -1;
    }
    FUN3(&VAR14, VAR8, VAR21);
    FUN4(&VAR14, 2);
    VAR18 = FUN5(&VAR14);
    VAR16 = FUN5(&VAR14);
    VAR17 = FUN5(&VAR14);
    FUN4(&VAR14, 4);
    VAR15 = FUN6(&VAR14);
    VAR19 = FUN7(&VAR14);
    FUN4(&VAR14, 3);
    if (!VAR12->VAR2)
    {
        int VAR23;
        if (!(VAR16 == 160 && VAR17 == 120) && !(VAR16 == 320 && VAR17 == 240))
        {
            FUN2(VAR2, VAR22, "");
            return -1;
        }
        VAR12->VAR2 = VAR2;
        VAR2->VAR16 = VAR16;
        VAR2->VAR17 = VAR17;
        VAR2->VAR24 = VAR25;
        for (VAR23 = 0; VAR23 < 3; VAR23++)
        {
            VAR12->VAR26[VAR23] = -((-VAR17) >> (3 + !!VAR23));
            VAR12->VAR27[VAR23] = VAR16 >> (3 + !!VAR23);
        }
    }
    else if (VAR16 != VAR12->VAR2->VAR16 || VAR17 != VAR12->VAR2->VAR17)
    {
        FUN2(VAR2, VAR22, "");
        return -1;
    }
    if (VAR15 && !VAR12->VAR28[VAR12->VAR29].VAR3[0])
    {
        FUN2(VAR2, VAR22, "");
        return -1;
    }
    VAR12->VAR28[VAR12->VAR30].VAR31 = 1;
    VAR12->VAR28[VAR12->VAR30].VAR32 = VAR15 ? VAR33 : VAR34;
    if (FUN8(VAR2, &VAR12->VAR28[VAR12->VAR30]))
    {
        FUN2(VAR2, VAR22, "");
        return -1;
    }
    VAR12->VAR35 = VAR12->VAR30;
    VAR12->VAR36 = (VAR12->VAR30 - 1) & 15;
    FUN9(VAR12, &VAR12->VAR37[VAR12->VAR30], (VAR38 *)&VAR12->VAR28[VAR12->VAR30]);
    FUN10(VAR2);
    FUN11(&VAR12->VAR39, &VAR12->VAR20, VAR20 + VAR40);
    if (!VAR12->VAR39)
        return FUN12(VAR41);
    VAR12->VAR42.FUN13(VAR12->VAR39, (const VAR43 *)(VAR8 + VAR21), VAR20 >> 2);
    FUN14(&VAR12->VAR14, VAR12->VAR39, VAR20 << 3);
    if (!FUN15(VAR12, VAR18, VAR19, !VAR15))
    {
        if (VAR2->VAR44 & VAR45)
            FUN16(&VAR12->VAR28[VAR12->VAR30], VAR46, 0);
        else
        {
            FUN17(VAR2, &VAR12->VAR28[VAR12->VAR30]);
            return -1;
        }
    }
    *(VAR47 *)VAR3 = VAR12->VAR28[VAR12->VAR30];
    *VAR4 = sizeof(VAR47);
    VAR12->VAR29 = VAR12->VAR35;
    VAR12->VAR30 = VAR12->VAR36;
    if (VAR12->VAR28[VAR12->VAR30].VAR3[0])
        FUN17(VAR2, &VAR12->VAR28[VAR12->VAR30]);
    return VAR9;
}