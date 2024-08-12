int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0;
    VAR6 *VAR7;
    if (!(VAR2->VAR8 & VAR9) || !(VAR2->VAR10->VAR11 & VAR12))
        return 0;
    if (!VAR2->VAR13 && VAR2->VAR14 == VAR15 && !(VAR2->VAR16 & VAR17))
    {
        FUN2(VAR2, VAR18, ""
                                    "");
        VAR2->VAR13 = 1;
    }
    if (VAR2->VAR13 > 1 && VAR2->VAR14 == VAR15 && !(VAR2->VAR16 & VAR17))
        FUN2(VAR2, VAR19, ""
                                      "");
    if (VAR2->VAR14 == VAR20 || VAR2->VAR14 == VAR21)
    {
        if (VAR2->VAR22 > 0 || (VAR2->VAR16 & VAR23))
        {
            VAR2->VAR13 = 1;
        }
    }
    if (!VAR2->VAR13)
    {
        VAR2->VAR13 = FUN3();
        VAR2->VAR13 = FUN4(VAR2->VAR13, VAR24);
    }
    if (VAR2->VAR13 <= 1)
        return 0;
    if (VAR2->VAR13 > VAR24)
        return FUN5(VAR25);
    FUN6(!VAR2->VAR26->VAR27);
    VAR7 = VAR2->VAR26->VAR27 = FUN7(sizeof(VAR6));
    if (!VAR7)
        return FUN5(VAR28);
    VAR7->VAR29 = VAR2;
    VAR7->VAR30 = FUN8(sizeof(VAR31) * VAR32);
    if (!VAR7->VAR30)
        goto VAR33;
    pthread_mutex_init(&VAR7->VAR34, NULL);
    pthread_mutex_init(&VAR7->VAR35, NULL);
    pthread_mutex_init(&VAR7->VAR36, NULL);
    pthread_cond_init(&VAR7->VAR37, NULL);
    pthread_cond_init(&VAR7->VAR38, NULL);
    for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
    {
        VAR3 *VAR39 = NULL;
        void *VAR40;
        VAR1 *VAR41 = FUN9(VAR2->VAR10);
        if (!VAR41)
            goto VAR33;
        VAR40 = VAR41->VAR42;
        *VAR41 = *VAR2;
        VAR41->VAR42 = VAR40;
        VAR41->VAR26 = NULL;
        memcpy(VAR41->VAR42, VAR2->VAR42, VAR2->VAR10->VAR43);
        VAR41->VAR13 = 1;
        VAR41->VAR44 &= ~VAR9;
        FUN10(&VAR39, VAR4, 0);
        FUN11(&VAR39, "", "", 0);
        if (FUN12(VAR41, VAR2->VAR10, &VAR39) < 0)
        {
            FUN13(&VAR39);
            goto VAR33;
        }
        FUN13(&VAR39);
        FUN6(!VAR41->VAR26->VAR27);
        VAR41->VAR26->VAR27 = VAR7;
        if (FUN14(&VAR7->VAR45[VAR5], NULL, VAR45, VAR41))
        {
            goto VAR33;
        }
    }
    VAR2->VAR44 = VAR9;
    return 0;
VAR33:
    VAR2->VAR13 = VAR5;
    FUN2(VAR2, VAR46, "");
    FUN15(VAR2);
    return -1;
}