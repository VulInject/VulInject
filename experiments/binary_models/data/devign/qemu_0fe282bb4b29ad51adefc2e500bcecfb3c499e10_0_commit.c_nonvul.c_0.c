void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, int64_t VAR6, BlockdevOnError VAR7, VAR8 *VAR9, void *VAR10, const char *VAR11, VAR12 **VAR13)
{
    VAR14 *VAR15;
    VAR16 *VAR17 = NULL;
    int VAR18;
    int VAR19;
    VAR2 *VAR20;
    VAR12 *VAR21 = NULL;
    assert(VAR5 != VAR3);
    if (VAR5 == VAR4)
    {
        FUN2(VAR13, "");
        return;
    }
    VAR20 = FUN3(VAR3, VAR5);
    if (VAR20 == NULL)
    {
        FUN2(VAR13, "", VAR5->VAR22);
        return;
    }
    VAR15 = FUN4(VAR1, &VAR23, VAR3, VAR6, VAR9, VAR10, VAR13);
    if (!VAR15)
    {
        return;
    }
    VAR19 = FUN5(VAR4);
    VAR18 = FUN5(VAR20);
    if (!(VAR19 & VAR24))
    {
        VAR17 = FUN6(VAR17, VAR4, NULL, VAR19 | VAR24);
    }
    if (!(VAR18 & VAR24))
    {
        VAR17 = FUN6(VAR17, VAR20, NULL, VAR18 | VAR24);
    }
    if (VAR17)
    {
        FUN7(VAR17, &VAR21);
        if (VAR21 != NULL)
        {
            FUN8(VAR13, VAR21);
            FUN9(&VAR15->VAR25);
            return;
        }
    }
    VAR15->VAR4 = FUN10();
    FUN11(VAR15->VAR4, VAR4);
    VAR15->VAR5 = FUN10();
    FUN11(VAR15->VAR5, VAR5);
    VAR15->VAR26 = VAR3;
    VAR15->VAR27 = VAR19;
    VAR15->VAR18 = VAR18;
    VAR15->VAR11 = FUN12(VAR11);
    VAR15->VAR7 = VAR7;
    VAR15->VAR25.VAR28 = FUN13(VAR29, VAR15);
    FUN14(VAR3, VAR4, VAR5, VAR15, VAR15->VAR25.VAR28, VAR10);
    FUN15(VAR15->VAR25.VAR28);
}