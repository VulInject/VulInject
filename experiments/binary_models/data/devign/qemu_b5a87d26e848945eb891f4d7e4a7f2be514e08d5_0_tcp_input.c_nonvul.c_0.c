FUN1(struct VAR1 *VAR2, int VAR3, struct socket *VAR4)
{
    struct ip VAR5, *VAR6;
    register struct VAR7 *VAR8;
    caddr_t VAR9 = NULL;
    int VAR10 = 0;
    int VAR11, VAR12, VAR13;
    register struct VAR14 *VAR15 = NULL;
    register int VAR16;
    struct socket *VAR17 = NULL;
    int VAR18, VAR19, VAR20, VAR21 = 0;
    int VAR22 = 0;
    u_long VAR23;
    int VAR24;
    struct VAR25 *VAR26;
    VAR27 *VAR28;
    FUN2("");
    FUN3((VAR29, "", (long)VAR2, VAR3, (long)VAR4));
    if (VAR2 == NULL)
    {
        VAR17 = VAR4;
        VAR28 = VAR17->VAR28;
        VAR15 = FUN4(VAR17);
        VAR2 = VAR17->VAR30;
        VAR17->VAR30 = NULL;
        VAR8 = VAR17->VAR31;
        VAR23 = VAR8->VAR32;
        VAR16 = VAR8->VAR33;
        goto VAR34;
    }
    VAR28 = VAR2->VAR28;
    VAR8 = FUN5(VAR2, struct VAR7 *);
    if (VAR3 > sizeof(struct VAR6))
    {
        FUN6(VAR2, (struct VAR1 *)0);
        VAR3 = sizeof(struct VAR6);
    }
    VAR6 = FUN5(VAR2, struct VAR6 *);
    VAR5 = *VAR6;
    VAR5.VAR35 += VAR3;
    VAR12 = ((struct VAR6 *)VAR8)->VAR35;
    FUN7(VAR8)->VAR36 = FUN7(VAR8)->VAR37 = NULL;
    memset(&VAR8->VAR38.VAR39, 0, sizeof(struct VAR40));
    VAR8->VAR41 = 0;
    VAR8->VAR42 = FUN8((VAR43)VAR12);
    VAR11 = sizeof(struct VAR6) + VAR12;
    if (FUN9(VAR2, VAR11))
    {
        goto VAR44;
    }
    VAR13 = VAR8->VAR45 << 2;
    if (VAR13 < sizeof(struct VAR46) || VAR13 > VAR12)
    {
        goto VAR44;
    }
    VAR12 -= VAR13;
    VAR8->VAR42 = VAR12;
    if (VAR13 > sizeof(struct VAR46))
    {
        VAR10 = VAR13 - sizeof(struct VAR46);
        VAR9 = FUN5(VAR2, VAR47) + sizeof(struct VAR7);
    }
    VAR16 = VAR8->VAR33;
    FUN10(VAR8->VAR48);
    FUN10(VAR8->VAR49);
    FUN11(VAR8->VAR32);
    FUN11(VAR8->VAR50);
    VAR2->VAR51 += sizeof(struct VAR7) + VAR13 - sizeof(struct VAR46);
    VAR2->VAR52 -= sizeof(struct VAR7) + VAR13 - sizeof(struct VAR46);
VAR53:
    VAR17 = VAR28->VAR54;
    if (VAR17->VAR55 != VAR8->VAR56 || VAR17->VAR57 != VAR8->VAR58 || VAR17->VAR59.VAR60 != VAR8->VAR61.VAR60 || VAR17->VAR62.VAR60 != VAR8->VAR63.VAR60)
    {
        VAR17 = FUN12(&VAR28->VAR64, VAR8->VAR61, VAR8->VAR58, VAR8->VAR63, VAR8->VAR56);
        if (VAR17)
            VAR28->VAR54 = VAR17;
    }
    if (VAR17 == NULL)
    {
        if (VAR28->VAR65)
        {
            for (VAR26 = VAR28->VAR66; VAR26; VAR26 = VAR26->VAR67)
            {
                if (VAR26->VAR68 == VAR8->VAR56 && VAR8->VAR63.VAR60 == VAR26->VAR69.VAR60)
                {
                    break;
                }
            }
            if (!VAR26)
            {
                goto VAR70;
            }
        }
        if ((VAR16 & (VAR71 | VAR72 | VAR73 | VAR74 | VAR75)) != VAR71)
            goto VAR70;
        if ((VAR17 = FUN13(VAR28)) == NULL)
            goto VAR70;
        if (FUN14(VAR17) < 0)
        {
            free(VAR17);
            goto VAR70;
        }
        FUN15(&VAR17->VAR76, VAR77);
        FUN15(&VAR17->VAR78, VAR79);
        VAR17->VAR59 = VAR8->VAR61;
        VAR17->VAR57 = VAR8->VAR58;
        VAR17->VAR62 = VAR8->VAR63;
        VAR17->VAR55 = VAR8->VAR56;
        if ((VAR17->VAR80 = FUN16(VAR17)) == 0)
            VAR17->VAR80 = ((struct VAR6 *)VAR8)->VAR81;
        VAR15 = FUN4(VAR17);
        VAR15->VAR82 = VAR83;
    }
    if (VAR17->VAR84 & VAR85)
        goto VAR44;
    VAR15 = FUN4(VAR17);
    if (VAR15 == NULL)
        goto VAR70;
    if (VAR15->VAR82 == VAR86)
        goto VAR44;
    VAR23 = VAR8->VAR32;
    VAR15->VAR87 = 0;
    if (VAR88)
        VAR15->VAR89[VAR90] = VAR91;
    else
        VAR15->VAR89[VAR90] = VAR92;
    if (VAR9 && VAR15->VAR82 != VAR83)
        FUN17(VAR15, (VAR93 *)VAR9, VAR10, VAR8);
    if (VAR15->VAR82 == VAR94 && (VAR16 & (VAR71 | VAR72 | VAR73 | VAR74 | VAR75)) == VAR75 && VAR8->VAR48 == VAR15->VAR95 && VAR23 && VAR23 == VAR15->VAR96 && VAR15->VAR97 == VAR15->VAR98)
    {
        if (VAR8->VAR42 == 0)
        {
            if (FUN18(VAR8->VAR49, VAR15->VAR99) && FUN19(VAR8->VAR49, VAR15->VAR98) && VAR15->VAR100 >= VAR15->VAR96)
            {
                if (VAR15->VAR101 && FUN18(VAR8->VAR49, VAR15->VAR102))
                    FUN20(VAR15, VAR15->VAR101);
                VAR19 = VAR8->VAR49 - VAR15->VAR99;
                FUN21(&VAR17->VAR76, VAR19);
                VAR15->VAR99 = VAR8->VAR49;
                FUN22(VAR2);
                if (VAR15->VAR99 == VAR15->VAR98)
                    VAR15->VAR89[VAR103] = 0;
                else if (VAR15->VAR89[VAR104] == 0)
                    VAR15->VAR89[VAR103] = VAR15->VAR105;
                if (VAR17->VAR76.VAR106)
                    (void)FUN23(VAR15);
                return;
            }
        }
        else if (VAR8->VAR49 == VAR15->VAR99 && FUN24(VAR15) && VAR8->VAR42 <= FUN25(&VAR17->VAR78))
        {
            VAR15->VAR95 += VAR8->VAR42;
            if (VAR17->VAR107)
            {
                if (FUN26(VAR17, VAR2))
                    FUN27(VAR17, VAR2);
            }
            else
                FUN27(VAR17, VAR2);
            VAR15->VAR108 |= VAR109;
            FUN23(VAR15);
            return;
        }
    }
    {
        int VAR110;
        VAR110 = FUN25(&VAR17->VAR78);
        if (VAR110 < 0)
            VAR110 = 0;
        VAR15->VAR111 = FUN28(VAR110, (int)(VAR15->VAR112 - VAR15->VAR95));
    }
    switch (VAR15->VAR82)
    {
    case VAR83:
    {
        if (VAR16 & VAR73)
            goto VAR44;
        if (VAR16 & VAR75)
            goto VAR70;
        if ((VAR16 & VAR71) == 0)
            goto VAR44;
        if ((VAR17->VAR62.VAR60 & VAR28->VAR113.VAR60) == VAR28->VAR114.VAR60)
        {
            if (VAR17->VAR62.VAR60 != VAR28->VAR115.VAR60 && VAR17->VAR62.VAR60 != VAR28->VAR116.VAR60)
            {
                for (VAR26 = VAR28->VAR66; VAR26; VAR26 = VAR26->VAR67)
                {
                    if (VAR26->VAR68 == VAR17->VAR55 && VAR17->VAR62.VAR60 == VAR26->VAR69.VAR60)
                    {
                        VAR17->VAR84 |= VAR117;
                        break;
                    }
                }
                if (VAR17->VAR84 & VAR117)
                {
                    goto VAR118;
                }
            }
        }
        if (VAR17->VAR107 & VAR119)
        {
            VAR17->VAR107 &= ~VAR119;
            goto VAR118;
        }
        if ((FUN29(VAR17) == -1) && (VAR120 != VAR121) && (VAR120 != VAR122))
        {
            u_char VAR123 = VAR124;
            FUN30((VAR29, "", VAR120, strerror(VAR120)));
            if (VAR120 == VAR125)
            {
                FUN31(VAR15, VAR8, VAR2, VAR8->VAR48 + 1, (VAR126)0, VAR73 | VAR75);
            }
            else
            {
                if (VAR120 == VAR127)
                    VAR123 = VAR128;
                FUN32(VAR8->VAR48);
                FUN32(VAR8->VAR49);
                FUN33(VAR8->VAR32);
                FUN33(VAR8->VAR50);
                VAR2->VAR51 -= sizeof(struct VAR7) + VAR13 - sizeof(struct VAR46);
                VAR2->VAR52 += sizeof(struct VAR7) + VAR13 - sizeof(struct VAR46);
                *VAR6 = VAR5;
                FUN34(VAR2, VAR129, VAR123, 0, strerror(VAR120));
            }
            FUN35(VAR15);
            FUN22(VAR2);
        }
        else
        {
            VAR17->VAR30 = VAR2;
            VAR17->VAR31 = VAR8;
            VAR15->VAR89[VAR90] = VAR130;
            VAR15->VAR82 = VAR131;
            FUN36(VAR15);
        }
        return;
    VAR34:
        if (VAR17->VAR84 & VAR132)
        {
            VAR15 = FUN35(VAR15);
            goto VAR70;
        }
    VAR118:
        FUN36(VAR15);
        if (VAR9)
            FUN17(VAR15, (VAR93 *)VAR9, VAR10, VAR8);
        if (VAR22)
            VAR15->VAR22 = VAR22;
        else
            VAR15->VAR22 = VAR28->VAR133;
        VAR28->VAR133 += VAR134 / 2;
        VAR15->VAR135 = VAR8->VAR48;
        FUN37(VAR15);
        FUN38(VAR15);
        VAR15->VAR108 |= VAR109;
        VAR15->VAR82 = VAR131;
        VAR15->VAR89[VAR90] = VAR130;
        goto VAR136;
    }
    case VAR137:
        if ((VAR16 & VAR75) && (FUN19(VAR8->VAR49, VAR15->VAR22) || FUN18(VAR8->VAR49, VAR15->VAR98)))
            goto VAR70;
        if (VAR16 & VAR73)
        {
            if (VAR16 & VAR75)
            {
                FUN39(VAR15, 0);
            }
            goto VAR44;
        }
        if ((VAR16 & VAR71) == 0)
            goto VAR44;
        if (VAR16 & VAR75)
        {
            VAR15->VAR99 = VAR8->VAR49;
            if (FUN40(VAR15->VAR97, VAR15->VAR99))
                VAR15->VAR97 = VAR15->VAR99;
        }
        VAR15->VAR89[VAR103] = 0;
        VAR15->VAR135 = VAR8->VAR48;
        FUN38(VAR15);
        VAR15->VAR108 |= VAR109;
        if (VAR16 & VAR75 && FUN18(VAR15->VAR99, VAR15->VAR22))
        {
            FUN41(VAR17);
            VAR15->VAR82 = VAR94;
            (void)FUN42(VAR15, (struct VAR7 *)0, (struct VAR1 *)0);
            if (VAR15->VAR101)
                FUN20(VAR15, VAR15->VAR101);
        }
        else
            VAR15->VAR82 = VAR131;
    VAR136:
        VAR8->VAR48++;
        if (VAR8->VAR42 > VAR15->VAR111)
        {
            VAR18 = VAR8->VAR42 - VAR15->VAR111;
            FUN43(VAR2, -VAR18);
            VAR8->VAR42 = VAR15->VAR111;
            VAR16 &= ~VAR72;
        }
        VAR15->VAR138 = VAR8->VAR48 - 1;
        VAR15->VAR139 = VAR8->VAR48;
        goto VAR140;
    }
    VAR18 = VAR15->VAR95 - VAR8->VAR48;
    if (VAR18 > 0)
    {
        if (VAR16 & VAR71)
        {
            VAR16 &= ~VAR71;
            VAR8->VAR48++;
            if (VAR8->VAR50 > 1)
                VAR8->VAR50--;
            else
                VAR16 &= ~VAR74;
            VAR18--;
        }
        if (VAR18 > VAR8->VAR42 || (VAR18 == VAR8->VAR42 && (VAR16 & VAR72) == 0))
        {
            VAR16 &= ~VAR72;
            VAR15->VAR108 |= VAR109;
            VAR18 = VAR8->VAR42;
        }
        FUN43(VAR2, VAR18);
        VAR8->VAR48 += VAR18;
        VAR8->VAR42 -= VAR18;
        if (VAR8->VAR50 > VAR18)
            VAR8->VAR50 -= VAR18;
        else
        {
            VAR16 &= ~VAR74;
            VAR8->VAR50 = 0;
        }
    }
    if ((VAR17->VAR84 & VAR132) && VAR15->VAR82 > VAR141 && VAR8->VAR42)
    {
        VAR15 = FUN35(VAR15);
        goto VAR70;
    }
    VAR18 = (VAR8->VAR48 + VAR8->VAR42) - (VAR15->VAR95 + VAR15->VAR111);
    if (VAR18 > 0)
    {
        if (VAR18 >= VAR8->VAR42)
        {
            if (VAR16 & VAR71 && VAR15->VAR82 == VAR142 && FUN18(VAR8->VAR48, VAR15->VAR95))
            {
                VAR22 = VAR15->VAR95 + VAR134;
                VAR15 = FUN35(VAR15);
                goto VAR53;
            }
            if (VAR15->VAR111 == 0 && VAR8->VAR48 == VAR15->VAR95)
            {
                VAR15->VAR108 |= VAR109;
            }
            else
            {
                goto VAR143;
            }
        }
        FUN43(VAR2, -VAR18);
        VAR8->VAR42 -= VAR18;
        VAR16 &= ~(VAR144 | VAR72);
    }
    if (VAR16 & VAR73)
        switch (VAR15->VAR82)
        {
        case VAR131:
        case VAR94:
        case VAR145:
        case VAR146:
        case VAR141:
            VAR15->VAR82 = VAR86;
            FUN35(VAR15);
            goto VAR44;
        case VAR147:
        case VAR148:
        case VAR142:
            FUN35(VAR15);
            goto VAR44;
        }
    if (VAR16 & VAR71)
    {
        VAR15 = FUN39(VAR15, 0);
        goto VAR70;
    }
    if ((VAR16 & VAR75) == 0)
        goto VAR44;
    switch (VAR15->VAR82)
    {
    case VAR131:
        if (FUN18(VAR15->VAR99, VAR8->VAR49) || FUN18(VAR8->VAR49, VAR15->VAR98))
            goto VAR70;
        VAR15->VAR82 = VAR94;
        VAR15->VAR99 = VAR8->VAR49;
        if (VAR17->VAR84 & VAR117)
        {
            VAR24 = FUN44(VAR17);
            if (VAR24 == 1)
            {
                FUN41(VAR17);
                VAR17->VAR84 &= ~VAR117;
            }
            else if (VAR24 == 2)
            {
                VAR17->VAR84 &= VAR149;
                VAR17->VAR84 |= VAR132;
            }
            else
            {
                VAR21 = 1;
                VAR15->VAR82 = VAR145;
            }
        }
        else
        {
            FUN41(VAR17);
        }
        (void)FUN42(VAR15, (struct VAR7 *)0, (struct VAR1 *)0);
        VAR15->VAR138 = VAR8->VAR48 - 1;
        goto VAR150;
    case VAR94:
    case VAR145:
    case VAR146:
    case VAR141:
    case VAR147:
    case VAR148:
    case VAR142:
        if (FUN19(VAR8->VAR49, VAR15->VAR99))
        {
            if (VAR8->VAR42 == 0 && VAR23 == VAR15->VAR96)
            {
                FUN30((VAR29, "", (long)VAR2, (long)VAR17));
                if (VAR15->VAR89[VAR103] == 0 || VAR8->VAR49 != VAR15->VAR99)
                    VAR15->VAR151 = 0;
                else if (++VAR15->VAR151 == VAR152)
                {
                    tcp_seq VAR153 = VAR15->VAR97;
                    u_int VAR110 = FUN45(VAR15->VAR96, VAR15->VAR100) / 2 / VAR15->VAR154;
                    if (VAR110 < 2)
                        VAR110 = 2;
                    VAR15->VAR155 = VAR110 * VAR15->VAR154;
                    VAR15->VAR89[VAR103] = 0;
                    VAR15->VAR101 = 0;
                    VAR15->VAR97 = VAR8->VAR49;
                    VAR15->VAR100 = VAR15->VAR154;
                    (void)FUN23(VAR15);
                    VAR15->VAR100 = VAR15->VAR155 + VAR15->VAR154 * VAR15->VAR151;
                    if (FUN18(VAR153, VAR15->VAR97))
                        VAR15->VAR97 = VAR153;
                    goto VAR44;
                }
                else if (VAR15->VAR151 > VAR152)
                {
                    VAR15->VAR100 += VAR15->VAR154;
                    (void)FUN23(VAR15);
                    goto VAR44;
                }
            }
            else
                VAR15->VAR151 = 0;
            break;
        }
    VAR150:
        if (VAR15->VAR151 > VAR152 && VAR15->VAR100 > VAR15->VAR155)
            VAR15->VAR100 = VAR15->VAR155;
        VAR15->VAR151 = 0;
        if (FUN18(VAR8->VAR49, VAR15->VAR98))
        {
            goto VAR143;
        }
        VAR19 = VAR8->VAR49 - VAR15->VAR99;
        if (VAR15->VAR101 && FUN18(VAR8->VAR49, VAR15->VAR102))
            FUN20(VAR15, VAR15->VAR101);
        if (VAR8->VAR49 == VAR15->VAR98)
        {
            VAR15->VAR89[VAR103] = 0;
            VAR21 = 1;
        }
        else if (VAR15->VAR89[VAR104] == 0)
            VAR15->VAR89[VAR103] = VAR15->VAR105;
        {
            register u_int VAR156 = VAR15->VAR100;
            register u_int VAR157 = VAR15->VAR154;
            if (VAR156 > VAR15->VAR155)
                VAR157 = VAR157 * VAR157 / VAR156;
            VAR15->VAR100 = FUN45(VAR156 + VAR157, VAR158 << VAR15->VAR159);
        }
        if (VAR19 > VAR17->VAR76.VAR106)
        {
            VAR15->VAR96 -= VAR17->VAR76.VAR106;
            FUN21(&VAR17->VAR76, (int)VAR17->VAR76.VAR106);
            VAR20 = 1;
        }
        else
        {
            FUN21(&VAR17->VAR76, VAR19);
            VAR15->VAR96 -= VAR19;
            VAR20 = 0;
        }
        VAR15->VAR99 = VAR8->VAR49;
        if (FUN40(VAR15->VAR97, VAR15->VAR99))
            VAR15->VAR97 = VAR15->VAR99;
        switch (VAR15->VAR82)
        {
        case VAR145:
            if (VAR20)
            {
                if (VAR17->VAR84 & VAR160)
                {
                    VAR15->VAR89[VAR161] = VAR162;
                }
                VAR15->VAR82 = VAR146;
            }
            break;
        case VAR147:
            if (VAR20)
            {
                VAR15->VAR82 = VAR142;
                FUN46(VAR15);
                VAR15->VAR89[VAR161] = 2 * VAR163;
            }
            break;
        case VAR148:
            if (VAR20)
            {
                FUN35(VAR15);
                goto VAR44;
            }
            break;
        case VAR142:
            VAR15->VAR89[VAR161] = 2 * VAR163;
            goto VAR143;
        }
    }
VAR140:
    if ((VAR16 & VAR75) && (FUN40(VAR15->VAR138, VAR8->VAR48) || (VAR15->VAR138 == VAR8->VAR48 && (FUN40(VAR15->VAR164, VAR8->VAR49) || (VAR15->VAR164 == VAR8->VAR49 && VAR23 > VAR15->VAR96)))))
    {
        VAR15->VAR96 = VAR23;
        VAR15->VAR138 = VAR8->VAR48;
        VAR15->VAR164 = VAR8->VAR49;
        if (VAR15->VAR96 > VAR15->VAR165)
            VAR15->VAR165 = VAR15->VAR96;
        VAR21 = 1;
    }
    if ((VAR16 & VAR74) && VAR8->VAR50 && FUN47(VAR15->VAR82) == 0)
    {
        if (VAR8->VAR50 + VAR17->VAR78.VAR106 > VAR17->VAR78.VAR166)
        {
            VAR8->VAR50 = 0;
            VAR16 &= ~VAR74;
            goto VAR167;
        }
        if (FUN18(VAR8->VAR48 + VAR8->VAR50, VAR15->VAR139))
        {
            VAR15->VAR139 = VAR8->VAR48 + VAR8->VAR50;
            VAR17->VAR168 = VAR17->VAR78.VAR106 + (VAR15->VAR139 - VAR15->VAR95);
            VAR15->VAR139 = VAR8->VAR48 + VAR8->VAR50;
        }
    }
    else if (FUN18(VAR15->VAR95, VAR15->VAR139))
        VAR15->VAR139 = VAR15->VAR95;
VAR167:
    if (VAR8->VAR42 && (unsigned)VAR8->VAR42 <= 5 && ((struct VAR169 *)VAR8)->VAR170 == (char)27)
    {
        VAR15->VAR108 |= VAR109;
    }
    if ((VAR8->VAR42 || (VAR16 & VAR72)) && FUN47(VAR15->VAR82) == 0)
    {
        FUN48(VAR15, VAR8, VAR2, VAR17, VAR16);
    }
    else
    {
        FUN22(VAR2);
        VAR16 &= ~VAR72;
    }
    if (VAR16 & VAR72)
    {
        if (FUN47(VAR15->VAR82) == 0)
        {
            FUN49(VAR17);
            VAR15->VAR108 |= VAR109;
            VAR15->VAR95++;
        }
        switch (VAR15->VAR82)
        {
        case VAR131:
        case VAR94:
            if (VAR17->VAR107 == VAR171)
                VAR15->VAR82 = VAR148;
            else
                VAR15->VAR82 = VAR141;
            break;
        case VAR145:
            VAR15->VAR82 = VAR147;
            break;
        case VAR146:
            VAR15->VAR82 = VAR142;
            FUN46(VAR15);
            VAR15->VAR89[VAR161] = 2 * VAR163;
            break;
        case VAR142:
            VAR15->VAR89[VAR161] = 2 * VAR163;
            break;
        }
    }
    if (VAR21 || (VAR15->VAR108 & VAR109))
    {
        (void)FUN23(VAR15);
    }
    return;
VAR143:
    if (VAR16 & VAR73)
        goto VAR44;
    FUN22(VAR2);
    VAR15->VAR108 |= VAR109;
    (void)FUN23(VAR15);
    return;
VAR70:
    if (VAR16 & VAR75)
        FUN31(VAR15, VAR8, VAR2, (VAR126)0, VAR8->VAR49, VAR73);
    else
    {
        if (VAR16 & VAR71)
            VAR8->VAR42++;
        FUN31(VAR15, VAR8, VAR2, VAR8->VAR48 + VAR8->VAR42, (VAR126)0, VAR73 | VAR75);
    }
    return;
VAR44:
    FUN22(VAR2);
}