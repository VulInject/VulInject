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
    FUN2(&VAR14->VAR26);
    FUN3(&VAR14->VAR27);
    VAR17 = VAR10;
    VAR16 = VAR10 + VAR11;
    while (VAR17 < VAR16)
    {
        VAR22 = FUN4(VAR14, &VAR17, VAR16, &VAR18, &VAR21);
        if (VAR22 < 0)
        {
            break;
        }
        else if (VAR21 > VAR28 / 8)
        {
            FUN5(VAR2, VAR29, "", VAR22, VAR21, VAR11);
            return VAR30;
        }
        FUN5(VAR2, VAR31, "", VAR22, VAR16 - VAR17);
        VAR25 = FUN6(&VAR14->VAR32, VAR18, VAR21);
        if (VAR25 < 0)
        {
            FUN5(VAR2, VAR29, "");
            goto VAR33;
        }
        VAR14->VAR22 = VAR22;
        if (VAR14->VAR2->VAR34 & VAR35)
            FUN5(VAR2, VAR31, "", VAR22);
        if (VAR22 >= 0xd0 && VAR22 <= 0xd7)
            FUN5(VAR2, VAR31, "", VAR22 & 0x0f);
        else if (VAR22 >= VAR36 && VAR22 <= VAR37)
            FUN7(VAR14);
        else if (VAR22 == VAR38)
            FUN8(VAR14);
        VAR25 = -1;
        if (!VAR39 && (VAR22 == VAR40 || VAR22 == VAR41))
        {
            FUN5(VAR2, VAR29, "");
            return FUN9(VAR42);
        }
        switch (VAR22)
        {
        case VAR43:
            VAR14->VAR44 = 0;
            VAR14->VAR45 = 0;
            break;
        case VAR46:
            FUN10(VAR14);
            break;
        case VAR47:
            if ((VAR25 = FUN11(VAR14)) < 0)
            {
                FUN5(VAR2, VAR29, "");
                goto VAR33;
            }
            break;
        case VAR48:
        case VAR49:
            VAR14->VAR50 = 0;
            VAR14->VAR51 = 0;
            VAR14->VAR52 = 0;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR33;
            break;
        case VAR53:
            VAR14->VAR50 = 0;
            VAR14->VAR51 = 0;
            VAR14->VAR52 = 1;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR33;
            break;
        case VAR54:
            VAR14->VAR50 = 1;
            VAR14->VAR51 = 0;
            VAR14->VAR52 = 0;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR33;
            break;
        case VAR40:
            VAR14->VAR50 = 1;
            VAR14->VAR51 = 1;
            VAR14->VAR52 = 0;
            if ((VAR25 = FUN12(VAR14)) < 0)
                goto VAR33;
            break;
        case VAR41:
            if (!VAR39 || (VAR25 = FUN13(VAR14)) < 0)
                goto VAR33;
            break;
        case VAR55:
        VAR56:
            VAR14->VAR57 = 0;
            if (!VAR14->VAR58)
            {
                FUN5(VAR2, VAR59, "");
                break;
            }
            if (VAR14->VAR60)
            {
                VAR14->VAR61 ^= 1;
                if (VAR14->VAR61 == !VAR14->VAR62)
                    break;
            }
            if ((VAR25 = FUN14(VAR8, VAR14->VAR63)) < 0)
                return VAR25;
            *VAR4 = 1;
            VAR14->VAR58 = 0;
            if (!VAR14->VAR50)
            {
                int VAR64 = FUN15(VAR14->VAR65[0], VAR14->VAR65[1], VAR14->VAR65[2]);
                int VAR66 = (VAR14->VAR67 + 15) / 16;
                VAR68 *VAR69 = FUN16(VAR66);
                if (VAR69)
                {
                    memset(VAR69->VAR3, VAR64, VAR66);
                    FUN17(VAR3, VAR69, 0, VAR70);
                }
                if (VAR2->VAR34 & VAR71)
                    FUN5(VAR2, VAR31, "", VAR64);
            }
            goto VAR72;
        case VAR73:
            VAR14->VAR57++;
            if ((VAR25 = FUN18(VAR14, NULL, 0, NULL)) < 0 && (VAR2->VAR74 & VAR75))
                goto VAR33;
            break;
        case VAR76:
            FUN19(VAR14);
            break;
        case VAR77:
        case VAR78:
        case VAR79:
        case VAR80:
        case VAR81:
        case VAR82:
        case VAR83:
        case VAR84:
        case VAR85:
        case VAR86:
            FUN5(VAR2, VAR29, "", VAR22);
            break;
        }
        VAR17 += (FUN20(&VAR14->VAR32) + 7) / 8;
        FUN5(VAR2, VAR31, "", (FUN20(&VAR14->VAR32) + 7) / 8, FUN20(&VAR14->VAR32));
    }
    if (VAR14->VAR58 && VAR14->VAR57)
    {
        FUN5(VAR2, VAR59, "");
        goto VAR56;
    }
    FUN5(VAR2, VAR87, "");
    return VAR30;
