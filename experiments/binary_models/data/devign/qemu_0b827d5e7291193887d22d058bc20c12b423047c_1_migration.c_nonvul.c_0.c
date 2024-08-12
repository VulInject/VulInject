void FUN1(const char *VAR1, bool VAR2, bool VAR3, bool VAR4, bool VAR5, bool VAR6, bool VAR7, VAR8 **VAR9)
{
    VAR8 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2();
    MigrationParams VAR13;
    const char *VAR14;
    VAR13.VAR3 = VAR2 && VAR3;
    VAR13.VAR15 = VAR4 && VAR5;
    if (FUN3(VAR12->VAR16) || VAR12->VAR16 == VAR17 || VAR12->VAR16 == VAR18)
    {
        FUN4(VAR9, VAR19);
        return;
    }
    if (FUN5(VAR20))
    {
        FUN4(VAR9, "");
        return;
    }
    if (FUN6(VAR9))
    {
        return;
    }
    VAR12 = FUN7(&VAR13);
    if (FUN8(VAR1, "", &VAR14))
    {
        FUN9(VAR12, VAR14, &VAR10);
    }
    else if (FUN8(VAR1, "", &VAR14))
    {
        FUN10(VAR12, VAR14, &VAR10);
    }
    else if (FUN8(VAR1, "", &VAR14))
    {
        FUN11(VAR12, VAR14, &VAR10);
    }
    else if (FUN8(VAR1, "", &VAR14))
    {
        FUN12(VAR12, VAR14, &VAR10);
    }
    else if (FUN8(VAR1, "", &VAR14))
    {
        FUN13(VAR12, VAR14, &VAR10);
    }
    else
    {
        FUN4(VAR9, VAR21, "", "");
        FUN14(&VAR12->VAR16, VAR22, VAR23);
        return;
    }
    if (VAR10)
    {
        FUN15(VAR12, VAR10);
        FUN16(VAR9, VAR10);
        return;
    }
}