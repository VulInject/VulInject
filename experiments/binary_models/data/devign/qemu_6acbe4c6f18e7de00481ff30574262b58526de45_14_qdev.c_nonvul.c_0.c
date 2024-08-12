VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    const char *VAR8, *VAR9, *VAR10;
    VAR1 *VAR11;
    VAR12 *VAR13;
    VAR8 = FUN2(VAR3, "");
    if (!VAR8)
    {
        FUN3(VAR14, "");
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
    if (!VAR5)
    {
        FUN3(VAR15, "", "");
        return NULL;
    }
    VAR7 = FUN6(VAR5);
    VAR9 = FUN2(VAR3, "");
    if (VAR9 != NULL)
    {
        VAR13 = FUN7(VAR9);
        if (!VAR13)
        {
            return NULL;
        }
        if (VAR13->VAR16 != VAR7->VAR17)
        {
            FUN3(VAR18, VAR8, VAR13->VAR16->VAR19);
            return NULL;
        }
    }
    else
    {
        VAR13 = FUN8(VAR20, NULL, VAR7->VAR17);
        if (!VAR13)
        {
            FUN3(VAR21, VAR8, VAR7->VAR17->VAR19);
            return NULL;
        }
    }
    if (VAR22 && !VAR13->VAR23)
    {
        FUN3(VAR24, VAR13->VAR19);
        return NULL;
    }
    VAR11 = FUN9(VAR13, VAR8);
    VAR10 = FUN10(VAR3);
    if (VAR10)
    {
        VAR11->VAR10 = VAR10;
        FUN11(FUN12(), VAR11->VAR10, VAR11, NULL);
    }
    else
    {
        static int VAR25;
        VAR26 *VAR19 = FUN13("", VAR25++);
        FUN11(FUN14(), VAR19, VAR11, NULL);
        FUN15(VAR19);
    }
    if (FUN16(VAR3, VAR27, VAR11, 1) != 0)
    {
        FUN17(VAR11);
        return NULL;
    }
    if (FUN18(VAR11) < 0)
    {
        FUN3(VAR28, VAR8);
        return NULL;
    }
    VAR11->VAR3 = VAR3;
    return VAR11;
}