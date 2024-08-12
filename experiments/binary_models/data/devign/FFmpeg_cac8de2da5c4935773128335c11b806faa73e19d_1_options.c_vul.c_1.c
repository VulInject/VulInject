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
    memcpy(VAR2, VAR3, sizeof(*VAR2));
    FUN6(VAR2, VAR3);
    VAR2->VAR9 = VAR8;
    VAR2->VAR6 = VAR5;
    if (VAR8 && VAR3->VAR6 && VAR3->VAR6->VAR12 && VAR2->VAR6 && VAR2->VAR6->VAR12)
        FUN6(VAR8, VAR3->VAR9);
    VAR2->VAR13 = NULL;
    VAR2->VAR14 = NULL;
    VAR2->VAR15 = NULL;
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR16 = NULL;
    FF_ENABLE_DEPRECATION_WARNINGS VAR2->VAR17 = NULL;
    VAR2->VAR18 = NULL;
    VAR2->VAR19 = NULL;
    VAR2->VAR20 = NULL;
    VAR2->VAR21 = NULL;
    VAR2->VAR22 = NULL;
    if (VAR3->VAR23 && VAR24 > 0)
    {
        VAR2->VAR23 = FUN7(VAR24 + VAR25);
        if (!VAR2->VAR23)
            goto VAR26;
        memcpy(VAR2->VAR23, VAR3->VAR23, VAR24);
        if (VAR25)
            memset(((VAR7 *)VAR2->VAR23) + VAR24, 0, VAR25);
    }
    FUN8(VAR17, VAR3->VAR27, VAR28);
    VAR2->VAR27 = VAR3->VAR27;
    FUN8(VAR18, 64 * sizeof(VAR29), 0);
    FUN8(VAR19, 64 * sizeof(VAR29), 0);
    FUN8(VAR20, VAR3->VAR30 * sizeof(*VAR3->VAR20), 0);
    FUN8(VAR21, VAR3->VAR31, 1);
    FUN9(VAR2->VAR31 == VAR3->VAR31);
    if (VAR3->VAR22)
    {
        VAR2->VAR22 = FUN10(VAR3->VAR22);
        if (!VAR2->VAR22)
            goto VAR26;
    }
    return 0;
VAR26:
    FUN5(VAR2);
    return FUN4(VAR32);