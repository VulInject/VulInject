static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18, *VAR19;
    int VAR20;
    VAR3 *VAR21;
    void (*VAR22)(VAR3 * VAR23, int VAR24, VAR17 *VAR18);
    VAR3 *VAR25;
    PutBitContext VAR26, VAR27;
    GetBitContext VAR28;
    BlockInfo VAR29[5 * 6], *VAR30, *VAR31;
    DCTELEM VAR32[5 * 6][64] VAR33;
    uint8_t VAR34[80 + 4] VAR33;
    uint8_t VAR35[5 * 80 + 4] VAR33;
    assert((((int)VAR34) & 7) == 0);
    assert((((int)VAR35) & 7) == 0);
    memset(VAR32, 0, sizeof(VAR32));
    VAR25 = VAR4;
    VAR19 = &VAR32[0][0];
    VAR31 = VAR29;
    FUN2(&VAR27, VAR35, 5 * 80);
    for (VAR12 = 0; VAR12 < 5; VAR12++, VAR31 += 6, VAR19 += 6 * 64)
    {
        VAR7 = VAR25[3] & 0x0f;
        VAR25 += 4;
        FUN2(&VAR26, VAR34, 80);
        VAR30 = VAR31;
        VAR18 = VAR19;
        for (VAR11 = 0; VAR11 < 6; VAR11++)
        {
            VAR16 = VAR36[VAR11];
            FUN3(&VAR28, VAR25, VAR16);
            VAR8 = FUN4(&VAR28, 9);
            VAR9 = FUN5(&VAR28);
            VAR30->VAR9 = VAR9;
            VAR30->VAR37 = VAR2->VAR38[VAR9];
            VAR10 = FUN6(&VAR28, 2);
            VAR30->VAR39 = VAR2->VAR40[VAR10 == 3][VAR9][VAR7 + VAR41[VAR10]];
            VAR8 = VAR8 << 2;
            VAR8 += 1024;
            VAR18[0] = VAR8;
            VAR25 += VAR16 >> 3;
            VAR30->VAR42 = 0;
            VAR30->VAR43 = 0;
            FUN7("", VAR12, VAR11);
            FUN8(&VAR28, VAR30, VAR18);
            if (VAR30->VAR42 >= 64)
                FUN9(&VAR26, &VAR28);
            VAR18 += 64;
            VAR30++;
        }
        FUN7("", FUN10(&VAR26), VAR12);
        VAR18 = VAR19;
        VAR30 = VAR31;
        FUN3(&VAR28, VAR34, FUN10(&VAR26));
        FUN11(&VAR26);
        for (VAR11 = 0; VAR11 < 6; VAR11++, VAR18 += 64, VAR30++)
        {
            if (VAR30->VAR42 < 64 && FUN12(&VAR28) > 0)
            {
                FUN8(&VAR28, VAR30, VAR18);
                if (VAR30->VAR42 < 64)
                    break;
            }
        }
        if (VAR11 >= 6)
            FUN9(&VAR27, &VAR28);
    }
    FUN7("", FUN10(&VAR27));
    VAR18 = &VAR32[0][0];
    VAR30 = VAR29;
    FUN3(&VAR28, VAR35, FUN10(&VAR27));
    FUN11(&VAR27);
    for (VAR12 = 0; VAR12 < 5; VAR12++)
    {
        for (VAR11 = 0; VAR11 < 6; VAR11++)
        {
            if (VAR30->VAR42 < 64)
            {
                FUN7("", VAR12, VAR11);
                FUN8(&VAR28, VAR30, VAR18);
            }
            if (VAR30->VAR42 >= 64 && VAR30->VAR42 < 127)
                FUN13(NULL, VAR44, "", VAR30->VAR42);
            VAR18 += 64;
            VAR30++;
        }
    }
    VAR18 = &VAR32[0][0];
    VAR30 = VAR29;
    for (VAR12 = 0; VAR12 < 5; VAR12++)
    {
        VAR15 = *VAR6++;
        VAR13 = VAR15 & 0xff;
        VAR14 = VAR15 >> 8;
        VAR21 = VAR2->VAR45.VAR46[0] + (VAR14 * VAR2->VAR45.VAR47[0] * 8) + (VAR13 * 8);
        if (VAR2->VAR48->VAR49 == VAR50)
            VAR20 = (VAR14 * VAR2->VAR45.VAR47[1] * 8) + ((VAR13 >> 2) * 8);
        else
            VAR20 = ((VAR14 >> 1) * VAR2->VAR45.VAR47[1] * 8) + ((VAR13 >> 1) * 8);
        for (VAR11 = 0; VAR11 < 6; VAR11++)
        {
            VAR22 = VAR2->VAR22[VAR30->VAR9];
            if (VAR11 < 4)
            {
                if (VAR2->VAR48->VAR49 == VAR50 && VAR13 < (704 / 8))
                {
                    FUN14(VAR21 + (VAR11 * 8), VAR2->VAR45.VAR47[0], VAR18);
                }
                else
                {
                    FUN14(VAR21 + ((VAR11 & 1) * 8) + ((VAR11 >> 1) * 8 * VAR2->VAR45.VAR47[0]), VAR2->VAR45.VAR47[0], VAR18);
                }
            }
            else
            {
                if (VAR2->VAR48->VAR49 == VAR50 && VAR13 >= (704 / 8))
                {
                    uint64_t VAR51[64 / 8];
                    VAR3 *VAR52 = (VAR3 *)VAR51;
                    VAR3 *VAR53, *VAR54, *VAR55;
                    int VAR56, VAR47;
                    FUN14(VAR52, 8, VAR18);
                    VAR47 = VAR2->VAR45.VAR47[6 - VAR11];
                    VAR53 = VAR2->VAR45.VAR46[6 - VAR11] + VAR20;
                    VAR55 = VAR52;
                    for (VAR56 = 0; VAR56 < 8; VAR56++)
                    {
                        VAR54 = VAR53 + 8 * VAR47;
                        VAR53[0] = VAR55[0];
                        VAR54[0] = VAR55[4];
                        VAR53[1] = VAR55[1];
                        VAR54[1] = VAR55[5];
                        VAR53[2] = VAR55[2];
                        VAR54[2] = VAR55[6];
                        VAR53[3] = VAR55[3];
                        VAR54[3] = VAR55[7];
                        VAR53 += VAR47;
                        VAR55 += 8;
                    }
                }
                else
                {
                    FUN14(VAR2->VAR45.VAR46[6 - VAR11] + VAR20, VAR2->VAR45.VAR47[6 - VAR11], VAR18);
                }
            }
            VAR18 += 64;
            VAR30++;
        }
    }
}