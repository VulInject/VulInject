static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, unsigned VAR6, const struct VAR7 *VAR8, int VAR9, VAR10 *VAR11)
{
    VAR12 *VAR13 = FUN2(VAR3);
    VAR14 *VAR15;
    ConnectionKey VAR16;
    VAR17 *VAR18;
    ssize_t VAR19 = FUN3(VAR8, VAR9);
    char *VAR20 = FUN4(VAR19);
    FUN5(VAR8, VAR9, 0, VAR20, VAR19);
    VAR18 = FUN6(VAR20, VAR19);
    if (VAR18 && FUN7(VAR18))
    {
        FUN8(VAR18, &VAR16);
        if (VAR5 == VAR3->VAR21)
        {
            FUN9(&VAR16);
        }
        VAR15 = FUN10(VAR13->VAR22, &VAR16, NULL);
        if (VAR5 == VAR3->VAR21)
        {
            if (!FUN11(VAR3, VAR15, VAR18))
            {
                FUN12(VAR13->VAR23, VAR5, 0, (const VAR24 *)VAR18->VAR25, VAR18->VAR19, NULL);
                FUN13(VAR18, NULL);
                VAR18 = NULL;
                return 1;
            }
        }
        else
        {
            if (!FUN14(VAR3, VAR15, VAR18))
            {
                FUN12(VAR13->VAR23, VAR5, 0, (const VAR24 *)VAR18->VAR25, VAR18->VAR19, NULL);
                FUN13(VAR18, NULL);
                VAR18 = NULL;
                return 1;
            }
        }
    }
    FUN13(VAR18, NULL);
    VAR18 = NULL;
    return 0;
}