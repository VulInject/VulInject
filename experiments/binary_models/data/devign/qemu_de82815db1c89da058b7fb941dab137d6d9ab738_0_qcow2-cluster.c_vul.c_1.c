int FUN1(VAR1 *VAR2, uint64_t VAR3, bool VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    int64_t VAR13, VAR14;
    int64_t VAR15, VAR16;
    uint8_t VAR17[12];
    if (VAR3 <= VAR6->VAR18)
        return 0;
    if (VAR3 > VAR19 / sizeof(VAR11))
    {
        return -VAR20;
    }
    if (VAR4)
    {
        VAR16 = VAR3;
    }
    else
    {
        VAR16 = VAR6->VAR18;
        if (VAR16 == 0)
        {
            VAR16 = 1;
        }
        while (VAR3 > VAR16)
        {
            VAR16 = (VAR16 * 3 + 1) / 2;
        }
    }
    if (VAR16 > VAR19 / sizeof(VAR11))
    {
        return -VAR20;
    }
    fprintf(VAR21, "" VAR22 "", VAR6->VAR18, VAR16);
    VAR8 = sizeof(VAR11) * VAR16;
    VAR12 = FUN2(FUN3(VAR8, 512));
    memcpy(VAR12, VAR6->VAR23, VAR6->VAR18 * sizeof(VAR11));
    FUN4(VAR2->VAR24, VAR25);
    VAR15 = FUN5(VAR2, VAR8);
    if (VAR15 < 0)
    {
        FUN6(VAR12);
        return VAR15;
    }
    VAR9 = FUN7(VAR2, VAR6->VAR26);
    if (VAR9 < 0)
    {
        goto VAR27;
    }
    VAR9 = FUN8(VAR2, 0, VAR15, VAR8);
    if (VAR9 < 0)
    {
        goto VAR27;
    }
    FUN4(VAR2->VAR24, VAR28);
    for (VAR10 = 0; VAR10 < VAR6->VAR18; VAR10++)
        VAR12[VAR10] = FUN9(VAR12[VAR10]);
    VAR9 = FUN10(VAR2->VAR24, VAR15, VAR12, VAR8);
    if (VAR9 < 0)
        goto VAR27;
    for (VAR10 = 0; VAR10 < VAR6->VAR18; VAR10++)
        VAR12[VAR10] = FUN11(VAR12[VAR10]);
    FUN4(VAR2->VAR24, VAR29);
    FUN12((VAR30 *)VAR17, VAR16);
    FUN13(VAR17 + 4, VAR15);
    VAR9 = FUN10(VAR2->VAR24, FUN14(VAR31, VAR18), VAR17, sizeof(VAR17));
    if (VAR9 < 0)
    {
        goto VAR27;
    }
    FUN6(VAR6->VAR23);
    VAR13 = VAR6->VAR32;
    VAR6->VAR32 = VAR15;
    VAR6->VAR23 = VAR12;
    VAR14 = VAR6->VAR18;
    VAR6->VAR18 = VAR16;
    FUN15(VAR2, VAR13, VAR14 * sizeof(VAR11), VAR33);
    return 0;
VAR27:
    FUN6(VAR12);
    FUN15(VAR2, VAR15, VAR8, VAR33);
    return VAR9;
}