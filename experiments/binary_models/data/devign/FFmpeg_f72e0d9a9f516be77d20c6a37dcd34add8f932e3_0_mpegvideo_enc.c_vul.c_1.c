int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14 = VAR9->VAR15;
    VAR9->VAR16++;
    if (FUN2(VAR9, VAR6) < 0)
        return -1;
    if (FUN3(VAR9) < 0)
    {
        return -1;
    }
    if (VAR9->VAR17.VAR18.VAR19[0])
    {
        if ((VAR13 = FUN4(VAR2, VAR4, VAR9->VAR20 * VAR9->VAR21 * (VAR22 + 100) + 10000)) < 0)
            return VAR13;
        if (VAR9->VAR23)
        {
            VAR9->VAR24 = FUN5(VAR4, VAR25, VAR9->VAR20 * VAR9->VAR21 * 12);
            VAR9->VAR26 = VAR9->VAR27 = VAR9->VAR28 = 0;
        }
        for (VAR11 = 0; VAR11 < VAR14; VAR11++)
        {
            int VAR29 = VAR9->VAR30[VAR11]->VAR31;
            int VAR32 = VAR9->VAR30[VAR11]->VAR33;
            int VAR34 = VAR9->VAR21;
            VAR35 *VAR36 = VAR4->VAR19 + (VAR37)(((VAR38)VAR4->VAR39) * VAR29 / VAR34);
            VAR35 *VAR40 = VAR4->VAR19 + (VAR37)(((VAR38)VAR4->VAR39) * VAR32 / VAR34);
            FUN6(&VAR9->VAR30[VAR11]->VAR41, VAR36, VAR40 - VAR36);
        }
        VAR9->VAR42 = VAR9->VAR17.VAR18.VAR42;
        FUN7(VAR9, VAR2);
    VAR43:
        if (FUN8(VAR9, VAR9->VAR44) < 0)
            return -1;
        VAR2->VAR45 = VAR9->VAR45;
        VAR2->VAR46 = VAR9->VAR46;
        VAR2->VAR47 = VAR9->VAR47;
        VAR2->VAR48 = VAR9->VAR48;
        VAR2->VAR49 = VAR9->VAR49;
        VAR2->VAR50 = VAR9->VAR50;
        VAR2->VAR51 = VAR9->VAR52 - VAR9->VAR50 - VAR9->VAR53;
        VAR2->VAR53 = VAR9->VAR53;
        FUN9(VAR9);
        if (VAR54 && VAR9->VAR55 == VAR56)
            FUN10(VAR9);
        if (VAR2->VAR57)
        {
            VAR58 *VAR59 = &VAR9->VAR60;
            int VAR61 = VAR59->VAR62 * VAR2->VAR63;
            if (FUN11(&VAR9->VAR41) > VAR61 && VAR9->VAR64 < VAR9->VAR2->VAR65)
            {
                VAR9->VAR66 = FUN12(VAR9->VAR64 + 1, VAR9->VAR64 * (VAR9->VAR67 + 1) / VAR9->VAR67);
                if (VAR9->VAR68)
                {
                    int VAR11;
                    for (VAR11 = 0; VAR11 < VAR9->VAR21 * VAR9->VAR69; VAR11++)
                        VAR9->VAR70[VAR11] = FUN12(VAR9->VAR70[VAR11] + 1, VAR9->VAR70[VAR11] * (VAR9->VAR67 + 1) / VAR9->VAR67);
                }
                VAR9->VAR71 = 0;
                if (VAR9->VAR42 == VAR72)
                {
                    if (VAR9->VAR73 || VAR9->VAR74 == VAR75 || VAR9->VAR74 == VAR76)
                        VAR9->VAR77 ^= 1;
                }
                if (VAR9->VAR42 != VAR78)
                {
                    VAR9->VAR79 = VAR9->VAR80;
                    VAR9->VAR81 = VAR9->VAR82 - VAR9->VAR83;
                }
                for (VAR11 = 0; VAR11 < VAR14; VAR11++)
                {
                    VAR84 *VAR41 = &VAR9->VAR30[VAR11]->VAR41;
                    FUN6(VAR41, VAR41->VAR85, VAR41->VAR86 - VAR41->VAR85);
                }
                goto VAR43;
            }
            assert(VAR9->VAR2->VAR87);
        }
        if (VAR9->VAR88 & VAR89)
            FUN13(VAR9);
        for (VAR11 = 0; VAR11 < 4; VAR11++)
        {
            VAR9->VAR90->VAR18.VAR91[VAR11] = VAR9->VAR92.VAR18.VAR91[VAR11];
            VAR2->VAR91[VAR11] += VAR9->VAR90->VAR18.VAR91[VAR11];
        }
        if (VAR9->VAR88 & VAR89)
            assert(VAR2->VAR45 + VAR2->VAR46 + VAR2->VAR47 + VAR2->VAR48 + VAR2->VAR49 == FUN11(&VAR9->VAR41));
        FUN14(&VAR9->VAR41);
        VAR9->VAR93 = FUN11(&VAR9->VAR41);
        VAR12 = FUN15(VAR9, VAR9->VAR93);
        if (VAR12)
        {
            if (VAR9->VAR41.VAR86 - VAR9->VAR41.VAR85 - (FUN11(&VAR9->VAR41) >> 3) < VAR12 + 50)
            {
                FUN16(VAR9->VAR2, VAR94, "");
                return -1;
            }
            switch (VAR9->VAR74)
            {
            case VAR95:
            case VAR96:
                while (VAR12--)
                {
                    FUN17(&VAR9->VAR41, 8, 0);
                }
                break;
            case VAR76:
                FUN17(&VAR9->VAR41, 16, 0);
                FUN17(&VAR9->VAR41, 16, 0x1C3);
                VAR12 -= 4;
                while (VAR12--)
                {
                    FUN17(&VAR9->VAR41, 8, 0xFF);
                }
                break;
            default:
                FUN16(VAR9->VAR2, VAR94, "");
            }
            FUN14(&VAR9->VAR41);
            VAR9->VAR93 = FUN11(&VAR9->VAR41);
        }
        if (VAR9->VAR2->VAR87 && VAR9->VAR2->VAR97 == VAR9->VAR2->VAR87 && VAR9->VAR55 == VAR98 && 90000LL * (VAR2->VAR57 - 1) <= VAR9->VAR2->VAR87 * 0xFFFFLL)
        {
            int VAR99, VAR100;
            double VAR101 = VAR9->VAR2->VAR87 * FUN18(VAR9->VAR2->VAR79);
            int VAR102 = VAR9->VAR93 - 8 * (VAR9->VAR103 - VAR9->VAR41.VAR85 - 1);
            double VAR104 = VAR9->VAR60.VAR62 + VAR102 - VAR101;
            if (VAR104 < 0)
                FUN16(VAR9->VAR2, VAR94, "");
            assert(VAR9->VAR105 == 0);
            VAR99 = VAR104 * 90000 / VAR9->VAR2->VAR87;
            VAR100 = (VAR102 * 90000LL + VAR9->VAR2->VAR87 - 1) / VAR9->VAR2->VAR87;
            VAR99 = FUN12(VAR99, VAR100);
            assert(VAR99 < 0xFFFF);
            VAR9->VAR103[0] &= 0xF8;
            VAR9->VAR103[0] |= VAR99 >> 13;
            VAR9->VAR103[1] = VAR99 >> 5;
            VAR9->VAR103[2] &= 0x07;
            VAR9->VAR103[2] |= VAR99 << 3;
            VAR2->VAR99 = VAR99 * 300;
        }
        VAR9->VAR106 += VAR9->VAR93;
        VAR2->VAR93 = VAR9->VAR93;
        VAR4->VAR107 = VAR9->VAR92.VAR18.VAR107;
        if (!VAR9->VAR108 && VAR9->VAR42 != VAR78)
        {
            if (!VAR9->VAR92.VAR18.VAR109)
                VAR4->VAR110 = VAR4->VAR107 - VAR9->VAR111;
            else
                VAR4->VAR110 = VAR9->VAR112;
            VAR9->VAR112 = VAR4->VAR107;
        }
        else
            VAR4->VAR110 = VAR4->VAR107;
        if (VAR9->VAR92.VAR18.VAR113)
            VAR4->VAR88 |= VAR114;
        if (VAR9->VAR23)
            FUN19(VAR4, VAR25, VAR9->VAR28);
    }
    else
    {
        assert((FUN20(&VAR9->VAR41) == VAR9->VAR41.VAR85));
        VAR9->VAR93 = 0;
    }
    assert((VAR9->VAR93 & 7) == 0);
    VAR4->VAR39 = VAR9->VAR93 / 8;
    *VAR7 = !!VAR4->VAR39;
    return 0;
}