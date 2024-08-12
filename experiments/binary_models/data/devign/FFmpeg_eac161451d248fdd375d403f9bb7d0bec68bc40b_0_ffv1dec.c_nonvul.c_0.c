static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    uint8_t VAR5[VAR6];
    int VAR7, VAR8, VAR9, VAR10;
    uint8_t VAR11[32][VAR6];
    memset(VAR11, 128, sizeof(VAR11));
    memset(VAR5, 128, sizeof(VAR5));
    FUN2(VAR4, VAR2->VAR12->VAR13, VAR2->VAR12->VAR14);
    FUN3(VAR4, 0.05 * (1LL << 32), 256 - 8);
    VAR2->VAR15 = FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR15 < 2)
    {
        FUN5(VAR2->VAR12, VAR16, "");
        return VAR17;
    }
    if (VAR2->VAR15 > 2)
    {
        VAR4->VAR18 -= 4;
        VAR2->VAR19 = FUN4(VAR4, VAR5, 0);
        if (VAR2->VAR19 < 0)
            return VAR17;
    }
    VAR2->VAR20 = VAR2->VAR12->VAR21 = FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR20 > 1)
    {
        for (VAR7 = 1; VAR7 < 256; VAR7++)
            VAR2->VAR22[VAR7] = FUN4(VAR4, VAR5, 1) + VAR4->VAR23[VAR7];
    }
    VAR2->VAR24 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR12->VAR25 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR26 = FUN6(VAR4, VAR5);
    VAR2->VAR27 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR28 = FUN4(VAR4, VAR5, 0);
    VAR2->VAR29 = FUN6(VAR4, VAR5);
    VAR2->VAR30 = 1 + (VAR2->VAR26 || VAR2->VAR15 < 4) + VAR2->VAR29;
    VAR2->VAR31 = 1 + FUN4(VAR4, VAR5, 0);
    VAR2->VAR32 = 1 + FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR27 > 4U || VAR2->VAR28 > 4U)
    {
        FUN5(VAR2->VAR12, VAR16, "", VAR2->VAR27, VAR2->VAR28);
        return VAR17;
    }
    if (VAR2->VAR31 > (unsigned)VAR2->VAR33 || !VAR2->VAR31 || VAR2->VAR32 > (unsigned)VAR2->VAR34 || !VAR2->VAR32)
    {
        FUN5(VAR2->VAR12, VAR16, "");
        return VAR17;
    }
    VAR2->VAR35 = FUN4(VAR4, VAR5, 0);
    if (VAR2->VAR35 > (unsigned)VAR36)
        return VAR17;
    for (VAR7 = 0; VAR7 < VAR2->VAR35; VAR7++)
    {
        VAR2->VAR37[VAR7] = FUN7(VAR4, VAR2->VAR38[VAR7]);
        if (VAR2->VAR37[VAR7] < 0)
        {
            FUN5(VAR2->VAR12, VAR16, "");
            return VAR17;
        }
    }
    if ((VAR10 = FUN8(VAR2)) < 0)
        return VAR10;
    for (VAR7 = 0; VAR7 < VAR2->VAR35; VAR7++)
        if (FUN6(VAR4, VAR5))
        {
            for (VAR8 = 0; VAR8 < VAR2->VAR37[VAR7]; VAR8++)
                for (VAR9 = 0; VAR9 < VAR6; VAR9++)
                {
                    int VAR39 = VAR8 ? VAR2->VAR40[VAR7][VAR8 - 1][VAR9] : 128;
                    VAR2->VAR40[VAR7][VAR8][VAR9] = (VAR39 + FUN4(VAR4, VAR11[VAR9], 1)) & 0xFF;
                }
        }
    if (VAR2->VAR15 > 2)
    {
        VAR2->VAR41 = FUN4(VAR4, VAR5, 0);
        if (VAR2->VAR19 > 2)
            VAR2->VAR42 = FUN4(VAR4, VAR5, 0);
    }
    if (VAR2->VAR15 > 2)
    {
        unsigned VAR43;
        VAR43 = FUN9(FUN10(VAR44), 0, VAR2->VAR12->VAR13, VAR2->VAR12->VAR14);
        if (VAR43 || VAR2->VAR12->VAR14 < 4)
        {
            FUN5(VAR2->VAR12, VAR16, "", VAR43);
            return VAR17;
        }
    }
    if (VAR2->VAR12->VAR45 & VAR46)
        FUN5(VAR2->VAR12, VAR47, "", VAR2->VAR15, VAR2->VAR19, VAR2->VAR20, VAR2->VAR24, VAR2->VAR12->VAR25, VAR2->VAR26, VAR2->VAR27, VAR2->VAR28, VAR2->VAR29, VAR2->VAR31, VAR2->VAR32, VAR2->VAR35, VAR2->VAR41, VAR2->VAR42);
    return 0;
}