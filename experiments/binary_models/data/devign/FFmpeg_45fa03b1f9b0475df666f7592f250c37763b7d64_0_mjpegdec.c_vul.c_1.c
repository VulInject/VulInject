int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    const VAR9 *VAR16, *VAR17;
    const VAR9 *VAR18;
    int VAR19, VAR20;
    int VAR21;
    int VAR22;
    int VAR23, VAR24;
    int VAR25 = 0;
    int VAR26;
    FUN2(&VAR14->VAR27);
    FUN3(&VAR14->VAR28);
    VAR14->VAR29 = -1;
    VAR17 = VAR10;
    VAR16 = VAR10 + VAR11;
    while (VAR17 < VAR16)
    {
        VAR22 = FUN4(VAR14, &VAR17, VAR16, &VAR18, &VAR21);
        if (VAR22 < 0)
        {
            break;
        }
        else if (VAR21 > VAR30 / 8)
        {
            FUN5(VAR2, VAR31, "", VAR22, VAR21, VAR11);
            return VAR32;
        }
        FUN5(VAR2, VAR33, "" VAR34 "", VAR22, VAR16 - VAR17);
        VAR25 = FUN6(&VAR14->VAR35, VAR18, VAR21);
        if (VAR25 < 0)
        {
            FUN5(VAR2, VAR31, "");
            goto VAR36;
        }
        VAR14->VAR22 = VAR22;
        if (VAR14->VAR2->VAR37 & VAR38)
            FUN5(VAR2, VAR33, "", VAR22);
        if (VAR22 >= 0xd0 && VAR22 <= 0xd7)
            FUN5(VAR2, VAR33, "", VAR22 & 0x0f);
        else if (VAR22 >= VAR39 && VAR22 <= VAR40)
            FUN7(VAR14);
        else if (VAR22 == VAR41)
            FUN8(VAR14);
        VAR25 = -1;
        if (!VAR42 && (VAR22 == VAR43 || VAR22 == VAR44))
        {
            FUN5(VAR2, VAR31, "");
            return FUN9(VAR45);
        }
        if (VAR2->VAR46 == VAR47)
        {
            switch (VAR22)
            {
            case VAR48:
            case VAR49:
            case VAR50:
            case VAR51:
            case VAR43:
            case VAR52:
            case VAR53:
            case VAR54:
                break;
            default:
                goto VAR55;
            }
        }
        switch (VAR22)
        {
        case VAR52:
            VAR14->VAR56 = 0;
            VAR14->VAR57 = 0;
            break;
        case VAR58:
            FUN10(VAR14);
            break;
        case VAR59:
            if ((VAR25 = FUN11(VAR14)) < 0)
            {
                FUN5(VAR2, VAR31, "");
                goto VAR36;
            }
            break;
        case VAR48:
        case VAR49:
            VAR14->VAR60 = 0;
            VAR14->VAR61 = 0;
            VAR14->VAR62 = 0;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR36;
            break;
        case VAR50:
            VAR14->VAR60 = 0;
            VAR14->VAR61 = 0;
            VAR14->VAR62 = 1;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR36;
            break;
        case VAR51:
            VAR14->VAR2->VAR63 |= VAR64;
            VAR14->VAR60 = 1;
            VAR14->VAR61 = 0;
            VAR14->VAR62 = 0;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR36;
            break;
        case VAR43:
            VAR14->VAR2->VAR63 |= VAR64;
            VAR14->VAR60 = 1;
            VAR14->VAR61 = 1;
            VAR14->VAR62 = 0;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR36;
            break;
        case VAR44:
            if (!VAR42 || (VAR25 = FUN13(VAR14)) < 0)
                goto VAR36;
            break;
        case VAR54:
        VAR65:
            VAR14->VAR66 = 0;
            if (!VAR14->VAR67)
            {
                FUN5(VAR2, VAR68, "");
                break;
            }
            if (VAR14->VAR69)
            {
                VAR14->VAR70 ^= 1;
                if (VAR14->VAR70 == !VAR14->VAR71)
                    break;
            }
            if (VAR2->VAR46 == VAR47)
            {
                VAR14->VAR67 = 0;
                goto VAR72;
            }
            if ((VAR25 = FUN14(VAR8, VAR14->VAR73)) < 0)
                return VAR25;
            *VAR4 = 1;
            VAR14->VAR67 = 0;
            if (!VAR14->VAR60)
            {
                int VAR74 = FUN15(VAR14->VAR75[0], VAR14->VAR75[1], VAR14->VAR75[2]);
                int VAR76 = (VAR14->VAR77 + 15) / 16;
                VAR78 *VAR79 = FUN16(VAR76);
                if (VAR79)
                {
                    memset(VAR79->VAR3, VAR74, VAR76);
                    FUN17(VAR3, VAR79, 0, VAR80);
                }
                if (VAR2->VAR37 & VAR81)
                    FUN5(VAR2, VAR33, "", VAR74);
            }
            goto VAR82;
        case VAR53:
            VAR14->VAR66++;
            if (VAR2->VAR46 == VAR47)
                break;
            if ((VAR25 = FUN18(VAR14, NULL, 0, NULL)) < 0 && (VAR2->VAR83 & VAR84))
                goto VAR36;
            break;
        case VAR85:
            FUN19(VAR14);
            break;
        case VAR86:
        case VAR87:
        case VAR88:
        case VAR89:
        case VAR90:
        case VAR91:
        case VAR92:
        case VAR93:
        case VAR94:
        case VAR95:
            FUN5(VAR2, VAR31, "", VAR22);
            break;
        }
    VAR55:
        VAR17 += (FUN20(&VAR14->VAR35) + 7) / 8;
        FUN5(VAR2, VAR33, "", (FUN20(&VAR14->VAR35) + 7) / 8, FUN20(&VAR14->VAR35));
    }
    if (VAR14->VAR67 && VAR14->VAR66)
    {
        FUN5(VAR2, VAR68, "");
        goto VAR65;
    }
    FUN5(VAR2, VAR96, "");
    return VAR32;
