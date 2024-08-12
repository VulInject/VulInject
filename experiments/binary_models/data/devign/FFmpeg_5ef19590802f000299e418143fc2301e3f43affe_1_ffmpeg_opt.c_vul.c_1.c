static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, enum AVMediaType VAR6, int VAR7)
{
    VAR1 *VAR8;
    VAR9 *VAR10 = FUN2(VAR5, NULL);
    int VAR11 = VAR5->VAR12 - 1, VAR13 = 0;
    char *VAR14 = NULL, *VAR15, *VAR16 = NULL;
    VAR17 *VAR18, *VAR19 = NULL;
    double VAR20 = -1;
    int VAR21;
    if (!VAR10)
    {
        FUN3(NULL, VAR22, "");
        FUN4(1);
    }
    if (VAR5->VAR12 - 1 < VAR3->VAR23)
        VAR10->VAR24 = VAR3->VAR25[VAR5->VAR12 - 1];
    FUN5(VAR26, VAR27);
    if (!(VAR8 = FUN6(sizeof(*VAR8))))
        FUN4(1);
    VAR26[VAR27 - 1] = VAR8;
    VAR8->VAR28 = VAR29 - 1;
    VAR8->VAR30 = VAR11;
    VAR8->VAR10 = VAR10;
    VAR10->VAR31->VAR32 = VAR6;
    VAR13 = FUN7(VAR3, VAR5, VAR8);
    if (VAR13 < 0)
    {
        FUN3(NULL, VAR22, ""
                                   "",
               VAR8->VAR28, VAR8->VAR30);
        FUN4(1);
    }
    VAR8->VAR33 = FUN8(VAR8->VAR34);
    if (!VAR8->VAR33)
    {
        FUN3(NULL, VAR35, "");
        FUN4(1);
    }
    VAR8->VAR33->VAR32 = VAR6;
    VAR8->VAR36 = FUN9();
    if (!VAR8->VAR36)
    {
        FUN3(NULL, VAR35, "");
        FUN4(1);
    }
    if (VAR8->VAR34)
    {
        VAR37 *VAR38 = NULL;
        char *VAR39 = NULL, *VAR40 = NULL, *VAR41 = NULL;
        VAR8->VAR42 = FUN10(VAR3->VAR43->VAR44, VAR8->VAR34->VAR24, VAR5, VAR10, VAR8->VAR34);
        FUN11(VAR45, VAR46, VAR41, VAR5, VAR10);
        if (VAR41 && (!(VAR13 = FUN12(VAR41, VAR8->VAR34->VAR47, &VAR38))))
        {
            do
            {
                VAR39 = FUN13(VAR38);
                if (!VAR39[0] || VAR39[0] == '')
                {
                    FUN14(VAR39);
                    continue;
                }
                if (!(VAR40 = strchr(VAR39, '')))
                {
                    FUN3(NULL, VAR22, "");
                    FUN4(1);
                }
                *VAR40++ = 0;
                FUN15(&VAR8->VAR42, VAR39, VAR40, VAR48);
                FUN14(VAR39);
            } while (!VAR38->VAR49);
            FUN16(&VAR38);
        }
        if (VAR13)
        {
            FUN3(NULL, VAR22, "", VAR41, VAR8->VAR28, VAR8->VAR30);
            FUN4(1);
        }
    }
    else
    {
        VAR8->VAR42 = FUN10(VAR3->VAR43->VAR44, VAR50, VAR5, VAR10, NULL);
    }
    VAR8->VAR51 = VAR52;
    FUN11(VAR51, VAR53, VAR8->VAR51, VAR5, VAR10);
    for (VAR21 = 0; VAR21 < VAR3->VAR54; VAR21++)
    {
        char *VAR55 = VAR3->VAR51[VAR21].VAR56;
        if (!*VAR55 && VAR6 != VAR57)
        {
            FUN3(NULL, VAR58, "");
            break;
        }
    }
    VAR8->VAR59 = -1;
    FUN11(VAR59, VAR21, VAR8->VAR59, VAR5, VAR10);
    FUN11(VAR60, VAR46, VAR14, VAR5, VAR10);
    while (VAR14)
    {
        char *VAR40 = NULL;
        if (VAR15 = strchr(VAR14, ''))
            *VAR15++ = 0;
        if (VAR40 = strchr(VAR14, ''))
            *VAR40++ = 0;
        if (!(VAR18 = FUN17(VAR14)))
        {
            FUN3(NULL, VAR22, "", VAR14);
            FUN4(1);
        }
        if (VAR19)
            VAR19->VAR15 = VAR18;
        else
            VAR8->VAR60 = VAR18;
        if (VAR40)
            if (!(VAR18->VAR61 = FUN18(VAR40)))
            {
                FUN3(NULL, VAR22, "");
                FUN4(1);
            }
        VAR19 = VAR18;
        VAR14 = VAR15;
    }
    FUN11(VAR62, VAR46, VAR16, VAR5, VAR10);
    if (VAR16)
    {
        uint32_t VAR63 = FUN19(VAR16, &VAR15, 0);
        if (*VAR15)
            VAR63 = FUN20(VAR16);
        VAR8->VAR10->VAR31->VAR16 = VAR8->VAR33->VAR16 = VAR63;
    }
    FUN11(VAR20, VAR64, VAR20, VAR5, VAR10);
    if (VAR20 >= 0)
    {
        VAR8->VAR33->VAR65 |= VAR66;
        VAR8->VAR33->VAR67 = VAR68 * VAR20;
    }
    FUN11(VAR69, VAR46, VAR8->VAR69, VAR5, VAR10);
    VAR8->VAR69 = FUN18(VAR8->VAR69);
    if (VAR5->VAR70->VAR65 & VAR71)
        VAR8->VAR33->VAR65 |= VAR72;
    FUN21(&VAR8->VAR73, VAR3->VAR43->VAR73, 0);
    FUN21(&VAR8->VAR74, VAR3->VAR43->VAR74, 0);
    if (VAR8->VAR34 && FUN22(VAR8->VAR34->VAR24) == 24)
        FUN15(&VAR8->VAR74, "", "", 0);
    FUN21(&VAR8->VAR75, VAR3->VAR43->VAR75, 0);
    VAR8->VAR7 = VAR7;
    if (VAR7 >= 0)
    {
        VAR8->VAR76 = VAR77[VAR7];
        VAR77[VAR7]->VAR78 = 0;
        VAR77[VAR7]->VAR10->VAR78 = VAR77[VAR7]->VAR79;
    }
    VAR8->VAR80 = VAR81;
    return VAR8;
}