static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VCardEmulError VAR5;
    const VAR6 *VAR7;
    FUN3(&VAR4->VAR8);
    FUN3(&VAR4->VAR9);
    FUN4(&VAR4->VAR10);
    FUN4(&VAR4->VAR11);
    FUN4(&VAR4->VAR12);
    FUN5(&VAR4->VAR13);
    VAR4->VAR14 = NULL;
    VAR4->VAR15 = 0;
    if (FUN6(VAR4) < 0)
    {
        return -1;
    }
    VAR4->VAR16 = FUN7(VAR4->VAR17, VAR18, 0);
    if (VAR4->VAR16 == 0)
    {
        FUN8("");
        for (VAR7 = VAR18; VAR7->VAR19 != NULL; ++VAR7)
        {
            FUN8("", VAR7->VAR19);
        }
        return -1;
    }
    if (VAR4->VAR16 == VAR20)
    {
        if (VAR4->VAR21 != NULL && VAR4->VAR22 != NULL && VAR4->VAR23 != NULL)
        {
            VAR5 = FUN9(VAR4);
        }
        else
        {
            FUN8(""
                   "",
                   VAR24);
            return -1;
        }
    }
    else
    {
        if (VAR4->VAR16 != VAR25)
        {
            FUN8(""
                   "",
                   VAR24, VAR26, VAR27);
            return -1;
        }
        if (VAR4->VAR21 != NULL || VAR4->VAR22 != NULL || VAR4->VAR23 != NULL)
        {
            FUN8("", VAR24);
            return -1;
        }
        VAR5 = FUN10(NULL);
    }
    if (VAR5 != VAR28)
    {
        FUN8("", VAR24);
        return -1;
    }
    FUN11(&VAR4->VAR29, VAR30, VAR4, VAR31);
    FUN11(&VAR4->VAR32, VAR33, VAR4, VAR31);
    return 0;
}