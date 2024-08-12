int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    VAR15 *VAR16 = VAR3;
    VAR12->VAR17 = VAR2->VAR17;
    VAR12->VAR18 = VAR2->VAR18;
    if (VAR9 == 0)
    {
        if (VAR12->VAR19 == 0 && VAR12->VAR20)
        {
            if ((VAR14 = FUN2(VAR16, &VAR12->VAR20->VAR21)) < 0)
                return VAR14;
            VAR12->VAR20 = NULL;
            *VAR4 = 1;
        }
        return 0;
    }
    if (VAR12->VAR17 & VAR22)
    {
        int VAR23;
        if (VAR24 && VAR12->VAR25 == VAR26)
        {
            VAR23 = FUN3(&VAR12->VAR27, VAR8, VAR9);
        }
        else if (VAR28 && VAR12->VAR25 == VAR29)
        {
            VAR23 = FUN4(&VAR12->VAR27, VAR8, VAR9);
        }
        else
        {
            FUN5(VAR12->VAR2, VAR30, "");
            return FUN6(VAR31);
        }
        if (FUN7(&VAR12->VAR27, VAR23, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
    if (VAR12->VAR32 && (VAR12->VAR33 || VAR9 < 20))
        VAR14 = FUN8(&VAR12->VAR34, VAR12->VAR35, VAR12->VAR32);
    else
        VAR14 = FUN8(&VAR12->VAR34, VAR8, VAR9);
    VAR12->VAR32 = 0;
    if (VAR14 < 0)
        return VAR14;
    if (!VAR12->VAR36)
        if ((VAR14 = FUN9(VAR12)) < 0)
            return VAR14;
    if (VAR12->VAR37 == NULL || VAR12->VAR37->VAR21.VAR3[0])
    {
        int VAR38 = FUN10(VAR12, 0);
        if (VAR38 < 0)
            return VAR38;
        VAR12->VAR37 = &VAR12->VAR39[VAR38];
    }
    if (VAR40 && VAR12->VAR41 == 5)
    {
        VAR14 = FUN11(VAR12);
    }
    else if (VAR42 && VAR12->VAR41)
    {
        VAR14 = FUN12(VAR12);
    }
    else if (VAR24 && VAR2->VAR25 == VAR26)
    {
        if (VAR12->VAR2->VAR43 && VAR12->VAR44 == 0)
        {
            GetBitContext VAR34;
            VAR14 = FUN8(&VAR34, VAR12->VAR2->VAR45, VAR12->VAR2->VAR43);
            if (VAR14 < 0)
                return VAR14;
            FUN13(VAR2->VAR13, &VAR34);
        }
        VAR14 = FUN13(VAR2->VAR13, &VAR12->VAR34);
    }
    else if (VAR46 && VAR12->VAR25 == VAR47)
    {
        VAR14 = FUN14(VAR12);
    }
    else if (VAR48 && VAR12->VAR49)
    {
        VAR14 = FUN15(VAR12);
    }
    else
    {
        VAR14 = FUN16(VAR12);
    }
    if (VAR14 == VAR50)
        return FUN17(VAR12, VAR9);
    if (VAR14 < 0)
    {
        FUN5(VAR12->VAR2, VAR30, "");
        return VAR14;
    }
    VAR2->VAR51 = !VAR12->VAR19;
    VAR12->VAR52.VAR53##VAR54 = VAR55##VAR56;
    VAR12->VAR52.VAR57##VAR54 = VAR58##VAR56;
    VAR12->VAR52.VAR59##VAR54 = VAR60##VAR56;
    if (VAR12->VAR61 & VAR62)
    {
        FUN18(VAR63[0][5], VAR64)
        FUN18(VAR63[0][7], VAR65) FUN18(VAR63[0][9], VAR66) FUN18(VAR63[0][11], VAR67) FUN18(VAR63[0][13], VAR68) FUN18(VAR63[0][15], VAR69) FUN18(VAR63[1][5], VAR70) FUN18(VAR63[1][7], VAR71) FUN18(VAR63[1][9], VAR72) FUN18(VAR63[1][11], VAR73) FUN18(VAR63[1][13], VAR74) FUN18(VAR63[1][15], VAR75)
    }
    if (VAR12->VAR76 != VAR2->VAR77 || VAR12->VAR78 != VAR2->VAR79 || VAR12->VAR80)
    {
        VAR12->VAR80 = 0;
        VAR14 = FUN19(VAR2, VAR12->VAR76, VAR12->VAR78);
        if (VAR14 < 0)
            return VAR14;
        if ((VAR14 = FUN20(VAR12)))
            return VAR14;
    }
    if (VAR12->VAR25 == VAR29 || VAR12->VAR25 == VAR81 || VAR12->VAR25 == VAR47)
        VAR12->VAR82 = FUN21(VAR12);
    VAR12->VAR83.VAR21.VAR84 = VAR12->VAR84;
    VAR12->VAR83.VAR21.VAR85 = VAR12->VAR84 == VAR86;
    if (VAR12->VAR87 == NULL && (VAR12->VAR84 == VAR88 || VAR12->VAR89))
        return FUN17(VAR12, VAR9);
    if ((VAR2->VAR90 >= VAR91 && VAR12->VAR84 == VAR88) || (VAR2->VAR90 >= VAR92 && VAR12->VAR84 != VAR86) || VAR2->VAR90 >= VAR93)
        return FUN17(VAR12, VAR9);
    if (VAR12->VAR94)
    {
        if (VAR12->VAR84 == VAR88)
            return FUN17(VAR12, VAR9);
        else
            VAR12->VAR94 = 0;
    }
    if ((!VAR12->VAR95) || VAR12->VAR84 == VAR88)
    {
        VAR12->VAR96.VAR97 = VAR12->VAR52.VAR98;
        VAR12->VAR96.VAR99 = VAR12->VAR52.VAR100;
    }
    else
    {
        VAR12->VAR96.VAR97 = VAR12->VAR52.VAR101;
        VAR12->VAR96.VAR99 = VAR12->VAR52.VAR100;
    }
    if ((VAR14 = FUN22(VAR12, VAR2)) < 0)
        return VAR14;
    if (!VAR12->VAR33 && !VAR2->VAR102)
        FUN23(VAR2);
    if (VAR2->VAR102)
    {
        VAR14 = VAR2->VAR102->FUN24(VAR2, VAR12->VAR34.VAR103, VAR12->VAR34.VAR104 - VAR12->VAR34.VAR103);
        if (VAR14 < 0)
            return VAR14;
    }
    FUN25(VAR12);
    if (VAR40 && VAR12->VAR41 == 5)
    {
        VAR14 = FUN26(VAR12);
        if (VAR14 < 0)
            return VAR14;
        if (VAR14 == 1)
            goto VAR105;
    }
    VAR12->VAR106 = 0;
    VAR12->VAR107 = 0;
    VAR14 = FUN27(VAR12);
    while (VAR12->VAR107 < VAR12->VAR108)
    {
        if (VAR12->VAR41)
        {
            if (VAR12->VAR109 == 0 || VAR12->VAR106 != 0 || (VAR12->VAR107 % VAR12->VAR109) != 0 || FUN28(&VAR12->VAR34) < 0)
                break;
        }
        else
        {
            int VAR110 = VAR12->VAR106, VAR111 = VAR12->VAR107;
            if (FUN29(VAR12) < 0)
                break;
            if (VAR111 * VAR12->VAR112 + VAR110 < VAR12->VAR107 * VAR12->VAR112 + VAR12->VAR106)
                VAR12->VAR113.VAR114 = 1;
        }
        if (VAR12->VAR41 < 4 && VAR12->VAR115)
            FUN30(VAR12);
        if (FUN27(VAR12) < 0)
            VAR14 = VAR116;
    }
    if (VAR12->VAR41 && VAR12->VAR41 < 4 && VAR12->VAR84 == VAR86)
        if (!VAR42 || FUN31(VAR12, VAR9) < 0)
            VAR12->VAR113.VAR117[VAR12->VAR118 - 1] = VAR119;
    assert(VAR12->VAR32 == 0);
    if (VAR24 && VAR2->VAR25 == VAR26)
        FUN32(VAR2, VAR8, VAR9);
VAR105:
    FUN33(&VAR12->VAR113);
    if (VAR2->VAR102)
    {
        VAR14 = VAR2->VAR102->FUN34(VAR2);
        if (VAR14 < 0)
            return VAR14;
    }
    FUN35(VAR12);
    if (!VAR12->VAR33 && VAR2->VAR102)
        FUN23(VAR2);
    assert(VAR12->VAR83.VAR21.VAR84 == VAR12->VAR37->VAR21.VAR84);
    assert(VAR12->VAR83.VAR21.VAR84 == VAR12->VAR84);
    if (VAR12->VAR84 == VAR88 || VAR12->VAR19)
    {
        if ((VAR14 = FUN2(VAR16, &VAR12->VAR37->VAR21)) < 0)
            return VAR14;
        FUN36(VAR12, VAR12->VAR37);
    }
    else if (VAR12->VAR87 != NULL)
    {
        if ((VAR14 = FUN2(VAR16, &VAR12->VAR87->VAR21)) < 0)
            return VAR14;
        FUN36(VAR12, VAR12->VAR87);
    }
    if (VAR12->VAR87 || VAR12->VAR19)
        *VAR4 = 1;
    if (VAR14 && (VAR2->VAR120 & VAR121))
        return VAR14;
    else
        return FUN17(VAR12, VAR9);
}