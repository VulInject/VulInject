VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    const char *VAR8, *VAR9;
    VAR1 *VAR10;
    VAR11 *VAR12 = NULL;
    VAR4 *VAR13 = NULL;
    VAR8 = FUN2(VAR3, "");
    if (!VAR8)
    {
        FUN3(VAR5, VAR14, "");
        return NULL;
    }
    VAR7 = FUN4(&VAR8, VAR5);
    if (!VAR7)
    {
        return NULL;
    }
    VAR9 = FUN2(VAR3, "");
    if (VAR9 != NULL)
    {
        VAR12 = FUN5(VAR9, VAR5);
        if (!VAR12)
        {
            return NULL;
        }
        if (!FUN6(FUN7(VAR12), VAR7->VAR15))
        {
            FUN3(VAR5, "", VAR8, FUN8(FUN7(VAR12)));
            return NULL;
        }
    }
    else if (VAR7->VAR15 != NULL)
    {
        VAR12 = FUN9(FUN10(), NULL, VAR7->VAR15);
        if (!VAR12 || FUN11(VAR12))
        {
            FUN3(VAR5, "", VAR7->VAR15, VAR8);
            return NULL;
        }
    }
    if (VAR16 && VAR12 && !FUN12(VAR12))
    {
        FUN3(VAR5, VAR17, VAR12->VAR18);
        return NULL;
    }
    if (!FUN13())
    {
        FUN3(VAR5, "");
        return NULL;
    }
    VAR10 = FUN14(FUN15(VAR8));
    if (VAR12)
    {
        FUN16(VAR10, VAR12);
    }
    FUN17(VAR10, FUN18(VAR3));
    if (FUN19(VAR3, VAR19, VAR10, &VAR13))
    {
    }
    VAR10->VAR3 = VAR3;
    FUN20(FUN7(VAR10), true, "", &VAR13);
    if (VAR13 != NULL)
    {
        VAR10->VAR3 = NULL;
    }
    return VAR10;
VAR20:
    FUN21(VAR5, VAR13);
    FUN22(FUN7(VAR10));
    FUN23(FUN7(VAR10));
    return NULL;