int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR5;
    int VAR11, VAR12;
    for (VAR11 = 0; VAR11 < VAR2->VAR13; VAR11++)
    {
        int VAR14 = VAR7->VAR15[VAR11]->VAR16;
        int VAR17 = VAR7->VAR15[VAR11]->VAR18;
        int VAR19 = VAR7->VAR20;
        VAR21 *VAR22 = VAR3 + (VAR23)(((VAR24)VAR4) * VAR14 / VAR19);
        VAR21 *VAR25 = VAR3 + (VAR23)(((VAR24)VAR4) * VAR17 / VAR19);
        FUN2(&VAR7->VAR15[VAR11]->VAR26, VAR22, VAR25 - VAR22);
    }
    VAR7->VAR27++;
    if (FUN3(VAR7, VAR10) < 0)
        return -1;
    FUN4(VAR7);
    if (VAR7->VAR28.VAR5[0])
    {
        VAR7->VAR29 = VAR7->VAR28.VAR29;
        FUN5(VAR7, VAR2);
    VAR30:
        if (FUN6(VAR7, VAR7->VAR31) < 0)
            return -1;
        VAR2->VAR32 = VAR7->VAR31;
        VAR2->VAR33 = VAR7->VAR33;
        VAR2->VAR34 = VAR7->VAR34;
        VAR2->VAR35 = VAR7->VAR35;
        VAR2->VAR36 = VAR7->VAR36;
        VAR2->VAR37 = VAR7->VAR37;
        VAR2->VAR38 = VAR7->VAR38;
        VAR2->VAR39 = VAR7->VAR40 - VAR7->VAR38 - VAR7->VAR41;
        VAR2->VAR41 = VAR7->VAR41;
        FUN7(VAR7);
        if (VAR7->VAR42 == VAR43)
            FUN8(VAR7);
        if (VAR2->VAR44)
        {
            VAR45 *VAR46 = &VAR7->VAR47;
            int VAR48 = VAR46->VAR49 / 3;
            if (FUN9(&VAR7->VAR26) > VAR48 && VAR7->VAR50 < VAR7->VAR2->VAR51)
            {
                VAR7->VAR52 = FUN10(VAR7->VAR53 + 1, VAR7->VAR53 * (VAR7->VAR50 + 1) / VAR7->VAR50);
                VAR7->VAR54 = 0;
                if (VAR7->VAR29 == VAR55)
                {
                    if (VAR7->VAR56 || VAR7->VAR57 == VAR58 || VAR7->VAR57 == VAR59)
                        VAR7->VAR60 ^= 1;
                }
                for (VAR11 = 0; VAR11 < VAR2->VAR13; VAR11++)
                {
                    VAR61 *VAR26 = &VAR7->VAR15[VAR11]->VAR26;
                    FUN2(VAR26, VAR26->VAR3, VAR26->VAR62 - VAR26->VAR3);
                }
                goto VAR30;
            }
            assert(VAR7->VAR2->VAR63);
        }
        if (VAR7->VAR64 & VAR65)
            FUN11(VAR7);
        for (VAR11 = 0; VAR11 < 4; VAR11++)
        {
            VAR7->VAR66->VAR67[VAR11] = VAR7->VAR68.VAR67[VAR11];
            VAR2->VAR67[VAR11] += VAR7->VAR66->VAR67[VAR11];
        }
        if (VAR7->VAR64 & VAR65)
            assert(VAR2->VAR33 + VAR2->VAR34 + VAR2->VAR35 + VAR2->VAR36 + VAR2->VAR37 == FUN9(&VAR7->VAR26));
        FUN12(&VAR7->VAR26);
        VAR7->VAR69 = FUN9(&VAR7->VAR26);
        VAR12 = FUN13(VAR7, VAR7->VAR69);
        if (VAR12)
        {
            if (VAR7->VAR26.VAR62 - VAR7->VAR26.VAR3 - (FUN9(&VAR7->VAR26) >> 3) < VAR12 + 50)
            {
                FUN14(VAR7->VAR2, VAR70, "");
                return -1;
            }
            switch (VAR7->VAR57)
            {
            case VAR71:
            case VAR72:
                while (VAR12--)
                {
                    FUN15(&VAR7->VAR26, 8, 0);
                }
                break;
            case VAR59:
                FUN15(&VAR7->VAR26, 16, 0);
                FUN15(&VAR7->VAR26, 16, 0x1C3);
                VAR12 -= 4;
                while (VAR12--)
                {
                    FUN15(&VAR7->VAR26, 8, 0xFF);
                }
                break;
            default:
                FUN14(VAR7->VAR2, VAR70, "");
            }
            FUN12(&VAR7->VAR26);
            VAR7->VAR69 = FUN9(&VAR7->VAR26);
        }
        if (VAR7->VAR2->VAR63 && VAR7->VAR2->VAR73 == VAR7->VAR2->VAR63 && VAR7->VAR42 == VAR74 && 90000LL * (VAR2->VAR44 - 1) <= VAR7->VAR2->VAR63 * 0xFFFFLL)
        {
            int VAR75;
            assert(VAR7->VAR76 == 0);
            VAR75 = FUN16(90000 * VAR7->VAR47.VAR49 / VAR7->VAR2->VAR63);
            assert(VAR75 < 0xFFFF);
            VAR7->VAR77[0] &= 0xF8;
            VAR7->VAR77[0] |= VAR75 >> 13;
            VAR7->VAR77[1] = VAR75 >> 5;
            VAR7->VAR77[2] &= 0x07;
            VAR7->VAR77[2] |= VAR75 << 3;
        }
        VAR7->VAR78 += VAR7->VAR69;
        VAR2->VAR69 = VAR7->VAR69;
    }
    else
    {
        assert((FUN17(&VAR7->VAR26) == VAR7->VAR26.VAR3));
        VAR7->VAR69 = 0;
    }
    assert((VAR7->VAR69 & 7) == 0);
    return VAR7->VAR69 / 8;
}