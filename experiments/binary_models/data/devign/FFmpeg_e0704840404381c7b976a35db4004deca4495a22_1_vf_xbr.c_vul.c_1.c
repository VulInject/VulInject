static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const VAR4 *VAR5)
{
    const int VAR6 = VAR3->VAR7[0] >> 2;
    const int VAR8 = VAR6 + VAR6;
    uint32_t VAR9;
    uint32_t VAR10;
    int VAR11, VAR12;
    for (VAR12 = 0; VAR12 < VAR2->VAR13; VAR12++)
    {
        VAR4 *VAR14 = (VAR4 *)(VAR3->VAR15[0] + VAR12 * VAR3->VAR7[0] * 3);
        VAR4 *VAR16 = (VAR4 *)(VAR2->VAR15[0] + VAR12 * VAR2->VAR7[0] - 8);
        VAR4 *VAR17 = VAR16 - (VAR2->VAR7[0] >> 2);
        VAR4 *VAR18 = VAR17 - (VAR2->VAR7[0] >> 2);
        VAR4 *VAR19 = VAR16 + (VAR2->VAR7[0] >> 2);
        VAR4 *VAR20 = VAR19 + (VAR2->VAR7[0] >> 2);
        if (VAR12 <= 1)
        {
            VAR18 = VAR17;
            if (VAR12 == 0)
            {
                VAR18 = VAR17 = VAR16;
            }
        }
        if (VAR12 >= VAR2->VAR13 - 2)
        {
            VAR20 = VAR19;
            if (VAR12 == VAR2->VAR13 - 1)
            {
                VAR20 = VAR19 = VAR16;
            }
        }
        VAR9 = VAR10 = 2;
        for (VAR11 = 0; VAR11 < VAR2->VAR21; VAR11++)
        {
            uint32_t VAR22 = VAR18[2];
            uint32_t VAR23 = VAR17[2];
            uint32_t VAR24 = VAR16[2];
            uint32_t VAR25 = VAR19[2];
            uint32_t VAR26 = VAR20[2];
            uint32_t VAR27 = VAR18[VAR9];
            uint32_t VAR28 = VAR17[VAR9];
            uint32_t VAR29 = VAR16[VAR9];
            uint32_t VAR30 = VAR19[VAR9];
            uint32_t VAR31 = VAR20[VAR9];
            uint32_t VAR32 = VAR17[VAR10];
            uint32_t VAR33 = VAR16[VAR10];
            uint32_t VAR34 = VAR19[VAR10];
            uint32_t VAR35 = 0;
            uint32_t VAR36 = 0;
            uint32_t VAR37 = 0;
            uint32_t VAR38 = 0;
            uint32_t VAR39 = 0;
            uint32_t VAR40 = 0;
            uint32_t VAR41 = 0;
            uint32_t VAR42 = 0;
            if (VAR11 >= VAR2->VAR21 - 2)
            {
                if (VAR11 == VAR2->VAR21 - 1)
                {
                    VAR35 = VAR18[2];
                    VAR36 = VAR17[2];
                    VAR37 = VAR16[2];
                    VAR38 = VAR19[2];
                    VAR39 = VAR20[2];
                    VAR40 = VAR17[2];
                    VAR41 = VAR16[2];
                    VAR42 = VAR19[2];
                }
                else
                {
                    VAR35 = VAR18[3];
                    VAR36 = VAR17[3];
                    VAR37 = VAR16[3];
                    VAR38 = VAR19[3];
                    VAR39 = VAR20[3];
                    VAR40 = VAR17[3];
                    VAR41 = VAR16[3];
                    VAR42 = VAR19[3];
                }
            }
            else
            {
                VAR35 = VAR18[3];
                VAR36 = VAR17[3];
                VAR37 = VAR16[3];
                VAR38 = VAR19[3];
                VAR39 = VAR20[3];
                VAR40 = VAR17[4];
                VAR41 = VAR16[4];
                VAR42 = VAR19[4];
            }
            VAR14[0] = VAR14[1] = VAR14[2] = VAR24;
            VAR14[VAR6] = VAR14[VAR6 + 1] = VAR14[VAR6 + 2] = VAR24;
            VAR14[VAR8] = VAR14[VAR8 + 1] = VAR14[VAR8 + 2] = VAR24;
            FUN2(VAR24, VAR38, VAR25, VAR37, VAR30, VAR36, VAR29, VAR23, VAR28, VAR31, VAR40, VAR34, VAR33, VAR35, VAR22, VAR41, VAR42, VAR26, VAR39, VAR32, VAR27, 0, 1, 2, VAR6, VAR6 + 1, VAR6 + 2, VAR8, VAR8 + 1, VAR8 + 2);
            FUN2(VAR24, VAR36, VAR37, VAR23, VAR38, VAR28, VAR25, VAR29, VAR30, VAR42, VAR27, VAR39, VAR26, VAR32, VAR33, VAR22, VAR35, VAR41, VAR40, VAR31, VAR34, VAR8, VAR6, 0, VAR8 + 1, VAR6 + 1, 1, VAR8 + 2, VAR6 + 2, 2);
            FUN2(VAR24, VAR28, VAR23, VAR29, VAR36, VAR30, VAR37, VAR25, VAR38, VAR35, VAR34, VAR40, VAR41, VAR31, VAR26, VAR33, VAR32, VAR22, VAR27, VAR42, VAR39, VAR8 + 2, VAR8 + 1, VAR8, VAR6 + 2, VAR6 + 1, VAR6, 2, 1, 0);
            FUN2(VAR24, VAR30, VAR29, VAR25, VAR28, VAR38, VAR23, VAR37, VAR36, VAR32, VAR39, VAR27, VAR22, VAR42, VAR41, VAR26, VAR31, VAR33, VAR34, VAR35, VAR40, 2, VAR6 + 2, VAR8 + 2, 1, VAR6 + 1, VAR8 + 1, 0, VAR6, VAR8);
            VAR18 += 1;
            VAR17 += 1;
            VAR16 += 1;
            VAR19 += 1;
            VAR20 += 1;
            VAR14 += 3;
            if (VAR10)
            {
                VAR10--;
                VAR9 = 1;
            }
        }
    }
}