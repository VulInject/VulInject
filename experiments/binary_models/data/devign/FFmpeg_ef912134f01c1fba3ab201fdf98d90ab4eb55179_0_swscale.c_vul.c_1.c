void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = VAR2->VAR8;
    const int VAR9 = VAR2->VAR9;
    VAR10 **VAR11 = VAR2->VAR11;
    VAR10 **VAR12 = VAR2->VAR12;
    VAR10 **VAR13 = VAR2->VAR13;
    const int VAR14 = VAR2->VAR14;
    const int VAR15 = VAR2->VAR15;
    VAR16 *VAR17 = VAR2->VAR17;
    VAR16 *VAR18 = VAR2->VAR18;
    VAR10 *VAR19 = VAR2->VAR19;
    VAR10 *VAR20 = VAR2->VAR20;
    VAR16 *VAR21 = VAR2->VAR21;
    VAR16 *VAR22 = VAR2->VAR22;
    int32_t VAR23 *VAR24 = VAR2->VAR24;
    const int VAR25 = VAR2->VAR25;
    const int VAR26 = VAR2->VAR26;
    const int VAR27 = VAR3 >> VAR2->VAR28;
    const int VAR29 = VAR17[VAR3];
    const int VAR30 = VAR18[VAR27];
    VAR2->VAR31 = VAR32[VAR3 & 1];
    if (VAR2->VAR33 == VAR34 || VAR2->VAR33 == VAR35)
        VAR2->VAR36 = VAR32[VAR3 & 1];
    else
        VAR2->VAR36 = VAR37[VAR3 & 1];
    VAR2->VAR38 = VAR32[(VAR3 + 1) & 1];
    if (VAR3 < VAR8 - 2)
    {
        const VAR10 **VAR39 = (const VAR10 **)(void *)VAR11 + VAR4 + VAR29 - VAR6 + VAR14;
        const VAR10 **VAR40 = (const VAR10 **)(void *)VAR12 + VAR5 + VAR30 - VAR7 + VAR15;
        const VAR10 **VAR41 = (VAR42 && VAR13) ? (const VAR10 **)(void *)VAR13 + VAR4 + VAR29 - VAR6 + VAR14 : NULL;
        int VAR43;
        if (VAR29 < 0 || VAR29 + VAR25 > VAR2->VAR44)
        {
            const VAR10 **VAR45 = (const VAR10 **)VAR11 + 2 * VAR14;
            int VAR46 = -VAR29, VAR43, VAR47 = FUN2(VAR2->VAR44 - VAR29, VAR25);
            for (VAR43 = 0; VAR43 < VAR46; VAR43++)
                VAR45[VAR43] = VAR39[VAR46];
            for (; VAR43 < VAR47; VAR43++)
                VAR45[VAR43] = VAR39[VAR43];
            for (; VAR43 < VAR25; VAR43++)
                VAR45[VAR43] = VAR45[VAR43 - 1];
            VAR39 = VAR45;
            if (VAR41)
            {
                const VAR10 **VAR48 = (const VAR10 **)VAR13 + 2 * VAR14;
                for (VAR43 = 0; VAR43 < VAR46; VAR43++)
                    VAR48[VAR43] = VAR41[VAR46];
                for (; VAR43 < VAR47; VAR43++)
                    VAR48[VAR43] = VAR41[VAR43];
                for (; VAR43 < VAR25; VAR43++)
                    VAR48[VAR43] = VAR48[VAR43 - 1];
                VAR41 = VAR48;
            }
        }
        if (VAR30 < 0 || VAR30 + VAR26 > VAR2->VAR49)
        {
            const VAR10 **VAR50 = (const VAR10 **)VAR12 + 2 * VAR15;
            int VAR46 = -VAR30, VAR43, VAR47 = FUN2(VAR2->VAR49 - VAR30, VAR26);
            for (VAR43 = 0; VAR43 < VAR46; VAR43++)
            {
                VAR50[VAR43] = VAR40[VAR46];
            }
            for (; VAR43 < VAR47; VAR43++)
            {
                VAR50[VAR43] = VAR40[VAR43];
            }
            for (; VAR43 < VAR26; VAR43++)
            {
                VAR50[VAR43] = VAR50[VAR43 - 1];
            }
            VAR40 = VAR50;
        }
        if (VAR9 & VAR51)
        {
            int VAR52 = VAR53 / 8;
            for (VAR43 = 0; VAR43 < VAR25; VAR43 += 2)
            {
                *(const void **)&VAR21[VAR52 * VAR43] = VAR39[VAR43];
                *(const void **)&VAR21[VAR52 * VAR43 + VAR54 / 4] = VAR39[VAR43 + (VAR25 > 1)];
                VAR21[VAR52 * VAR43 + VAR55 / 4] = VAR21[VAR52 * VAR43 + VAR55 / 4 + 1] = VAR19[VAR3 * VAR25 + VAR43] + (VAR25 > 1 ? VAR19[VAR3 * VAR25 + VAR43 + 1] << 16 : 0);
                if (VAR42 && VAR13)
                {
                    *(const void **)&VAR24[VAR52 * VAR43] = VAR41[VAR43];
                    *(const void **)&VAR24[VAR52 * VAR43 + VAR54 / 4] = VAR41[VAR43 + (VAR25 > 1)];
                    VAR24[VAR52 * VAR43 + VAR55 / 4] = VAR24[VAR52 * VAR43 + VAR55 / 4 + 1] = VAR21[VAR52 * VAR43 + VAR55 / 4];
                }
            }
            for (VAR43 = 0; VAR43 < VAR26; VAR43 += 2)
            {
                *(const void **)&VAR22[VAR52 * VAR43] = VAR40[VAR43];
                *(const void **)&VAR22[VAR52 * VAR43 + VAR54 / 4] = VAR40[VAR43 + (VAR26 > 1)];
                VAR22[VAR52 * VAR43 + VAR55 / 4] = VAR22[VAR52 * VAR43 + VAR55 / 4 + 1] = VAR20[VAR27 * VAR26 + VAR43] + (VAR26 > 1 ? VAR20[VAR27 * VAR26 + VAR43 + 1] << 16 : 0);
            }
        }
        else
        {
            for (VAR43 = 0; VAR43 < VAR25; VAR43++)
            {
                *(const void **)&VAR21[4 * VAR43 + 0] = VAR39[VAR43];
                VAR21[4 * VAR43 + 2] = VAR21[4 * VAR43 + 3] = ((VAR56)VAR19[VAR3 * VAR25 + VAR43]) * 0x10001;
                if (VAR42 && VAR13)
                {
                    *(const void **)&VAR24[4 * VAR43 + 0] = VAR41[VAR43];
                    VAR24[4 * VAR43 + 2] = VAR24[4 * VAR43 + 3] = VAR21[4 * VAR43 + 2];
                }
            }
            for (VAR43 = 0; VAR43 < VAR26; VAR43++)
            {
                *(const void **)&VAR22[4 * VAR43 + 0] = VAR40[VAR43];
                VAR22[4 * VAR43 + 2] = VAR22[4 * VAR43 + 3] = ((VAR56)VAR20[VAR27 * VAR26 + VAR43]) * 0x10001;
            }
        }
    }
}