VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4, *VAR5 = NULL;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    FUN2(VAR9, &VAR12, VAR13)
    {
        VAR7 = FUN3(VAR6, 1);
        VAR7->VAR14 = FUN4(VAR9->VAR14);
        VAR7->VAR15 = FUN5(VAR9);
        FUN6(VAR9->VAR16, VAR9->VAR17, &VAR7->VAR16, &VAR7->VAR18, &VAR7->VAR19);
        if (VAR9->VAR20.VAR21)
        {
            VAR11 = FUN7(FUN8(FUN9(VAR9->VAR20.VAR21), "", NULL));
            VAR7->VAR22 = true;
            VAR7->VAR23 = FUN4(VAR11->VAR14);
        }
        if (VAR9->VAR24 != NULL)
        {
            VAR7->VAR25 = FUN10(VAR9->VAR24, false, VAR9->VAR16, VAR9->VAR17, VAR7->VAR25);
        }
        if (VAR9->VAR26 != NULL)
        {
            VAR7->VAR25 = FUN10(VAR9->VAR26, true, VAR9->VAR27, VAR9->VAR28, VAR7->VAR25);
        }
        VAR4 = FUN3(VAR1, 1);
        VAR4->VAR29 = VAR7;
        VAR4->VAR13 = VAR5;
        VAR5 = VAR4;
    }
    return VAR5;
}