static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13 = 0;
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19[VAR20];
    if (!FUN2(VAR8))
        return FUN3(VAR2, VAR4, VAR5);
    VAR17 = VAR21[FUN4(VAR8, 4)];
    if (VAR6 > 0 && FUN2(VAR8))
    {
        if (VAR17 > VAR6)
            return VAR22;
        VAR4 -= VAR17;
        VAR5 += VAR17;
        if (VAR17 > VAR5)
            return VAR22;
    }
    else
    {
        int VAR23;
        if (VAR17 > VAR5)
            return VAR22;
        VAR23 = FUN4(VAR8, 2);
        if (VAR23 > 2)
            return VAR22;
        if ((VAR13 = FUN3(VAR2, VAR4, VAR17)) < 0)
            return VAR13;
        if (VAR23)
            FUN5(VAR4, VAR23, VAR17);
    }
    VAR14 = FUN6(VAR8);
    VAR15 = FUN2(VAR8) + 6;
    VAR16 = 10;
    if (FUN2(VAR8))
    {
        VAR16 -= FUN4(VAR8, 3) + 1;
        if (VAR16 < 3)
            return VAR22;
    }
    VAR2->VAR24[0] = FUN7(VAR8, 10);
    VAR2->VAR24[1] = FUN7(VAR8, 10);
    VAR2->VAR24[2] = FUN7(VAR8, VAR15) << (10 - VAR15);
    VAR2->VAR24[3] = FUN7(VAR8, VAR15) << (10 - VAR15);
    if (VAR17 > 4)
    {
        int VAR25 = VAR15 - FUN2(VAR8);
        for (VAR11 = 4; VAR11 < VAR17; VAR11++)
        {
            if (!(VAR11 & 3))
                VAR9 = VAR25 - FUN4(VAR8, 2);
            VAR2->VAR24[VAR11] = FUN7(VAR8, VAR9) << (10 - VAR15);
        }
    }
    VAR19[0] = VAR2->VAR24[0] << 6;
    for (VAR11 = 1; VAR11 < VAR17; VAR11++)
    {
        VAR3 *VAR26 = &VAR19[0];
        VAR3 *VAR27 = &VAR19[VAR11 - 1];
        for (VAR12 = 0; VAR12 < (VAR11 + 1) / 2; VAR12++)
        {
            VAR9 = *VAR26 + (VAR2->VAR24[VAR11] * *VAR27 + 256 >> 9);
            *VAR27 += VAR2->VAR24[VAR11] * *VAR26 + 256 >> 9;
            *VAR26++ = VAR9;
            VAR27--;
        }
        VAR19[VAR11] = VAR2->VAR24[VAR11] << 6;
    }
    VAR18 = FUN8(VAR17, 16);
    FUN9(VAR2->VAR28 + VAR18 - 16);
    FUN9(VAR2->VAR28 + VAR18 - 8);
    VAR9 = 1 << (32 - (15 - VAR16));
    VAR10 = 1 << ((15 - VAR16) - 1);
    for (VAR11 = 0, VAR12 = VAR17 - 1; VAR11 < VAR17 / 2; VAR11++, VAR12--)
    {
        VAR2->VAR28[VAR12] = VAR9 - ((VAR19[VAR11] + VAR10) >> (15 - VAR16));
        VAR2->VAR28[VAR11] = VAR9 - ((VAR19[VAR12] + VAR10) >> (15 - VAR16));
    }
    if ((VAR13 = FUN3(VAR2, &VAR4[VAR17], VAR5 - VAR17)) < 0)
        return VAR13;
    for (VAR11 = 0; VAR11 < VAR17; VAR11++)
        VAR2->VAR29[VAR11] = *VAR4++ >> VAR14;
    VAR10 = FUN10(VAR2->VAR29) - VAR17;
    VAR9 = VAR5 - VAR17;
    while (VAR9 > 0)
    {
        int VAR25 = FUN11(VAR10, VAR9);
        for (VAR11 = 0; VAR11 < VAR25; VAR11++)
        {
            int VAR30 = 1 << (VAR16 - 1);
            VAR30 += VAR2->VAR31.FUN12(&VAR2->VAR29[VAR11], VAR2->VAR28, VAR18);
            VAR30 = (FUN13(VAR30 >> VAR16, 13) << VAR14) - *VAR4;
            *VAR4++ = VAR30;
            VAR2->VAR29[VAR17 + VAR11] = VAR30 >> VAR14;
        }
        VAR9 -= VAR25;
        if (VAR9 > 0)
            memcpy(VAR2->VAR29, &VAR2->VAR29[VAR10], 2 * VAR17);
    }
    FUN14();
    return 0;
}