VAR33:
    VAR14->VAR58 = 0;
    return VAR25;
VAR72:
    if (VAR14->VAR88)
    {
        VAR9 *VAR89 = VAR14->VAR63->VAR3[VAR14->VAR88];
        FUN21(VAR2->VAR90 == VAR91 || VAR2->VAR90 == VAR92 || VAR2->VAR90 == VAR93 || VAR2->VAR90 == VAR94);
        for (VAR23 = 0; VAR23 < VAR14->VAR95; VAR23++)
        {
            for (VAR24 = VAR14->VAR67 - 1; VAR24; VAR24--)
                VAR89[VAR24] = (VAR89[VAR24 / 2] + VAR89[(VAR24 + 1) / 2]) >> 1;
            VAR89 += VAR14->VAR96[VAR14->VAR88];
        }
    }
    if (VAR14->VAR97)
    {
        VAR9 *VAR98 = &((VAR9 *)VAR14->VAR63->VAR3[VAR14->VAR97])[(VAR14->VAR99 - 1) * VAR14->VAR96[VAR14->VAR97]];
        int VAR100;
        FUN22(VAR14->VAR2->VAR90, &VAR19, &VAR20);
        VAR100 = VAR14->VAR67 >> VAR19;
        FUN21(VAR2->VAR90 == VAR91 || VAR2->VAR90 == VAR92 || VAR2->VAR90 == VAR101 || VAR2->VAR90 == VAR102);
        for (VAR23 = VAR14->VAR99 - 1; VAR23; VAR23--)
        {
            VAR9 *VAR103 = &((VAR9 *)VAR14->VAR63->VAR3[VAR14->VAR97])[VAR23 / 2 * VAR14->VAR96[VAR14->VAR97]];
            VAR9 *VAR104 = &((VAR9 *)VAR14->VAR63->VAR3[VAR14->VAR97])[(VAR23 + 1) / 2 * VAR14->VAR96[VAR14->VAR97]];
            if (VAR103 == VAR104)
            {
                memcpy(VAR98, VAR103, VAR100);
            }
            else
            {
                for (VAR24 = 0; VAR24 < VAR100; VAR24++)
                    VAR98[VAR24] = (VAR103[VAR24] + VAR104[VAR24]) >> 1;
            }
            VAR98 -= VAR14->VAR96[VAR14->VAR97];
        }
    }
    if (VAR14->VAR105)
    {
        int VAR106;
        FUN22(VAR14->VAR2->VAR90, &VAR19, &VAR20);
        for (VAR24 = 0; VAR24 < 4; VAR24++)
        {
            VAR9 *VAR98 = VAR14->VAR63->VAR3[VAR24];
            int VAR100 = VAR14->VAR63->VAR67;
            int VAR107 = VAR14->VAR63->VAR99;
            if (VAR24 && VAR24 < 3)
            {
                VAR100 = FUN23(VAR100, VAR19);
                VAR107 = FUN23(VAR107, VAR20);
            }
            if (VAR98)
            {
                VAR9 *VAR108 = VAR98 + VAR14->VAR63->VAR96[VAR24] * (VAR107 - 1);
                for (VAR23 = 0; VAR23 < VAR107 / 2; VAR23++)
                {
                    for (VAR106 = 0; VAR106 < VAR100; VAR106++)
                        FUN24(int, VAR98[VAR106], VAR108[VAR106]);
                    VAR98 += VAR14->VAR63->VAR96[VAR24];
                    VAR108 -= VAR14->VAR63->VAR96[VAR24];
                }
            }
        }
    }
    if (VAR14->VAR27)
    {
        VAR109 *VAR110 = FUN25(VAR3);
        if (VAR110)
        {
            VAR110->VAR111 = VAR14->VAR27->VAR111;
            VAR110->VAR112 = VAR14->VAR27->VAR112;
        }
        FUN3(&VAR14->VAR27);
    }
    FUN26(FUN27(VAR3), VAR14->VAR26, 0);
    FUN2(&VAR14->VAR26);
    FUN5(VAR2, VAR31, "", VAR16 - VAR17);
    return VAR17 - VAR10;
}