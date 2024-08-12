static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = VAR5->VAR10;
    VAR9 *VAR11 = FUN3(VAR5->VAR11);
    VAR9 *VAR12 = FUN3(VAR5->VAR12);
    VAR9 *VAR13 = FUN4(VAR10, VAR5->VAR14);
    int VAR15 = VAR8->VAR15;
    bool VAR16 = false;
    FUN5(VAR11);
    FUN5(VAR13);
    FUN6(VAR5->VAR12);
    if (!FUN7(&VAR5->VAR6) && VAR15 == 0)
    {
        VAR15 = FUN8(VAR10, VAR5->VAR14, VAR12, VAR5->VAR17);
    }
    else if (VAR13)
    {
        VAR16 = true;
    }
    if (VAR5->VAR18 != FUN9(VAR12))
    {
        FUN10(VAR12, VAR5->VAR18, NULL);
    }
    if (VAR13 && VAR5->VAR19 != FUN9(VAR13))
    {
        FUN10(VAR13, VAR5->VAR19, NULL);
    }
    FUN11(VAR5->VAR17);
    FUN6(VAR5->VAR11);
    FUN12(&VAR5->VAR6, VAR15);
    FUN11(VAR8);
    if (VAR16)
    {
        FUN13(VAR13, VAR11, &VAR20);
    }