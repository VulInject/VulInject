void FUN1(bool VAR1, const char *VAR2, bool VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    if (VAR1 && VAR3)
    {
        FUN2(VAR6, "");
        return;
    }
    else if (!VAR1 && !VAR3)
    {
        FUN2(VAR6, "");
        return;
    }
    if (VAR1)
    {
        VAR10 = FUN3(VAR2);
        if (!VAR10)
        {
            FUN2(VAR6, "", VAR2);
            return;
        }
        if (FUN4(VAR10))
        {
            FUN2(VAR6, ""
                             "");
            return;
        }
        if (FUN5(VAR10) > 1)
        {
            FUN2(VAR6, "", VAR2);
            return;
        }
        VAR12 = FUN6(VAR10);
        VAR8 = FUN7(VAR10);
    }
    else
    {
        VAR10 = NULL;
        VAR12 = FUN8(VAR4);
        if (!VAR12)
        {
            FUN2(VAR6, "", VAR4);
            return;
        }
        if (FUN9(VAR12))
        {
            FUN2(VAR6, "", VAR4, FUN10(VAR12));
            return;
        }
        VAR8 = FUN11(VAR12);
    }
    FUN12(VAR8);
    if (VAR12)
    {
        if (FUN13(VAR12, VAR13, VAR6))
        {
            goto VAR14;
        }
        if (!VAR10 && !FUN14(VAR12, VAR15))
        {
            FUN2(VAR6, "", VAR12->VAR4);
            goto VAR14;
        }
        if (VAR12->VAR16 > 1)
        {
            FUN2(VAR6, "", FUN15(VAR12));
            goto VAR14;
        }
    }
    if (VAR10)
    {
        FUN16(VAR10);
        FUN17(VAR10);
    }
    else
    {
        FUN18(&VAR17, VAR12, VAR15);
        FUN19(VAR12);
    }
VAR14:
    FUN20(VAR8);
}