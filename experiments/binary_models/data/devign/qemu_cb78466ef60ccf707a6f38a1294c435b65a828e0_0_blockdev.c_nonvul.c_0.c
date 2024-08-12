static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8;
    VAR3 *VAR9 = NULL;
    const char *VAR10;
    const char *VAR11;
    const char *VAR12 = "";
    enum NewImageMode VAR13 = VAR14;
    VAR15 *VAR16 = FUN2(VAR15, VAR2, VAR2);
    VAR17 *VAR18 = VAR2->VAR18;
    FUN3(VAR18->VAR19 == VAR20);
    VAR10 = VAR18->VAR21->VAR10;
    VAR11 = VAR18->VAR21->VAR22;
    if (VAR18->VAR21->VAR23)
    {
        VAR12 = VAR18->VAR21->VAR12;
    }
    if (VAR18->VAR21->VAR24)
    {
        VAR13 = VAR18->VAR21->VAR13;
    }
    VAR6 = FUN4(VAR12);
    if (!VAR6)
    {
        FUN5(VAR4, VAR25, VAR12);
        return;
    }
    VAR16->VAR26 = FUN6(VAR10);
    if (!VAR16->VAR26)
    {
        FUN5(VAR4, VAR27, VAR10);
        return;
    }
    if (!FUN7(VAR16->VAR26))
    {
        FUN5(VAR4, VAR28, VAR10);
        return;
    }
    if (FUN8(VAR16->VAR26))
    {
        FUN5(VAR4, VAR29, VAR10);
        return;
    }
    if (!FUN9(VAR16->VAR26))
    {
        if (FUN10(VAR16->VAR26))
        {
            FUN5(VAR4, VAR30);
            return;
        }
    }
    VAR7 = VAR16->VAR26->VAR31;
    if (VAR13 != VAR32)
    {
        FUN11(VAR11, VAR12, VAR16->VAR26->VAR33, VAR16->VAR26->VAR6->VAR34, NULL, -1, VAR7, &VAR9, false);
        if (FUN12(&VAR9))
        {
            FUN13(VAR4, VAR9);
            return;
        }
    }
    VAR16->VAR35 = FUN14("");
    VAR8 = FUN15(VAR16->VAR35, VAR11, NULL, VAR7 | VAR36, VAR6);
    if (VAR8 != 0)
    {
        FUN16(VAR4, -VAR8, VAR11);
    }
}