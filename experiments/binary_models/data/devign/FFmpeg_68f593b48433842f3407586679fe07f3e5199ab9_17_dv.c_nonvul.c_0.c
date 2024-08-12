static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18, *VAR19;
    int VAR20, VAR21;
    VAR3 *VAR22;
    BlockInfo VAR23[5 * 6], *VAR24, *VAR25;
    void (*VAR26)(VAR3 * VAR27, int VAR28, VAR17 *VAR18);
    VAR3 *VAR29;
    PutBitContext VAR30, VAR31;
    UINT8 VAR32[80 + 4];
    int VAR33;
    UINT8 VAR34[5 * 80 + 4];
    int VAR35;
    memset(VAR2->VAR18, 0, sizeof(VAR2->VAR18));
    VAR29 = VAR4;
    VAR19 = &VAR2->VAR18[0][0];
    VAR25 = VAR23;
    FUN2(&VAR31, VAR34, 5 * 80, NULL, NULL);
    VAR35 = 0;
    for (VAR12 = 0; VAR12 < 5; VAR12++)
    {
        VAR7 = VAR29[3] & 0x0f;
        VAR29 += 4;
        FUN2(&VAR30, VAR32, 80, NULL, NULL);
        VAR33 = 0;
        VAR24 = VAR25;
        VAR18 = VAR19;
        for (VAR11 = 0; VAR11 < 6; VAR11++)
        {
            FUN3(&VAR2->VAR36, VAR29, 14 * 8);
            VAR8 = FUN4(&VAR2->VAR36, 9);
            VAR8 = (VAR8 << (32 - 9)) >> (32 - 9);
            VAR9 = FUN5(&VAR2->VAR36);
            VAR24->VAR9 = VAR9;
            VAR24->VAR37 = VAR2->VAR38[VAR9];
            VAR10 = FUN4(&VAR2->VAR36, 2);
            VAR24->VAR39 = (VAR10 == 3);
            VAR24->VAR40 = VAR2->VAR41[VAR9][VAR7 + VAR42[VAR10]];
            VAR8 = VAR8 << 2;
            VAR8 += 1024;
            VAR18[0] = VAR8;
            VAR16 = VAR43[VAR11];
            VAR29 += VAR16 >> 3;
            VAR24->VAR44 = 0;
            VAR24->VAR45 = 0;
            FUN6(VAR2, VAR24, VAR18, VAR16);
            VAR21 = VAR16 - VAR2->VAR36.VAR46;
            if (VAR24->VAR47)
            {
                VAR24->VAR45 = 0;
                VAR33 += VAR21;
                FUN7(&VAR30, &VAR2->VAR36, VAR21);
            }
            else
            {
                VAR24->VAR45 = VAR21;
                VAR24->VAR48 = FUN4(&VAR2->VAR36, VAR21);
            }
            VAR18 += 64;
            VAR24++;
        }
        FUN8(&VAR30);
        FUN9("", VAR33);
        VAR18 = VAR19;
        VAR24 = VAR25;
        FUN3(&VAR2->VAR36, VAR32, 80 * 8);
        for (VAR11 = 0; VAR11 < 6; VAR11++)
        {
            if (!VAR24->VAR47 && VAR2->VAR36.VAR46 < VAR33)
            {
                FUN6(VAR2, VAR24, VAR18, VAR33);
                if (!VAR24->VAR47)
                {
                    VAR21 = VAR33 - VAR2->VAR36.VAR46;
                    if (VAR21 > 0)
                    {
                        VAR24->VAR45 += VAR21;
                        VAR24->VAR48 = (VAR24->VAR48 << VAR21) | FUN4(&VAR2->VAR36, VAR21);
                    }
                    goto VAR49;
                }
            }
            VAR18 += 64;
            VAR24++;
        }
        VAR21 = VAR33 - VAR2->VAR36.VAR46;
        VAR35 += VAR21;
        FUN7(&VAR31, &VAR2->VAR36, VAR21);
    VAR49:
        VAR25 += 6;
        VAR19 += 6 * 64;
    }
    FUN8(&VAR31);
    FUN9("", VAR35);
    VAR18 = &VAR2->VAR18[0][0];
    VAR24 = VAR23;
    FUN3(&VAR2->VAR36, VAR34, 5 * 80 * 8);
    for (VAR12 = 0; VAR12 < 5; VAR12++)
    {
        for (VAR11 = 0; VAR11 < 6; VAR11++)
        {
            if (!VAR24->VAR47)
            {
                FUN9("", VAR12, VAR11);
                FUN6(VAR2, VAR24, VAR18, VAR35);
            }
            VAR18 += 64;
            VAR24++;
        }
    }
    VAR18 = &VAR2->VAR18[0][0];
    VAR24 = VAR23;
    for (VAR12 = 0; VAR12 < 5; VAR12++)
    {
        VAR15 = *VAR6++;
        VAR13 = VAR15 & 0xff;
        VAR14 = VAR15 >> 8;
        VAR22 = VAR2->VAR50[0] + (VAR14 * VAR2->VAR51[0] * 8) + (VAR13 * 8);
        if (VAR2->VAR52)
            VAR20 = (VAR14 * VAR2->VAR51[1] * 8) + ((VAR13 >> 2) * 8);
        else
            VAR20 = ((VAR14 >> 1) * VAR2->VAR51[1] * 8) + ((VAR13 >> 1) * 8);
        for (VAR11 = 0; VAR11 < 6; VAR11++)
        {
            VAR26 = VAR2->VAR26[VAR24->VAR9];
            if (VAR11 < 4)
            {
                if (VAR2->VAR52 && VAR13 < (704 / 8))
                {
                    FUN10(VAR22 + (VAR11 * 8), VAR2->VAR51[0], VAR18);
                }
                else
                {
                    FUN10(VAR22 + ((VAR11 & 1) * 8) + ((VAR11 >> 1) * 8 * VAR2->VAR51[0]), VAR2->VAR51[0], VAR18);
                }
            }
            else
            {
                if (VAR2->VAR52 && VAR13 >= (704 / 8))
                {
                    uint8_t VAR53[64], *VAR54, *VAR55, *VAR56;
                    int VAR57, VAR51;
                    FUN10(VAR53, 8, VAR18);
                    VAR51 = VAR2->VAR51[6 - VAR11];
                    VAR54 = VAR2->VAR50[6 - VAR11] + VAR20;
                    VAR56 = VAR53;
                    for (VAR57 = 0; VAR57 < 8; VAR57++)
                    {
                        VAR55 = VAR54 + VAR51;
                        VAR55[0] = VAR54[0] = (VAR56[0] + VAR56[1]) >> 1;
                        VAR55[1] = VAR54[1] = (VAR56[2] + VAR56[3]) >> 1;
                        VAR55[2] = VAR54[2] = (VAR56[4] + VAR56[5]) >> 1;
                        VAR55[3] = VAR54[3] = (VAR56[6] + VAR56[7]) >> 1;
                        VAR54 += VAR51 * 2;
                        VAR56 += 8;
                    }
                }
                else
                {
                    FUN10(VAR2->VAR50[6 - VAR11] + VAR20, VAR2->VAR51[6 - VAR11], VAR18);
                }
            }
            VAR18 += 64;
            VAR24++;
        }
    }
}