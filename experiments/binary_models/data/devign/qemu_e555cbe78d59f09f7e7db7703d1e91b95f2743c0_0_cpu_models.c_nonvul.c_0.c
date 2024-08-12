static void FUN1(VAR1 *VAR2, void *VAR3)
{
    struct VAR4 *VAR5 = VAR3;
    VAR6 **VAR7 = &VAR5->VAR8;
    VAR6 *VAR9;
    VAR10 *VAR11;
    char *VAR12 = FUN2(FUN3(VAR2));
    VAR13 *VAR14 = FUN4(VAR2);
    FUN5(VAR12, "" VAR15)[0] = 0;
    VAR11 = FUN6(VAR10, 1);
    VAR11->VAR12 = VAR12;
    VAR11->VAR16 = true;
    VAR11->VAR17 = VAR14->VAR18;
    VAR11->VAR19 = VAR14->VAR20;
    VAR11->VAR21 = FUN2(FUN3(VAR2));
    if (VAR5->VAR22)
    {
        VAR23 *VAR24;
        VAR25 *VAR26;
        VAR24 = FUN7(FUN3(VAR2));
        VAR26 = FUN8(VAR24);
        if (VAR26->VAR22)
        {
            VAR11->VAR27 = true;
            FUN9(VAR5->VAR22, VAR26->VAR22, &VAR11->VAR28);
        }
        FUN10(VAR24);
    }
    VAR9 = FUN6(VAR6, 1);
    VAR9->VAR29 = VAR11;
    VAR9->VAR30 = *VAR7;
    *VAR7 = VAR9;
}