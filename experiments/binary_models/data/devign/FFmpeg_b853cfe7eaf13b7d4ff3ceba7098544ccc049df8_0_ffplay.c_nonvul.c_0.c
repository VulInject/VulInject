static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = NULL;
    int VAR6, VAR7, VAR8;
    int VAR9[VAR10];
    AVPacket VAR11, *VAR12 = &VAR11;
    int VAR13 = 0;
    int VAR14 = 0;
    VAR15 *VAR16;
    VAR17 **VAR18;
    int VAR19;
    VAR20 *VAR21 = FUN2();
    memset(VAR9, -1, sizeof(VAR9));
    VAR3->VAR22 = VAR3->VAR23 = -1;
    VAR3->VAR24 = VAR3->VAR25 = -1;
    VAR3->VAR26 = VAR3->VAR27 = -1;
    VAR5 = FUN3();
    VAR5->VAR28.VAR29 = VAR30;
    VAR5->VAR28.VAR31 = VAR3;
    VAR6 = FUN4(&VAR5, VAR3->VAR32, VAR3->VAR33, &VAR34);
    if (VAR6 < 0)
    {
        FUN5(VAR3->VAR32, VAR6);
        VAR8 = -1;
        goto VAR35;
    }
    if ((VAR16 = FUN6(VAR34, "", NULL, VAR36)))
    {
        FUN7(NULL, VAR37, "", VAR16->VAR38);
        VAR8 = VAR39;
        goto VAR35;
    }
    VAR3->VAR5 = VAR5;
    if (VAR40)
        VAR5->VAR41 |= VAR42;
    VAR18 = FUN8(VAR5, VAR43);
    VAR19 = VAR5->VAR44;
    VAR6 = FUN9(VAR5, VAR18);
    if (VAR6 < 0)
    {
        fprintf(VAR45, "", VAR3->VAR32);
        VAR8 = -1;
        goto VAR35;
    }
    for (VAR7 = 0; VAR7 < VAR19; VAR7++)
        FUN10(&VAR18[VAR7]);
    FUN11(&VAR18);
    if (VAR5->VAR46)
        VAR5->VAR46->VAR47 = 0;
    if (VAR48 < 0)
        VAR48 = !!(VAR5->VAR33->VAR41 & VAR49);
    VAR3->VAR50 = (VAR5->VAR33->VAR41 & VAR49) ? 10.0 : 3600.0;
    if (VAR51 != VAR52)
    {
        int64_t VAR53;
        VAR53 = VAR51;
        if (VAR5->VAR51 != VAR52)
            VAR53 += VAR5->VAR51;
        VAR8 = FUN12(VAR5, -1, VAR54, VAR53, VAR55, 0);
        if (VAR8 < 0)
        {
            fprintf(VAR45, "", VAR3->VAR32, (double)VAR53 / VAR56);
        }
    }
    VAR3->VAR57 = FUN13(VAR5);
    for (VAR7 = 0; VAR7 < VAR5->VAR44; VAR7++)
        VAR5->VAR58[VAR7]->VAR59 = VAR60;
    if (!VAR61)
        VAR9[VAR62] = FUN14(VAR5, VAR62, VAR63[VAR62], -1, NULL, 0);
    if (!VAR64)
        VAR9[VAR65] = FUN14(VAR5, VAR65, VAR63[VAR65], VAR9[VAR62], NULL, 0);
    if (!VAR61)
        VAR9[VAR66] = FUN14(VAR5, VAR66, VAR63[VAR66], (VAR9[VAR65] >= 0 ? VAR9[VAR65] : VAR9[VAR62]), NULL, 0);
    if (VAR67)
    {
        FUN15(VAR5, 0, VAR3->VAR32, 0);
    }
    VAR3->VAR68 = VAR68;
    if (VAR9[VAR65] >= 0)
    {
        FUN16(VAR3, VAR9[VAR65]);
    }
    VAR8 = -1;
    if (VAR9[VAR62] >= 0)
    {
        VAR8 = FUN16(VAR3, VAR9[VAR62]);
    }
    if (VAR3->VAR68 == VAR69)
        VAR3->VAR68 = VAR8 >= 0 ? VAR70 : VAR71;
    if (VAR9[VAR66] >= 0)
    {
        FUN16(VAR3, VAR9[VAR66]);
    }
    if (VAR3->VAR23 < 0 && VAR3->VAR25 < 0)
    {
        fprintf(VAR45, "", VAR3->VAR32);
        VAR8 = -1;
        goto VAR35;
    }
    if (VAR72 < 0 && VAR3->VAR57)
        VAR72 = 1;
    for (;;)
    {
        if (VAR3->VAR73)
            break;
        if (VAR3->VAR74 != VAR3->VAR75)
        {
            VAR3->VAR75 = VAR3->VAR74;
            if (VAR3->VAR74)
                VAR3->VAR76 = FUN17(VAR5);
            else
                FUN18(VAR5);
        }
        if (VAR3->VAR74 && (!strcmp(VAR5->VAR33->VAR77, "") || (VAR5->VAR46 && !FUN19(VAR78, "", 5))))
        {
            FUN20(10);
            continue;
        }
        if (VAR3->VAR79)
        {
            int64_t VAR80 = VAR3->VAR81;
            int64_t VAR82 = VAR3->VAR83 > 0 ? VAR80 - VAR3->VAR83 + 2 : VAR54;
            int64_t VAR84 = VAR3->VAR83 < 0 ? VAR80 - VAR3->VAR83 - 2 : VAR55;
            VAR8 = FUN12(VAR3->VAR5, -1, VAR82, VAR80, VAR84, VAR3->VAR85);
            if (VAR8 < 0)
            {
                fprintf(VAR45, "", VAR3->VAR5->VAR32);
            }
            else
            {
                if (VAR3->VAR25 >= 0)
                {
                    FUN21(&VAR3->VAR86);
                    FUN22(&VAR3->VAR86, &VAR87);
                }
                if (VAR3->VAR27 >= 0)
                {
                    FUN21(&VAR3->VAR88);
                    FUN22(&VAR3->VAR88, &VAR87);
                }
                if (VAR3->VAR23 >= 0)
                {
                    FUN21(&VAR3->VAR89);
                    FUN22(&VAR3->VAR89, &VAR87);
                }
                if (VAR3->VAR85 & VAR90)
                {
                    FUN23(VAR3, (double)VAR52);
                }
                else
                {
                    FUN23(VAR3, VAR80 / (double)VAR56);
                }
            }
            VAR3->VAR79 = 0;
            VAR13 = 0;
            if (VAR3->VAR74)
                FUN24(VAR3);
        }
        if (VAR3->VAR91)
        {
            FUN25(VAR5);
            VAR3->VAR91 = 0;
        }
        if (VAR72 < 1 && (VAR3->VAR86.VAR92 + VAR3->VAR89.VAR92 + VAR3->VAR88.VAR92 > VAR93 || ((VAR3->VAR86.VAR94 > VAR95 || VAR3->VAR25 < 0 || VAR3->VAR86.VAR73) && (VAR3->VAR89.VAR94 > VAR95 || VAR3->VAR23 < 0 || VAR3->VAR89.VAR73) && (VAR3->VAR88.VAR94 > VAR95 || VAR3->VAR27 < 0 || VAR3->VAR88.VAR73))))
        {
            FUN26(VAR21);
            FUN27(VAR3->VAR96, VAR21, 10);
            FUN28(VAR21);
            continue;
        }
        if (VAR13)
        {
            if (VAR3->VAR23 >= 0)
            {
                FUN29(VAR12);
                VAR12->VAR97 = NULL;
                VAR12->VAR92 = 0;
                VAR12->VAR98 = VAR3->VAR23;
                FUN22(&VAR3->VAR89, VAR12);
            }
            if (VAR3->VAR25 >= 0 && VAR3->VAR99->VAR100->VAR100->VAR101 & VAR102)
            {
                FUN29(VAR12);
                VAR12->VAR97 = NULL;
                VAR12->VAR92 = 0;
                VAR12->VAR98 = VAR3->VAR25;
                FUN22(&VAR3->VAR86, VAR12);
            }
            FUN20(10);
            if (VAR3->VAR86.VAR92 + VAR3->VAR89.VAR92 + VAR3->VAR88.VAR92 == 0)
            {
                if (VAR103 != 1 && (!VAR103 || --VAR103))
                {
                    FUN30(VAR3, VAR51 != VAR52 ? VAR51 : 0, 0, 0);
                }
                else if (VAR104)
                {
                    VAR8 = VAR105;
                    goto VAR35;
                }
            }
            VAR13 = 0;
            continue;
        }
        VAR8 = FUN31(VAR5, VAR12);
        if (VAR8 < 0)
        {
            if (VAR8 == VAR105 || FUN32(VAR5->VAR46))
                VAR13 = 1;
            if (VAR5->VAR46 && VAR5->VAR46->VAR106)
                break;
            FUN26(VAR21);
            FUN27(VAR3->VAR96, VAR21, 10);
            FUN28(VAR21);
            continue;
        }
        VAR14 = VAR107 == VAR52 || (VAR12->VAR108 - VAR5->VAR58[VAR12->VAR98]->VAR51) * FUN33(VAR5->VAR58[VAR12->VAR98]->VAR109) - (double)(VAR51 != VAR52 ? VAR51 : 0) / 1000000 <= ((double)VAR107 / 1000000);
        if (VAR12->VAR98 == VAR3->VAR25 && VAR14)
        {
            FUN22(&VAR3->VAR86, VAR12);
        }
        else if (VAR12->VAR98 == VAR3->VAR23 && VAR14)
        {
            FUN22(&VAR3->VAR89, VAR12);
        }
        else if (VAR12->VAR98 == VAR3->VAR27 && VAR14)
        {
            FUN22(&VAR3->VAR88, VAR12);
        }
        else
        {
            FUN34(VAR12);
        }
    }
    while (!VAR3->VAR73)
    {
        FUN20(100);
    }
    VAR8 = 0;
VAR35:
    if (VAR3->VAR25 >= 0)
        FUN35(VAR3, VAR3->VAR25);
    if (VAR3->VAR23 >= 0)
        FUN35(VAR3, VAR3->VAR23);
    if (VAR3->VAR27 >= 0)
        FUN35(VAR3, VAR3->VAR27);
    if (VAR3->VAR5)
    {
        FUN36(&VAR3->VAR5);
    }
    if (VAR8 != 0)
    {
        SDL_Event VAR110;
        VAR110.VAR111 = VAR112;
        VAR110.VAR113.VAR114 = VAR3;
        FUN37(&VAR110);
    }
    FUN38(VAR21);
    return 0;
}