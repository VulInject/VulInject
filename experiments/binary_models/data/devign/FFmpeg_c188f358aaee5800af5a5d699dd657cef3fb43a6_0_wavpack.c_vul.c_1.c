static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    ThreadFrame VAR12 = {.VAR13 = VAR5};
    VAR14 *VAR15;
    GetByteContext VAR16;
    void *VAR17 = NULL, *VAR18 = NULL;
    int VAR19;
    int VAR20 = 0, VAR21 = 0, VAR22 = 0, VAR23 = 0, VAR24 = 0, VAR25 = 0, VAR26 = 0;
    int VAR27, VAR28, VAR29, VAR30, VAR31, VAR32, VAR33;
    int VAR34, VAR35 = 0, VAR36 = 0, VAR37, VAR38 = 0;
    int VAR39;
    if (VAR3 >= VAR10->VAR40 && FUN2(VAR10) < 0)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    VAR15 = VAR10->VAR43[VAR3];
    if (!VAR15)
    {
        FUN3(VAR2, VAR41, "", VAR3);
        return VAR42;
    }
    memset(VAR15->VAR44, 0, VAR45 * sizeof(VAR46));
    memset(VAR15->VAR47, 0, sizeof(VAR15->VAR47));
    VAR15->VAR48 = 0;
    VAR15->and = VAR15->or = VAR15->VAR49 = 0;
    VAR15->VAR50 = 0;
    FUN4(&VAR16, VAR7, VAR8);
    VAR15->VAR51 = FUN5(&VAR16);
    if (VAR15->VAR51 != VAR10->VAR51)
    {
        FUN3(VAR2, VAR41, ""
                                    "",
               VAR10->VAR51, VAR15->VAR51);
        return VAR42;
    }
    VAR15->VAR52 = FUN5(&VAR16);
    VAR34 = FUN6(VAR2->VAR53);
    VAR37 = ((VAR15->VAR52 & 0x03) + 1) << 3;
    VAR39 = (VAR15->VAR52 & VAR54) != VAR54;
    VAR15->VAR55 = !(VAR15->VAR52 & VAR56);
    VAR15->VAR57 = (VAR15->VAR52 & VAR58) ? 0 : VAR15->VAR55;
    VAR15->VAR59 = VAR15->VAR52 & VAR60;
    VAR15->VAR61 = VAR15->VAR52 & VAR62;
    VAR15->VAR63 = VAR15->VAR52 & VAR64;
    VAR15->VAR65 = VAR34 * 8 - VAR37 + ((VAR15->VAR52 >> 13) & 0x1f);
    VAR15->VAR66 = ((1LL << (VAR37 - 1)) - 1);
    VAR15->VAR67 = ((-1LL << (VAR37 - 1)));
    VAR15->VAR68 = FUN5(&VAR16);
    while (FUN7(&VAR16))
    {
        VAR29 = FUN8(&VAR16);
        VAR30 = FUN8(&VAR16);
        if (VAR29 & VAR69)
        {
            VAR30 |= (FUN8(&VAR16)) << 8;
            VAR30 |= (FUN8(&VAR16)) << 16;
        }
        VAR30 <<= 1;
        VAR31 = VAR30;
        if (VAR29 & VAR70)
            VAR30--;
        if (VAR30 < 0)
        {
            FUN3(VAR2, VAR41, "", VAR29, VAR30);
            break;
        }
        if (FUN7(&VAR16) < VAR31)
        {
            FUN3(VAR2, VAR41, "", VAR30);
            break;
        }
        switch (VAR29 & VAR71)
        {
        case VAR72:
            if (VAR30 > VAR45)
            {
                FUN3(VAR2, VAR41, "");
                VAR15->VAR73 = 0;
                FUN9(&VAR16, VAR31);
                continue;
            }
            VAR15->VAR73 = VAR30;
            for (VAR27 = 0; VAR27 < VAR15->VAR73; VAR27++)
            {
                uint8_t VAR74 = FUN8(&VAR16);
                VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR75 = (VAR74 & 0x1F) - 5;
                VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR76 = VAR74 >> 5;
            }
            VAR20 = 1;
            break;
        case VAR77:
            if (!VAR20)
            {
                FUN3(VAR2, VAR41, "");
                continue;
            }
            VAR32 = VAR30 >> VAR15->VAR57;
            if (VAR32 > VAR45 || VAR32 > VAR15->VAR73)
            {
                FUN3(VAR2, VAR41, "");
                FUN9(&VAR16, VAR31);
                continue;
            }
            for (VAR27 = 0; VAR27 < VAR32; VAR27++)
            {
                VAR33 = (VAR78)FUN8(&VAR16);
                VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR79 = VAR33 << 3;
                if (VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR79 > 0)
                    VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR79 += (VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR79 + 64) >> 7;
                if (VAR15->VAR57)
                {
                    VAR33 = (VAR78)FUN8(&VAR16);
                    VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR80 = VAR33 << 3;
                    if (VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR80 > 0)
                        VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR80 += (VAR15->VAR44[VAR15->VAR73 - VAR27 - 1].VAR80 + 64) >> 7;
                }
            }
            VAR21 = 1;
            break;
        case VAR81:
            if (!VAR20)
            {
                FUN3(VAR2, VAR41, "");
                continue;
            }
            VAR33 = 0;
            for (VAR27 = VAR15->VAR73 - 1; (VAR27 >= 0) && (VAR33 < VAR30); VAR27--)
            {
                if (VAR15->VAR44[VAR27].VAR75 > 8)
                {
                    VAR15->VAR44[VAR27].VAR82[0] = FUN10(FUN11(&VAR16));
                    VAR15->VAR44[VAR27].VAR82[1] = FUN10(FUN11(&VAR16));
                    if (VAR15->VAR57)
                    {
                        VAR15->VAR44[VAR27].VAR83[0] = FUN10(FUN11(&VAR16));
                        VAR15->VAR44[VAR27].VAR83[1] = FUN10(FUN11(&VAR16));
                        VAR33 += 4;
                    }
                    VAR33 += 4;
                }
                else if (VAR15->VAR44[VAR27].VAR75 < 0)
                {
                    VAR15->VAR44[VAR27].VAR82[0] = FUN10(FUN11(&VAR16));
                    VAR15->VAR44[VAR27].VAR83[0] = FUN10(FUN11(&VAR16));
                    VAR33 += 4;
                }
                else
                {
                    for (VAR28 = 0; VAR28 < VAR15->VAR44[VAR27].VAR75; VAR28++)
                    {
                        VAR15->VAR44[VAR27].VAR82[VAR28] = FUN10(FUN11(&VAR16));
                        if (VAR15->VAR57)
                        {
                            VAR15->VAR44[VAR27].VAR83[VAR28] = FUN10(FUN11(&VAR16));
                        }
                    }
                    VAR33 += VAR15->VAR44[VAR27].VAR75 * 2 * (VAR15->VAR57 + 1);
                }
            }
            VAR22 = 1;
            break;
        case VAR84:
            if (VAR30 != 6 * (VAR15->VAR57 + 1))
            {
                FUN3(VAR2, VAR41, "", 6 * (VAR15->VAR57 + 1), VAR30);
                FUN9(&VAR16, VAR31);
                continue;
            }
            for (VAR28 = 0; VAR28 <= VAR15->VAR57; VAR28++)
                for (VAR27 = 0; VAR27 < 3; VAR27++)
                {
                    VAR15->VAR47[VAR28].VAR85[VAR27] = FUN10(FUN11(&VAR16));
                }
            VAR23 = 1;
            break;
        case VAR86:
            if (VAR15->VAR63)
            {
                for (VAR27 = 0; VAR27 <= VAR15->VAR57; VAR27++)
                {
                    VAR15->VAR47[VAR27].VAR87 = FUN10(FUN11(&VAR16));
                    VAR30 -= 2;
                }
            }
            for (VAR27 = 0; VAR27 < (VAR15->VAR57 + 1); VAR27++)
            {
                VAR15->VAR47[VAR27].VAR88 = FUN11(&VAR16) << 16;
                VAR30 -= 2;
            }
            if (VAR30 > 0)
            {
                for (VAR27 = 0; VAR27 < (VAR15->VAR57 + 1); VAR27++)
                {
                    VAR15->VAR47[VAR27].VAR89 = FUN10((VAR90)FUN11(&VAR16));
                }
            }
            else
            {
                for (VAR27 = 0; VAR27 < (VAR15->VAR57 + 1); VAR27++)
                    VAR15->VAR47[VAR27].VAR89 = 0;
            }
            VAR26 = 1;
            break;
        case VAR91:
        {
            uint8_t VAR74[4];
            if (VAR30 != 4)
            {
                FUN3(VAR2, VAR41, "", VAR30);
                FUN9(&VAR16, VAR31 - 4);
                continue;
            }
            FUN12(&VAR16, VAR74, 4);
            if (VAR74[0] > 32)
            {
                FUN3(VAR2, VAR41, "", VAR74[0]);
                continue;
            }
            else if (VAR74[0])
            {
                VAR15->VAR48 = VAR74[0];
            }
            else if (VAR74[1])
            {
                VAR15->VAR49 = VAR74[1];
            }
            else if (VAR74[2])
            {
                VAR15->and = VAR15->or = 1;
                VAR15->VAR49 = VAR74[2];
            }
            else if (VAR74[3])
            {
                VAR15->and = 1;
                VAR15->VAR49 = VAR74[3];
            }
            if (VAR15->VAR61 && VAR34 == 4 && VAR15->VAR65 < 8 && VAR15->VAR49 > 8)
            {
                VAR15->VAR65 += 8;
                VAR15->VAR49 -= 8;
                VAR15->VAR66 >>= 8;
                VAR15->VAR67 >>= 8;
            }
            break;
        }
        case VAR92:
            if (VAR30 != 4)
            {
                FUN3(VAR2, VAR41, "", VAR30);
                FUN9(&VAR16, VAR31);
                continue;
            }
            VAR15->VAR93 = FUN8(&VAR16);
            VAR15->VAR94 = FUN8(&VAR16);
            VAR15->VAR95 = FUN8(&VAR16);
            VAR25 = 1;
            FUN9(&VAR16, 1);
            break;
        case VAR96:
            VAR15->VAR97.VAR98 = FUN13(&VAR16);
            VAR15->VAR97.VAR30 = VAR30 * 8;
            if ((VAR19 = FUN14(&VAR15->VAR16, VAR16.VAR99, VAR30)) < 0)
                return VAR19;
            VAR15->VAR100 = VAR30 * 8;
            FUN9(&VAR16, VAR30);
            VAR24 = 1;
            break;
        case VAR101:
            if (VAR30 <= 4)
            {
                FUN3(VAR2, VAR41, "", VAR30);
                FUN9(&VAR16, VAR30);
                continue;
            }
            VAR15->VAR102.VAR98 = FUN13(&VAR16);
            VAR15->VAR102.VAR30 = VAR30 * 8;
            if ((VAR19 = FUN14(&VAR15->VAR103, VAR16.VAR99, VAR30)) < 0)
                return VAR19;
            VAR15->VAR104 = FUN15(&VAR15->VAR103, 32);
            FUN9(&VAR16, VAR30);
            VAR15->VAR50 = 1;
            break;
        case VAR105:
            if (VAR30 <= 1)
            {
                FUN3(VAR2, VAR41, "");
                return VAR42;
            }
            VAR35 = FUN8(&VAR16);
            switch (VAR30 - 2)
            {
            case 0:
                VAR36 = FUN8(&VAR16);
                break;
            case 1:
                VAR36 = FUN11(&VAR16);
                break;
            case 2:
                VAR36 = FUN16(&VAR16);
                break;
            case 3:
                VAR36 = FUN5(&VAR16);
                break;
            case 5:
                VAR30 = FUN8(&VAR16);
                if (VAR2->VAR106 != VAR30)
                    FUN3(VAR2, VAR107, ""
                                                  "",
                           VAR30, VAR2->VAR106);
                VAR35 |= (FUN8(&VAR16) & 0xF) << 8;
                VAR36 = FUN11(&VAR16);
                break;
            default:
                FUN3(VAR2, VAR41, "", VAR30);
                VAR35 = VAR2->VAR106;
                VAR36 = VAR2->VAR108;
            }
            break;
        case VAR109:
            if (VAR30 != 3)
            {
                FUN3(VAR2, VAR41, "");
                return VAR42;
            }
            VAR38 = FUN16(&VAR16);
            break;
        default:
            FUN9(&VAR16, VAR30);
        }
        if (VAR29 & VAR70)
            FUN9(&VAR16, 1);
    }
    if (!VAR20)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    if (!VAR21)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    if (!VAR22)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    if (!VAR23)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    if (VAR15->VAR61 && !VAR26)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    if (!VAR24)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    if (!VAR25 && VAR2->VAR53 == VAR110)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    if (VAR15->VAR50 && VAR2->VAR53 != VAR110)
    {
        const int VAR30 = FUN17(&VAR15->VAR103);
        const int VAR111 = VAR15->VAR51 * VAR15->VAR48 << VAR15->VAR57;
        if (VAR30 < VAR111)
        {
            FUN3(VAR2, VAR41, "");
            VAR15->VAR50 = 0;
        }
    }
    if (!VAR10->VAR112)
    {
        int VAR113 = (VAR15->VAR52 >> 23) & 0xf;
        if (VAR113 == 0xf)
        {
            if (!VAR38)
            {
                FUN3(VAR2, VAR41, "");
                return VAR42;
            }
            VAR2->VAR38 = VAR38;
        }
        else
            VAR2->VAR38 = VAR114[VAR113];
        if (VAR39)
        {
            if (VAR35)
                VAR2->VAR106 = VAR35;
            if (VAR36)
                VAR2->VAR108 = VAR36;
        }
        else
        {
            VAR2->VAR106 = VAR15->VAR55 ? 2 : 1;
            VAR2->VAR108 = VAR15->VAR55 ? VAR115 : VAR116;
        }
        VAR5->VAR117 = VAR15->VAR51 + 1;
        if ((VAR19 = FUN18(VAR2, &VAR12, 0)) < 0)
            return VAR19;
        VAR5->VAR117 = VAR15->VAR51;
    }
    if (VAR10->VAR112 + VAR15->VAR55 >= VAR2->VAR106)
    {
        FUN3(VAR2, VAR107, "");
        return (VAR2->VAR118 & VAR119) ? VAR42 : 0;
    }
    VAR17 = VAR5->VAR120[VAR10->VAR112];
    if (VAR15->VAR55)
        VAR18 = VAR5->VAR120[VAR10->VAR112 + 1];
    VAR10->VAR112 += 1 + VAR15->VAR55;
    if (VAR15->VAR57)
    {
        VAR19 = FUN19(VAR15, &VAR15->VAR16, VAR17, VAR18, VAR2->VAR53);
        if (VAR19 < 0)
            return VAR19;
    }
    else
    {
        VAR19 = FUN20(VAR15, &VAR15->VAR16, VAR17, VAR2->VAR53);
        if (VAR19 < 0)
            return VAR19;
        if (VAR15->VAR55)
            memcpy(VAR18, VAR17, VAR34 * VAR15->VAR51);
    }
    return 0;
}