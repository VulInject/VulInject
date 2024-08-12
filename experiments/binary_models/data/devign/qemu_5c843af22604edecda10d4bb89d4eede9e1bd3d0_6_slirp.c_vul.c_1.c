int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    struct VAR8 *VAR9;
    char *VAR10;
    int VAR11;
    const VAR12 *VAR13;
    const char **VAR14;
    bool VAR15 = true, VAR16 = true;
    assert(VAR2->VAR17 == VAR18);
    VAR13 = &VAR2->VAR19.VAR13;
    if ((VAR13->VAR20 && VAR13->VAR16 && !VAR13->VAR21) || (VAR13->VAR21 && !VAR13->VAR15))
    {
        VAR15 = 0;
    }
    if ((VAR13->VAR21 && VAR13->VAR15 && !VAR13->VAR20) || (VAR13->VAR20 && !VAR13->VAR16))
    {
        VAR16 = 0;
    }
    VAR10 = VAR13->VAR22 ? FUN2(VAR13->VAR23) : VAR13->VAR24 ? FUN3("", VAR13->VAR25)
                                                              : NULL;
    VAR14 = FUN4(VAR13->VAR14);
    FUN5(VAR13->VAR26, VAR27);
    FUN5(VAR13->VAR28, 0);
    VAR11 = FUN6(VAR5, "", VAR3, VAR13->VAR29, VAR15, VAR10, VAR13->VAR30, VAR16, VAR13->VAR31, VAR13->VAR32, VAR13->VAR33, VAR13->VAR34, VAR13->VAR35, VAR13->VAR36, VAR13->VAR37, VAR13->VAR38, VAR13->VAR39, VAR13->VAR40, VAR13->VAR41, VAR14);
    while (VAR42)
    {
        VAR9 = VAR42;
        VAR42 = VAR9->VAR43;
        FUN7(VAR9);
    }
    FUN7(VAR10);
    FUN7(VAR14);
    return VAR11;
}