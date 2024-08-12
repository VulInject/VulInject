static void FUN1(void *VAR1, const char *VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    if (!strcmp(VAR2, ""))
        VAR2 = "";
    VAR6 = FUN2();
    if (!VAR6)
    {
        FUN3(VAR2, FUN4(VAR15));
        FUN5(1);
    }
    if (VAR16)
    {
        VAR10 = FUN6(VAR16, NULL, NULL);
        if (!VAR10)
        {
            fprintf(VAR17, "", VAR16);
            FUN5(1);
        }
        VAR16 = NULL;
    }
    else
    {
        VAR10 = FUN6(NULL, VAR2, NULL);
        if (!VAR10)
        {
            fprintf(VAR17, "", VAR2);
            FUN5(1);
        }
    }
    VAR6->VAR18 = VAR10;
    FUN7(VAR6->VAR2, VAR2, sizeof(VAR6->VAR2));
    if (!strcmp(VAR10->VAR19, "") && FUN8(VAR2, "", NULL))
    {
        int VAR8 = FUN9(VAR6, VAR2);
        if (VAR8 < 0)
        {
            FUN3(VAR2, VAR8);
            FUN5(1);
        }
    }
    else if (!VAR4->VAR20)
    {
        if (VAR21 >= 0)
        {
            VAR12 = VAR22##VAR23##FUN10(VAR6);
            VAR12->VAR24 = VAR21;
            VAR12->VAR25 = &VAR26[VAR21];
            VAR26[VAR21].VAR27 = 0;
        }
        if (!VAR28 && VAR6->VAR18->VAR29 != VAR30)
        {
            int VAR31 = 0, VAR32 = -1;
            for (VAR7 = 0; VAR7 < VAR33; VAR7++)
            {
                VAR14 = &VAR26[VAR7];
                if (VAR14->VAR34->VAR35->VAR36 == VAR37 && VAR14->VAR34->VAR35->VAR38 * VAR14->VAR34->VAR35->VAR39 > VAR31)
                {
                    VAR31 = VAR14->VAR34->VAR35->VAR38 * VAR14->VAR34->VAR35->VAR39;
                    VAR32 = VAR7;
                }
            }
            FUN11(VAR40, VAR32);
        }
        if (!VAR41 && VAR6->VAR18->VAR42 != VAR30)
        {
            int VAR43 = 0, VAR32 = -1;
            for (VAR7 = 0; VAR7 < VAR33; VAR7++)
            {
                VAR14 = &VAR26[VAR7];
                if (VAR14->VAR34->VAR35->VAR36 == VAR44 && VAR14->VAR34->VAR35->VAR43 > VAR43)
                {
                    VAR43 = VAR14->VAR34->VAR35->VAR43;
                    VAR32 = VAR7;
                }
            }
            FUN11(VAR45, VAR32);
        }
        if (!VAR46 && VAR6->VAR18->VAR47 != VAR30)
        {
            for (VAR7 = 0; VAR7 < VAR33; VAR7++)
                if (VAR26[VAR7].VAR34->VAR35->VAR36 == VAR48)
                {
                    FUN11(VAR49, VAR7);
                    break;
                }
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR4->VAR20; VAR7++)
        {
            VAR50 *VAR51 = &VAR4->VAR52[VAR7];
            if (VAR51->VAR53)
                continue;
            VAR14 = &VAR26[VAR54[VAR51->VAR55].VAR56 + VAR51->VAR57];
            switch (VAR14->VAR34->VAR35->VAR36)
            {
            case VAR37:
                VAR12 = FUN12(VAR6);
                break;
            case VAR44:
                VAR12 = FUN13(VAR6);
                break;
            case VAR48:
                VAR12 = FUN14(VAR6);
                break;
            case VAR58:
                VAR12 = FUN15(VAR6);
                break;
            default:
                FUN16(NULL, VAR59, "", VAR51->VAR55, VAR51->VAR57);
                FUN5(1);
            }
            VAR12->VAR24 = VAR54[VAR51->VAR55].VAR56 + VAR51->VAR57;
            VAR12->VAR25 = &VAR26[VAR54[VAR51->VAR60].VAR56 + VAR51->VAR61];
            VAR14->VAR27 = 0;
        }
    }
    FUN17(&VAR6->VAR62, VAR62, 0);
    FUN18(&VAR62);
    VAR63 = FUN19(VAR63, sizeof(*VAR63), &VAR64, VAR64 + 1);
    VAR63[VAR64 - 1].VAR65 = VAR6;
    VAR63[VAR64 - 1].VAR66 = VAR67 - VAR6->VAR68;
    VAR63[VAR64 - 1].VAR69 = VAR4->VAR69;
    VAR63[VAR64 - 1].VAR70 = VAR4->VAR70;
    VAR63[VAR64 - 1].VAR71 = VAR4->VAR71;
    FUN17(&VAR63[VAR64 - 1].VAR72, VAR73, 0);
    if (VAR6->VAR18->VAR74 & VAR75)
    {
        if (!FUN20(VAR6->VAR2))
        {
            FUN3(VAR6->VAR2, FUN4(VAR76));
            FUN5(1);
        }
    }
    if (!(VAR6->VAR18->VAR74 & VAR77))
    {
        if (!VAR78 && (strchr(VAR2, '') == NULL || VAR2[1] == '' || FUN8(VAR2, "", NULL)))
        {
            if (FUN21(VAR2, 0) == 0)
            {
                if (!VAR79)
                {
                    fprintf(VAR17, "", VAR2);
                    FUN22(VAR17);
                    if (!FUN23())
                    {
                        fprintf(VAR17, "");
                        FUN5(1);
                    }
                }
                else
                {
                    fprintf(VAR17, "", VAR2);
                    FUN5(1);
                }
            }
        }
        if ((VAR8 = FUN24(&VAR6->VAR80, VAR2, VAR81)) < 0)
        {
            FUN3(VAR2, VAR8);
            FUN5(1);
        }
    }
    VAR6->VAR82 = (int)(VAR83 * VAR84);
    VAR6->VAR85 = (int)(VAR86 * VAR84);
    VAR6->VAR74 |= VAR87;
    if (VAR88 >= VAR89)
    {
        if (VAR88 == VAR90)
        {
            VAR88 = -1;
            for (VAR7 = 0; VAR7 < VAR89; VAR7++)
                if (VAR54[VAR7].VAR65->VAR91)
                {
                    VAR88 = VAR7;
                    break;
                }
        }
        else
        {
            FUN16(NULL, VAR59, "", VAR88);
            FUN5(1);
        }
    }
    if (VAR88 >= 0)
        FUN25(&VAR54[VAR88], &VAR63[VAR64 - 1]);
    for (VAR7 = 0; VAR7 < VAR92; VAR7++)
    {
        VAR5 *VAR93[2];
        VAR94 **VAR95[2];
        int VAR96;
        if ((VAR21) < 0 || (VAR21) >= (VAR97))
        {
            FUN16(NULL, VAR59, "",
                   (VAR98), (VAR21));
            FUN5(1);
        }
        int VAR99 = VAR100[VAR7][1].VAR101;
        if (VAR99 < 0)
            continue;
        FUN26(VAR99, VAR89, "")
        VAR93[0] = VAR6;
        VAR93[1] = VAR54[VAR99].VAR65;
        for (VAR96 = 0; VAR96 < 2; VAR96++)
        {
            VAR102 *VAR51 = &VAR100[VAR7][VAR96];
            switch (VAR51->VAR23)
            {
            case '':
                VAR95[VAR96] = &VAR93[VAR96]->VAR62;
                break;
            case '':
                FUN26(VAR51->VAR21, VAR93[VAR96]->VAR68, "")
                VAR95[VAR96] = &VAR93[VAR96]->VAR103[VAR51->VAR21]->VAR62;
                break;
            case '':
                FUN26(VAR51->VAR21, VAR93[VAR96]->VAR91, "")
                VAR95[VAR96] = &VAR93[VAR96]->VAR104[VAR51->VAR21]->VAR62;
                break;
            case '':
                FUN26(VAR51->VAR21, VAR93[VAR96]->VAR105, "")
                VAR95[VAR96] = &VAR93[VAR96]->VAR106[VAR51->VAR21]->VAR62;
                break;
            }
        }
        FUN17(VAR95[0], *VAR95[1], VAR107);
    }
    if (VAR108 && VAR89)
        FUN17(&VAR6->VAR62, VAR54[0].VAR65->VAR62, VAR107);
    if (VAR109)
        for (VAR7 = VAR63[VAR64 - 1].VAR66; VAR7 < VAR67; VAR7++)
        {
            VAR13 *VAR14 = &VAR26[VAR110[VAR7].VAR24];
            FUN17(&VAR110[VAR7].VAR34->VAR62, VAR14->VAR34->VAR62, VAR107);
        }
    VAR111 = (VAR112){0, 0};
    VAR113 = 0;
    VAR114 = 0;
    VAR115 = 0;
    VAR116 = 0;
    VAR117 = VAR118;
    VAR88 = VAR90;
    FUN27(&VAR100);
    VAR92 = 0;
    VAR108 = 1;
    VAR109 = 1;
    VAR119 = 1;
    FUN27(&VAR120);
    VAR121 = 0;
    FUN18(&VAR122);
    FUN27(&VAR123);
    FUN28(VAR4);
}