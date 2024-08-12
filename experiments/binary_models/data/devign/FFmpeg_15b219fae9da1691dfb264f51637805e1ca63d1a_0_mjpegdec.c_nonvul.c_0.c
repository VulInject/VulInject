int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15;
    const int VAR16 = VAR2->VAR17 ? 1 : 8;
    int VAR18, VAR19;
    VAR7 = FUN2(&VAR2->VAR20, 16);
    VAR8 = FUN2(&VAR2->VAR20, 8);
    if (VAR8 == 0 || VAR8 > VAR21)
    {
        FUN3(VAR2->VAR22, VAR23, "", VAR8);
        return -1;
    }
    if (VAR7 != 6 + 2 * VAR8)
    {
        FUN3(VAR2->VAR22, VAR23, "", VAR7);
        return -1;
    }
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
    {
        VAR15 = FUN2(&VAR2->VAR20, 8) - 1;
        FUN3(VAR2->VAR22, VAR24, "", VAR15);
        for (VAR14 = 0; VAR14 < VAR2->VAR8; VAR14++)
            if (VAR15 == VAR2->VAR25[VAR14])
                break;
        if (VAR14 == VAR2->VAR8)
        {
            FUN3(VAR2->VAR22, VAR23, "", VAR14);
            return -1;
        }
        if (VAR2->VAR22->VAR26 == FUN4('', '', '', '') && VAR8 == 3 && VAR2->VAR8 == 3 && VAR9)
            VAR14 = 3 - VAR9;
        if (VAR8 == 3 && VAR2->VAR8 == 3 && VAR2->VAR22->VAR27 == VAR28)
            VAR14 = (VAR9 + 2) % 3;
        VAR2->VAR29[VAR9] = VAR14;
        VAR2->VAR30[VAR9] = VAR2->VAR31[VAR14] * VAR2->VAR32[VAR14];
        VAR2->VAR33[VAR9] = VAR2->VAR31[VAR14];
        VAR2->VAR34[VAR9] = VAR2->VAR32[VAR14];
        VAR2->VAR35[VAR9] = FUN2(&VAR2->VAR20, 4);
        VAR2->VAR36[VAR9] = FUN2(&VAR2->VAR20, 4);
        if (VAR2->VAR35[VAR9] < 0 || VAR2->VAR36[VAR9] < 0 || VAR2->VAR35[VAR9] >= 4 || VAR2->VAR36[VAR9] >= 4)
            goto VAR37;
        if (!VAR2->VAR38[0][VAR2->VAR35[VAR9]].VAR39 || !(VAR2->VAR40 ? VAR2->VAR38[2][VAR2->VAR36[0]].VAR39 : VAR2->VAR38[1][VAR2->VAR36[VAR9]].VAR39))
            goto VAR37;
    }
    VAR12 = FUN2(&VAR2->VAR20, 8);
    VAR18 = FUN2(&VAR2->VAR20, 8);
    if (VAR2->VAR22->VAR26 != FUN5(""))
    {
        VAR19 = FUN2(&VAR2->VAR20, 4);
        VAR13 = FUN2(&VAR2->VAR20, 4);
    }
    else
        VAR19 = VAR13 = 0;
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        VAR2->VAR41[VAR9] = 1024;
    if (VAR8 > 1)
    {
        VAR2->VAR42 = (VAR2->VAR43 + VAR2->VAR44 * VAR16 - 1) / (VAR2->VAR44 * VAR16);
        VAR2->VAR45 = (VAR2->VAR46 + VAR2->VAR47 * VAR16 - 1) / (VAR2->VAR47 * VAR16);
    }
    else if (!VAR2->VAR48)
    {
        VAR10 = VAR2->VAR44 / VAR2->VAR33[0];
        VAR11 = VAR2->VAR47 / VAR2->VAR34[0];
        VAR2->VAR42 = (VAR2->VAR43 + VAR10 * VAR16 - 1) / (VAR10 * VAR16);
        VAR2->VAR45 = (VAR2->VAR46 + VAR11 * VAR16 - 1) / (VAR11 * VAR16);
        VAR2->VAR30[0] = 1;
        VAR2->VAR33[0] = 1;
        VAR2->VAR34[0] = 1;
    }
    if (VAR2->VAR22->VAR49 & VAR50)
        FUN3(VAR2->VAR22, VAR24, "", VAR2->VAR17 ? "" : "", VAR2->VAR51 ? "" : "", VAR12, VAR13, VAR18, VAR2->VAR52, VAR2->VAR53, VAR2->VAR54 ? "" : (VAR2->VAR55 ? "" : ""), VAR8);
    for (VAR9 = VAR2->VAR53; VAR9 > 0; VAR9--)
        FUN6(&VAR2->VAR20, 8);
    if (VAR2->VAR17)
    {
        FUN7(VAR2->VAR56 == &VAR2->VAR57);
        if (VAR58 && VAR2->VAR48)
        {
            if (FUN8(VAR2, VAR12, VAR13, VAR18) < 0)
                return -1;
        }
        else
        {
            if (VAR2->VAR51)
            {
                if (FUN9(VAR2, VAR8, VAR12, VAR13) < 0)
                    return -1;
            }
            else
            {
                if (FUN10(VAR2, VAR12, VAR13) < 0)
                    return -1;
            }
        }
    }
    else
    {
        if (VAR2->VAR40 && VAR12)
        {
            FUN7(VAR2->VAR56 == &VAR2->VAR57);
            if (FUN11(VAR2, VAR12, VAR18, VAR19, VAR13) < 0)
                return -1;
        }
        else
        {
            if (FUN12(VAR2, VAR8, VAR19, VAR13, VAR4, VAR6) < 0)
                return -1;
        }
    }
    if (VAR2->VAR59)
    {
        VAR3 *VAR60 = VAR2->VAR56->VAR61[2];
        for (VAR9 = 0; VAR9 < VAR2->VAR46 / 2; VAR9++)
        {
            for (VAR14 = VAR2->VAR43 - 1; VAR14; VAR14--)
                VAR60[VAR14] = (VAR60[VAR14 / 2] + VAR60[(VAR14 + 1) / 2]) >> 1;
            VAR60 += VAR2->VAR62[2];
        }
    }
    else if (VAR2->VAR63)
    {
        VAR3 *VAR64 = &((VAR3 *)VAR2->VAR56->VAR61[2])[(VAR2->VAR46 - 1) * VAR2->VAR62[2]];
        for (VAR9 = VAR2->VAR46 - 1; VAR9; VAR9--)
        {
            VAR3 *VAR65 = &((VAR3 *)VAR2->VAR56->VAR61[2])[VAR9 / 2 * VAR2->VAR62[2]];
            VAR3 *VAR66 = &((VAR3 *)VAR2->VAR56->VAR61[2])[(VAR9 + 1) / 2 * VAR2->VAR62[2]];
            if (VAR65 == VAR66)
            {
                memcpy(VAR64, VAR65, VAR2->VAR43);
            }
            else
            {
                for (VAR14 = 0; VAR14 < VAR2->VAR43; VAR14++)
                    VAR64[VAR14] = (VAR65[VAR14] + VAR66[VAR14]) >> 1;
            }
            VAR64 -= VAR2->VAR62[2];
        }
    }
    FUN13();
    return 0;
