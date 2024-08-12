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
        if (FUN6(VAR7, VAR7->VAR30) < 0)
            return -1;
        VAR2->VAR31 = VAR7->VAR30;
        VAR2->VAR32 = VAR7->VAR32;
        VAR2->VAR33 = VAR7->VAR33;
        VAR2->VAR34 = VAR7->VAR34;
        VAR2->VAR35 = VAR7->VAR35;
        VAR2->VAR36 = VAR7->VAR36;
        VAR2->VAR37 = VAR7->VAR37;
        VAR2->VAR38 = VAR7->VAR39 - VAR7->VAR37 - VAR7->VAR40;
        VAR2->VAR40 = VAR7->VAR40;
        FUN7(VAR7);
        if (VAR7->VAR41 == VAR42)
            FUN8(VAR7);
        if (VAR7->VAR43 & VAR44)
            FUN9(VAR7);
        for (VAR11 = 0; VAR11 < 4; VAR11++)
        {
            VAR7->VAR45->VAR46[VAR11] = VAR7->VAR47.VAR46[VAR11];
            VAR2->VAR46[VAR11] += VAR7->VAR45->VAR46[VAR11];
        }
        if (VAR7->VAR43 & VAR44)
            assert(VAR2->VAR32 + VAR2->VAR33 + VAR2->VAR34 + VAR2->VAR35 + VAR2->VAR36 == FUN10(&VAR7->VAR26));
        FUN11(&VAR7->VAR26);
        VAR7->VAR48 = FUN10(&VAR7->VAR26);
        VAR12 = FUN12(VAR7, VAR7->VAR48);
        if (VAR12)
        {
            if (VAR7->VAR26.VAR49 - VAR7->VAR26.VAR3 - (FUN10(&VAR7->VAR26) >> 3) < VAR12 + 50)
            {
                FUN13(VAR7->VAR2, VAR50, "");
                return -1;
            }
            switch (VAR7->VAR51)
            {
            case VAR52:
            case VAR53:
                while (VAR12--)
                {
                    FUN14(&VAR7->VAR26, 8, 0);
                }
                break;
            case VAR54:
                FUN14(&VAR7->VAR26, 16, 0);
                FUN14(&VAR7->VAR26, 16, 0x1C3);
                VAR12 -= 4;
                while (VAR12--)
                {
                    FUN14(&VAR7->VAR26, 8, 0xFF);
                }
                break;
            default:
                FUN13(VAR7->VAR2, VAR50, "");
            }
            FUN11(&VAR7->VAR26);
            VAR7->VAR48 = FUN10(&VAR7->VAR26);
        }
        if (VAR7->VAR2->VAR55 && VAR7->VAR2->VAR56 == VAR7->VAR2->VAR55 && VAR7->VAR41 == VAR57 && 90000LL * (VAR2->VAR58 - 1) <= VAR7->VAR2->VAR55 * 0xFFFFLL)
        {
            int VAR59;
            assert(VAR7->VAR60 == 0);
            VAR59 = FUN15(90000 * VAR7->VAR61.VAR62 / VAR7->VAR2->VAR55);
            assert(VAR59 < 0xFFFF);
            VAR7->VAR63[0] &= 0xF8;
            VAR7->VAR63[0] |= VAR59 >> 13;
            VAR7->VAR63[1] = VAR59 >> 5;
            VAR7->VAR63[2] &= 0x07;
            VAR7->VAR63[2] |= VAR59 << 3;
        }
        VAR7->VAR64 += VAR7->VAR48;
        VAR2->VAR48 = VAR7->VAR48;
    }
    else
    {
        assert((FUN16(&VAR7->VAR26) == VAR7->VAR26.VAR3));
        VAR7->VAR48 = 0;
    }
    assert((VAR7->VAR48 & 7) == 0);
    return VAR7->VAR48 / 8;
}