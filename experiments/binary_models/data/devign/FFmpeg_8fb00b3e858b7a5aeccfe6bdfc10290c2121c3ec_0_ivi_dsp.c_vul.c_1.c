void FUN1(const VAR1 *VAR2, VAR3 *VAR4, const ptrdiff_t VAR5)
{
    int VAR6, VAR7, VAR8;
    int32_t VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int32_t VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    int32_t VAR27, VAR28, VAR29, VAR30, VAR31, VAR32, VAR33, VAR34, VAR35;
    ptrdiff_t VAR36, VAR37;
    const short *VAR38, *VAR39, *VAR40, *VAR41;
    const int VAR42 = 4;
    VAR36 = VAR2->VAR43[0].VAR36;
    VAR37 = 0;
    VAR38 = VAR2->VAR43[0].VAR44;
    VAR39 = VAR2->VAR43[1].VAR44;
    VAR40 = VAR2->VAR43[2].VAR44;
    VAR41 = VAR2->VAR43[3].VAR44;
    for (VAR7 = 0; VAR7 < VAR2->VAR45; VAR7 += 2)
    {
        if (VAR7 + 2 >= VAR2->VAR45)
            VAR36 = 0;
        if (VAR42 > 0)
        {
            VAR16 = VAR38[0];
            VAR17 = VAR38[VAR36];
        }
        if (VAR42 > 1)
        {
            VAR18 = VAR39[VAR37];
            VAR19 = VAR39[0];
            VAR20 = VAR18 - VAR19 * 6 + VAR39[VAR36];
        }
        if (VAR42 > 2)
        {
            VAR22 = VAR40[0];
            VAR23 = VAR22;
            VAR25 = VAR40[VAR36];
            VAR26 = VAR25;
        }
        if (VAR42 > 3)
        {
            VAR28 = VAR41[VAR37];
            VAR29 = VAR28;
            VAR31 = VAR41[0];
            VAR32 = VAR31;
            VAR34 = VAR28 - VAR31 * 6 + VAR41[VAR36];
            VAR35 = VAR34;
        }
        for (VAR6 = 0, VAR8 = 0; VAR6 < VAR2->VAR46; VAR6 += 2, VAR8++)
        {
            if (VAR6 + 2 >= VAR2->VAR46)
            {
                VAR38--;
                VAR39--;
                VAR40--;
                VAR41--;
            }
            VAR21 = VAR22;
            VAR22 = VAR23;
            VAR24 = VAR25;
            VAR25 = VAR26;
            VAR27 = VAR28;
            VAR28 = VAR29;
            VAR30 = VAR31;
            VAR31 = VAR32;
            VAR33 = VAR34;
            VAR34 = VAR35;
            VAR9 = VAR10 = VAR11 = VAR12 = 0;
            if (VAR42 > 0)
            {
                VAR13 = VAR16;
                VAR15 = VAR17;
                VAR16 = VAR38[VAR8 + 1];
                VAR17 = VAR38[VAR36 + VAR8 + 1];
                VAR14 = VAR13 + VAR16;
                VAR9 = VAR13 << 4;
                VAR10 = VAR14 << 3;
                VAR11 = (VAR13 + VAR15) << 3;
                VAR12 = (VAR14 + VAR15 + VAR17) << 2;
            }
            if (VAR42 > 1)
            {
                VAR13 = VAR19;
                VAR14 = VAR18;
                VAR19 = VAR39[VAR8 + 1];
                VAR18 = VAR39[VAR37 + VAR8 + 1];
                VAR15 = VAR14 - VAR13 * 6 + VAR20;
                VAR20 = VAR18 - VAR19 * 6 + VAR39[VAR36 + VAR8 + 1];
                VAR9 += (VAR13 + VAR14) << 3;
                VAR10 += (VAR13 + VAR14 + VAR18 + VAR19) << 2;
                VAR11 += VAR15 << 2;
                VAR12 += (VAR15 + VAR20) << 1;
            }
            if (VAR42 > 2)
            {
                VAR23 = VAR40[VAR8 + 1];
                VAR26 = VAR40[VAR36 + VAR8 + 1];
                VAR13 = VAR21 + VAR22;
                VAR14 = VAR21 - VAR22 * 6 + VAR23;
                VAR9 += VAR13 << 3;
                VAR10 += VAR14 << 2;
                VAR11 += (VAR13 + VAR24 + VAR25) << 2;
                VAR12 += (VAR14 + VAR24 - VAR25 * 6 + VAR26) << 1;
            }
            if (VAR42 > 3)
            {
                VAR32 = VAR41[VAR8 + 1];
                VAR29 = VAR41[VAR37 + VAR8 + 1];
                VAR13 = VAR27 + VAR30;
                VAR14 = VAR28 + VAR31;
                VAR15 = VAR29 + VAR32;
                VAR35 = VAR29 - VAR32 * 6 + VAR41[VAR36 + VAR8 + 1];
                VAR9 += (VAR13 + VAR14) << 2;
                VAR10 += (VAR13 - VAR14 * 6 + VAR15) << 1;
                VAR11 += (VAR33 + VAR34) << 1;
                VAR12 += VAR33 - VAR34 * 6 + VAR35;
            }
            VAR4[VAR6] = FUN2((VAR9 >> 6) + 128);
            VAR4[VAR6 + 1] = FUN2((VAR10 >> 6) + 128);
            VAR4[VAR5 + VAR6] = FUN2((VAR11 >> 6) + 128);
            VAR4[VAR5 + VAR6 + 1] = FUN2((VAR12 >> 6) + 128);
        }
        VAR4 += VAR5 << 1;
        VAR37 = -VAR36;
        VAR38 += VAR36 + 1;
        VAR39 += VAR36 + 1;
        VAR40 += VAR36 + 1;
        VAR41 += VAR36 + 1;
    }
}