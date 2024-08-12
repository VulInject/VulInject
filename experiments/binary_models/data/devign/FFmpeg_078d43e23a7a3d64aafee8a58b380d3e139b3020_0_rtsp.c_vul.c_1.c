static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const char *VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    char VAR11[256];
    int VAR12;
    VAR13 *VAR14;
    const char *VAR15;
    FUN2(VAR11, sizeof(VAR11), "", &VAR8);
    if (VAR7 < VAR16)
    {
        VAR10->VAR17 = FUN3(VAR11, VAR10->VAR18);
    }
    if (VAR10->VAR17 == VAR19)
    {
        VAR20 *VAR21 = FUN4(VAR11, VAR10->VAR18);
        FUN5(VAR21, VAR6, VAR4);
        if (!VAR6->VAR22)
            VAR10->VAR17 = FUN3(VAR11, VAR10->VAR18);
    }
    VAR14 = FUN6(VAR10->VAR17);
    if (VAR14 && VAR14->VAR23)
        VAR15 = VAR14->VAR23;
    else
        VAR15 = "";
    FUN2(VAR11, sizeof(VAR11), "", &VAR8);
    VAR12 = FUN7(VAR11);
    switch (VAR10->VAR18)
    {
    case VAR24:
        FUN8(VAR2, VAR25, "", VAR15);
        VAR10->VAR26 = VAR27;
        VAR10->VAR28 = VAR29;
        if (VAR12 > 0)
        {
            VAR10->VAR26 = VAR12;
            FUN9(VAR4, 32, 1, VAR10->VAR26);
            FUN2(VAR11, sizeof(VAR11), "", &VAR8);
            VAR12 = FUN7(VAR11);
            if (VAR12 > 0)
                VAR10->VAR28 = VAR12;
        }
        FUN8(VAR2, VAR25, "", VAR10->VAR26);
        FUN8(VAR2, VAR25, "", VAR10->VAR28);
        break;
    case VAR30:
        FUN8(VAR2, VAR25, "", VAR15);
        if (VAR12 > 0)
            FUN9(VAR4, 32, 1, VAR12);
        break;
    default:
        break;
    }
    if (VAR6->VAR22 && VAR6->VAR22->VAR31)
        VAR6->VAR22->FUN10(VAR2, VAR4->VAR32, VAR6->VAR33);
    return 0;
}