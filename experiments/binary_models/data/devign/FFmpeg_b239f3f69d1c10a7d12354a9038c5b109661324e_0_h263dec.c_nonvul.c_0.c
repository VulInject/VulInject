int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    int VAR15 = 0;
    VAR16 *VAR17 = VAR3;
    VAR12->VAR18 = VAR2->VAR18;
    VAR12->VAR19 = VAR2->VAR19;
    if (VAR9 == 0)
    {
        if (VAR12->VAR20 == 0 && VAR12->VAR21)
        {
            if ((VAR14 = FUN2(VAR17, &VAR12->VAR21->VAR22)) < 0)
                return VAR14;
            VAR12->VAR21 = NULL;
            *VAR4 = 1;
        }
        return 0;
    }
    if (VAR12->VAR18 & VAR23)
    {
        int VAR24;
        if (VAR25 && VAR12->VAR26 == VAR27)
        {
            VAR24 = FUN3(&VAR12->VAR28, VAR8, VAR9);
        }
        else if (VAR29 && VAR12->VAR26 == VAR30)
        {
            VAR24 = FUN4(&VAR12->VAR28, VAR8, VAR9);
        }
        else if (VAR31 && VAR12->VAR26 == VAR32)
        {
            VAR24 = FUN4(&VAR12->VAR28, VAR8, VAR9);
        }
        else
        {
            FUN5(VAR12->VAR2, VAR33, "");
            return FUN6(VAR34);
        }
        if (FUN7(&VAR12->VAR28, VAR24, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
VAR35:
    if (VAR12->VAR36 && VAR12->VAR37)
    {
        int VAR38;
        for (VAR38 = 0; VAR38 < VAR9 - 3; VAR38++)
        {
            if (VAR8[VAR38] == 0 && VAR8[VAR38 + 1] == 0 && VAR8[VAR38 + 2] == 1)
            {
                if (VAR8[VAR38 + 3] == 0xB0)
                {
                    FUN5(VAR12->VAR2, VAR39, "");
                    VAR12->VAR37 = 0;
                }
                break;
            }
        }
    }
    if (VAR12->VAR37 && (VAR12->VAR36 || VAR9 < 20))
        VAR14 = FUN8(&VAR12->VAR40, VAR12->VAR41, VAR12->VAR37);
    else
        VAR14 = FUN8(&VAR12->VAR40, VAR8, VAR9);
    VAR12->VAR37 = 0;
    if (VAR14 < 0)
        return VAR14;
    if (!VAR12->VAR42)
        if ((VAR14 = FUN9(VAR12)) < 0)
            return VAR14;
    if (VAR12->VAR43 == NULL || VAR12->VAR43->VAR22.VAR3[0])
    {
        int VAR38 = FUN10(VAR12, 0);
        if (VAR38 < 0)
            return VAR38;
        VAR12->VAR43 = &VAR12->VAR44[VAR38];
    }
    if (VAR45 && VAR12->VAR46 == 5)
    {
        VAR14 = FUN11(VAR12);
    }
    else if (VAR47 && VAR12->VAR46)
    {
        VAR14 = FUN12(VAR12);
    }
    else if (VAR25 && VAR2->VAR26 == VAR27)
    {
        if (VAR12->VAR2->VAR48 && VAR12->VAR49 == 0)
        {
            GetBitContext VAR40;
            if (FUN8(&VAR40, VAR12->VAR2->VAR50, VAR12->VAR2->VAR48) >= 0)
                FUN13(VAR2->VAR13, &VAR40);
        }
        VAR14 = FUN13(VAR2->VAR13, &VAR12->VAR40);
    }
    else if (VAR51 && VAR12->VAR26 == VAR52)
    {
        VAR14 = FUN14(VAR12);
    }
    else if (VAR53 && VAR12->VAR54)
    {
        VAR14 = FUN15(VAR12);
    }
    else
    {
        VAR14 = FUN16(VAR12);
    }
    if (VAR14 < 0 || VAR14 == VAR55)
    {
        if (VAR12->VAR56 != VAR2->VAR57 || VAR12->VAR58 != VAR2->VAR59)
        {
            FUN5(VAR12->VAR2, VAR39, "");
            VAR12->VAR56 = VAR2->VAR57;
            VAR12->VAR58 = VAR2->VAR59;
        }
    }
    if (VAR14 == VAR55)
        return FUN17(VAR12, VAR9);
    if (VAR14 < 0)
    {
        FUN5(VAR12->VAR2, VAR33, "");
        return VAR14;
    }
    VAR2->VAR60 = !VAR12->VAR20;
    if (VAR25 && VAR2->VAR26 == VAR27)
    {
        if (FUN18(VAR2) == 1)
            goto VAR35;
    }
    if (VAR12->VAR56 != VAR2->VAR57 || VAR12->VAR58 != VAR2->VAR59 || VAR12->VAR61)
    {
        VAR12->VAR61 = 0;
        VAR14 = FUN19(VAR2, VAR12->VAR56, VAR12->VAR58);
        if (VAR14 < 0)
            return VAR14;
        if ((VAR14 = FUN20(VAR12)))
            return VAR14;
    }
    if (VAR12->VAR26 == VAR30 || VAR12->VAR26 == VAR32 || VAR12->VAR26 == VAR52)
        VAR12->VAR62 = FUN21(VAR12);
    VAR12->VAR63.VAR22.VAR64 = VAR12->VAR64;
    VAR12->VAR63.VAR22.VAR65 = VAR12->VAR64 == VAR66;
    if (VAR12->VAR67 == NULL && (VAR12->VAR64 == VAR68 || VAR12->VAR69))
        return FUN17(VAR12, VAR9);
    if ((VAR2->VAR70 >= VAR71 && VAR12->VAR64 == VAR68) || (VAR2->VAR70 >= VAR72 && VAR12->VAR64 != VAR66) || VAR2->VAR70 >= VAR73)
        return FUN17(VAR12, VAR9);
    if (VAR12->VAR74)
    {
        if (VAR12->VAR64 == VAR68)
            return FUN17(VAR12, VAR9);
        else
            VAR12->VAR74 = 0;
    }
    if ((!VAR12->VAR75) || VAR12->VAR64 == VAR68)
    {
        VAR12->VAR76.VAR77 = VAR12->VAR78.VAR79;
        VAR12->VAR76.VAR80 = VAR12->VAR78.VAR81;
    }
    else
    {
        VAR12->VAR76.VAR77 = VAR12->VAR78.VAR82;
        VAR12->VAR76.VAR80 = VAR12->VAR78.VAR81;
    }
    if ((VAR14 = FUN22(VAR12, VAR2)) < 0)
        return VAR14;
    if (!VAR12->VAR36 && !VAR2->VAR83)
        FUN23(VAR2);
    if (VAR84 && (VAR12->VAR2->VAR85->VAR86 & VAR87))
    {
        FUN24(VAR12, VAR12->VAR40.VAR88, VAR12->VAR40.VAR89 - VAR12->VAR40.VAR88);
        goto VAR90;
    }
    if (VAR2->VAR83)
    {
        VAR14 = VAR2->VAR83->FUN25(VAR2, VAR12->VAR40.VAR88, VAR12->VAR40.VAR89 - VAR12->VAR40.VAR88);
        if (VAR14 < 0)
            return VAR14;
    }
    FUN26(VAR12);
    if (VAR45 && VAR12->VAR46 == 5)
    {
        VAR14 = FUN27(VAR12);
        if (VAR14 < 0)
            return VAR14;
        if (VAR14 == 1)
            goto VAR90;
    }
    VAR12->VAR91 = 0;
    VAR12->VAR92 = 0;
    VAR15 = FUN28(VAR12);
    while (VAR12->VAR92 < VAR12->VAR93)
    {
        if (VAR12->VAR46)
        {
            if (VAR12->VAR94 == 0 || VAR12->VAR91 != 0 || (VAR12->VAR92 % VAR12->VAR94) != 0 || FUN29(&VAR12->VAR40) < 0)
                break;
        }
        else
        {
            int VAR95 = VAR12->VAR91, VAR96 = VAR12->VAR92;
            if (FUN30(VAR12) < 0)
                break;
            if (VAR96 * VAR12->VAR97 + VAR95 < VAR12->VAR92 * VAR12->VAR97 + VAR12->VAR91)
                VAR12->VAR98.VAR99 = 1;
        }
        if (VAR12->VAR46 < 4 && VAR12->VAR100)
            FUN31(VAR12);
        if (FUN28(VAR12) < 0)
            VAR15 = VAR101;
    }
    if (VAR12->VAR46 && VAR12->VAR46 < 4 && VAR12->VAR64 == VAR66)
        if (!VAR47 || FUN32(VAR12, VAR9) < 0)
            VAR12->VAR98.VAR102[VAR12->VAR103 - 1] = VAR104;
    FUN33(VAR12->VAR37 == 0);
VAR90:
    FUN34(&VAR12->VAR98);
    if (VAR2->VAR83)
    {
        VAR14 = VAR2->VAR83->FUN35(VAR2);
        if (VAR14 < 0)
            return VAR14;
    }
    FUN36(VAR12);
    if (VAR12->VAR26 == VAR27 && VAR12->VAR36)
    {
        int VAR105 = VAR12->VAR40.VAR88 == VAR12->VAR41 ? 0 : (FUN37(&VAR12->VAR40) >> 3);
        int VAR106 = 0;
        if (VAR9 - VAR105 > 7)
        {
            int VAR38;
            for (VAR38 = VAR105; VAR38 < VAR9 - 4; VAR38++)
                if (VAR8[VAR38] == 0 && VAR8[VAR38 + 1] == 0 && VAR8[VAR38 + 2] == 1 && VAR8[VAR38 + 3] == 0xB6)
                {
                    VAR106 = !(VAR8[VAR38 + 4] & 0x40);
                    break;
                }
        }
        if (VAR106)
        {
            FUN38(&VAR12->VAR41, &VAR12->VAR107, VAR9 - VAR105 + VAR108);
            if (!VAR12->VAR41)
                return FUN6(VAR109);
            memcpy(VAR12->VAR41, VAR8 + VAR105, VAR9 - VAR105);
            VAR12->VAR37 = VAR9 - VAR105;
        }
    }
    if (!VAR12->VAR36 && VAR2->VAR83)
        FUN23(VAR2);
    FUN33(VAR12->VAR63.VAR22.VAR64 == VAR12->VAR43->VAR22.VAR64);
    FUN33(VAR12->VAR63.VAR22.VAR64 == VAR12->VAR64);
    if (VAR12->VAR64 == VAR68 || VAR12->VAR20)
    {
        if ((VAR14 = FUN2(VAR17, &VAR12->VAR43->VAR22)) < 0)
            return VAR14;
        FUN39(VAR12, VAR12->VAR43, VAR17);
        FUN40(VAR12, VAR17, VAR12->VAR43, VAR110);
    }
    else if (VAR12->VAR67 != NULL)
    {
        if ((VAR14 = FUN2(VAR17, &VAR12->VAR67->VAR22)) < 0)
            return VAR14;
        FUN39(VAR12, VAR12->VAR67, VAR17);
        FUN40(VAR12, VAR17, VAR12->VAR67, VAR110);
    }
    if (VAR12->VAR67 || VAR12->VAR20)
    {
        if (VAR17->VAR111 == VAR112 && (VAR12->VAR113 == FUN41("") || VAR12->VAR113 == FUN41("")))
        {
            int VAR114, VAR115, VAR116;
            FUN42(VAR17);
            for (VAR116 = 0; VAR116 < 3; VAR116++)
            {
                int VAR117 = FUN43(VAR17->VAR56, !!VAR116);
                int VAR118 = FUN43(VAR17->VAR58, !!VAR116);
                int VAR119 = VAR17->VAR119[VAR116];
                for (VAR115 = 0; VAR115 < (VAR118 >> 1); VAR115++)
                    for (VAR114 = 0; VAR114 < VAR117; VAR114++)
                        FUN44(int, VAR17->VAR3[VAR116][VAR114 + VAR115 * VAR119], VAR17->VAR3[VAR116][VAR114 + (VAR118 - 1 - VAR115) * VAR119]);
            }
        }
        *VAR4 = 1;
    }
    if (VAR15 < 0 && (VAR2->VAR120 & VAR121))
        return VAR14;
    else
        return FUN17(VAR12, VAR9);
}