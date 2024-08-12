static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    FeatureWord VAR7;
    VAR8 *VAR9;
    VAR3 *VAR10 = NULL;
    if (VAR2->VAR11)
    {
        for (VAR7 = 0; VAR7 < VAR12; VAR7++)
        {
            VAR6->VAR13[VAR7] |= FUN2(VAR7, VAR2->VAR14) & ~VAR6->VAR15[VAR7];
        }
    }
    for (VAR9 = VAR16; VAR9; VAR9 = VAR9->VAR17)
    {
        const char *VAR18 = VAR9->VAR19;
        FUN3(FUN4(VAR2), true, VAR18, &VAR10);
        if (VAR10)
        {
            goto VAR20;
        }
    }
    for (VAR9 = VAR21; VAR9; VAR9 = VAR9->VAR17)
    {
        const char *VAR18 = VAR9->VAR19;
        FUN3(FUN4(VAR2), false, VAR18, &VAR10);
        if (VAR10)
        {
            goto VAR20;
        }
    }
    if (!FUN5() || !VAR2->VAR22)
    {
        VAR6->VAR13[VAR23] = 0;
    }
    FUN6(VAR2);
    FUN7(VAR2, VAR24);
    if (VAR2->VAR25)
    {
        FUN7(VAR2, VAR26);
        FUN7(VAR2, VAR27);
        FUN7(VAR2, VAR28);
        FUN7(VAR2, VAR29);
        FUN7(VAR2, VAR30);
        FUN7(VAR2, VAR31);
        FUN7(VAR2, VAR32);
        FUN7(VAR2, VAR33);
        FUN7(VAR2, VAR34);
        FUN7(VAR2, VAR35);
        if (VAR6->VAR13[VAR31] & VAR36)
        {
            FUN8(VAR2, &VAR6->VAR37, 0x8000000A);
        }
    }
    if (VAR6->VAR38 == VAR39)
    {
        VAR6->VAR38 = VAR6->VAR40;
    }
    if (VAR6->VAR41 == VAR39)
    {
        VAR6->VAR41 = VAR6->VAR37;
    }
    if (VAR6->VAR42 == VAR39)
    {
        VAR6->VAR42 = VAR6->VAR43;
    }
VAR20:
    if (VAR10 != NULL)
    {
        FUN9(VAR4, VAR10);
    }
}