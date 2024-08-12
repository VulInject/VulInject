void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, int64_t VAR5, BlockdevOnError VAR6, VAR7 *VAR8, void *VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16;
    int VAR17;
    VAR1 *VAR18;
    VAR10 *VAR19 = NULL;
    if ((VAR6 == VAR20 || VAR6 == VAR21) && !FUN2(VAR2))
    {
        FUN3(VAR11, VAR22);
        return;
    }
    assert(VAR4 != VAR2);
    if (VAR4 == VAR3)
    {
        FUN4(VAR11, "");
        return;
    }
    VAR18 = FUN5(VAR2, VAR4);
    if (VAR18 == NULL)
    {
        FUN4(VAR11, "", VAR4->VAR23);
        return;
    }
    VAR17 = FUN6(VAR3);
    VAR16 = FUN6(VAR18);
    if (!(VAR17 & VAR24))
    {
        VAR15 = FUN7(VAR15, VAR3, VAR17 | VAR24);
    }
    if (!(VAR16 & VAR24))
    {
        VAR15 = FUN7(VAR15, VAR18, VAR16 | VAR24);
    }
    if (VAR15)
    {
        FUN8(VAR15, &VAR19);
        if (VAR19 != NULL)
        {
            FUN9(VAR11, VAR19);
            return;
        }
    }
    VAR13 = FUN10(&VAR25, VAR2, VAR5, VAR8, VAR9, VAR11);
    if (!VAR13)
    {
        return;
    }
    VAR13->VAR3 = VAR3;
    VAR13->VAR4 = VAR4;
    VAR13->VAR26 = VAR2;
    VAR13->VAR27 = VAR17;
    VAR13->VAR16 = VAR16;
    VAR13->VAR6 = VAR6;
    VAR13->VAR28.VAR29 = FUN11(VAR30);
    FUN12(VAR2, VAR3, VAR4, VAR13, VAR13->VAR28.VAR29, VAR9);
    FUN13(VAR13->VAR28.VAR29, VAR13);
}