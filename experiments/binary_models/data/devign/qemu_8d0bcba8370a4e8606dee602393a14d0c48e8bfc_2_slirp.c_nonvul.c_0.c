int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    struct VAR8 *VAR9;
    char *VAR10;
    int VAR11;
    const VAR12 *VAR13;
    const char **VAR14;
    assert(VAR2->VAR15 == VAR16);
    VAR13 = VAR2->VAR17.VAR13;
    VAR10 = VAR13->VAR18 ? FUN2(VAR13->VAR19) : VAR13->VAR20 ? FUN3("", VAR13->VAR21)
                                                              : NULL;
    VAR14 = FUN4(VAR13->VAR14);
    FUN5(VAR13->VAR22, VAR23);
    FUN5(VAR13->VAR24, 0);
    VAR11 = FUN6(VAR5, "", VAR3, VAR13->VAR25, VAR10, VAR13->VAR26, VAR13->VAR27, VAR13->VAR28, VAR13->VAR29, VAR13->VAR30, VAR13->VAR31, VAR13->VAR32, VAR13->VAR33, VAR14);
    while (VAR34)
    {
        VAR9 = VAR34;
        VAR34 = VAR9->VAR35;
        FUN7(VAR9);
    }
    FUN7(VAR10);
    FUN7(VAR14);
    return VAR11;
}