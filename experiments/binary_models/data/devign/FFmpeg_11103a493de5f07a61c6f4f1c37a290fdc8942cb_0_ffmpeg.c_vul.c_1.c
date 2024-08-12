static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5[VAR2->VAR6];
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = VAR2->VAR11->VAR12;
    VAR9 *VAR13 = VAR2->VAR14;
    AVRational VAR15;
    int VAR16, VAR17;
    uint32_t VAR18 = VAR10->VAR18;
    FUN3(VAR8 && !VAR2->VAR19);
    FUN4(VAR2->VAR20, VAR8->VAR11->VAR12);
    VAR17 = FUN5(VAR2->VAR20, &VAR2->VAR21);
    if (VAR17 < 0)
    {
        FUN6(NULL, VAR22, "");
        return VAR17;
    }
    FUN7(VAR13, VAR2->VAR20);
    if (!VAR18)
    {
        unsigned int VAR23;
        if (!VAR4->VAR24->VAR25->VAR18 || FUN8(VAR4->VAR24->VAR25->VAR18, VAR13->VAR18) == VAR13->VAR26 || !FUN9(VAR4->VAR24->VAR25->VAR18, VAR13->VAR26, &VAR23))
            VAR18 = VAR13->VAR18;
    }
    VAR17 = FUN10(VAR10, VAR13);
    if (VAR17 < 0)
        return VAR17;
    VAR10->VAR18 = VAR18;
    if (!VAR2->VAR27.VAR28)
        VAR2->VAR27 = VAR8->VAR29;
    VAR2->VAR11->VAR30 = VAR2->VAR27;
    VAR17 = FUN11(VAR4->VAR24->VAR25, VAR2->VAR11, VAR8->VAR11, VAR31);
    if (VAR17 < 0)
        return VAR17;
    VAR2->VAR11->VAR32 = FUN12(FUN13(VAR2->VAR11), (VAR33){0, 1});
    VAR2->VAR11->VAR34 = VAR8->VAR11->VAR34;
    if (VAR8->VAR11->VAR35)
    {
        VAR2->VAR11->VAR36 = FUN14(NULL, VAR8->VAR11->VAR35, sizeof(*VAR8->VAR11->VAR36));
        if (!VAR2->VAR11->VAR36)
            return FUN15(VAR37);
        VAR2->VAR11->VAR35 = 0;
        for (VAR16 = 0; VAR16 < VAR8->VAR11->VAR35; VAR16++)
        {
            const VAR38 *VAR39 = &VAR8->VAR11->VAR36[VAR16];
            VAR38 *VAR40 = &VAR2->VAR11->VAR36[VAR2->VAR11->VAR35];
            if (VAR2->VAR41 && VAR39->VAR42 == VAR43)
                continue;
            VAR40->VAR44 = FUN16(VAR39->VAR45);
            if (!VAR40->VAR44)
                return FUN15(VAR37);
            memcpy(VAR40->VAR44, VAR39->VAR44, VAR39->VAR45);
            VAR40->VAR45 = VAR39->VAR45;
            VAR40->VAR42 = VAR39->VAR42;
            VAR2->VAR11->VAR35++;
        }
    }
    VAR2->VAR46 = FUN17(VAR10->VAR26);
    VAR2->VAR47 = FUN18(NULL);
    if (!VAR2->VAR47)
        return FUN15(VAR37);
    switch (VAR10->VAR48)
    {
    case VAR49:
        if (VAR50 != 256)
        {
            FUN6(NULL, VAR22, "");
            FUN19(1);
        }
        if ((VAR10->VAR51 == 1 || VAR10->VAR51 == 1152 || VAR10->VAR51 == 576) && VAR10->VAR26 == VAR52)
            VAR10->VAR51 = 0;
        if (VAR10->VAR26 == VAR53)
            VAR10->VAR51 = 0;
        break;
    case VAR54:
        if (VAR2->VAR55.VAR28)
        {
            VAR15 = FUN20(VAR2->VAR55, (VAR33){VAR10->VAR56, VAR10->VAR57});
            FUN6(NULL, VAR58, ""
                                         "");
        }
        else if (VAR8->VAR11->VAR59.VAR28)
            VAR15 = VAR8->VAR11->VAR59;
        else
            VAR15 = VAR13->VAR59;
        VAR2->VAR11->VAR59 = VAR10->VAR59 = VAR15;
        VAR2->VAR11->VAR30 = VAR8->VAR11->VAR30;
        VAR2->VAR11->VAR60 = VAR8->VAR11->VAR60;
        break;
    }
    return 0;
}