static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR3 *VAR8 = FUN2();
    VAR9 *VAR10;
    VAR11 *VAR12;
    const char *VAR13 = NULL, *VAR14 = NULL, *VAR15 = NULL;
    if (VAR6->VAR16->VAR17 == VAR18)
    {
        const VAR19 *VAR20 = &VAR6->VAR16->VAR21.VAR20;
        if (!VAR20->VAR22 && !VAR20->VAR23 && !VAR20->VAR24)
        {
            VAR13 = VAR20->VAR13;
            VAR14 = VAR20->VAR14;
        }
    }
    else if (VAR6->VAR16->VAR17 == VAR25)
    {
        VAR15 = VAR6->VAR16->VAR21.VAR26.VAR15;
    }
    FUN3(VAR8, "", FUN4(""));
    if (VAR15 && VAR6->export)
    { snprintf ( VAR2 -> VAR27 , sizeof ( VAR2 -> VAR27 ) , ""VAR28+VAR29:
    }
    else if (VAR13 && VAR6->export)
    { snprintf ( VAR2 -> VAR27 , sizeof ( VAR2 -> VAR27 ) , ""VAR28:
    }
    VAR12 = FUN5(&VAR10);
    FUN6(VAR12, NULL, &VAR6->VAR16, &VAR30);
    FUN7(VAR12, &VAR10);
    FUN8(VAR12);
    FUN9(VAR8, "", VAR10);
    if (VAR6->export)
    {
        FUN3(VAR8, "", FUN4(VAR6->export));
    }
    if (VAR6->VAR31)
    {
        FUN3(VAR8, "", FUN4(VAR6->VAR31));
    }
    FUN10(VAR8);
    VAR2->VAR32 = VAR8;
}