void FUN1(const VAR1 *VAR2, VAR3 *VAR4, const int VAR5, const int VAR6)
{
    int VAR7, VAR8, VAR9;
    int32_t VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int32_t VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    int32_t VAR28, VAR29, VAR30, VAR31, VAR32, VAR33, VAR34, VAR35, VAR36;
    int32_t VAR37, VAR38;
    const VAR39 *VAR40, *VAR41, *VAR42, *VAR43;
    VAR37 = VAR2->VAR44[0].VAR37;
    VAR38 = 0;
    VAR40 = VAR2->VAR44[0].VAR45;
    VAR41 = VAR2->VAR44[1].VAR45;
    VAR42 = VAR2->VAR44[2].VAR45;
    VAR43 = VAR2->VAR44[3].VAR45;
    for (VAR8 = 0; VAR8 < VAR2->VAR46; VAR8 += 2)
    {
        if (VAR8 + 2 >= VAR2->VAR46)
            VAR37 = 0;
        if (VAR6 > 0)
        {
            VAR17 = VAR40[0];
            VAR18 = VAR40[VAR37];
        }
        if (VAR6 > 1)
        {
            VAR19 = VAR41[VAR38];
            VAR20 = VAR41[0];
            VAR21 = VAR19 - VAR20 * 6 + VAR41[VAR37];
        }
        if (VAR6 > 2)
        {
            VAR23 = VAR42[0];
            VAR24 = VAR23;
            VAR26 = VAR42[VAR37];
            VAR27 = VAR26;
        }
        if (VAR6 > 3)
        {
            VAR29 = VAR43[VAR38];
            VAR30 = VAR29;
            VAR32 = VAR43[0];
            VAR33 = VAR32;
            VAR35 = VAR29 - VAR32 * 6 + VAR43[VAR37];
            VAR36 = VAR35;
        }
        for (VAR7 = 0, VAR9 = 0; VAR7 < VAR2->VAR47; VAR7 += 2, VAR9++)
        {
            VAR22 = VAR23;
            VAR23 = VAR24;
            VAR25 = VAR26;
            VAR26 = VAR27;
            VAR28 = VAR29;
            VAR29 = VAR30;
            VAR31 = VAR32;
            VAR32 = VAR33;
            VAR34 = VAR35;
            VAR35 = VAR36;
            VAR10 = VAR11 = VAR12 = VAR13 = 0;
            if (VAR6 > 0)
            {
                VAR14 = VAR17;
                VAR16 = VAR18;
                VAR17 = VAR40[VAR9 + 1];
                VAR18 = VAR40[VAR37 + VAR9 + 1];
                VAR15 = VAR14 + VAR17;
                VAR10 = VAR14 << 4;
                VAR11 = VAR15 << 3;
                VAR12 = (VAR14 + VAR16) << 3;
                VAR13 = (VAR15 + VAR16 + VAR18) << 2;
            }
            if (VAR6 > 1)
            {
                VAR14 = VAR20;
                VAR15 = VAR19;
                VAR20 = VAR41[VAR9 + 1];
                VAR19 = VAR41[VAR38 + VAR9 + 1];
                VAR16 = VAR15 - VAR14 * 6 + VAR21;
                VAR21 = VAR19 - VAR20 * 6 + VAR41[VAR37 + VAR9 + 1];
                VAR10 += (VAR14 + VAR15) << 3;
                VAR11 += (VAR14 + VAR15 + VAR19 + VAR20) << 2;
                VAR12 += VAR16 << 2;
                VAR13 += (VAR16 + VAR21) << 1;
            }
            if (VAR6 > 2)
            {
                VAR24 = VAR42[VAR9 + 1];
                VAR27 = VAR42[VAR37 + VAR9 + 1];
                VAR14 = VAR22 + VAR23;
                VAR15 = VAR22 - VAR23 * 6 + VAR24;
                VAR10 += VAR14 << 3;
                VAR11 += VAR15 << 2;
                VAR12 += (VAR14 + VAR25 + VAR26) << 2;
                VAR13 += (VAR15 + VAR25 - VAR26 * 6 + VAR27) << 1;
            }
            if (VAR6 > 3)
            {
                VAR33 = VAR43[VAR9 + 1];
                VAR30 = VAR43[VAR38 + VAR9 + 1];
                VAR14 = VAR28 + VAR31;
                VAR15 = VAR29 + VAR32;
                VAR16 = VAR30 + VAR33;
                VAR36 = VAR30 - VAR33 * 6 + VAR43[VAR37 + VAR9 + 1];
                VAR10 += (VAR14 + VAR15) << 2;
                VAR11 += (VAR14 - VAR15 * 6 + VAR16) << 1;
                VAR12 += (VAR34 + VAR35) << 1;
                VAR13 += VAR34 - VAR35 * 6 + VAR36;
            }
            VAR4[VAR7] = FUN2((VAR10 >> 6) + 128);
            VAR4[VAR7 + 1] = FUN2((VAR11 >> 6) + 128);
            VAR4[VAR5 + VAR7] = FUN2((VAR12 >> 6) + 128);
            VAR4[VAR5 + VAR7 + 1] = FUN2((VAR13 >> 6) + 128);
        }
        VAR4 += VAR5 << 1;
        VAR38 = -VAR37;
        VAR40 += VAR37;
        VAR41 += VAR37;
        VAR42 += VAR37;
        VAR43 += VAR37;
    }
}