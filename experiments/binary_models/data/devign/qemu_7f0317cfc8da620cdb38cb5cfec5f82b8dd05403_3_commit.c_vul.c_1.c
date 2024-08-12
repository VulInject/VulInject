void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, int64_t VAR5, BlockdevOnError VAR6, VAR7 *VAR8, void *VAR9, const char *VAR10, VAR11 **VAR12)
{
    VAR13 *VAR14;
    VAR15 *VAR16 = NULL;
    int VAR17;
    int VAR18;
    VAR1 *VAR19;
    VAR11 *VAR20 = NULL;
    assert(VAR4 != VAR2);
    if (VAR4 == VAR3)
    {
        FUN2(VAR12, "");
        return;
    }
    VAR19 = FUN3(VAR2, VAR4);
    if (VAR19 == NULL)
    {
        FUN2(VAR12, "", VAR4->VAR21);
        return;
    }
    VAR14 = FUN4(&VAR22, VAR2, VAR5, VAR8, VAR9, VAR12);
    if (!VAR14)
    {
        return;
    }
    VAR18 = FUN5(VAR3);
    VAR17 = FUN5(VAR19);
    if (!(VAR17 & VAR23))
    {
        VAR16 = FUN6(VAR16, VAR19, NULL, VAR17 | VAR23);
    }
    if (!(VAR18 & VAR23))
    {
        VAR16 = FUN6(VAR16, VAR3, NULL, VAR18 | VAR23);
    }
    if (VAR16)
    {
        FUN7(VAR16, &VAR20);
        if (VAR20 != NULL)
        {
            FUN8(VAR12, VAR20);
            FUN9(&VAR14->VAR24);
            return;
        }
    }
    VAR14->VAR3 = FUN10();
    FUN11(VAR14->VAR3, VAR3);
    VAR14->VAR4 = FUN10();
    FUN11(VAR14->VAR4, VAR4);
    VAR14->VAR25 = VAR2;
    VAR14->VAR26 = VAR18;
    VAR14->VAR17 = VAR17;
    VAR14->VAR10 = FUN12(VAR10);
    VAR14->VAR6 = VAR6;
    VAR14->VAR24.VAR27 = FUN13(VAR28);
    FUN14(VAR2, VAR3, VAR4, VAR14, VAR14->VAR24.VAR27, VAR9);
    FUN15(VAR14->VAR24.VAR27, VAR14);
}