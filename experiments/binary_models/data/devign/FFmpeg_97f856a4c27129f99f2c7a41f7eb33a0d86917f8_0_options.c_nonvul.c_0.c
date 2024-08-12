int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    const VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    if (FUN2(VAR2))
    {
        FUN3(VAR2, VAR10, "", VAR3, VAR2);
        return FUN4(VAR11);
    }
    FUN5(VAR2);
    FUN6(VAR2->VAR9);
    memcpy(VAR2, VAR3, sizeof(*VAR2));
    VAR2->VAR9 = VAR8;
    VAR2->VAR6 = VAR5;
    VAR2->VAR12 = NULL;
    VAR2->VAR13 = NULL;
    VAR2->VAR14 = NULL;
    VAR2->VAR15 = NULL;
    VAR2->VAR16 = NULL;
    VAR2->VAR17 = NULL;
    VAR2->VAR18 = NULL;
    VAR2->VAR19 = NULL;
    VAR2->VAR20 = NULL;
    if (VAR3->VAR15)
    {
        VAR2->VAR15 = FUN7(VAR3->VAR15);
        if (!VAR2->VAR15)
            return FUN4(VAR21);
    }
    if (VAR3->VAR22 && VAR23 > 0)
    {
        VAR2->VAR22 = FUN8(VAR23 + VAR24);
        if (!VAR2->VAR22)
            goto VAR25;
        memcpy(VAR2->VAR22, VAR3->VAR22, VAR23);
        if (VAR24)
            memset(((VAR7 *)VAR2->VAR22) + VAR23, 0, VAR24);
    }
    FUN9(VAR16, VAR3->VAR26, VAR27);
    FUN9(VAR17, 64 * sizeof(VAR28), 0);
    FUN9(VAR18, 64 * sizeof(VAR28), 0);
    FUN9(VAR19, VAR3->VAR29 * sizeof(*VAR3->VAR19), 0);
    FUN9(VAR20, VAR3->VAR30, 1);
    FUN10(VAR2->VAR30 == VAR3->VAR30);
    return 0;
VAR25:
    FUN11(&VAR2->VAR19);
    FUN11(&VAR2->VAR17);
    FUN11(&VAR2->VAR18);
    FUN11(&VAR2->VAR16);
    FUN11(&VAR2->VAR15);
    return FUN4(VAR21);
}