static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const VAR4 *VAR5)
{
    int VAR6, VAR7;
    int VAR8 = VAR3->VAR9[0] >> 2;
    for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
    {
        uint32_t VAR11;
        uint32_t VAR12;
        VAR4 *VAR13 = (VAR4 *)(VAR3->VAR14[0] + VAR7 * VAR3->VAR9[0] * 2);
        VAR4 *VAR15 = (VAR4 *)(VAR2->VAR14[0] + VAR7 * VAR2->VAR9[0] - 8);
        VAR4 *VAR16 = VAR15 - (VAR2->VAR9[0] >> 2);
        VAR4 *VAR17 = VAR16 - (VAR2->VAR9[0] >> 2);
        VAR4 *VAR18 = VAR15 + (VAR2->VAR9[0] >> 2);
        VAR4 *VAR19 = VAR18 + (VAR2->VAR9[0] >> 2);
        if (VAR7 <= 1)
        {
            VAR17 = VAR16;
            if (VAR7 == 0)
            {
                VAR17 = VAR16 = VAR15;
            }
        }
        if (VAR7 >= VAR2->VAR10 - 2)
        {
            VAR19 = VAR18;
            if (VAR7 == VAR2->VAR10 - 1)
            {
                VAR19 = VAR18 = VAR15;
            }
        }
        VAR11 = VAR12 = 2;
        for (VAR6 = 0; VAR6 < VAR2->VAR20; VAR6++)
        {
            uint32_t VAR21 = VAR17[2];
            uint32_t VAR22 = VAR16[2];
            uint32_t VAR23 = VAR15[2];
            uint32_t VAR24 = VAR18[2];
            uint32_t VAR25 = VAR19[2];
            uint32_t VAR26 = VAR17[VAR11];
            uint32_t VAR27 = VAR16[VAR11];
            uint32_t VAR28 = VAR15[VAR11];
            uint32_t VAR29 = VAR18[VAR11];
            uint32_t VAR30 = VAR19[VAR11];
            uint32_t VAR31 = VAR16[VAR12];
            uint32_t VAR32 = VAR15[VAR12];
            uint32_t VAR33 = VAR18[VAR12];
            uint32_t VAR34 = 0;
            uint32_t VAR35 = 0;
            uint32_t VAR36 = 0;
            uint32_t VAR37 = 0;
            uint32_t VAR38 = 0;
            uint32_t VAR39 = 0;
            uint32_t VAR40 = 0;
            uint32_t VAR41 = 0;
            if (VAR6 >= VAR2->VAR20 - 2)
            {
                if (VAR6 == VAR2->VAR20 - 1)
                {
                    VAR34 = VAR17[2];
                    VAR35 = VAR16[2];
                    VAR36 = VAR15[2];
                    VAR37 = VAR18[2];
                    VAR38 = VAR19[2];
                    VAR39 = VAR16[2];
                    VAR40 = VAR15[2];
                    VAR41 = VAR18[2];
                }
                else
                {
                    VAR34 = VAR17[3];
                    VAR35 = VAR16[3];
                    VAR36 = VAR15[3];
                    VAR37 = VAR18[3];
                    VAR38 = VAR19[3];
                    VAR39 = VAR16[3];
                    VAR40 = VAR15[3];
                    VAR41 = VAR18[3];
                }
            }
            else
            {
                VAR34 = VAR17[3];
                VAR35 = VAR16[3];
                VAR36 = VAR15[3];
                VAR37 = VAR18[3];
                VAR38 = VAR19[3];
                VAR39 = VAR16[4];
                VAR40 = VAR15[4];
                VAR41 = VAR18[4];
            }
            VAR13[0] = VAR13[1] = VAR13[VAR8] = VAR13[VAR8 + 1] = VAR23;
            FUN2(VAR23, VAR37, VAR24, VAR36, VAR29, VAR35, VAR28, VAR22, VAR27, VAR30, VAR39, VAR33, VAR32, VAR34, VAR21, VAR40, VAR41, VAR25, VAR38, VAR31, VAR26, 0, 1, VAR8, VAR8 + 1);
            FUN2(VAR23, VAR35, VAR36, VAR22, VAR37, VAR27, VAR24, VAR28, VAR29, VAR41, VAR26, VAR38, VAR25, VAR31, VAR32, VAR21, VAR34, VAR40, VAR39, VAR30, VAR33, VAR8, 0, VAR8 + 1, 1);
            FUN2(VAR23, VAR27, VAR22, VAR28, VAR35, VAR29, VAR36, VAR24, VAR37, VAR34, VAR33, VAR39, VAR40, VAR30, VAR25, VAR32, VAR31, VAR21, VAR26, VAR41, VAR38, VAR8 + 1, VAR8, 1, 0);
            FUN2(VAR23, VAR29, VAR28, VAR24, VAR27, VAR37, VAR22, VAR36, VAR35, VAR31, VAR38, VAR26, VAR21, VAR41, VAR40, VAR25, VAR30, VAR32, VAR33, VAR34, VAR39, 1, VAR8 + 1, 0, VAR8);
            VAR17 += 1;
            VAR16 += 1;
            VAR15 += 1;
            VAR18 += 1;
            VAR19 += 1;
            VAR13 += 2;
            if (VAR12)
            {
                VAR12--;
                VAR11 = 1;
            }
        }
    }
}