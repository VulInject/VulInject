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
    int VAR30 = VAR9->VAR30;
    int VAR31, VAR32;
    *VAR2->VAR33 = *VAR6;
    VAR2->VAR33->VAR34 = VAR35;
    VAR2->VAR33->VAR36 = 1;
    VAR31 = VAR9->VAR27 + VAR37;
    if ((VAR32 = FUN2(VAR4, VAR31)) < 0)
    {
        FUN3(VAR2, VAR38, "");
        return VAR32;
    }
    VAR12 = VAR4->VAR39;
    VAR12 += 4;
    FUN4(&VAR12, VAR40);
    VAR13 = VAR12;
    VAR16 = VAR13;
    VAR13 += 2;
    FUN5(&VAR13, 0);
    FUN6(&VAR13, "", 4);
    FUN5(&VAR13, VAR2->VAR41);
    FUN5(&VAR13, VAR2->VAR42);
    FUN7(&VAR13, VAR9->VAR43 << 6);
    FUN7(&VAR13, 0);
    FUN7(&VAR13, 0);
    FUN7(&VAR13, 0);
    FUN7(&VAR13, 6);
    FUN7(&VAR13, 0x40);
    FUN7(&VAR13, 0);
    FUN7(&VAR13, 0x03);
    for (VAR21 = 0; VAR21 < 64; VAR21++)
        FUN7(&VAR13, VAR9->VAR44->VAR45[VAR21]);
    for (VAR21 = 0; VAR21 < 64; VAR21++)
        FUN7(&VAR13, VAR9->VAR44->VAR45[VAR21]);
    FUN5(&VAR16, VAR13 - VAR12);
    VAR17 = VAR13 + 1;
    FUN7(&VAR13, 0x40);
    VAR13 += 4;
    FUN5(&VAR13, VAR9->VAR46);
    FUN7(&VAR13, FUN8(VAR9->VAR30) << 4);
    VAR15 = VAR13;
    VAR13 += VAR9->VAR46 * 2;
    for (VAR20 = 0; VAR20 < VAR9->VAR47; VAR20++)
    {
        VAR30 = VAR9->VAR30;
        for (VAR19 = VAR22 = 0; VAR19 < VAR9->VAR48; VAR19 += VAR30, VAR22++)
        {
            while (VAR9->VAR48 - VAR19 < VAR30)
                VAR30 >>= 1;
            VAR23 = FUN9(VAR2, VAR6, (VAR22 + 1) * VAR49, VAR19, VAR20, VAR30);
        }
        for (VAR19 = VAR9->VAR50 - 1; VAR19 >= 0; VAR19--)
        {
            VAR9->VAR51[VAR19] = VAR9->VAR52[VAR23].VAR45;
            VAR23 = VAR9->VAR52[VAR23].VAR53;
        }
        VAR30 = VAR9->VAR30;
        for (VAR19 = VAR22 = 0; VAR19 < VAR9->VAR48; VAR19 += VAR30, VAR22++)
        {
            VAR23 = VAR9->VAR51[VAR22];
            while (VAR9->VAR48 - VAR19 < VAR30)
                VAR30 >>= 1;
            FUN7(&VAR13, VAR25 << 3);
            VAR14 = VAR13;
            VAR13 += VAR25 - 1;
            FUN10(&VAR18, VAR13, (VAR31 - (VAR13 - VAR12)) * 8);
            FUN11(VAR2, VAR6, &VAR18, VAR24, VAR19, VAR20, VAR23, VAR30);
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
    VAR12 -= 8;
    VAR27 = VAR13 - VAR12;
    VAR28 = VAR13 - VAR17 - 6;
    FUN4(&VAR12, VAR27);
    FUN4(&VAR17, VAR28);
    VAR4->VAR54 = VAR27;
    VAR4->VAR55 |= VAR56;
    *VAR7 = 1;
    return 0;
}