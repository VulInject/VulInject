static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8 = 0, VAR9 = 0;
    int VAR10 = 0;
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13 = 0;
    for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
    {
        VAR15 *VAR16 = VAR2->VAR17[VAR5];
        if (FUN2(VAR16))
            continue;
        if (VAR16->VAR18->VAR19)
            VAR7 = FUN3(VAR16);
        else
            VAR7 = FUN4(VAR16);
        if (VAR7 < 0 && VAR7 != FUN5(VAR20))
            return VAR7;
        VAR10 += VAR7 >= 0;
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
    {
        VAR15 *VAR18 = VAR2->VAR17[VAR5];
        for (VAR6 = 0; VAR6 < VAR18->VAR21; VAR6++)
        {
            VAR22 *VAR23 = VAR18->VAR24[VAR6];
            int VAR25 = 0;
            if (!VAR23)
                continue;
            if (!(VAR23->VAR26##VAR27 && VAR23->VAR28##VAR27))
            {
                VAR13++;
            }
            else if (VAR23->VAR26##VAR27 == VAR23->VAR28##VAR27)
            {
                VAR12++;
            }
            else
            {
                VAR11++;
                VAR29
            }
            FUN6(VAR30, if (!FUN7(VAR23->VAR31, VAR23->VAR32, VAR23->VAR33)) VAR25 = 1;)
            if (VAR23->VAR33 == VAR34) { FUN6(VAR35, if (!FUN8(VAR23->VAR36, VAR23->VAR37)) VAR25 = 1;)
                                                    FUN6(VAR38, if (!FUN9(VAR23->VAR39, VAR23->VAR40)) VAR25 = 1;) }
            if (VAR25)
            {
                VAR15 *VAR41;
                VAR42 *VAR18;
                VAR22 *VAR43, *VAR44;
                char VAR45[256];
                char VAR46[30];
                switch (VAR23->VAR33)
                {
                case VAR47:
                    if (!(VAR18 = FUN10("")))
                    {
                        FUN11(VAR4, VAR48, ""
                                                      "");
                        return FUN5(VAR49);
                    }
                    snprintf(VAR46, sizeof(VAR46), "", VAR8++);
                    FUN12(VAR45, "", sizeof(VAR45));
                    if (VAR2->VAR50)
                    {
                        FUN13(VAR45, "", sizeof(VAR45));
                        FUN13(VAR45, VAR2->VAR50, sizeof(VAR45));
                    }
                    if ((VAR7 = FUN14(&VAR41, VAR18, VAR46, VAR45, NULL, VAR2)) < 0)
                        return VAR7;
                    break;
                case VAR34:
                    if (!(VAR18 = FUN10("")))
                    {
                        FUN11(VAR4, VAR48, ""
                                                      "");
                        return FUN5(VAR49);
                    }
                    snprintf(VAR46, sizeof(VAR46), "", VAR9++);
                    VAR45[0] = '';
                    if (VAR2->VAR51)
                        snprintf(VAR45, sizeof(VAR45), "", VAR2->VAR51);
                    if ((VAR7 = FUN14(&VAR41, VAR18, VAR46, VAR2->VAR51, NULL, VAR2)) < 0)
                        return VAR7;
                    break;
                default:
                    return FUN5(VAR49);
                }
                if ((VAR7 = FUN15(VAR23, VAR41, 0, 0)) < 0)
                    return VAR7;
                FUN3(VAR41);
                VAR43 = VAR41->VAR24[0];
                VAR44 = VAR41->VAR52[0];
                if (!FUN7(VAR43->VAR31, VAR43->VAR32, VAR43->VAR33) || !FUN7(VAR44->VAR31, VAR44->VAR32, VAR44->VAR33))
                    VAR7 |= FUN5(VAR53);
                if (VAR43->VAR33 == VAR34 && (!FUN9(VAR43->VAR39, VAR43->VAR40) || !FUN8(VAR43->VAR36, VAR43->VAR37)))
                    VAR7 |= FUN5(VAR53);
                if (VAR44->VAR33 == VAR34 && (!FUN9(VAR44->VAR39, VAR44->VAR40) || !FUN8(VAR44->VAR36, VAR44->VAR37)))
                    VAR7 |= FUN5(VAR53);
                if (VAR7 < 0)
                {
                    FUN11(VAR4, VAR48, ""
                                                  "",
                           VAR23->VAR54->VAR55, VAR23->VAR56->VAR55);
                    return VAR7;
                }
            }
        }
    }
    FUN11(VAR2, VAR57, ""
                                "",
           VAR10, VAR11, VAR12, VAR13);
    if (VAR13)
    {
        AVBPrint VAR58;
        if (VAR10 || VAR11)
            return FUN5(VAR20);
        FUN16(&VAR58, 0, VAR59);
        for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
            if (!FUN2(VAR2->VAR17[VAR5]))
                FUN17(&VAR58, "", VAR58.VAR60 ? "" : "", VAR2->VAR17[VAR5]->VAR55);
        FUN11(VAR2, VAR48, ""
                                    ""
                                    "",
               VAR58.VAR61);
        return FUN5(VAR62);
    }
    return 0;
}