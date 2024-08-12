static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = NULL;
    int VAR6, VAR7, VAR8;
    int VAR9[VAR10];
    AVPacket VAR11, *VAR12 = &VAR11;
    int64_t VAR13;
    int VAR14 = 0;
    VAR15 *VAR16;
    VAR17 **VAR18;
    int VAR19;
    VAR20 *VAR21 = FUN2();
    int VAR22 = 0;
    int64_t VAR23;
    if (!VAR21)
    {
        FUN3(NULL, VAR24, "", FUN4());
        VAR8 = FUN5(VAR25);
        goto VAR26;
    }
    memset(VAR9, -1, sizeof(VAR9));
    VAR3->VAR27 = VAR3->VAR28 = -1;
    VAR3->VAR29 = VAR3->VAR30 = -1;
    VAR3->VAR31 = VAR3->VAR32 = -1;
    VAR3->VAR33 = 0;
    VAR5 = FUN6();
    if (!VAR5)
    {
        FUN3(NULL, VAR24, "");
        VAR8 = FUN5(VAR25);
        goto VAR26;
    }
    VAR5->VAR34.VAR35 = VAR36;
    VAR5->VAR34.VAR37 = VAR3;
    if (!FUN7(VAR38, "", NULL, VAR39))
    {
        FUN8(&VAR38, "", "", VAR40);
        VAR22 = 1;
    }
    VAR6 = FUN9(&VAR5, VAR3->VAR41, VAR3->VAR42, &VAR38);
    if (VAR6 < 0)
    {
        FUN10(VAR3->VAR41, VAR6);
        VAR8 = -1;
        goto VAR26;
    }
    if (VAR22)
        FUN8(&VAR38, "", NULL, VAR39);
    if ((VAR16 = FUN7(VAR38, "", NULL, VAR43)))
    {
        FUN3(NULL, VAR44, "", VAR16->VAR45);
        VAR8 = VAR46;
        goto VAR26;
    }
    VAR3->VAR5 = VAR5;
    if (VAR47)
        VAR5->VAR48 |= VAR49;
    FUN11(VAR5);
    VAR18 = FUN12(VAR5, VAR50);
    VAR19 = VAR5->VAR51;
    VAR6 = FUN13(VAR5, VAR18);
    for (VAR7 = 0; VAR7 < VAR19; VAR7++)
        FUN14(&VAR18[VAR7]);
    FUN15(&VAR18);
    if (VAR6 < 0)
    {
        FUN3(NULL, VAR52, "", VAR3->VAR41);
        VAR8 = -1;
        goto VAR26;
    }
    if (VAR5->VAR53)
        VAR5->VAR53->VAR54 = 0;
    if (VAR55 < 0)
        VAR55 = !!(VAR5->VAR42->VAR48 & VAR56) && strcmp("", VAR5->VAR42->VAR57);
    VAR3->VAR58 = (VAR5->VAR42->VAR48 & VAR56) ? 10.0 : 3600.0;
    if (!VAR59 && (VAR16 = FUN7(VAR5->VAR60, "", NULL, 0)))
        VAR59 = FUN16("", VAR16->VAR61, VAR62);
    if (VAR63 != VAR64)
    {
        int64_t VAR65;
        VAR65 = VAR63;
        if (VAR5->VAR63 != VAR64)
            VAR65 += VAR5->VAR63;
        VAR8 = FUN17(VAR5, -1, VAR66, VAR65, VAR67, 0);
        if (VAR8 < 0)
        {
            FUN3(NULL, VAR52, "", VAR3->VAR41, (double)VAR65 / VAR68);
        }
    }
    VAR3->VAR69 = FUN18(VAR5);
    if (VAR70)
        FUN19(VAR5, 0, VAR3->VAR41, 0);
    for (VAR7 = 0; VAR7 < VAR5->VAR51; VAR7++)
    {
        VAR71 *VAR72 = VAR5->VAR73[VAR7];
        enum AVMediaType VAR74 = VAR72->VAR75->VAR76;
        VAR72->VAR77 = VAR78;
        if (VAR79[VAR74] && VAR9[VAR74] == -1)
            if (FUN20(VAR5, VAR72, VAR79[VAR74]) > 0)
                VAR9[VAR74] = VAR7;
    }
    for (VAR7 = 0; VAR7 < VAR10; VAR7++)
    {
        if (VAR79[VAR7] && VAR9[VAR7] == -1)
        {
            FUN3(NULL, VAR44, "", VAR79[VAR7], FUN21(VAR7));
            VAR9[VAR7] = VAR80;
        }
    }
    if (!VAR81)
        VAR9[VAR82] = FUN22(VAR5, VAR82, VAR9[VAR82], -1, NULL, 0);
    if (!VAR83)
        VAR9[VAR84] = FUN22(VAR5, VAR84, VAR9[VAR84], VAR9[VAR82], NULL, 0);
    if (!VAR81 && !VAR85)
        VAR9[VAR86] = FUN22(VAR5, VAR86, VAR9[VAR86], (VAR9[VAR84] >= 0 ? VAR9[VAR84] : VAR9[VAR82]), NULL, 0);
    VAR3->VAR87 = VAR87;
    if (VAR9[VAR82] >= 0)
    {
        VAR71 *VAR72 = VAR5->VAR73[VAR9[VAR82]];
        VAR88 *VAR89 = VAR72->VAR75;
        AVRational VAR90 = FUN23(VAR5, VAR72, NULL);
        if (VAR89->VAR91)
            FUN24(VAR89->VAR91, VAR89->VAR92, VAR90);
    }
    if (VAR9[VAR84] >= 0)
    {
        FUN25(VAR3, VAR9[VAR84]);
    }
    VAR8 = -1;
    if (VAR9[VAR82] >= 0)
    {
        VAR8 = FUN25(VAR3, VAR9[VAR82]);
    }
    if (VAR3->VAR87 == VAR93)
        VAR3->VAR87 = VAR8 >= 0 ? VAR94 : VAR95;
    if (VAR9[VAR86] >= 0)
    {
        FUN25(VAR3, VAR9[VAR86]);
    }
    if (VAR3->VAR28 < 0 && VAR3->VAR30 < 0)
    {
        FUN3(NULL, VAR24, "", VAR3->VAR41);
        VAR8 = -1;
        goto VAR26;
    }
    if (VAR96 < 0 && VAR3->VAR69)
        VAR96 = 1;
    for (;;)
    {
        if (VAR3->VAR97)
            break;
        if (VAR3->VAR98 != VAR3->VAR99)
        {
            VAR3->VAR99 = VAR3->VAR98;
            if (VAR3->VAR98)
                VAR3->VAR100 = FUN26(VAR5);
            else
                FUN27(VAR5);
        }
        if (VAR3->VAR98 && (!strcmp(VAR5->VAR42->VAR57, "") || (VAR5->VAR53 && !FUN28(VAR62, "", 5))))
        {
            FUN29(10);
            continue;
        }
        if (VAR3->VAR101)
        {
            int64_t VAR102 = VAR3->VAR103;
            int64_t VAR104 = VAR3->VAR105 > 0 ? VAR102 - VAR3->VAR105 + 2 : VAR66;
            int64_t VAR106 = VAR3->VAR105 < 0 ? VAR102 - VAR3->VAR105 - 2 : VAR67;
            VAR8 = FUN17(VAR3->VAR5, -1, VAR104, VAR102, VAR106, VAR3->VAR107);
            if (VAR8 < 0)
            {
                FUN3(NULL, VAR44, "", VAR3->VAR5->VAR41);
            }
            else
            {
                if (VAR3->VAR30 >= 0)
                {
                    FUN30(&VAR3->VAR108);
                    FUN31(&VAR3->VAR108, &VAR109);
                }
                if (VAR3->VAR32 >= 0)
                {
                    FUN30(&VAR3->VAR110);
                    FUN31(&VAR3->VAR110, &VAR109);
                }
                if (VAR3->VAR28 >= 0)
                {
                    FUN30(&VAR3->VAR111);
                    FUN31(&VAR3->VAR111, &VAR109);
                }
                if (VAR3->VAR107 & VAR112)
                {
                    FUN32(&VAR3->VAR113, VAR114, 0);
                }
                else
                {
                    FUN32(&VAR3->VAR113, VAR102 / (double)VAR68, 0);
                }
            }
            VAR3->VAR101 = 0;
            VAR3->VAR115 = 1;
            VAR3->VAR33 = 0;
            if (VAR3->VAR98)
                FUN33(VAR3);
        }
        if (VAR3->VAR115)
        {
            if (VAR3->VAR116 && VAR3->VAR116->VAR117 & VAR118)
            {
                AVPacket copy;
                if ((VAR8 = FUN34(&copy, &VAR3->VAR116->VAR119)) < 0)
                    goto VAR26;
                FUN31(&VAR3->VAR111, &copy);
                FUN35(&VAR3->VAR111, VAR3->VAR28);
            }
            VAR3->VAR115 = 0;
        }
        if (VAR96 < 1 && (VAR3->VAR108.VAR120 + VAR3->VAR111.VAR120 + VAR3->VAR110.VAR120 > VAR121 || ((VAR3->VAR108.VAR122 > VAR123 || VAR3->VAR30 < 0 || VAR3->VAR108.VAR97) && (VAR3->VAR111.VAR122 > VAR123 || VAR3->VAR28 < 0 || VAR3->VAR111.VAR97 || (VAR3->VAR116->VAR117 & VAR118)) && (VAR3->VAR110.VAR122 > VAR123 || VAR3->VAR32 < 0 || VAR3->VAR110.VAR97))))
        {
            FUN36(VAR21);
            FUN37(VAR3->VAR124, VAR21, 10);
            FUN38(VAR21);
            continue;
        }
        if (!VAR3->VAR98 && (!VAR3->VAR125 || (VAR3->VAR126.VAR127 == VAR3->VAR108.VAR128 && FUN39(&VAR3->VAR129) == 0)) && (!VAR3->VAR116 || (VAR3->VAR130.VAR127 == VAR3->VAR111.VAR128 && FUN39(&VAR3->VAR131) == 0)))
        {
            if (VAR132 != 1 && (!VAR132 || --VAR132))
            {
                FUN40(VAR3, VAR63 != VAR64 ? VAR63 : 0, 0, 0);
            }
            else if (VAR133)
            {
                VAR8 = VAR134;
                goto VAR26;
            }
        }
        VAR8 = FUN41(VAR5, VAR12);
        if (VAR8 < 0)
        {
            if ((VAR8 == VAR134 || FUN42(VAR5->VAR53)) && !VAR3->VAR33)
            {
                if (VAR3->VAR28 >= 0)
                    FUN35(&VAR3->VAR111, VAR3->VAR28);
                if (VAR3->VAR30 >= 0)
                    FUN35(&VAR3->VAR108, VAR3->VAR30);
                if (VAR3->VAR32 >= 0)
                    FUN35(&VAR3->VAR110, VAR3->VAR32);
                VAR3->VAR33 = 1;
            }
            if (VAR5->VAR53 && VAR5->VAR53->VAR135)
                break;
            FUN36(VAR21);
            FUN37(VAR3->VAR124, VAR21, 10);
            FUN38(VAR21);
            continue;
        }
        else
        {
            VAR3->VAR33 = 0;
        }
        VAR13 = VAR5->VAR73[VAR12->VAR136]->VAR63;
        VAR23 = VAR12->VAR137 == VAR64 ? VAR12->VAR138 : VAR12->VAR137;
        VAR14 = VAR139 == VAR64 || (VAR23 - (VAR13 != VAR64 ? VAR13 : 0)) * FUN43(VAR5->VAR73[VAR12->VAR136]->VAR140) - (double)(VAR63 != VAR64 ? VAR63 : 0) / 1000000 <= ((double)VAR139 / 1000000);
        if (VAR12->VAR136 == VAR3->VAR30 && VAR14)
        {
            FUN31(&VAR3->VAR108, VAR12);
        }
        else if (VAR12->VAR136 == VAR3->VAR28 && VAR14 && !(VAR3->VAR116->VAR117 & VAR118))
        {
            FUN31(&VAR3->VAR111, VAR12);
        }
        else if (VAR12->VAR136 == VAR3->VAR32 && VAR14)
        {
            FUN31(&VAR3->VAR110, VAR12);
        }
        else
        {
            FUN44(VAR12);
        }
    }
    while (!VAR3->VAR97)
    {
        FUN29(100);
    }
    VAR8 = 0;
VAR26:
    if (VAR3->VAR30 >= 0)
        FUN45(VAR3, VAR3->VAR30);
    if (VAR3->VAR28 >= 0)
        FUN45(VAR3, VAR3->VAR28);
    if (VAR3->VAR32 >= 0)
        FUN45(VAR3, VAR3->VAR32);
    if (VAR5)
    {
        FUN46(&VAR5);
        VAR3->VAR5 = NULL;
    }
    if (VAR8 != 0)
    {
        SDL_Event VAR141;
        VAR141.VAR74 = VAR142;
        VAR141.VAR143.VAR144 = VAR3;
        FUN47(&VAR141);
    }
    FUN48(VAR21);
    return 0;
}