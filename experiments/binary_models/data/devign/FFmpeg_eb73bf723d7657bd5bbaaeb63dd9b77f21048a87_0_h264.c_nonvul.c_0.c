static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const VAR7 *VAR8, const VAR9 *VAR10, int VAR11)
{
    const int VAR12 = VAR2->VAR13.VAR14 + VAR2->VAR13.VAR15 * VAR2->VAR13.VAR16;
    static const int VAR17[2][6] = {{105 + 0, 105 + 15, 105 + 29, 105 + 44, 105 + 47, 402}, {277 + 0, 277 + 15, 277 + 29, 277 + 44, 277 + 47, 436}};
    static const int VAR18[2][6] = {{166 + 0, 166 + 15, 166 + 29, 166 + 44, 166 + 47, 417}, {338 + 0, 338 + 15, 338 + 29, 338 + 44, 338 + 47, 451}};
    static const int VAR19[6] = {227 + 0, 227 + 10, 227 + 20, 227 + 30, 227 + 39, 426};
    static const uint8_t VAR20[2][63] = {{0, 1, 2, 3, 4, 5, 5, 4, 4, 3, 3, 4, 4, 4, 5, 5, 4, 4, 4, 4, 3, 3, 6, 7, 7, 7, 8, 9, 10, 9, 8, 7, 7, 6, 11, 12, 13, 11, 6, 7, 8, 9, 14, 10, 9, 8, 6, 11, 12, 13, 11, 6, 9, 14, 10, 9, 11, 12, 13, 11, 14, 10, 12}, {0, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 7, 7, 8, 4, 5, 6, 9, 10, 10, 8, 11, 12, 11, 9, 9, 10, 10, 8, 11, 12, 11, 9, 9, 10, 10, 8, 11, 12, 11, 9, 9, 10, 10, 8, 13, 13, 9, 9, 10, 10, 8, 13, 13, 9, 9, 10, 10, 14, 14, 14, 14, 14}};
    static const uint8_t VAR21[63] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8};
    int VAR22[64];
    int VAR23, VAR24;
    int VAR25 = 0;
    int VAR26 = 1;
    int VAR27 = 0;
    VAR7 *VAR28;
    VAR7 *VAR29;
    VAR7 *VAR30;
    if (VAR5 != 5)
    {
        if (FUN2(&VAR2->VAR31, &VAR2->VAR32[85 + FUN3(VAR2, VAR5, VAR6)]) == 0)
        {
            if (VAR5 == 1 || VAR5 == 2)
                VAR2->VAR33[VAR34[VAR6]] = 0;
            else if (VAR5 == 4)
                VAR2->VAR33[VAR34[16 + VAR6]] = 0;
            return 0;
        }
    }
    VAR28 = VAR2->VAR32 + VAR17[VAR35][VAR5];
    VAR29 = VAR2->VAR32 + VAR18[VAR35][VAR5];
    VAR30 = VAR2->VAR32 + VAR19[VAR5];
    if (VAR5 == 5)
    {
        for (VAR24 = 0; VAR24 < VAR36; VAR24++)
        {
            VAR7 *VAR37 = VAR28 + VAR38;
            if (FUN2(&VAR2->VAR31, VAR37))
            {
                VAR7 *VAR39 = VAR29 + VAR40;
                VAR22[VAR25++] = VAR24;
                if (FUN2(&VAR2->VAR31, VAR39))
                {
                    VAR24 = VAR11;
                    break;
                }
            }
        }
        if (VAR24 == VAR11 - 1)
        {
            VAR22[VAR25++] = VAR24;
        }
        const VAR7 *VAR38 = VAR20[VAR35];
        FUN4(63, VAR38[VAR24], VAR21[VAR24]);
    }
    else
    {
        VAR25 = FUN5(&VAR2->VAR31, VAR11, VAR28, VAR22);
        FUN4(VAR11 - 1, VAR24, VAR24);
    }
    assert(VAR25 > 0);
    if (VAR5 == 0)
        VAR2->VAR41[VAR12] |= 0x100;
    else if (VAR5 == 1 || VAR5 == 2)
        VAR2->VAR33[VAR34[VAR6]] = VAR25;
    else if (VAR5 == 3)
        VAR2->VAR41[VAR12] |= 0x40 << VAR6;
    else if (VAR5 == 4)
        VAR2->VAR33[VAR34[16 + VAR6]] = VAR25;
    else
    {
        assert(VAR5 == 5);
        FUN6(&VAR2->VAR33[VAR34[VAR6]], 2, 2, 8, VAR25, 1);
    }
    for (VAR23 = VAR25 - 1; VAR23 >= 0; VAR23--)
    {
        VAR7 *VAR42 = (VAR27 != 0 ? 0 : FUN7(4, VAR26)) + VAR30;
        int VAR43 = VAR8[VAR22[VAR23]];
        if (FUN2(&VAR2->VAR31, VAR42) == 0)
        {
            if (!VAR10)
            {
                if (FUN8(&VAR2->VAR31))
                    VAR4[VAR43] = -1;
                else
                    VAR4[VAR43] = 1;
            }
            else
            {
                if (FUN8(&VAR2->VAR31))
                    VAR4[VAR43] = (-VAR10[VAR43] + 32) >> 6;
                else
                    VAR4[VAR43] = (VAR10[VAR43] + 32) >> 6;
            }
            VAR26++;
        }
        else
        {
            int VAR44 = 2;
            VAR42 = 5 + FUN7(4, VAR27) + VAR30;
            while (VAR44 < 15 && FUN2(&VAR2->VAR31, VAR42))
            {
                VAR44++;
            }
            if (VAR44 >= 15)
            {
                int VAR43 = 0;
                while (FUN8(&VAR2->VAR31))
                {
                    VAR43++;
                }
                VAR44 = 1;
                while (VAR43--)
                {
                    VAR44 += VAR44 + FUN8(&VAR2->VAR31);
                }
                VAR44 += 14;
            }
            if (!VAR10)
            {
                if (FUN8(&VAR2->VAR31))
                    VAR4[VAR43] = -VAR44;
                else
                    VAR4[VAR43] = VAR44;
            }
            else
            {
                if (FUN8(&VAR2->VAR31))
                    VAR4[VAR43] = (-VAR44 * VAR10[VAR43] + 32) >> 6;
                else
                    VAR4[VAR43] = (VAR44 * VAR10[VAR43] + 32) >> 6;
            }
            VAR27++;
        }
    }
    return 0;
}