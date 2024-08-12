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
            if (VAR23->VAR26 != VAR23->VAR27 && VAR23->VAR26 && VAR23->VAR27)
                if (!FUN6(VAR23->VAR26, VAR23->VAR27, VAR23->VAR28, 0))
                    VAR25 = 1;
            if (VAR23->VAR28 == VAR29)
            {
                if (VAR23->VAR30 != VAR23->VAR31 && VAR23->VAR30 && VAR23->VAR31)
                    if (!FUN6(VAR23->VAR30, VAR23->VAR31, 0, 1))
                        VAR25 = 1;
            }
            if (!(VAR23->VAR32##VAR33 && VAR23->VAR34##VAR33))
            {
                VAR13++;
            }
            else if (VAR23->VAR32##VAR33 == VAR23->VAR34##VAR33)
            {
                VAR12++;
            }
            else if (!VAR25)
            {
                VAR11++;
                VAR35
            }
            if (VAR23->VAR28 == VAR29)
            {
                FUN7(VAR36, if (!FUN8(VAR23->VAR37, VAR23->VAR38)) VAR25 = 1;)
                FUN7(VAR39, if (!FUN9(VAR23->VAR30, VAR23->VAR31)) VAR25 = 1;)
            }
            FUN7(VAR40, if (!FUN10(VAR23->VAR26, VAR23->VAR27, VAR23->VAR28)) VAR25 = 1;)
            if (VAR25)
            {
                VAR15 *VAR41;
                VAR42 *VAR18;
                VAR22 *VAR43, *VAR44;
                char VAR45[256];
                char VAR46[30];
                switch (VAR23->VAR28)
                {
                case VAR47:
                    if (!(VAR18 = FUN11("")))
                    {
                        FUN12(VAR4, VAR48, ""
                                                      "");
                        return FUN5(VAR49);
                    }
                    snprintf(VAR46, sizeof(VAR46), "", VAR8++);
                    if ((VAR7 = FUN13(&VAR41, VAR18, VAR46, VAR2->VAR50, NULL, VAR2)) < 0)
                        return VAR7;
                    break;
                case VAR29:
                    if (!(VAR18 = FUN11("")))
                    {
                        FUN12(VAR4, VAR48, ""
                                                      "");
                        return FUN5(VAR49);
                    }
                    snprintf(VAR46, sizeof(VAR46), "", VAR9++);
                    VAR45[0] = '';
                    if (VAR2->VAR51)
                        snprintf(VAR45, sizeof(VAR45), "", VAR2->VAR51);
                    if ((VAR7 = FUN13(&VAR41, VAR18, VAR46, VAR2->VAR51, NULL, VAR2)) < 0)
                        return VAR7;
                    break;
                default:
                    return FUN5(VAR49);
                }
                if ((VAR7 = FUN14(VAR23, VAR41, 0, 0)) < 0)
                    return VAR7;
                FUN3(VAR41);
                VAR43 = VAR41->VAR24[0];
                VAR44 = VAR41->VAR52[0];
                FUN15(VAR43->VAR26->VAR53 > 0);
                FUN15(VAR43->VAR27->VAR53 > 0);
                FUN15(VAR44->VAR26->VAR53 > 0);
                FUN15(VAR44->VAR27->VAR53 > 0);
                if (VAR44->VAR28 == VAR29)
                {
                    FUN15(VAR43->VAR30->VAR53 > 0);
                    FUN15(VAR43->VAR31->VAR53 > 0);
                    FUN15(VAR44->VAR30->VAR53 > 0);
                    FUN15(VAR44->VAR31->VAR53 > 0);
                    FUN15(VAR43->VAR37->VAR53 > 0);
                    FUN15(VAR43->VAR38->VAR53 > 0);
                    FUN15(VAR44->VAR37->VAR53 > 0);
                    FUN15(VAR44->VAR38->VAR53 > 0);
                }
                if (!FUN10(VAR43->VAR26, VAR43->VAR27, VAR43->VAR28) || !FUN10(VAR44->VAR26, VAR44->VAR27, VAR44->VAR28))
                    VAR7 = FUN5(VAR54);
                if (VAR43->VAR28 == VAR29 && (!FUN9(VAR43->VAR30, VAR43->VAR31) || !FUN8(VAR43->VAR37, VAR43->VAR38)))
                    VAR7 = FUN5(VAR54);
                if (VAR44->VAR28 == VAR29 && (!FUN9(VAR44->VAR30, VAR44->VAR31) || !FUN8(VAR44->VAR37, VAR44->VAR38)))
                    VAR7 = FUN5(VAR54);
                if (VAR7 < 0)
                {
                    FUN12(VAR4, VAR48, ""
                                                  "",
                           VAR23->VAR55->VAR56, VAR23->VAR57->VAR56);
                    return VAR7;
                }
            }
        }
    }
    FUN12(VAR2, VAR58, ""
                                "",
           VAR10, VAR11, VAR12, VAR13);
    if (VAR13)
    {
        AVBPrint VAR59;
        if (VAR10 || VAR11)
            return FUN5(VAR20);
        FUN16(&VAR59, 0, VAR60);
        for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
            if (!FUN2(VAR2->VAR17[VAR5]))
                FUN17(&VAR59, "", VAR59.VAR61 ? "" : "", VAR2->VAR17[VAR5]->VAR56);
        FUN12(VAR2, VAR48, ""
                                    ""
                                    "",
               VAR59.VAR62);
        return FUN5(VAR63);
    }
    return 0;
}