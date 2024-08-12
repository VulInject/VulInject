void FUN1(const char *VAR1, VAR2 *VAR3, bool VAR4, bool VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR8 *VAR10;
    VAR11 *VAR12;
    VAR12 = FUN2(VAR1);
    if (!VAR12)
    {
        FUN3(VAR7, "", VAR1);
        return;
    }
    if (!(VAR4 && VAR5) && FUN4(VAR12))
    {
        FUN3(VAR7, ""
                         "",
                   VAR1);
        return;
    }
    if (VAR3->VAR13 == VAR14)
    {
        VAR15 *VAR16 = FUN5(VAR3->VAR17.VAR18);
        if (!VAR16)
        {
            FUN3(VAR7, "", VAR3->VAR17.VAR18);
            return;
        }
        VAR10 = FUN6(VAR16);
    }
    else
    {
        VAR10 = FUN7();
    }
    VAR9 = FUN8(VAR12);
    FUN9(VAR9);
    FUN10(VAR12, VAR10);
    FUN11(VAR9);
}