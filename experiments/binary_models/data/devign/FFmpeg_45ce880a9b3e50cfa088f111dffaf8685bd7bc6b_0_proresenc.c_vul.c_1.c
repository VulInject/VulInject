static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12, *VAR13, *VAR14, *VAR15, *VAR16;
    VAR11 *VAR17;
    PutBitContext VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23 = 0;
    int VAR24[4] = {0};
    int VAR25 = 2 + 2 * (VAR9->VAR26 - 1);
    int VAR27, VAR28, VAR29;
    int VAR30, VAR31;
    uint8_t VAR32;
    *VAR2->VAR33 = *VAR6;
    VAR2->VAR33->VAR34 = VAR35;
    VAR2->VAR33->VAR36 = 1;
    VAR30 = VAR9->VAR37;
    if ((VAR31 = FUN2(VAR4, VAR30 + VAR38)) < 0)
    {
        FUN3(VAR2, VAR39, "");
        return VAR31;
    }
    VAR12 = VAR4->VAR40;
    VAR12 += 4;
    FUN4(&VAR12, VAR41);
    VAR13 = VAR12;
    VAR16 = VAR13;
    VAR13 += 2;
    FUN5(&VAR13, 0);
    FUN6(&VAR13, VAR9->VAR42, 4);
    FUN5(&VAR13, VAR2->VAR43);
    FUN5(&VAR13, VAR2->VAR44);
    VAR32 = VAR9->VAR45 << 6;
    if (VAR2->VAR46 & VAR47)
        VAR32 |= VAR6->VAR48 ? 0x04 : 0x08;
    FUN7(&VAR13, VAR32);
    FUN7(&VAR13, 0);
    FUN7(&VAR13, VAR2->VAR49);
    FUN7(&VAR13, VAR2->VAR50);
    FUN7(&VAR13, VAR2->VAR51);
    FUN7(&VAR13, 0x40 | (VAR9->VAR52 >> 3));
    FUN7(&VAR13, 0);
    if (VAR9->VAR53 != VAR54)
    {
        FUN7(&VAR13, 0x03);
        for (VAR21 = 0; VAR21 < 64; VAR21++)
            FUN7(&VAR13, VAR9->VAR55[VAR21]);
        for (VAR21 = 0; VAR21 < 64; VAR21++)
            FUN7(&VAR13, VAR9->VAR55[VAR21]);
    }
    else
    {
        FUN7(&VAR13, 0x00);
    }
    FUN5(&VAR16, VAR13 - VAR12);
    for (VAR9->VAR56 = 0; VAR9->VAR56 < VAR9->VAR57; VAR9->VAR56++)
    {
        VAR17 = VAR13 + 1;
        FUN7(&VAR13, 0x40);
        VAR13 += 4;
        FUN5(&VAR13, VAR9->VAR58);
        FUN7(&VAR13, FUN8(VAR9->VAR59) << 4);
        VAR15 = VAR13;
        VAR13 += VAR9->VAR58 * 2;
        if (!VAR9->VAR60)
        {
            VAR31 = VAR2->FUN9(VAR2, VAR61, NULL, NULL, VAR9->VAR62);
            if (VAR31)
                return VAR31;
        }
        for (VAR20 = 0; VAR20 < VAR9->VAR62; VAR20++)
        {
            int VAR59 = VAR9->VAR59;
            for (VAR19 = VAR22 = 0; VAR19 < VAR9->VAR63; VAR19 += VAR59, VAR22++)
            {
                VAR23 = VAR9->VAR60 ? VAR9->VAR60 : VAR9->VAR64[VAR22 + VAR20 * VAR9->VAR65];
                while (VAR9->VAR63 - VAR19 < VAR59)
                    VAR59 >>= 1;
                FUN7(&VAR13, VAR25 << 3);
                VAR14 = VAR13;
                VAR13 += VAR25 - 1;
                FUN10(&VAR18, VAR13, (VAR30 - (VAR13 - VAR12)) * 8);
                VAR31 = FUN11(VAR2, VAR6, &VAR18, VAR24, VAR19, VAR20, VAR23, VAR59);
                if (VAR31 < 0)
                    return VAR31;
                FUN7(&VAR14, VAR23);
                VAR29 = VAR25 + VAR24[VAR9->VAR26 - 1];
                for (VAR21 = 0; VAR21 < VAR9->VAR26 - 1; VAR21++)
                {
                    FUN5(&VAR14, VAR24[VAR21]);
                    VAR29 += VAR24[VAR21];
                }
                FUN5(&VAR15, VAR29);
                VAR13 += VAR29 - VAR25;
            }
        }
        if (VAR9->VAR57 == 1)
            VAR28 = VAR13 - VAR17 - 6;
        else
            VAR28 = VAR13 - VAR17 + 1;
        FUN4(&VAR17, VAR28);
    }
    VAR12 -= 8;
    VAR27 = VAR13 - VAR12;
    FUN4(&VAR12, VAR27);
    VAR4->VAR66 = VAR27;
    VAR4->VAR46 |= VAR67;
    *VAR7 = 1;
    return 0;
}