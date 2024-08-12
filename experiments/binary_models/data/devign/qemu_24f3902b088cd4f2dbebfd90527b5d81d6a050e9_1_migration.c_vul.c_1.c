void FUN1(const char *VAR1, bool VAR2, bool VAR3, bool VAR4, bool VAR5, bool VAR6, bool VAR7, VAR8 **VAR9)
{
    VAR8 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2();
    MigrationParams VAR13;
    const char *VAR14;
    VAR13.VAR3 = VAR2 && VAR3;
    VAR13.VAR15 = VAR4 && VAR5;
    if (FUN3(VAR12->VAR16) || VAR12->VAR16 == VAR17)
    {
        FUN4(VAR9, VAR18);
        return;
    }
    if (FUN5(VAR19))
    {
        FUN4(VAR9, "");
        return;
    }
    if (FUN6(VAR9))
    {
        return;
    }
    if (VAR20)
    {
        *VAR9 = FUN7(VAR20->VAR21);
        return;
    }
    VAR12 = FUN8(&VAR13);
    if (FUN9(VAR1, "", &VAR14))
    {
        FUN10(VAR12, VAR14, &VAR10);
    }
    else if (FUN9(VAR1, "", &VAR14))
    {
        FUN11(VAR12, VAR14, &VAR10);
    }
    else if (FUN9(VAR1, "", &VAR14))
    {
        FUN12(VAR12, VAR14, &VAR10);
    }
    else if (FUN9(VAR1, "", &VAR14))
    {
        FUN13(VAR12, VAR14, &VAR10);
    }
    else if (FUN9(VAR1, "", &VAR14))
    {
        FUN14(VAR12, VAR14, &VAR10);
    }
    else
    {
        FUN4(VAR9, VAR22, "", "");
        FUN15(&VAR12->VAR16, VAR23, VAR24);
        return;
    }
    if (VAR10)
    {
        FUN16(VAR12);
        FUN17(VAR9, VAR10);
        return;
    }
}