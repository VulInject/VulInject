static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13 = -1, VAR14;
    int VAR15, VAR16;
    const VAR5 *VAR17 = VAR6 + VAR7;
    uint8_t VAR18[768], VAR19[3];
    uLongf VAR20 = (VAR2->VAR21 + 1) * VAR2->VAR22;
    int VAR23;
    int VAR24, VAR25, VAR26;
    int VAR27, VAR28, VAR29;
    VAR5 *VAR30 = VAR2->VAR31 + VAR3 * VAR2->VAR21 * 3 + VAR4 * VAR2->VAR22 * VAR2->VAR32;
    if (VAR7 < 2)
        VAR8 = FUN2(VAR2->VAR8 - VAR3 * VAR2->VAR21, VAR2->VAR21);
    VAR9 = FUN2(VAR2->VAR9 - VAR4 * VAR2->VAR22, VAR2->VAR22);
    VAR10 = *VAR6++;
    VAR23 = VAR10 >> 5;
    if (VAR23 == 0)
    {
        int VAR16;
        memcpy(VAR19, VAR6, 3);
        VAR6 += 3;
        for (VAR16 = 0; VAR16 < VAR9; VAR16++, VAR30 += VAR2->VAR32)
            for (VAR15 = 0; VAR15 < VAR8; VAR15++)
                memcpy(VAR30 + VAR15 * 3, VAR19, 3);
        return 0;
    }
    else if (VAR23 == 1)
    {
        return FUN3(&VAR2->VAR33, VAR8, VAR9, VAR6, VAR17 - VAR6, VAR30, VAR2->VAR32, NULL, 0, 0, 0);
    }
    if (VAR23 != 2)
    {
        memcpy(VAR19, VAR6, 3);
        VAR6 += 3;
    }
    VAR12 = *VAR6++ + 1;
    memcpy(VAR18, VAR6, VAR12 * 3);
    VAR6 += VAR12 * 3;
    if (VAR23 != 2)
    {
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            if (!memcmp(VAR18 + VAR15 * 3, VAR19, 3))
            {
                VAR13 = VAR15;
                break;
            }
        }
    }
    if (VAR17 - VAR6 < 2)
        return 0;
    VAR11 = (VAR6[0] << 8) | VAR6[1];
    VAR6 += 2;
    if (VAR17 - VAR6 < VAR11 + (VAR23 != 2))
        VAR14 = FUN4(VAR2->VAR34, &VAR20, VAR6, VAR11);
    if (VAR14)
        VAR6 += VAR11;
    if (VAR23 == 2)
    {
        FUN5(VAR2->VAR34, VAR20, VAR30, VAR2->VAR32, NULL, 0, VAR8, VAR9, VAR18, VAR12, VAR13);
        return 0;
    }
    VAR24 = *VAR6++ + 1;
    VAR25 = 0;
    VAR26 = FUN6(VAR8, 16) >> 4;
    VAR27 = 0;
    for (VAR15 = 0; VAR15 < (FUN6(VAR9, 16) >> 4); VAR15++)
    {
        for (VAR16 = 0; VAR16 < (FUN6(VAR8, 16) >> 4); VAR16++)
        {
            if (!VAR27)
            {
                if (VAR6 >= VAR17)
                    VAR28 = *VAR6++;
                VAR27 = 8;
            }
            VAR29 = VAR28 & 1;
            VAR27--;
            VAR28 >>= 1;
            VAR25 += VAR29;
            if (VAR25 > VAR24)
                VAR2->VAR35[VAR16 + VAR15 * VAR26] = VAR29;
        }
    }
    memset(VAR2->VAR36, 0, VAR2->VAR37 * VAR9);
    FUN3(&VAR2->VAR33, VAR8, VAR9, VAR6, VAR17 - VAR6, VAR2->VAR36, VAR2->VAR37, VAR2->VAR35, VAR26, VAR24, 0);
    FUN5(VAR2->VAR34, VAR20, VAR30, VAR2->VAR32, VAR2->VAR36, VAR2->VAR37, VAR8, VAR9, VAR18, VAR12, VAR13);
    return 0;