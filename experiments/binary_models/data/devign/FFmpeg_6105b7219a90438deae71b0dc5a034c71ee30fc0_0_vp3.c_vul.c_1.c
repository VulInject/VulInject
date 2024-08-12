static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    int VAR15, VAR16;
    if ((VAR16 = FUN2(&VAR14, VAR8, VAR9)) < 0)
        return VAR16;
    if (VAR12->VAR17 && FUN3(&VAR14))
    {
        int VAR18 = FUN4(&VAR14, 7);
        FUN5(&VAR14, 6 * 8);
        if (VAR12->VAR2->VAR19 & VAR20)
        {
            FUN6(VAR2, VAR21, "");
            return VAR22;
        }
        if (VAR18 == 0)
        {
            FUN7(VAR2);
            VAR16 = FUN8(VAR2, &VAR14);
            if (VAR16 < 0)
            {
                FUN7(VAR2);
            }
            else
                VAR16 = FUN9(VAR2);
            return VAR16;
        }
        else if (VAR18 == 2)
        {
            VAR16 = FUN10(VAR2, &VAR14);
            if (VAR16 < 0)
            {
                FUN7(VAR2);
            }
            else
                VAR16 = FUN9(VAR2);
            return VAR16;
        }
        FUN6(VAR2, VAR21, "");
        return -1;
    }
    VAR12->VAR23 = !FUN3(&VAR14);
    if (!VAR12->VAR24)
    {
        FUN6(VAR2, VAR21, "");
        return -1;
    }
    if (!VAR12->VAR17)
        FUN11(&VAR14, 1);
    for (VAR15 = 0; VAR15 < 3; VAR15++)
        VAR12->VAR25[VAR15] = VAR12->VAR26[VAR15];
    VAR12->VAR27 = 0;
    do
    {
        VAR12->VAR26[VAR12->VAR27++] = FUN4(&VAR14, 6);
    } while (VAR12->VAR17 >= 0x030200 && VAR12->VAR27 < 3 && FUN3(&VAR14));
    for (VAR15 = VAR12->VAR27; VAR15 < 3; VAR15++)
        VAR12->VAR26[VAR15] = -1;
    if (VAR12->VAR2->VAR28 & VAR29)
        FUN6(VAR12->VAR2, VAR30, "", VAR12->VAR23 ? "" : "", VAR2->VAR31 + 1, VAR12->VAR26[0]);
    VAR12->VAR32 = !VAR12->VAR33[VAR12->VAR26[0]] || VAR2->VAR32 >= (VAR12->VAR23 ? VAR34 : VAR35);
    if (VAR12->VAR26[0] != VAR12->VAR25[0])
        FUN12(VAR12);
    for (VAR15 = 0; VAR15 < VAR12->VAR27; VAR15++)
        if (VAR12->VAR26[VAR15] != VAR12->VAR25[VAR15] || VAR12->VAR26[0] != VAR12->VAR25[0])
            FUN13(VAR12, VAR15);
    if (VAR2->VAR36 >= VAR35 && !VAR12->VAR23)
        return VAR9;
    VAR12->VAR37.VAR38->VAR39 = VAR12->VAR23 ? VAR40 : VAR41;
    VAR12->VAR37.VAR38->VAR42 = VAR12->VAR23;
    if (FUN14(VAR2, &VAR12->VAR37, VAR43) < 0)
        goto VAR44;
    if (!VAR12->VAR45)
        VAR12->VAR45 = FUN15(9 * FUN16(VAR12->VAR37.VAR38->VAR46[0]));
    if (VAR12->VAR23)
    {
        if (!VAR12->VAR17)
        {
            FUN11(&VAR14, 4);
            FUN11(&VAR14, 4);
            if (VAR12->VAR47)
            {
                VAR12->VAR47 = FUN4(&VAR14, 5);
                if (VAR2->VAR31 == 0)
                    FUN6(VAR12->VAR2, VAR48, "", VAR12->VAR47);
            }
        }
        if (VAR12->VAR47 || VAR12->VAR17)
        {
            if (FUN3(&VAR14))
                FUN6(VAR12->VAR2, VAR21, "");
            FUN11(&VAR14, 2);
        }
    }
    else
    {
        if (!VAR12->VAR49.VAR38->VAR3[0])
        {
            FUN6(VAR12->VAR2, VAR50, "");
            VAR12->VAR49.VAR38->VAR39 = VAR40;
            if (FUN14(VAR2, &VAR12->VAR49, VAR43) < 0)
                goto VAR44;
            FUN17(VAR2, &VAR12->VAR51);
            if ((VAR16 = FUN18(&VAR12->VAR51, &VAR12->VAR49)) < 0)
                goto VAR44;
            FUN19(&VAR12->VAR51, VAR52, 0);
        }
    }
    memset(VAR12->VAR24, 0, VAR12->VAR53 * sizeof(VAR54));
    FUN20(VAR2);
    if (FUN21(VAR12, &VAR14))
    {
        FUN6(VAR12->VAR2, VAR21, "");
        goto VAR44;
    }
    if (FUN22(VAR12, &VAR14))
    {
        FUN6(VAR12->VAR2, VAR21, "");
        goto VAR44;
    }
    if (FUN23(VAR12, &VAR14))
    {
        FUN6(VAR12->VAR2, VAR21, "");
        goto VAR44;
    }
    if (FUN24(VAR12, &VAR14))
    {
        FUN6(VAR12->VAR2, VAR21, "");
        goto VAR44;
    }
    if (FUN25(VAR12, &VAR14))
    {
        FUN6(VAR12->VAR2, VAR21, "");
        goto VAR44;
    }
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        int VAR55 = VAR12->VAR55 >> (VAR15 && VAR12->VAR56);
        if (VAR12->VAR57)
            VAR12->VAR58[VAR15] = 0;
        else
            VAR12->VAR58[VAR15] = (VAR55 - 1) * VAR12->VAR37.VAR38->VAR46[VAR15];
    }
    VAR12->VAR59 = 0;
    for (VAR15 = 0; VAR15 < VAR12->VAR60; VAR15++)
        FUN26(VAR12, VAR15);
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        int VAR61 = (VAR12->VAR55 >> (3 + (VAR15 && VAR12->VAR56))) - 1;
        FUN27(VAR12, VAR15, VAR61, VAR61 + 1);
    }
    FUN28(VAR12, VAR12->VAR55);
    if ((VAR16 = FUN29(VAR3, VAR12->VAR37.VAR38)) < 0)
        return VAR16;
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        VAR62 *VAR63 = VAR3;
        int VAR64 = (VAR12->VAR65 >> (VAR15 && VAR12->VAR56)) + (VAR12->VAR66 >> (VAR15 && VAR12->VAR56)) * VAR63->VAR46[VAR15];
        VAR63->VAR3[VAR15] += VAR64;
    }
    *VAR4 = 1;
    if (!VAR67 || !(VAR12->VAR2->VAR19 & VAR20))
    {
        VAR16 = FUN30(VAR2);
        if (VAR16 < 0)
            return VAR16;
    }
    return VAR9;
VAR44:
    FUN19(&VAR12->VAR37, VAR52, 0);
    if (!VAR67 || !(VAR12->VAR2->VAR19 & VAR20))
        FUN31(VAR12->VAR37.VAR38);
    return -1;
}