static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, const VAR7 *VAR8)
{
    VAR9 *VAR10;
    VAR4 *VAR11;
    int VAR12 = 0, VAR13;
    int VAR14;
    void *VAR15 = NULL;
    static unsigned int VAR16 = 0;
    AVSubtitle VAR17, *VAR18;
    int64_t VAR19 = VAR20;
    int VAR21;
    float VAR22;
    AVPacket VAR23;
    int VAR24 = FUN2(VAR2->VAR25->VAR26->VAR27);
    if (VAR2->VAR28 == VAR20)
        VAR2->VAR28 = VAR2->VAR29;
    if (VAR8 == NULL)
    {
        FUN3(&VAR23);
        VAR23.VAR30 = NULL;
        VAR23.VAR31 = 0;
        goto VAR32;
    }
    else
    {
        VAR23 = *VAR8;
    }
    if (VAR8->VAR33 != VAR20)
        VAR2->VAR28 = VAR2->VAR29 = FUN4(VAR8->VAR33, VAR2->VAR25->VAR34, VAR35);
    if (VAR8->VAR29 != VAR20)
        VAR19 = FUN4(VAR8->VAR29, VAR2->VAR25->VAR34, VAR35);
    while (VAR23.VAR31 > 0 || (!VAR8 && VAR14))
    {
        VAR36 *VAR37, *VAR38;
        int VAR39, VAR40;
        VAR41 *VAR42, *VAR43;
    VAR32:
        VAR2->VAR29 = VAR2->VAR28;
        if (VAR23.VAR31 && VAR23.VAR31 != VAR8->VAR31)
            FUN5(NULL, VAR2->VAR44 ? VAR45 : VAR46, "", VAR8->VAR47);
        VAR2->VAR44 = 1;
        VAR42 = VAR43 = NULL;
        VAR38 = NULL;
        VAR40 = 0;
        VAR37 = VAR23.VAR30;
        VAR39 = VAR23.VAR31;
        VAR18 = NULL;
        if (VAR2->VAR48)
        {
            switch (VAR2->VAR25->VAR26->VAR49)
            {
            case VAR50:
            {
                if (VAR8 && VAR16 < FUN6(VAR8->VAR31 * VAR24, VAR51))
                {
                    VAR16 = FUN6(VAR8->VAR31 * VAR24, VAR51);
                    FUN7(VAR52);
                    VAR52 = FUN8(VAR16);
                }
                VAR40 = VAR16;
                VAR12 = FUN9(VAR2->VAR25->VAR26, VAR52, &VAR40, &VAR23);
                if (VAR12 < 0)
                    return VAR12;
                VAR23.VAR30 += VAR12;
                VAR23.VAR31 -= VAR12;
                VAR39 = VAR12;
                VAR14 = VAR40 > 0;
                if (!VAR14)
                {
                    continue;
                }
                VAR38 = (VAR36 *)VAR52;
                VAR2->VAR28 += ((VAR53)VAR54 / VAR24 * VAR40) / (VAR2->VAR25->VAR26->VAR55 * VAR2->VAR25->VAR26->VAR56);
                break;
            }
            case VAR57:
                VAR40 = (VAR2->VAR25->VAR26->VAR58 * VAR2->VAR25->VAR26->VAR59 * 3) / 2;
                if (!(VAR42 = FUN10()))
                    return FUN11(VAR60);
                VAR23.VAR29 = VAR19;
                VAR23.VAR33 = VAR2->VAR29;
                VAR19 = VAR20;
                VAR12 = FUN12(VAR2->VAR25->VAR26, VAR42, &VAR14, &VAR23);
                VAR22 = VAR61 ? VAR42->VAR22 : 0;
                if (VAR12 < 0)
                    goto VAR62;
                if (!VAR14)
                {
                    FUN13(&VAR42);
                    goto VAR63;
                }
                VAR2->VAR28 = VAR2->VAR29 = FUN14(&VAR2->VAR64, VAR42->VAR19, VAR42->VAR65);
                if (VAR2->VAR25->VAR26->VAR34.VAR66 != 0)
                {
                    int VAR67 = VAR2->VAR25->VAR68 ? VAR2->VAR25->VAR68->VAR69 + 1 : VAR2->VAR25->VAR26->VAR70;
                    VAR2->VAR28 += ((VAR53)VAR54 * VAR2->VAR25->VAR26->VAR34.VAR66 * VAR67) / VAR2->VAR25->VAR26->VAR34.VAR71;
                }
                VAR23.VAR31 = 0;
                VAR15 = NULL;
                FUN15(VAR2, (VAR72 *)VAR42, &VAR15);
                break;
            case VAR73:
                VAR12 = FUN16(VAR2->VAR25->VAR26, &VAR17, &VAR14, &VAR23);
                if (VAR12 < 0)
                    return VAR12;
                if (!VAR14)
                {
                    goto VAR63;
                }
                VAR18 = &VAR17;
                VAR23.VAR31 = 0;
                break;
            default:
                return -1;
            }
        }
        else
        {
            switch (VAR2->VAR25->VAR26->VAR49)
            {
            case VAR50:
                VAR2->VAR28 += ((VAR53)VAR54 * VAR2->VAR25->VAR26->VAR74) / VAR2->VAR25->VAR26->VAR55;
                break;
            case VAR57:
                if (VAR2->VAR25->VAR26->VAR34.VAR66 != 0)
                {
                    int VAR67 = VAR2->VAR25->VAR68 ? VAR2->VAR25->VAR68->VAR69 + 1 : VAR2->VAR25->VAR26->VAR70;
                    VAR2->VAR28 += ((VAR53)VAR54 * VAR2->VAR25->VAR26->VAR34.VAR66 * VAR67) / VAR2->VAR25->VAR26->VAR34.VAR71;
                }
                break;
            }
            VAR23.VAR31 = 0;
        }
        if (VAR2->VAR25->VAR26->VAR49 == VAR50)
        {
            if (VAR75 != 256)
            {
                switch (VAR2->VAR25->VAR26->VAR27)
                {
                case VAR76:
                {
                    VAR36 *VAR77 = VAR52;
                    for (VAR13 = 0; VAR13 < (VAR40 / sizeof(*VAR77)); VAR13++)
                    {
                        int VAR78 = (((*VAR77 - 128) * VAR75 + 128) >> 8) + 128;
                        *VAR77++ = FUN17(VAR78);
                    }
                    break;
                }
                case VAR79:
                {
                    short *VAR77;
                    VAR77 = VAR52;
                    for (VAR13 = 0; VAR13 < (VAR40 / sizeof(short)); VAR13++)
                    {
                        int VAR78 = ((*VAR77) * VAR75 + 128) >> 8;
                        *VAR77++ = FUN18(VAR78);
                    }
                    break;
                }
                case VAR80:
                {
                    VAR81 *VAR77 = VAR52;
                    for (VAR13 = 0; VAR13 < (VAR40 / sizeof(*VAR77)); VAR13++)
                    {
                        int64_t VAR78 = (((VAR53)*VAR77 * VAR75 + 128) >> 8);
                        *VAR77++ = FUN19(VAR78);
                    }
                    break;
                }
                case VAR82:
                {
                    float *VAR77 = VAR52;
                    float VAR83 = VAR75 / 256.VAR84;
                    for (VAR13 = 0; VAR13 < (VAR40 / sizeof(*VAR77)); VAR13++)
                    {
                        *VAR77++ *= VAR83;
                    }
                    break;
                }
                case VAR85:
                {
                    double *VAR77 = VAR52;
                    double VAR83 = VAR75 / 256.;
                    for (VAR13 = 0; VAR13 < (VAR40 / sizeof(*VAR77)); VAR13++)
                    {
                        *VAR77++ *= VAR83;
                    }
                    break;
                }
                default:
                    FUN5(NULL, VAR86, "", FUN20(VAR2->VAR25->VAR26->VAR27));
                    FUN21(1);
                }
            }
        }
        if (VAR87[VAR2->VAR88].VAR89)
        {
            int64_t VAR29 = FUN22(VAR2->VAR29, 1000000, VAR54);
            int64_t VAR90 = FUN23() - VAR2->VAR91;
            if (VAR29 > VAR90)
                FUN24(VAR29 - VAR90);
        }
        for (VAR13 = 0; VAR13 < VAR6; VAR13++)
        {
            VAR92 *VAR93 = &VAR94[VAR5[VAR13].VAR88];
            int VAR74;
            VAR11 = &VAR5[VAR13];
            if (VAR11->VAR95 != VAR3)
                continue;
            if (VAR93->VAR96 && VAR2->VAR29 < VAR93->VAR96)
                continue;
            if (VAR93->VAR97 != VAR98 && FUN25(VAR2->VAR29, VAR35, VAR93->VAR97 + VAR93->VAR96, (VAR99){1, 1000000}) >= 0)
            {
                VAR11->VAR100 = 1;
                continue;
            }
            if (VAR2->VAR25->VAR26->VAR49 == VAR57 && VAR11->VAR101)
            {
                AVRational VAR102;
                if (VAR2->VAR25->VAR103.VAR66)
                    VAR102 = VAR2->VAR25->VAR103;
                else
                    VAR102 = VAR2->VAR25->VAR26->VAR103;
                FUN26(VAR11->VAR101, VAR42, VAR2->VAR29, VAR102);
                if (!(VAR43 = FUN10()))
                {
                    VAR12 = FUN11(VAR60);
                    goto VAR62;
                }
            }
            VAR21 = VAR2->VAR25->VAR26->VAR49 != VAR57 || !VAR11->VAR104 || FUN27(VAR11->VAR104->VAR105[0]);
            while (VAR21)
            {
                AVRational VAR106;
                if (VAR2->VAR25->VAR26->VAR49 == VAR57 && VAR11->VAR104)
                    FUN28(VAR11->VAR104, VAR43, &VAR11->VAR107, &VAR106);
                if (VAR11->VAR107)
                    VAR2->VAR29 = FUN4(VAR11->VAR107->VAR29, VAR106, VAR35);
                VAR43 = VAR42;
                VAR10 = VAR94[VAR11->VAR88].VAR108;
                if (VAR11->VAR109)
                {
                    FUN29(VAR2->VAR48);
                    switch (VAR11->VAR25->VAR26->VAR49)
                    {
                    case VAR50:
                        FUN30(VAR10, VAR11, VAR2, VAR38, VAR40);
                        break;
                    case VAR57:
                        if (VAR11->VAR107->VAR110 && !VAR11->VAR111)
                            VAR11->VAR25->VAR26->VAR103 = VAR11->VAR107->VAR110->VAR112;
                        FUN31(VAR10, VAR11, VAR2, VAR43, &VAR74, VAR61 ? VAR22 : VAR11->VAR25->VAR26->VAR113);
                        if (VAR114 && VAR74)
                            FUN32(VAR10, VAR11, VAR74);
                        break;
                    case VAR73:
                        FUN33(VAR10, VAR11, VAR2, &VAR17, VAR8->VAR29);
                        break;
                    default:
                        FUN34();
                    }
                }
                else
                {
                    AVPacket VAR115;
                    int64_t VAR116 = FUN4(VAR93->VAR96, VAR35, VAR11->VAR25->VAR34);
                    FUN3(&VAR115);
                    if ((!VAR11->VAR117 && !(VAR8->VAR118 & VAR119)) && !VAR120)
                        continue;
                    goto VAR121;
                    if (VAR11->VAR25->VAR26->VAR49 == VAR50)
                        VAR122 += VAR39;
                    else if (VAR11->VAR25->VAR26->VAR49 == VAR57)
                    {
                        VAR123 += VAR39;
                        VAR11->VAR124++;
                    }
                    VAR115.VAR47 = VAR11->VAR125;
                    if (VAR8->VAR29 != VAR20)
                        VAR115.VAR29 = FUN4(VAR8->VAR29, VAR2->VAR25->VAR34, VAR11->VAR25->VAR34) - VAR116;
                    else
                        VAR115.VAR29 = VAR20;
                    if (VAR8->VAR33 == VAR20)
                        VAR115.VAR33 = FUN4(VAR2->VAR29, VAR35, VAR11->VAR25->VAR34);
                    else
                        VAR115.VAR33 = FUN4(VAR8->VAR33, VAR2->VAR25->VAR34, VAR11->VAR25->VAR34);
                    VAR115.VAR33 -= VAR116;
                    VAR115.VAR126 = FUN4(VAR8->VAR126, VAR2->VAR25->VAR34, VAR11->VAR25->VAR34);
                    VAR115.VAR118 = VAR8->VAR118;
                    if (VAR11->VAR25->VAR26->VAR127 != VAR128 && VAR11->VAR25->VAR26->VAR127 != VAR129 && VAR11->VAR25->VAR26->VAR127 != VAR130)
                    {
                        if (FUN35(VAR2->VAR25->VAR68, VAR11->VAR25->VAR26, &VAR115.VAR30, &VAR115.VAR31, VAR37, VAR39, VAR8->VAR118 & VAR119))
                            VAR115.VAR131 = VAR132;
                    }
                    else
                    {
                        VAR115.VAR30 = VAR37;
                        VAR115.VAR31 = VAR39;
                    }
                    FUN36(VAR10, &VAR115, VAR11->VAR25->VAR26, VAR11->VAR133);
                    VAR11->VAR25->VAR26->VAR117++;
                    VAR11->VAR117++;
                    FUN37(&VAR115);
                }
            VAR121:
                VAR21 = (VAR2->VAR25->VAR26->VAR49 == VAR57) && VAR11->VAR104 && FUN27(VAR11->VAR104->VAR105[0]);
                if (VAR11->VAR107)
                    FUN38(VAR11->VAR107);
            }
            FUN13(&VAR43);
        }
    VAR62:
        FUN7(VAR15);
        if (VAR18)
        {
            FUN39(VAR18);
            VAR18 = NULL;
        }
        FUN13(&VAR42);
        if (VAR12 < 0)
            return VAR12;
    }
VAR63:
    return 0;
}