VAR36:
    VAR14->VAR67 = 0;
    return VAR25;
VAR82:
    VAR26 = FUN21(VAR14->VAR2->VAR97)->VAR98[0].VAR99 > 1;
    if (FUN22(VAR14->VAR100))
    {
        int VAR101;
        FUN23(VAR2->VAR97 == VAR102 || VAR2->VAR97 == VAR103 || VAR2->VAR97 == VAR104 || VAR2->VAR97 == VAR105 || VAR2->VAR97 == VAR106 || VAR2->VAR97 == VAR107 || VAR2->VAR97 == VAR108 || VAR2->VAR97 == VAR109 || VAR2->VAR97 == VAR110 || VAR2->VAR97 == VAR111 || VAR2->VAR97 == VAR112 || VAR2->VAR97 == VAR113);
        FUN24(VAR14->VAR2->VAR97, &VAR19, &VAR20);
        for (VAR101 = 0; VAR101 < 4; VAR101++)
        {
            VAR9 *VAR114 = VAR14->VAR73->VAR3[VAR101];
            int VAR115 = VAR14->VAR77;
            int VAR116 = VAR14->VAR117;
            if (!VAR14->VAR100[VAR101])
                continue;
            if (VAR101 == 1 || VAR101 == 2)
            {
                VAR115 = FUN25(VAR115, VAR19);
                VAR116 = FUN25(VAR116, VAR20);
            }
            if (VAR14->VAR118[VAR101])
                VAR116 = (VAR116 + 1) >> 1;
            FUN23(VAR115 > 0);
            for (VAR23 = 0; VAR23 < VAR116; VAR23++)
            {
                if (VAR14->VAR100[VAR101] == 1)
                {
                    if (VAR26)
                        ((VAR119 *)VAR114)[VAR115 - 1] = ((VAR119 *)VAR114)[(VAR115 - 1) / 2];
                    else
                        VAR114[VAR115 - 1] = VAR114[(VAR115 - 1) / 2];
                    for (VAR24 = VAR115 - 2; VAR24 > 0; VAR24--)
                    {
                        if (VAR26)
                            ((VAR119 *)VAR114)[VAR24] = (((VAR119 *)VAR114)[VAR24 / 2] + ((VAR119 *)VAR114)[(VAR24 + 1) / 2]) >> 1;
                        else
                            VAR114[VAR24] = (VAR114[VAR24 / 2] + VAR114[(VAR24 + 1) / 2]) >> 1;
                    }
                }
                else if (VAR14->VAR100[VAR101] == 2)
                {
                    if (VAR26)
                    {
                        ((VAR119 *)VAR114)[VAR115 - 1] = ((VAR119 *)VAR114)[(VAR115 - 1) / 3];
                        if (VAR115 > 1)
                            ((VAR119 *)VAR114)[VAR115 - 2] = ((VAR119 *)VAR114)[VAR115 - 1];
                    }
                    else
                    {
                        VAR114[VAR115 - 1] = VAR114[(VAR115 - 1) / 3];
                        if (VAR115 > 1)
                            VAR114[VAR115 - 2] = VAR114[VAR115 - 1];
                    }
                    for (VAR24 = VAR115 - 3; VAR24 > 0; VAR24--)
                    {
                        VAR114[VAR24] = (VAR114[VAR24 / 3] + VAR114[(VAR24 + 1) / 3] + VAR114[(VAR24 + 2) / 3] + 1) / 3;
                    }
                }
                VAR114 += VAR14->VAR120[VAR101];
            }
        }
    }
    if (FUN22(VAR14->VAR118))
    {
        int VAR101;
        FUN23(VAR2->VAR97 == VAR102 || VAR2->VAR97 == VAR103 || VAR2->VAR97 == VAR121 || VAR2->VAR97 == VAR122 || VAR2->VAR97 == VAR107 || VAR2->VAR97 == VAR108 || VAR2->VAR97 == VAR105 || VAR2->VAR97 == VAR104 || VAR2->VAR97 == VAR106 || VAR2->VAR97 == VAR110 || VAR2->VAR97 == VAR111 || VAR2->VAR97 == VAR112 || VAR2->VAR97 == VAR113);
        FUN24(VAR14->VAR2->VAR97, &VAR19, &VAR20);
        for (VAR101 = 0; VAR101 < 4; VAR101++)
        {
            VAR9 *VAR123;
            int VAR115 = VAR14->VAR77;
            int VAR116 = VAR14->VAR117;
            if (!VAR14->VAR118[VAR101])
                continue;
            if (VAR101 == 1 || VAR101 == 2)
            {
                VAR115 = FUN25(VAR115, VAR19);
                VAR116 = FUN25(VAR116, VAR20);
            }
            VAR123 = &((VAR9 *)VAR14->VAR73->VAR3[VAR101])[(VAR116 - 1) * VAR14->VAR120[VAR101]];
            for (VAR23 = VAR116 - 1; VAR23; VAR23--)
            {
                VAR9 *VAR124 = &((VAR9 *)VAR14->VAR73->VAR3[VAR101])[VAR23 / 2 * VAR14->VAR120[VAR101]];
                VAR9 *VAR125 = &((VAR9 *)VAR14->VAR73->VAR3[VAR101])[(VAR23 + 1) / 2 * VAR14->VAR120[VAR101]];
                if (VAR124 == VAR125 || VAR23 == VAR116 - 1)
                {
                    memcpy(VAR123, VAR124, VAR115);
                }
                else
                {
                    for (VAR24 = 0; VAR24 < VAR115; VAR24++)
                        VAR123[VAR24] = (VAR124[VAR24] + VAR125[VAR24]) >> 1;
                }
                VAR123 -= VAR14->VAR120[VAR101];
            }
        }
    }
    if (VAR14->VAR126)
    {
        int VAR127;
        FUN24(VAR14->VAR2->VAR97, &VAR19, &VAR20);
        for (VAR24 = 0; VAR24 < 4; VAR24++)
        {
            VAR9 *VAR123 = VAR14->VAR73->VAR3[VAR24];
            int VAR115 = VAR14->VAR73->VAR77;
            int VAR116 = VAR14->VAR73->VAR117;
            if (VAR24 && VAR24 < 3)
            {
                VAR115 = FUN25(VAR115, VAR19);
                VAR116 = FUN25(VAR116, VAR20);
            }
            if (VAR123)
            {
                VAR9 *VAR128 = VAR123 + VAR14->VAR73->VAR120[VAR24] * (VAR116 - 1);
                for (VAR23 = 0; VAR23 < VAR116 / 2; VAR23++)
                {
                    for (VAR127 = 0; VAR127 < VAR115; VAR127++)
                        FUN26(int, VAR123[VAR127], VAR128[VAR127]);
                    VAR123 += VAR14->VAR73->VAR120[VAR24];
                    VAR128 -= VAR14->VAR73->VAR120[VAR24];
                }
            }
        }
    }
    if (VAR14->VAR29 == 0 && VAR14->VAR2->VAR97 == VAR113)
    {
        int VAR115 = VAR14->VAR73->VAR77;
        int VAR116 = VAR14->VAR73->VAR117;
        for (VAR23 = 0; VAR23 < VAR116; VAR23++)
        {
            int VAR127;
            VAR9 *VAR123[4];
            for (VAR24 = 0; VAR24 < 4; VAR24++)
            {
                VAR123[VAR24] = VAR14->VAR73->VAR3[VAR24] + VAR14->VAR73->VAR120[VAR24] * VAR23;
            }
            for (VAR127 = 0; VAR127 < VAR115; VAR127++)
            {
                int VAR129 = VAR123[3][VAR127];
                int VAR130 = VAR123[0][VAR127] * VAR129;
                int VAR131 = VAR123[1][VAR127] * VAR129;
                int VAR132 = VAR123[2][VAR127] * VAR129;
                VAR123[0][VAR127] = VAR131 * 257 >> 16;
                VAR123[1][VAR127] = VAR132 * 257 >> 16;
                VAR123[2][VAR127] = VAR130 * 257 >> 16;
                VAR123[3][VAR127] = 255;
            }
        }
    }
    if (VAR14->VAR29 == 2 && VAR14->VAR2->VAR97 == VAR106)
    {
        int VAR115 = VAR14->VAR73->VAR77;
        int VAR116 = VAR14->VAR73->VAR117;
        for (VAR23 = 0; VAR23 < VAR116; VAR23++)
        {
            int VAR127;
            VAR9 *VAR123[4];
            for (VAR24 = 0; VAR24 < 4; VAR24++)
            {
                VAR123[VAR24] = VAR14->VAR73->VAR3[VAR24] + VAR14->VAR73->VAR120[VAR24] * VAR23;
            }
            for (VAR127 = 0; VAR127 < VAR115; VAR127++)
            {
                int VAR129 = VAR123[3][VAR127];
                int VAR130 = (255 - VAR123[0][VAR127]) * VAR129;
                int VAR131 = (128 - VAR123[1][VAR127]) * VAR129;
                int VAR132 = (128 - VAR123[2][VAR127]) * VAR129;
                VAR123[0][VAR127] = VAR130 * 257 >> 16;
                VAR123[1][VAR127] = (VAR131 * 257 >> 16) + 128;
                VAR123[2][VAR127] = (VAR132 * 257 >> 16) + 128;
                VAR123[3][VAR127] = 255;
            }
        }
    }
    if (VAR14->VAR28)
    {
        VAR133 *VAR134 = FUN27(VAR3);
        if (VAR134)
        {
            VAR134->VAR135 = VAR14->VAR28->VAR135;
            VAR134->VAR136 = VAR14->VAR28->VAR136;
        }
        FUN3(&VAR14->VAR28);
    }
    FUN28(FUN29(VAR3), VAR14->VAR27, 0);
    FUN2(&VAR14->VAR27);
VAR72:
    FUN5(VAR2, VAR33, "" VAR34 "", VAR16 - VAR17);
    return VAR17 - VAR10;
}