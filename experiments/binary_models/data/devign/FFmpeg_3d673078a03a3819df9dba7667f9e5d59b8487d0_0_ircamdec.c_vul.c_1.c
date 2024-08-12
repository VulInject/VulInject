static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4, VAR5, VAR6;
    const VAR7 *VAR8;
    int VAR9 = -1, VAR10;
    VAR11 *VAR12;
    VAR3 = FUN2(VAR2->VAR13);
    for (VAR10 = 0; VAR10 < 7; VAR10++)
    {
        if (VAR3 == VAR14[VAR10].VAR3)
        {
            VAR9 = VAR14[VAR10].VAR15;
            break;
        }
    }
    if (VAR9 == 1)
    {
        VAR4 = FUN3(FUN2(VAR2->VAR13));
        VAR5 = FUN2(VAR2->VAR13);
        VAR6 = FUN2(VAR2->VAR13);
        VAR8 = VAR16;
    }
    else if (VAR9 == 0)
    {
        VAR4 = FUN3(FUN4(VAR2->VAR13));
        VAR5 = FUN4(VAR2->VAR13);
        VAR6 = FUN4(VAR2->VAR13);
        VAR8 = VAR17;
    }
    else
    {
        return VAR18;
    }
    if (!VAR5 || !VAR4)
        return VAR18;
    VAR12 = FUN5(VAR2, NULL);
    if (!VAR12)
        return FUN6(VAR19);
    VAR12->VAR20->VAR21 = VAR22;
    VAR12->VAR20->VAR5 = VAR5;
    VAR12->VAR20->VAR4 = VAR4;
    VAR12->VAR20->VAR23 = FUN7(VAR8, VAR6);
    if (VAR12->VAR20->VAR23 == VAR24)
    {
        FUN8(VAR2, VAR25, "", VAR6);
        return VAR18;
    }
    VAR12->VAR20->VAR26 = FUN9(VAR12->VAR20->VAR23);
    VAR12->VAR20->VAR27 = VAR12->VAR20->VAR26 * VAR12->VAR20->VAR5 / 8;
    FUN10(VAR12, 64, 1, VAR12->VAR20->VAR4);
    FUN11(VAR2->VAR13, 1008);
    return 0;