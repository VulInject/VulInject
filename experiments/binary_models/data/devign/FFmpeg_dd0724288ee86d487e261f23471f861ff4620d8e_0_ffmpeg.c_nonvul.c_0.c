static int FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    if (!strcmp(VAR2, ""))
        VAR2 = "";
    VAR6 = FUN2(&VAR4, NULL, VAR13, VAR2);
    VAR13 = NULL;
    if (!VAR4)
    {
        FUN3(VAR2, VAR6);
        FUN4(1);
    }
    VAR8 = VAR4->VAR14;
    if (!strcmp(VAR8->VAR15, "") && FUN5(VAR2, "", NULL))
    {
        int VAR6 = FUN6(VAR4, VAR2);
        if (VAR6 < 0)
        {
            FUN3(VAR2, VAR6);
            FUN4(1);
        }
    }
    else if (!VAR16)
    {
        if (VAR17 >= 0)
        {
            VAR10 = VAR18##VAR19##FUN7(VAR4);
            VAR10->VAR20 = VAR17;
            VAR10->VAR21 = &VAR22[VAR17];
            VAR22[VAR17].VAR23 = 0;
        }
        if (!VAR24 && VAR4->VAR14->VAR25 != VAR26)
        {
            int VAR27 = 0, VAR28 = -1;
            for (VAR5 = 0; VAR5 < VAR29; VAR5++)
            {
                VAR12 = &VAR22[VAR5];
                if (VAR12->VAR30->VAR31->VAR32 == VAR33 && VAR12->VAR30->VAR31->VAR34 * VAR12->VAR30->VAR31->VAR35 > VAR27)
                {
                    VAR27 = VAR12->VAR30->VAR31->VAR34 * VAR12->VAR30->VAR31->VAR35;
                    VAR28 = VAR5;
                }
            }
            FUN8(VAR36, VAR28);
        }
        if (!VAR37 && VAR4->VAR14->VAR38 != VAR26)
        {
            int VAR39 = 0, VAR28 = -1;
            for (VAR5 = 0; VAR5 < VAR29; VAR5++)
            {
                VAR12 = &VAR22[VAR5];
                if (VAR12->VAR30->VAR31->VAR32 == VAR40 && VAR12->VAR30->VAR31->VAR39 > VAR39)
                {
                    VAR39 = VAR12->VAR30->VAR31->VAR39;
                    VAR28 = VAR5;
                }
            }
            FUN8(VAR41, VAR28);
        }
        if (!VAR42 && VAR4->VAR14->VAR43 != VAR26)
        {
            for (VAR5 = 0; VAR5 < VAR29; VAR5++)
                if (VAR22[VAR5].VAR30->VAR31->VAR32 == VAR44)
                {
                    FUN8(VAR45, VAR5);
                    break;
                }
        }
    }
    else
    {
        for (VAR5 = 0; VAR5 < VAR16; VAR5++)
        {
            VAR46 *VAR47 = &VAR48[VAR5];
            if (VAR47->VAR49)
                continue;
            VAR12 = &VAR22[VAR50[VAR47->VAR51].VAR52 + VAR47->VAR53];
            switch (VAR12->VAR30->VAR31->VAR32)
            {
            case VAR33:
                VAR10 = FUN9(VAR4);
                break;
            case VAR40:
                VAR10 = FUN10(VAR4);
                break;
            case VAR44:
                VAR10 = FUN11(VAR4);
                break;
            case VAR54:
                VAR10 = FUN12(VAR4);
                break;
            default:
                FUN13(NULL, VAR55, "", VAR47->VAR51, VAR47->VAR53);
                FUN4(1);
            }
            VAR10->VAR20 = VAR50[VAR47->VAR51].VAR52 + VAR47->VAR53;
            VAR10->VAR21 = &VAR22[VAR50[VAR47->VAR56].VAR52 + VAR47->VAR57];
            VAR12->VAR23 = 0;
        }
    }
    FUN14(&VAR4->VAR58, VAR58, 0);
    FUN15(&VAR58);
    VAR59 = FUN16(VAR59, sizeof(*VAR59), &VAR60, VAR60 + 1);
    VAR59[VAR60 - 1].VAR61 = VAR4;
    VAR59[VAR60 - 1].VAR62 = VAR63 - VAR4->VAR64;
    FUN14(&VAR59[VAR60 - 1].VAR65, VAR66, 0);
    if (VAR4->VAR14->VAR67 & VAR68)
    {
        if (!FUN17(VAR4->VAR2))
        {
            FUN3(VAR4->VAR2, FUN18(VAR69));
            FUN4(1);
        }
    }
    if (!(VAR4->VAR14->VAR67 & VAR70))
    {
        if (!VAR71 && (strchr(VAR2, '') == NULL || VAR2[1] == '' || FUN5(VAR2, "", NULL)))
        {
            if (FUN19(VAR2, 0) == 0)
            {
                if (!VAR72)
                {
                    fprintf(VAR73, "", VAR2);
                    FUN20(VAR73);
                    if (!FUN21())
                    {
                        fprintf(VAR73, "");
                        FUN4(1);
                    }
                }
                else
                {
                    fprintf(VAR73, "", VAR2);
                    FUN4(1);
                }
            }
        }
        if ((VAR6 = FUN22(&VAR4->VAR74, VAR2, VAR75)) < 0)
        {
            FUN3(VAR2, VAR6);
            FUN4(1);
        }
    }
    VAR4->VAR76 = (int)(VAR77 * VAR78);
    VAR4->VAR79 = (int)(VAR80 * VAR78);
    if (VAR81 >= 0)
    {
        FUN13(NULL, VAR82, "");
        VAR4->VAR81 = VAR81;
    }
    if (VAR83 >= VAR84)
    {
        if (VAR83 == VAR85)
        {
            VAR83 = -1;
            for (VAR5 = 0; VAR5 < VAR84; VAR5++)
                if (VAR50[VAR5].VAR61->VAR86)
                {
                    VAR83 = VAR5;
                    break;
                }
        }
        else
        {
            FUN13(NULL, VAR55, "", VAR83);
            FUN4(1);
        }
    }
    if (VAR83 >= 0)
        FUN23(VAR83, VAR60 - 1);
    for (VAR5 = 0; VAR5 < VAR87; VAR5++)
    {
        VAR3 *VAR88[2];
        VAR89 **VAR90[2];
        int VAR91;
        if ((VAR17) < 0 || (VAR17) >= (VAR92))
        {
            FUN13(NULL, VAR55, "",
                   (VAR93), (VAR17));
            FUN4(1);
        }
        int VAR94 = VAR95[VAR5][1].VAR96;
        if (VAR94 < 0)
            continue;
        FUN24(VAR94, VAR84, "")
        VAR88[0] = VAR4;
        VAR88[1] = VAR50[VAR94].VAR61;
        for (VAR91 = 0; VAR91 < 2; VAR91++)
        {
            VAR97 *VAR47 = &VAR95[VAR5][VAR91];
            switch (VAR47->VAR19)
            {
            case '':
                VAR90[VAR91] = &VAR88[VAR91]->VAR58;
                break;
            case '':
                FUN24(VAR47->VAR17, VAR88[VAR91]->VAR64, "")
                VAR90[VAR91] = &VAR88[VAR91]->VAR98[VAR47->VAR17]->VAR58;
                break;
            case '':
                FUN24(VAR47->VAR17, VAR88[VAR91]->VAR86, "")
                VAR90[VAR91] = &VAR88[VAR91]->VAR99[VAR47->VAR17]->VAR58;
                break;
            case '':
                FUN24(VAR47->VAR17, VAR88[VAR91]->VAR100, "")
                VAR90[VAR91] = &VAR88[VAR91]->VAR101[VAR47->VAR17]->VAR58;
                break;
            }
        }
        FUN14(VAR90[0], *VAR90[1], VAR102);
    }
    if (VAR103 && VAR84)
        FUN14(&VAR4->VAR58, VAR50[0].VAR61->VAR58, VAR102);
    if (VAR104)
        for (VAR5 = VAR59[VAR60 - 1].VAR62; VAR5 < VAR63; VAR5++)
        {
            VAR11 *VAR12 = &VAR22[VAR105[VAR5].VAR20];
            FUN14(&VAR105[VAR5].VAR30->VAR58, VAR12->VAR30->VAR58, VAR102);
        }
    VAR106 = (VAR107){0, 0};
    VAR108 = 0;
    VAR109 = 0;
    VAR110 = 0;
    VAR111 = 0;
    VAR112 = VAR113;
    VAR83 = VAR85;
    FUN25(&VAR95);
    VAR87 = 0;
    VAR103 = 1;
    VAR104 = 1;
    VAR114 = 1;
    FUN25(&VAR48);
    VAR16 = 0;
    FUN15(&VAR115);
    FUN25(&VAR116);
    FUN26();
    FUN27();
    return 0;
}