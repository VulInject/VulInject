void FUN1(const char *VAR1, bool VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    if (VAR12 == -1)
    {
        FUN2(VAR5, "");
        return;
    }
    if (FUN3(VAR1))
    {
        FUN2(VAR5, "", VAR1);
        return;
    }
    VAR7 = FUN4(VAR1);
    if (!VAR7)
    {
        FUN5(VAR5, VAR13, VAR1);
        return;
    }
    if (!FUN6(VAR7))
    {
        FUN5(VAR5, VAR14, VAR1);
        return;
    }
    if (!VAR2)
    {
        VAR3 = false;
    }
    if (FUN7(VAR7))
    {
        VAR3 = false;
    }
    VAR9 = FUN8(VAR7, 0, -1, VAR3 ? 0 : VAR15, NULL);
    FUN9(VAR9, VAR1);
    VAR11 = FUN10(sizeof(VAR10));
    VAR11->VAR11.VAR16 = VAR17;
    VAR11->VAR9 = VAR9;
    FUN11(VAR7, &VAR11->VAR11);
    FUN12(&VAR18, VAR11, VAR19);
}