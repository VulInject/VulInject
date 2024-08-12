static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    uint8_t VAR5[VAR6];
    int VAR7, VAR8, VAR9, VAR10;
    uint8_t VAR11[32][VAR6];
    unsigned VAR12 = 0;
    memset(VAR11, 128, sizeof(VAR11));
    memset(VAR5, 128, sizeof(VAR5));
    FUN2(VAR4, VAR2->VAR13->VAR14, VAR2->VAR13->VAR15);
    FUN3(VAR4, 0.05 * (1LL << 32), 256 - 8);
    VAR2->VAR16 = FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR16 < 2)
    {
        FUN5(VAR2->VAR13, VAR17, "");
        return VAR18;
    }
    if (VAR2->VAR16 > 2)
    {
        VAR4->VAR19 -= 4;
        VAR2->VAR20 = FUN4(VAR4, VAR5, 0);
        if (VAR2->VAR20 < 0)
            return VAR18;
    }
    VAR2->VAR21 = VAR2->VAR13->VAR22 = FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR21 > 1)
    {
        for (VAR7 = 1; VAR7 < 256; VAR7++)
            VAR2->VAR23[VAR7] = FUN4(VAR4, VAR5, 1) + VAR4->VAR24[VAR7];
    }
    VAR2->VAR25 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR13->VAR26 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR27 = FUN6(VAR4, VAR5);
    VAR2->VAR28 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR29 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR30 = FUN6(VAR4, VAR5);
    VAR2->VAR31 = 1 + (VAR2->VAR27 || VAR2->VAR16 < 4) + VAR2->VAR30;
    VAR2->VAR32 = 1 + FUN4(VAR4, VAR5, 0);
    VAR2->VAR33 = 1 + FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR28 > 4U || VAR2->VAR29 > 4U)
    {
        FUN5(VAR2->VAR13, VAR17, "", VAR2->VAR28, VAR2->VAR29);
        return VAR18;
    }
    if (VAR2->VAR32 > (unsigned)VAR2->VAR34 || !VAR2->VAR32 || VAR2->VAR33 > (unsigned)VAR2->VAR35 || !VAR2->VAR33)
    {
        FUN5(VAR2->VAR13, VAR17, "");
        return VAR18;
    }
    VAR2->VAR36 = FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR36 > (unsigned)VAR37)
        return VAR18;
    for (VAR7 = 0; VAR7 < VAR2->VAR36; VAR7++)
    {
        VAR2->VAR38[VAR7] = FUN7(VAR4, VAR2->VAR39[VAR7]);
        if (VAR2->VAR38[VAR7] < 0)
        {
            FUN5(VAR2->VAR13, VAR17, "");
            return VAR18;
        }
    }
    if ((VAR10 = FUN8(VAR2)) < 0)
        return VAR10;
    for (VAR7 = 0; VAR7 < VAR2->VAR36; VAR7++)
        if (FUN6(VAR4, VAR5))
        {
            for (VAR8 = 0; VAR8 < VAR2->VAR38[VAR7]; VAR8++)
                for (VAR9 = 0; VAR9 < VAR6; VAR9++)
                {
                    int VAR40 = VAR8 ? VAR2->VAR41[VAR7][VAR8 - 1][VAR9] : 128;
                    VAR2->VAR41[VAR7][VAR8][VAR9] = (VAR40 + FUN4(VAR4, VAR11[VAR9], 1)) & 0xFF;
                }
        }
    if (VAR2->VAR16 > 2)
    {
        VAR2->VAR42 = FUN4(VAR4, VAR5, 0);
        if (VAR2->VAR20 > 2)
            VAR2->VAR43 = FUN4(VAR4, VAR5, 0);
    }
    if (VAR2->VAR16 > 2)
    {
        unsigned VAR44;
        VAR44 = FUN9(FUN10(VAR45), 0, VAR2->VAR13->VAR14, VAR2->VAR13->VAR15);
        if (VAR44 || VAR2->VAR13->VAR15 < 4)
        {
            FUN5(VAR2->VAR13, VAR17, "", VAR44);
            return VAR18;
        }
        VAR12 = FUN11(VAR2->VAR13->VAR14 + VAR2->VAR13->VAR15 - 4);
    }
    if (VAR2->VAR13->VAR46 & VAR47)
        FUN5(VAR2->VAR13, VAR48, "", VAR2->VAR16, VAR2->VAR20, VAR2->VAR21, VAR2->VAR25, VAR2->VAR13->VAR26, VAR2->VAR27, VAR2->VAR28, VAR2->VAR29, VAR2->VAR30, VAR2->VAR32, VAR2->VAR33, VAR2->VAR36, VAR2->VAR42, VAR2->VAR43, VAR12);
    return 0;
}