VAR37:
    FUN3(VAR2->VAR22, VAR23, "");
    return -1;
}
static int FUN14(VAR1 *VAR2)
{
    if (FUN2(&VAR2->VAR20, 16) != 4)
        return -1;
    VAR2->VAR67 = FUN2(&VAR2->VAR20, 16);
    VAR2->VAR68 = 0;
    FUN3(VAR2->VAR22, VAR24, "", VAR2->VAR67);
    return 0;
}
static int FUN15(VAR1 *VAR2)
{
    int VAR7, VAR15, VAR9;
    VAR7 = FUN2(&VAR2->VAR20, 16);
    if (VAR7 < 5)
        return -1;
    if (8 * VAR7 + FUN16(&VAR2->VAR20) > VAR2->VAR20.VAR69)
        return -1;
    VAR15 = FUN17(&VAR2->VAR20, 32);
    VAR15 = FUN18(VAR15);
    VAR7 -= 6;
    if (VAR2->VAR22->VAR49 & VAR70)
    {
        FUN3(VAR2->VAR22, VAR24, "", VAR15);
    }
    if (VAR15 == FUN5(""))
    {
        VAR2->VAR71 = 1;
        VAR9 = FUN2(&VAR2->VAR20, 8);
        VAR7--;
        FUN3(VAR2->VAR22, VAR24, "", VAR9);
        FUN6(&VAR2->VAR20, 8);
        FUN6(&VAR2->VAR20, 32);
        FUN6(&VAR2->VAR20, 32);
        VAR7 -= 10;
        goto VAR72;
    }
    if (VAR15 == FUN5(""))
    {
        int VAR73, VAR74, VAR75, VAR76;
        FUN6(&VAR2->VAR20, 8);
        VAR75 = FUN2(&VAR2->VAR20, 8);
        VAR76 = FUN2(&VAR2->VAR20, 8);
        FUN6(&VAR2->VAR20, 8);
        VAR2->VAR22->VAR77.VAR78 = FUN2(&VAR2->VAR20, 16);
        VAR2->VAR22->VAR77.VAR79 = FUN2(&VAR2->VAR20, 16);
        if (VAR2->VAR22->VAR49 & VAR50)
            FUN3(VAR2->VAR22, VAR80, "", VAR75, VAR76, VAR2->VAR22->VAR77.VAR78, VAR2->VAR22->VAR77.VAR79);
        VAR73 = FUN2(&VAR2->VAR20, 8);
        VAR74 = FUN2(&VAR2->VAR20, 8);
        if (VAR73 && VAR74)
        {
            if (VAR7 - 10 - (VAR73 * VAR74 * 3) > 0)
                VAR7 -= VAR73 * VAR74 * 3;
        }
        VAR7 -= 10;
        goto VAR72;
    }
    if (VAR15 == FUN5("") && (FUN2(&VAR2->VAR20, 8) == ''))
    {
        if (VAR2->VAR22->VAR49 & VAR50)
            FUN3(VAR2->VAR22, VAR80, "");
        FUN6(&VAR2->VAR20, 16);
        FUN6(&VAR2->VAR20, 16);
        FUN6(&VAR2->VAR20, 16);
        FUN6(&VAR2->VAR20, 8);
        VAR7 -= 7;
        goto VAR72;
    }
    if (VAR15 == FUN5(""))
    {
        if (VAR2->VAR22->VAR49 & VAR50)
            FUN3(VAR2->VAR22, VAR80, "");
        FUN6(&VAR2->VAR20, 16);
        FUN6(&VAR2->VAR20, 16);
        FUN6(&VAR2->VAR20, 16);
        FUN6(&VAR2->VAR20, 16);
        switch (FUN2(&VAR2->VAR20, 8))
        {
        case 1:
            VAR2->VAR51 = 1;
            VAR2->VAR54 = 0;
            break;
        case 2:
            VAR2->VAR51 = 1;
            VAR2->VAR54 = 1;
            break;
        default:
            FUN3(VAR2->VAR22, VAR23, "");
        }
        VAR7 -= 9;
        goto VAR72;
    }
    if ((VAR2->VAR81 == VAR82) && (VAR7 > (0x28 - 8)))
    {
        VAR15 = FUN17(&VAR2->VAR20, 32);
        VAR15 = FUN18(VAR15);
        VAR7 -= 4;
        if (VAR15 == FUN5(""))
        {
            FUN6(&VAR2->VAR20, 32);
            FUN6(&VAR2->VAR20, 32);
            FUN6(&VAR2->VAR20, 32);
            FUN6(&VAR2->VAR20, 32);
            FUN6(&VAR2->VAR20, 32);
            FUN6(&VAR2->VAR20, 32);
            FUN6(&VAR2->VAR20, 32);
            FUN6(&VAR2->VAR20, 32);
            if (VAR2->VAR22->VAR49 & VAR50)
                FUN3(VAR2->VAR22, VAR80, "");
        }
    }
VAR72:
    if (VAR7 < 0)
        FUN3(VAR2->VAR22, VAR23, "");
    while (--VAR7 > 0)
        FUN6(&VAR2->VAR20, 8);
    return 0;
}
static int FUN19(VAR1 *VAR2)
{
    int VAR7 = FUN2(&VAR2->VAR20, 16);
    if (VAR7 >= 2 && 8 * VAR7 - 16 + FUN16(&VAR2->VAR20) <= VAR2->VAR20.VAR69)
    {
        char *VAR83 = FUN20(VAR7 - 1);
        if (VAR83)
        {
            int VAR9;
            for (VAR9 = 0; VAR9 < VAR7 - 2; VAR9++)
                VAR83[VAR9] = FUN2(&VAR2->VAR20, 8);
            if (VAR9 > 0 && VAR83[VAR9 - 1] == '')
                VAR83[VAR9 - 1] = 0;
            else
                VAR83[VAR9] = 0;
            if (VAR2->VAR22->VAR49 & VAR50)
                FUN3(VAR2->VAR22, VAR80, "", VAR83);
            if (!strcmp(VAR83, ""))
            {
                VAR2->VAR71 = 1;
            }
            else if (!strcmp(VAR83, ""))
            {
                VAR2->VAR84 = 1;
            }
            else if ((VAR7 > 20 && !FUN21(VAR83, "", 21)) || (VAR7 > 19 && !FUN21(VAR83, "", 20)))
            {
                VAR2->VAR85 = 1;
            }
            FUN22(VAR83);
        }
    }
    return 0;
}
static int FUN23(const VAR3 **VAR86, const VAR3 *VAR87)
{
    const VAR3 *VAR88;
    unsigned int VAR11, VAR76;
    int VAR89;
    int VAR90 = 0;
    VAR88 = *VAR86;
    while (VAR88 < VAR87)
    {
        VAR11 = *VAR88++;
        VAR76 = *VAR88;
        if ((VAR11 == 0xff) && (VAR76 >= 0xc0) && (VAR76 <= 0xfe) && VAR88 < VAR87)
        {
            VAR89 = *VAR88++;
            goto VAR91;
        }
        VAR90++;
    }
    VAR89 = -1;
VAR91:
    FUN24(NULL, "", VAR90);
    *VAR86 = VAR88;
    return VAR89;
}
int FUN25(VAR1 *VAR2, const VAR3 **VAR88, const VAR3 *VAR87, const VAR3 **VAR92, int *VAR93)
{
    int VAR81;
    VAR81 = FUN23(VAR88, VAR87);
    if ((VAR87 - *VAR88) > VAR2->VAR94)
    {
        FUN22(VAR2->VAR95);
        VAR2->VAR94 = VAR87 - *VAR88;
        VAR2->VAR95 = FUN20(VAR2->VAR94 + VAR96);
        FUN3(VAR2->VAR22, VAR24, "", VAR2->VAR94);
    }
    if (VAR81 == VAR97 && !VAR2->VAR48)
    {
        const VAR3 *VAR98 = *VAR88;
        VAR3 *VAR64 = VAR2->VAR95;
        while (VAR98 < VAR87)
        {
            uint8_t VAR99 = *(VAR98++);
            *(VAR64++) = VAR99;
            if (VAR2->VAR22->VAR100 != VAR101)
            {
                if (VAR99 == 0xff)
                {
                    while (VAR98 < VAR87 && VAR99 == 0xff)
                        VAR99 = *(VAR98++);
                    if (VAR99 >= 0xd0 && VAR99 <= 0xd7)
                        *(VAR64++) = VAR99;
                    else if (VAR99)
                        break;
                }
            }
        }
        *VAR92 = VAR2->VAR95;
        *VAR93 = VAR64 - VAR2->VAR95;
        FUN3(VAR2->VAR22, VAR24, "", (VAR87 - *VAR88) - (VAR64 - VAR2->VAR95));
    }
    else if (VAR81 == VAR97 && VAR2->VAR48)
    {
        const VAR3 *VAR98 = *VAR88;
        VAR3 *VAR64 = VAR2->VAR95;
        int VAR102 = 0;
        int VAR103 = 0, VAR104 = 0;
        PutBitContext VAR105;
        VAR2->VAR106++;
        while (VAR98 + VAR103 < VAR87)
        {
            uint8_t VAR99 = VAR98[VAR103++];
            if (VAR99 == 0xff)
            {
                while ((VAR98 + VAR103 < VAR87) && VAR99 == 0xff)
                    VAR99 = VAR98[VAR103++];
                if (VAR99 & 0x80)
                {
                    VAR103 -= 2;
                    break;
                }
            }
        }
        VAR102 = VAR103 * 8;
        FUN26(&VAR105, VAR64, VAR103);
        while (VAR104 < VAR103)
        {
            uint8_t VAR99 = VAR98[VAR104++];
            FUN27(&VAR105, 8, VAR99);
            if (VAR99 == 0xFF)
            {
                VAR99 = VAR98[VAR104++];
                FUN27(&VAR105, 7, VAR99);
                VAR102--;
            }
        }
        FUN28(&VAR105);
        *VAR92 = VAR64;
        *VAR93 = (VAR102 + 7) >> 3;
    }
    else
    {
        *VAR92 = *VAR88;
        *VAR93 = VAR87 - *VAR88;
    }
    return VAR81;
}
int FUN29(VAR107 *VAR22, void *VAR61, int *VAR108, VAR109 *VAR110)
{
    const VAR3 *VAR111 = VAR110->VAR61;
    int VAR112 = VAR110->VAR113;
    VAR1 *VAR2 = VAR22->VAR114;
    const VAR3 *VAR87, *VAR88;
    const VAR3 *VAR92;
    int VAR93;
    int VAR81;
    VAR5 *VAR57 = VAR61;
    VAR2->VAR115 = 0;
    VAR88 = VAR111;
    VAR87 = VAR111 + VAR112;
    while (VAR88 < VAR87)
    {
        VAR81 = FUN25(VAR2, &VAR88, VAR87, &VAR92, &VAR93);
        {
            if (VAR81 < 0)
            {
                goto VAR116;
            }
            else
            {
                FUN3(VAR22, VAR24, "", VAR81, VAR87 - VAR88);
                FUN30(&VAR2->VAR20, VAR92, VAR93 * 8);
                VAR2->VAR81 = VAR81;
                if (VAR2->VAR22->VAR49 & VAR70)
                {
                    FUN3(VAR22, VAR24, "", VAR81);
                }
                if (VAR81 >= 0xd0 && VAR81 <= 0xd7)
                {
                    FUN3(VAR22, VAR24, "", VAR81 & 0x0f);
                }
                else if (VAR81 >= VAR117 && VAR81 <= VAR118)
                {
                    FUN15(VAR2);
                }
                else if (VAR81 == VAR119)
                {
                    FUN19(VAR2);
                }
                switch (VAR81)
                {
                case VAR120:
                    VAR2->VAR67 = 0;
                    VAR2->VAR68 = 0;
                    break;
                case VAR121:
                    FUN31(VAR2);
                    break;
                case VAR122:
                    if (FUN32(VAR2) < 0)
                    {
                        FUN3(VAR22, VAR23, "");
                        return -1;
                    }
                    break;
                case VAR123:
                case VAR124:
                    VAR2->VAR17 = 0;
                    VAR2->VAR48 = 0;
                    VAR2->VAR40 = 0;
                    if (FUN33(VAR2) < 0)
                        return -1;
                    break;
                case VAR125:
                    VAR2->VAR17 = 0;
                    VAR2->VAR48 = 0;
                    VAR2->VAR40 = 1;
                    if (FUN33(VAR2) < 0)
                        return -1;
                    break;
                case VAR126:
                    VAR2->VAR17 = 1;
                    VAR2->VAR48 = 0;
                    VAR2->VAR40 = 0;
                    if (FUN33(VAR2) < 0)
                        return -1;
                    break;
                case VAR127:
                    VAR2->VAR17 = 1;
                    VAR2->VAR48 = 1;
                    VAR2->VAR40 = 0;
                    if (FUN33(VAR2) < 0)
                        return -1;
                    break;
                case VAR128:
                    if (!VAR58 || FUN34(VAR2) < 0)
                        return -1;
                    break;
                case VAR129:
                VAR130:
                    VAR2->VAR106 = 0;
                    if (!VAR2->VAR115)
                    {
                        FUN3(VAR22, VAR131, "");
                        break;
                    }
                    if (VAR2->VAR132)
                    {
                        VAR2->VAR133 ^= 1;
                        if (VAR2->VAR133 == !VAR2->VAR134)
                            break;
                    }
                    *VAR57 = *VAR2->VAR56;
                    *VAR108 = sizeof(VAR5);
                    if (!VAR2->VAR17)
                    {
                        VAR57->VAR135 = FUN35(VAR2->VAR136[0], VAR2->VAR136[1], VAR2->VAR136[2]);
                        VAR57->VAR137 = 0;
                        VAR57->VAR138 = VAR2->VAR138;
                        memset(VAR57->VAR138, VAR57->VAR135, (VAR2->VAR43 + 15) / 16);
                        if (VAR22->VAR49 & VAR139)
                            FUN3(VAR22, VAR24, "", VAR57->VAR135);
                        VAR57->VAR135 *= VAR140;
                    }
                    goto VAR116;
                case VAR97:
                    if (!VAR2->VAR115)
                    {
                        FUN3(VAR22, VAR131, "");
                        break;
                    }
                    if (FUN1(VAR2, NULL, NULL) < 0 && (VAR22->VAR141 & VAR142))
                        return VAR143;
                    break;
                case VAR144:
                    FUN14(VAR2);
                    break;
                case VAR145:
                case VAR146:
                case VAR147:
                case VAR148:
                case VAR149:
                case VAR150:
                case VAR151:
                case VAR152:
                case VAR153:
                case VAR154:
                    FUN3(VAR22, VAR23, "", VAR81);
                    break;
                }
                VAR88 += (FUN16(&VAR2->VAR20) + 7) / 8;
                FUN3(VAR22, VAR24, "", (FUN16(&VAR2->VAR20) + 7) / 8, FUN16(&VAR2->VAR20));
            }
        }
    }
    if (VAR2->VAR115)
    {
        FUN3(VAR22, VAR131, "");
        goto VAR130;
    }
    FUN3(VAR22, VAR155, "");
    return -1;
VAR116:
    FUN3(VAR22, VAR24, "", VAR87 - VAR88);
    return VAR88 - VAR111;
}
av_cold int FUN36(VAR107 *VAR22)
{
    VAR1 *VAR2 = VAR22->VAR114;
    int VAR9, VAR156;
    if (VAR2->VAR56 && VAR2->VAR56->VAR61[0])
        VAR22->FUN37(VAR22, VAR2->VAR56);
    FUN22(VAR2->VAR95);
    FUN22(VAR2->VAR138);
    FUN38(&VAR2->VAR157);
    VAR2->VAR158 = 0;
    for (VAR9 = 0; VAR9 < 3; VAR9++)
    {
        for (VAR156 = 0; VAR156 < 4; VAR156++)
            FUN39(&VAR2->VAR38[VAR9][VAR156]);
    }
    for (VAR9 = 0; VAR9 < VAR21; VAR9++)
    {
        FUN38(&VAR2->VAR159[VAR9]);
        FUN38(&VAR2->VAR160[VAR9]);
    }
    return 0;
}
static const AVOption VAR161[] = {
    {"", "", FUN40(VAR162), VAR163, {0}, 0, 1, VAR164},
    {NULL},
};
static const AVClass VAR165 = {
    .VAR166 = "",
    .VAR167 = VAR168,
    .VAR169 = VAR161,
    .VAR170 = VAR171,
};
AVCodec VAR172 = {
    .VAR173 = "",
    .VAR174 = VAR175,
    .VAR15 = VAR176,
    .VAR177 = sizeof(VAR1),
    .VAR178 = VAR179,
    .close = VAR180,
    .VAR181 = VAR182,
    .VAR183 = VAR184,
    .VAR185 = 3,
    .VAR186 = FUN41(""),
    .VAR187 = &VAR165,
};
AVCodec VAR188 = {
    .VAR173 = "",
    .VAR174 = VAR175,
    .VAR15 = VAR101,
    .VAR177 = sizeof(VAR1),
    .VAR178 = VAR179,
    .close = VAR180,
    .VAR181 = VAR182,
    .VAR183 = VAR184,
    .VAR185 = 3,
    .VAR186 = FUN41(""),
};