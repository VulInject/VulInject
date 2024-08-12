VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    const char *VAR8, *VAR9, *VAR10;
    VAR1 *VAR11;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    VAR8 = FUN2(VAR3, "");
    if (!VAR8)
    {
        FUN3(VAR16, "");
        return NULL;
    }
    VAR5 = FUN4(VAR8);
    if (!VAR5)
    {
        const char *typename = FUN5(VAR8);
        if (typename)
        {
            VAR8 = typename;
            VAR5 = FUN4(VAR8);
        }
    }
    if (!FUN6(VAR5, VAR17))
    {
        FUN3(VAR18, "", VAR8);
        return NULL;
    }
    if (FUN7(VAR5))
    {
        FUN3(VAR19, "", "");
        return NULL;
    }
    VAR7 = FUN8(VAR5);
    if (VAR7->VAR20)
    {
        FUN3(VAR19, "", "");
        return NULL;
    }
    VAR9 = FUN2(VAR3, "");
    if (VAR9 != NULL)
    {
        VAR13 = FUN9(VAR9);
        if (!VAR13)
        {
            return NULL;
        }
        if (!FUN10(FUN11(VAR13), VAR7->VAR21))
        {
            FUN3(VAR22, VAR8, FUN12(FUN11(VAR13)));
            return NULL;
        }
    }
    else if (VAR7->VAR21 != NULL)
    {
        VAR13 = FUN13(FUN14(), NULL, VAR7->VAR21);
        if (!VAR13)
        {
            FUN3(VAR23, VAR7->VAR21, VAR8);
            return NULL;
        }
    }
    if (VAR24 && VAR13 && !VAR13->VAR25)
    {
        FUN3(VAR26, VAR13->VAR27);
        return NULL;
    }
    VAR11 = FUN15(FUN16(VAR8));
    if (VAR13)
    {
        FUN17(VAR11, VAR13);
    }
    VAR10 = FUN18(VAR3);
    if (VAR10)
    {
        VAR11->VAR10 = VAR10;
    }
    if (FUN19(VAR3, VAR28, VAR11, 1) != 0)
    {
        FUN20(FUN11(VAR11));
        FUN21(FUN11(VAR11));
        return NULL;
    }
    if (VAR11->VAR10)
    {
        FUN22(FUN23(), VAR11->VAR10, FUN11(VAR11), NULL);
    }
    else
    {
        static int VAR29;
        VAR30 *VAR27 = FUN24("", VAR29++);
        FUN22(FUN25(), VAR27, FUN11(VAR11), NULL);
        FUN26(VAR27);
    }
    VAR11->VAR3 = VAR3;
    FUN27(FUN11(VAR11), true, "", &VAR15);
    if (VAR15 != NULL)
    {
        FUN28(VAR15);
        FUN29(VAR15);
        VAR11->VAR3 = NULL;
        FUN20(FUN11(VAR11));
        FUN21(FUN11(VAR11));
        FUN3(VAR31, VAR8);
        return NULL;
    }
    return VAR11;
}