static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const VAR4 *VAR5)
{
    const int VAR6 = VAR3->VAR7[0] >> 2;
    const int VAR8 = VAR6 + VAR6;
    const int VAR9 = VAR8 + VAR6;
    uint32_t VAR10;
    uint32_t VAR11;
    int VAR12, VAR13;
    for (VAR13 = 0; VAR13 < VAR2->VAR14; VAR13++)
    {
        VAR4 *VAR15 = (VAR4 *)(VAR3->VAR16[0] + VAR13 * VAR3->VAR7[0] * 4);
        VAR4 *VAR17 = (VAR4 *)(VAR2->VAR16[0] + VAR13 * VAR2->VAR7[0] - 8);
        VAR4 *VAR18 = VAR17 - (VAR2->VAR7[0] >> 2);
        VAR4 *VAR19 = VAR18 - (VAR2->VAR7[0] >> 2);
        VAR4 *VAR20 = VAR17 + (VAR2->VAR7[0] >> 2);
        VAR4 *VAR21 = VAR20 + (VAR2->VAR7[0] >> 2);
        if (VAR13 <= 1)
        {
            VAR19 = VAR18;
            if (VAR13 == 0)
            {
                VAR19 = VAR18 = VAR17;
            }
        }
        if (VAR13 >= VAR2->VAR14 - 2)
        {
            VAR21 = VAR20;
            if (VAR13 == VAR2->VAR14 - 1)
            {
                VAR21 = VAR20 = VAR17;
            }
        }
        VAR10 = VAR11 = 2;
        for (VAR12 = 0; VAR12 < VAR2->VAR22; VAR12++)
        {
            uint32_t VAR23 = VAR19[2];
            uint32_t VAR24 = VAR18[2];
            uint32_t VAR25 = VAR17[2];
            uint32_t VAR26 = VAR20[2];
            uint32_t VAR27 = VAR21[2];
            uint32_t VAR28 = VAR19[VAR10];
            uint32_t VAR29 = VAR18[VAR10];
            uint32_t VAR30 = VAR17[VAR10];
            uint32_t VAR31 = VAR20[VAR10];
            uint32_t VAR32 = VAR21[VAR10];
            uint32_t VAR33 = VAR18[VAR11];
            uint32_t VAR34 = VAR17[VAR11];
            uint32_t VAR35 = VAR20[VAR11];
            uint32_t VAR36 = 0;
            uint32_t VAR37 = 0;
            uint32_t VAR38 = 0;
            uint32_t VAR39 = 0;
            uint32_t VAR40 = 0;
            uint32_t VAR41 = 0;
            uint32_t VAR42 = 0;
            uint32_t VAR43 = 0;
            if (VAR12 >= VAR2->VAR22 - 2)
            {
                if (VAR12 == VAR2->VAR22 - 1)
                {
                    VAR36 = VAR19[2];
                    VAR37 = VAR18[2];
                    VAR38 = VAR17[2];
                    VAR39 = VAR20[2];
                    VAR40 = VAR21[2];
                    VAR41 = VAR18[2];
                    VAR42 = VAR17[2];
                    VAR43 = VAR20[2];
                }
                else
                {
                    VAR36 = VAR19[3];
                    VAR37 = VAR18[3];
                    VAR38 = VAR17[3];
                    VAR39 = VAR20[3];
                    VAR40 = VAR21[3];
                    VAR41 = VAR18[3];
                    VAR42 = VAR17[3];
                    VAR43 = VAR20[3];
                }
            }
            else
            {
                VAR36 = VAR19[3];
                VAR37 = VAR18[3];
                VAR38 = VAR17[3];
                VAR39 = VAR20[3];
                VAR40 = VAR21[3];
                VAR41 = VAR18[4];
                VAR42 = VAR17[4];
                VAR43 = VAR20[4];
            }
            VAR15[0] = VAR15[1] = VAR15[2] = VAR15[3] = VAR25;
            VAR15[VAR6] = VAR15[VAR6 + 1] = VAR15[VAR6 + 2] = VAR15[VAR6 + 3] = VAR25;
            VAR15[VAR8] = VAR15[VAR8 + 1] = VAR15[VAR8 + 2] = VAR15[VAR8 + 3] = VAR25;
            VAR15[VAR9] = VAR15[VAR9 + 1] = VAR15[VAR9 + 2] = VAR15[VAR9 + 3] = VAR25;
            FUN2(VAR25, VAR39, VAR26, VAR38, VAR31, VAR37, VAR30, VAR24, VAR29, VAR32, VAR41, VAR35, VAR34, VAR36, VAR23, VAR42, VAR43, VAR27, VAR40, VAR33, VAR28, VAR9 + 3, VAR9 + 2, VAR8 + 3, 3, VAR6 + 3, VAR8 + 2, VAR9 + 1, VAR9, VAR8 + 1, VAR6 + 2, 2, 1, VAR6 + 1, VAR8, VAR6, 0);
            FUN2(VAR25, VAR37, VAR38, VAR24, VAR39, VAR29, VAR26, VAR30, VAR31, VAR43, VAR28, VAR40, VAR27, VAR33, VAR34, VAR23, VAR36, VAR42, VAR41, VAR32, VAR35, 3, VAR6 + 3, 2, 0, 1, VAR6 + 2, VAR8 + 3, VAR9 + 3, VAR8 + 2, VAR6 + 1, VAR6, VAR8, VAR8 + 1, VAR9 + 2, VAR9 + 1, VAR9);
            FUN2(VAR25, VAR29, VAR24, VAR30, VAR37, VAR31, VAR38, VAR26, VAR39, VAR36, VAR35, VAR41, VAR42, VAR32, VAR27, VAR34, VAR33, VAR23, VAR28, VAR43, VAR40, 0, 1, VAR6, VAR9, VAR8, VAR6 + 1, 2, 3, VAR6 + 2, VAR8 + 1, VAR9 + 1, VAR9 + 2, VAR8 + 2, VAR6 + 3, VAR8 + 3, VAR9 + 3);
            FUN2(VAR25, VAR31, VAR30, VAR26, VAR29, VAR39, VAR24, VAR38, VAR37, VAR33, VAR40, VAR28, VAR23, VAR43, VAR42, VAR27, VAR32, VAR34, VAR35, VAR36, VAR41, VAR9, VAR8, VAR9 + 1, VAR9 + 3, VAR9 + 2, VAR8 + 1, VAR6, 0, VAR6 + 1, VAR8 + 2, VAR8 + 3, VAR6 + 3, VAR6 + 2, 1, 2, 3);
            VAR19 += 1;
            VAR18 += 1;
            VAR17 += 1;
            VAR20 += 1;
            VAR21 += 1;
            VAR15 += 4;
            if (VAR11)
            {
                VAR11--;
                VAR10 = 1;
            }
        }
    }
}