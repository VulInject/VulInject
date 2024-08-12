FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10;
    target_ulong VAR11;
    int VAR12;
    VAR13 *VAR14;
    if (VAR5)
    {
        FUN3("", VAR5);
    }
    VAR12 = 0;
    VAR11 = VAR4->VAR15;
    VAR14 = VAR16.VAR17 + VAR18;
    VAR10.VAR15 = VAR11;
    VAR10.VAR19 = -1;
    VAR10.VAR4 = VAR4;
    VAR10.VAR20 = VAR7->VAR20;
    VAR10.VAR21 = VAR22;
    VAR10.VAR23 = FUN4(VAR9);
    FUN5();
    FUN6(VAR4);
    while (VAR10.VAR21 == VAR22)
    {
        VAR10.VAR24 = FUN7(VAR9, VAR10.VAR15);
        FUN8(VAR9, &VAR10, 0);
        VAR12++;
        if (VAR16.VAR25 >= VAR14)
        {
            FUN9(VAR10.VAR26);
            FUN10(0);
            break;
        }
        if (VAR27)
        {
            FUN9(VAR10.VAR26);
            FUN10(0);
            break;
        }
        VAR10.VAR15 = VAR10.VAR26;
    }
    FUN11(VAR4, VAR12);
    *VAR16.VAR25 = VAR28;
    if (VAR5)
    {
        FUN12("");
    }
    else
    {
        VAR4->VAR29 = VAR10.VAR15 - VAR11;
        VAR4->VAR30 = VAR12;
    }
    if (FUN13())
    {
        FUN12("", VAR9->VAR31);
    }
    if (FUN14(VAR32))
    {
        FUN3("", FUN15(VAR11));
        FUN16(VAR9, VAR11, VAR10.VAR15 - VAR11, 0);
        FUN3("");
    }
}