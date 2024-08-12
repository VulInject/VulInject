static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR4->VAR9->VAR8;
    VAR7 *VAR10 = VAR2->VAR9->VAR8;
    char VAR11[255];
    VAR12 = FUN2(sizeof(VAR13));
    if (!(VAR2->VAR14 = FUN3(FUN4(""), "")))
        return -1;
    if (!(VAR2->VAR15 = FUN3(&VAR16, "")))
        return -1;
    snprintf(VAR11, 255, "", VAR2->VAR9->VAR8->VAR17, VAR2->VAR9->VAR8->VAR18, VAR2->VAR9->VAR8->VAR19);
    if (FUN5(VAR2->VAR14, VAR11, NULL))
        return -1;
    if (FUN5(VAR2->VAR15, NULL, &VAR8->VAR19))
        return -1;
    FUN6(VAR12, VAR2->VAR14);
    FUN6(VAR12, VAR2->VAR15);
    VAR6 = VAR2->VAR14;
    if (VAR4->VAR20)
    {
        char VAR21[255];
        VAR5 *VAR22;
        snprintf(VAR21, 255, "", VAR4->VAR23, VAR4->VAR24, VAR8->VAR17, VAR8->VAR18);
        VAR22 = FUN3(FUN4(""), NULL);
        if (!VAR22)
            return -1;
        if (FUN5(VAR22, VAR21, NULL))
            return -1;
        if (FUN7(VAR6, 0, VAR22, 0))
            return -1;
        VAR6 = VAR22;
        FUN6(VAR12, VAR6);
    }
    if ((VAR8->VAR17 != VAR10->VAR17 - (VAR25 + VAR26)) || (VAR8->VAR18 != VAR10->VAR18 - (VAR27 + VAR28)))
    {
        char VAR29[255];
        VAR5 *VAR30;
        snprintf(VAR29, 255, "", VAR8->VAR17, VAR8->VAR18, (int)FUN8(VAR31, "", NULL));
        VAR30 = FUN3(FUN4(""), NULL);
        if (!VAR30)
            return -1;
        if (FUN5(VAR30, VAR29, NULL))
            return -1;
        if (FUN7(VAR6, 0, VAR30, 0))
            return -1;
        VAR6 = VAR30;
        FUN6(VAR12, VAR6);
    }
    if (VAR32)
    {
        VAR33 *VAR34 = FUN9(sizeof(VAR33));
        VAR33 *VAR35 = FUN9(sizeof(VAR33));
        VAR34->VAR36 = FUN10("");
        VAR34->VAR37 = VAR6;
        VAR34->VAR38 = 0;
        VAR34->VAR39 = NULL;
        VAR35->VAR36 = FUN10("");
        VAR35->VAR37 = VAR2->VAR15;
        VAR35->VAR38 = 0;
        VAR35->VAR39 = NULL;
        if (FUN11(VAR12, VAR32, VAR35, VAR34, NULL) < 0)
            return -1;
        FUN12(&VAR32);
    }
    else
    {
        if (FUN7(VAR6, 0, VAR2->VAR15, 0) < 0)
            return -1;
    }
    {
        char VAR40[128];
        snprintf(VAR40, sizeof(VAR40), "", (int)FUN8(VAR31, "", NULL));
        VAR12->VAR40 = FUN10(VAR40);
    }
    if (FUN13(VAR12, NULL))
        return -1;
    if (FUN14(VAR12, NULL))
        return -1;
    if (FUN15(VAR12, NULL))
        return -1;
    VAR8->VAR17 = VAR2->VAR15->VAR35[0]->VAR41;
    VAR8->VAR18 = VAR2->VAR15->VAR35[0]->VAR42;
    return 0;
}