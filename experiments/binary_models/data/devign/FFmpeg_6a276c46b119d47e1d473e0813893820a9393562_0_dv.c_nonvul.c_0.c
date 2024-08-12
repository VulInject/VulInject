static inline void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    VAR19 *VAR20, *VAR21;
    int VAR22;
    VAR3 *VAR23;
    const VAR3 *VAR24;
    PutBitContext VAR25, VAR26;
    GetBitContext VAR27;
    BlockInfo VAR28[5 * VAR29], *VAR30, *VAR31;
    FUN2(VAR19, VAR32[5 * VAR29][64]);
    FUN3(VAR3, VAR33[80 + 4]);
    FUN3(VAR3, VAR34[5 * 80 + 4]);
    const int VAR35 = 3 - VAR2->VAR36->VAR37;
    int VAR38[5];
    assert((((int)VAR33) & 7) == 0);
    assert((((int)VAR34) & 7) == 0);
    memset(VAR32, 0, sizeof(VAR32));
    VAR24 = VAR4;
    VAR21 = &VAR32[0][0];
    VAR31 = VAR28;
    FUN4(&VAR26, VAR34, 5 * 80);
    for (VAR12 = 0; VAR12 < 5; VAR12++, VAR31 += VAR2->VAR39->VAR40, VAR21 += VAR2->VAR39->VAR40 * 64)
    {
        VAR7 = VAR24[3] & 0x0f;
        VAR24 += 4;
        FUN4(&VAR25, VAR33, 80);
        VAR30 = VAR31;
        VAR20 = VAR21;
        VAR38[VAR12] = 0;
        for (VAR11 = 0; VAR11 < VAR2->VAR39->VAR40; VAR11++)
        {
            VAR16 = VAR2->VAR39->VAR41[VAR11];
            FUN5(&VAR27, VAR24, VAR16);
            VAR8 = FUN6(&VAR27, 9);
            VAR9 = FUN7(&VAR27);
            VAR10 = FUN8(&VAR27, 2);
            if (FUN9(VAR2->VAR39))
            {
                VAR30->VAR42 = VAR2->VAR42[0];
                VAR30->VAR43 = VAR2->VAR44[0];
                VAR30->VAR45 = VAR2->VAR46[((VAR2->VAR39->VAR47 == 720) << 1) | (VAR11 >= 4)][VAR10][VAR7];
                VAR38[VAR12] |= !VAR11 && VAR9;
            }
            else
            {
                VAR30->VAR42 = VAR2->VAR42[VAR9 && VAR35 == 3];
                VAR30->VAR43 = VAR2->VAR44[VAR9];
                VAR30->VAR45 = VAR2->VAR48[VAR10 == 3][VAR9][VAR7 + VAR49[VAR10]];
            }
            VAR8 = VAR8 << 2;
            VAR8 += 1024;
            VAR20[0] = VAR8;
            VAR24 += VAR16 >> 3;
            VAR30->VAR50 = 0;
            VAR30->VAR51 = 0;
            FUN10("", VAR12, VAR11);
            FUN11(&VAR27, VAR30, VAR20);
            if (VAR30->VAR50 >= 64)
                FUN12(&VAR25, &VAR27);
            VAR20 += 64;
            VAR30++;
        }
        FUN10("", FUN13(&VAR25), VAR12);
        VAR20 = VAR21;
        VAR30 = VAR31;
        FUN5(&VAR27, VAR33, FUN13(&VAR25));
        FUN14(&VAR25);
        for (VAR11 = 0; VAR11 < VAR2->VAR39->VAR40; VAR11++, VAR20 += 64, VAR30++)
        {
            if (VAR30->VAR50 < 64 && FUN15(&VAR27) > 0)
            {
                FUN11(&VAR27, VAR30, VAR20);
                if (VAR30->VAR50 < 64)
                    break;
            }
        }
        if (VAR11 >= VAR2->VAR39->VAR40)
            FUN12(&VAR26, &VAR27);
    }
    FUN10("", FUN13(&VAR26));
    VAR20 = &VAR32[0][0];
    VAR30 = VAR28;
    FUN5(&VAR27, VAR34, FUN13(&VAR26));
    FUN14(&VAR26);
    for (VAR12 = 0; VAR12 < 5; VAR12++)
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR39->VAR40; VAR11++)
        {
            if (VAR30->VAR50 < 64)
            {
                FUN10("", VAR12, VAR11);
                FUN11(&VAR27, VAR30, VAR20);
            }
            if (VAR30->VAR50 >= 64 && VAR30->VAR50 < 127)
                FUN16(NULL, VAR52, "", VAR30->VAR50);
            VAR20 += 64;
            VAR30++;
        }
    }
    VAR20 = &VAR32[0][0];
    VAR30 = VAR28;
    for (VAR12 = 0; VAR12 < 5; VAR12++)
    {
        VAR15 = *VAR6++;
        VAR13 = VAR15 & 0xff;
        VAR14 = VAR15 >> 8;
        if (VAR2->VAR39->VAR47 == 720 && !(VAR2->VAR53[1] & 0x0C))
        {
            VAR14 -= (VAR14 > 17) ? 18 : -72;
        }
        if ((VAR2->VAR39->VAR54 == VAR55) || (VAR2->VAR39->VAR54 == VAR56 && VAR13 >= (704 / 8)) || (VAR2->VAR39->VAR47 >= 720 && VAR14 != 134))
        {
            VAR17 = (VAR2->VAR57.VAR18[0] << ((!VAR38[VAR12]) * VAR35));
        }
        else
        {
            VAR17 = (2 << VAR35);
        }
        VAR23 = VAR2->VAR57.VAR58[0] + ((VAR14 * VAR2->VAR57.VAR18[0] + VAR13) << VAR35);
        VAR18 = VAR2->VAR57.VAR18[0] << VAR38[VAR12];
        VAR30[0].FUN17(VAR23, VAR18, VAR20 + 0 * 64);
        if (VAR2->VAR39->VAR59 == 4)
        {
            VAR30[2].FUN17(VAR23 + (1 << VAR35), VAR18, VAR20 + 2 * 64);
        }
        else
        {
            VAR30[1].FUN17(VAR23 + (1 << VAR35), VAR18, VAR20 + 1 * 64);
            VAR30[2].FUN17(VAR23 + VAR17, VAR18, VAR20 + 2 * 64);
            VAR30[3].FUN17(VAR23 + (1 << VAR35) + VAR17, VAR18, VAR20 + 3 * 64);
        }
        VAR30 += 4;
        VAR20 += 4 * 64;
        VAR22 = (((VAR14 >> (VAR2->VAR39->VAR54 == VAR55)) * VAR2->VAR57.VAR18[1] + (VAR13 >> ((VAR2->VAR39->VAR54 == VAR56) ? 2 : 1))) << VAR35);
        for (VAR11 = 2; VAR11; VAR11--)
        {
            VAR3 *VAR60 = VAR2->VAR57.VAR58[VAR11] + VAR22;
            if (VAR2->VAR39->VAR54 == VAR56 && VAR13 >= (704 / 8))
            {
                uint64_t VAR61[64 / 8];
                VAR3 *VAR62 = (VAR3 *)VAR61;
                VAR3 *VAR63, *VAR64;
                int VAR65, VAR66;
                VAR30->FUN17(VAR62, 8, VAR20);
                for (VAR66 = 0; VAR66 < (1 << VAR35); VAR66++, VAR60 += VAR2->VAR57.VAR18[VAR11], VAR62 += 8)
                {
                    VAR64 = VAR62 + (1 << (VAR35 - 1));
                    VAR63 = VAR60 + (VAR2->VAR57.VAR18[VAR11] << VAR35);
                    for (VAR65 = 0; VAR65 < (1 << (VAR35 - 1)); VAR65++)
                    {
                        VAR60[VAR65] = VAR62[VAR65];
                        VAR63[VAR65] = VAR64[VAR65];
                    }
                }
                VAR20 += 64;
                VAR30++;
            }
            else
            {
                VAR17 = (VAR14 == 134) ? (1 << VAR35) : VAR2->VAR57.VAR18[VAR11] << ((!VAR38[VAR12]) * VAR35);
                VAR18 = VAR2->VAR57.VAR18[VAR11] << VAR38[VAR12];
                (VAR30++)->FUN17(VAR60, VAR18, VAR20);
                VAR20 += 64;
                if (VAR2->VAR39->VAR40 == 8)
                {
                    (VAR30++)->FUN17(VAR60 + VAR17, VAR18, VAR20);
                    VAR20 += 64;
                }
            }
        }
    }
}