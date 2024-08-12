static VAR1 FUN1(VAR2 *VAR3, int VAR4, const VAR1 *VAR5, VAR1 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    int VAR13;
    int VAR14;
    int64_t VAR15;
    int64_t VAR16;
    int16_t VAR17;
    int VAR18, VAR19;
    int VAR20;
    int16_t VAR21;
    int16_t VAR22, VAR23;
    int16_t VAR24, VAR25;
    int VAR26;
    int16_t VAR27, VAR28;
    int16_t VAR29, VAR30;
    int16_t VAR31, VAR32;
    int16_t VAR33;
    int VAR34, VAR35;
    VAR1 *VAR36;
    const VAR1 *VAR37;
    int16_t VAR38[VAR39 + VAR40];
    int16_t VAR41[VAR42][VAR39 + 1];
    int VAR43[VAR42][2];
    VAR10 = 0;
    for (VAR8 = 0; VAR8 < VAR7 + VAR40; VAR8++)
        VAR10 |= FUN2(VAR5[VAR8]);
    if (!VAR10)
        VAR17 = 3;
    else
        VAR17 = FUN3(VAR10) - 11;
    if (VAR17 > 0)
        for (VAR8 = 0; VAR8 < VAR7 + VAR40; VAR8++)
            VAR38[VAR8] = VAR5[VAR8] >> VAR17;
    else
        for (VAR8 = 0; VAR8 < VAR7 + VAR40; VAR8++)
            VAR38[VAR8] = VAR5[VAR8] << -VAR17;
    VAR22 = 0;
    VAR20 = VAR3->FUN4(VAR38 + VAR40, VAR38 + VAR40, VAR7);
    if (VAR20)
    {
        VAR21 = FUN5(FUN3(VAR20) - 14, 0);
        VAR20 >>= VAR21;
        VAR18 = 0;
        VAR31 = VAR4 - 1;
        for (VAR8 = VAR4 - 1; VAR8 <= VAR4 + 1; VAR8++)
        {
            VAR12 = VAR3->FUN4(VAR38 + VAR40, VAR38 + VAR40 - VAR8, VAR7);
            if (VAR12 > VAR18)
            {
                VAR18 = VAR12;
                VAR31 = VAR8;
            }
        }
        if (VAR18)
        {
            VAR19 = VAR3->FUN4(VAR38 - VAR31 + VAR40, VAR38 - VAR31 + VAR40, VAR7);
            for (VAR9 = 0; VAR9 < VAR42; VAR9++)
            {
                FUN6(&VAR41[VAR9][0], &VAR38[VAR40 - VAR31], VAR44, VAR42 + 1, 8 - VAR9 - 1, VAR45, VAR7 + 1);
            }
            VAR10 = VAR19;
            for (VAR9 = 0; VAR9 < VAR42; VAR9++)
            {
                VAR12 = VAR3->FUN4(&VAR41[VAR9][1], &VAR41[VAR9][1], VAR7 - 1);
                VAR43[VAR9][0] = VAR12 + VAR41[VAR9][0] * VAR41[VAR9][0];
                VAR43[VAR9][1] = VAR12 + VAR41[VAR9][VAR7] * VAR41[VAR9][VAR7];
                VAR10 = FUN7(VAR10, VAR43[VAR9][0], VAR43[VAR9][1]);
            }
            VAR25 = FUN3(VAR10) - 14;
            if (VAR25 >= 0)
            {
                VAR24 = FUN5(VAR25, VAR21);
                VAR33 = 1;
                VAR32 = 0;
                VAR23 = VAR19 >> VAR25;
                VAR22 = VAR18 >> VAR24;
                VAR26 = VAR22 * VAR22;
                for (VAR9 = 0; VAR9 < VAR42; VAR9++)
                {
                    for (VAR8 = 0; VAR8 < 2; VAR8++)
                    {
                        int16_t VAR46, VAR47;
                        int VAR48;
                        VAR12 = VAR3->FUN4(&VAR41[VAR9][VAR8], VAR38 + VAR40, VAR7);
                        VAR46 = FUN5(VAR12 >> VAR24, 0);
                        VAR48 = VAR46 * VAR46;
                        VAR47 = VAR43[VAR9][VAR8] >> VAR25;
                        VAR10 = FUN8(VAR48, VAR23, VAR49);
                        VAR11 = FUN8(VAR26, VAR47, VAR49);
                        if (VAR10 > VAR11)
                        {
                            VAR22 = VAR46;
                            VAR23 = VAR47;
                            VAR26 = VAR48;
                            VAR33 = VAR8;
                            VAR32 = VAR9 + 1;
                        }
                    }
                }
                VAR15 = (VAR50)VAR26 << ((VAR24 << 1) + 1);
                VAR16 = ((VAR50)VAR23 * VAR20) << (VAR25 + VAR21);
                if (VAR15 < VAR16)
                    VAR22 = 0;
            }
        }
    }
    if (!VAR22)
    {
        memcpy(VAR6, VAR5 + VAR40, VAR7 * sizeof(VAR1));
        return 0;
    }
    if (VAR32)
    {
        FUN6(VAR6, &VAR38[VAR40 - VAR31 + VAR33], VAR51, VAR42 + 1, 8 - VAR32, VAR52, VAR7 + 1);
        VAR12 = VAR3->FUN4(VAR6, VAR38 + VAR40, VAR7);
        if (VAR12 < 0)
        {
            VAR27 = 0;
            VAR29 = 0;
        }
        else
        {
            VAR10 = FUN5(FUN3(VAR12) - 14, 0);
            VAR12 >>= VAR10;
            VAR27 = VAR12;
            VAR29 = VAR10;
        }
        VAR12 = VAR3->FUN4(VAR6, VAR6, VAR7);
        VAR10 = FUN5(FUN3(VAR12) - 14, 0);
        VAR12 >>= VAR10;
        VAR28 = VAR12;
        VAR30 = VAR10;
        VAR13 = VAR22 * VAR22;
        VAR13 = FUN8(VAR13, VAR28, VAR49);
        VAR14 = VAR27 * VAR27;
        VAR14 = FUN8(VAR14, VAR23, VAR49);
        VAR10 = ((VAR29 - VAR24) << 1) - (VAR30 - VAR25);
        if (VAR10 > 0)
            VAR13 >>= VAR10;
        else
            VAR14 >>= -VAR10;
        if (VAR14 > VAR13)
        {
            VAR36 = VAR6;
            VAR22 = VAR27;
            VAR23 = VAR28;
            VAR24 = VAR29;
            VAR25 = VAR30;
        }
        else
            VAR36 = &VAR41[VAR32 - 1][VAR33];
        if (VAR17 > 0)
            for (VAR8 = 0; VAR8 < VAR7; VAR8++)
                VAR36[VAR8] <<= VAR17;
        else
            for (VAR8 = 0; VAR8 < VAR7; VAR8++)
                VAR36[VAR8] >>= -VAR17;
        VAR37 = VAR36;
    }
    else
        VAR37 = VAR5 + VAR40 - (VAR31 + 1 - VAR33);
    VAR10 = VAR24 - VAR25;
    if (VAR10 > 0)
        VAR23 >>= VAR10;
    else
        VAR22 >>= -VAR10;
    if (VAR22 > VAR23)
        VAR34 = VAR53;
    else
    {
        VAR22 >>= 2;
        VAR23 >>= 1;
        VAR34 = (VAR23 << 15) / (VAR23 + VAR22);
    }
    VAR15 = (((VAR50)VAR22) << VAR24) >> 1;
    VAR16 = ((VAR50)VAR23) << VAR25;
    VAR34 = FUN5((VAR16 << 15) / (VAR16 + VAR15), VAR53);
    VAR35 = 32767 - VAR34 + 1;
    FUN9(VAR6, VAR5 + VAR40, VAR37, VAR34, VAR35, 1 << 14, 15, VAR7);
    return 1;
}