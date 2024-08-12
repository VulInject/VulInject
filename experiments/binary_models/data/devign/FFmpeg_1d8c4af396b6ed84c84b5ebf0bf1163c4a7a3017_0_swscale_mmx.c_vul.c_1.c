void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = VAR2->VAR8;
    const int VAR9 = VAR2->VAR9;
    VAR10 **VAR11 = VAR2->VAR11;
    VAR10 **VAR12 = VAR2->VAR12;
    VAR10 **VAR13 = VAR2->VAR13;
    const int VAR14 = VAR2->VAR14;
    const int VAR15 = VAR2->VAR15;
    VAR10 *VAR16 = VAR2->VAR16;
    VAR10 *VAR17 = VAR2->VAR17;
    VAR10 *VAR18 = VAR2->VAR18;
    VAR10 *VAR19 = VAR2->VAR19;
    VAR20 *VAR21 = VAR2->VAR21;
    VAR20 *VAR22 = VAR2->VAR22;
    int32_t VAR23 *VAR24 = VAR2->VAR24;
    const int VAR25 = VAR2->VAR25;
    const int VAR26 = VAR2->VAR26;
    const int VAR27 = VAR3 >> VAR2->VAR28;
    const int VAR29 = VAR16[VAR3];
    const int VAR30 = VAR17[VAR27];
    VAR2->VAR31 = VAR32[VAR3 & 1];
    if (VAR2->VAR33 == VAR34 || VAR2->VAR33 == VAR35)
        VAR2->VAR36 = VAR32[VAR3 & 1];
    else
        VAR2->VAR36 = VAR37[VAR3 & 1];
    VAR2->VAR38 = VAR32[(VAR3 + 1) & 1];
    if (VAR3 < VAR8 - 2)
    {
        const VAR10 **VAR39 = (const VAR10 **)VAR11 + VAR4 + VAR29 - VAR6 + VAR14;
        const VAR10 **VAR40 = (const VAR10 **)VAR12 + VAR5 + VAR30 - VAR7 + VAR15;
        const VAR10 **VAR41 = (VAR42 && VAR13) ? (const VAR10 **)VAR13 + VAR4 + VAR29 - VAR6 + VAR14 : NULL;
        int VAR43;
        if (VAR9 & VAR44)
        {
            int VAR45 = VAR46 / 8;
            for (VAR43 = 0; VAR43 < VAR25; VAR43 += 2)
            {
                *(const void **)&VAR21[VAR45 * VAR43] = VAR39[VAR43];
                *(const void **)&VAR21[VAR45 * VAR43 + VAR47 / 4] = VAR39[VAR43 + (VAR25 > 1)];
                VAR21[VAR45 * VAR43 + VAR48 / 4] = VAR21[VAR45 * VAR43 + VAR48 / 4 + 1] = VAR18[VAR3 * VAR25 + VAR43] + (VAR25 > 1 ? VAR18[VAR3 * VAR25 + VAR43 + 1] << 16 : 0);
                if (VAR42 && VAR13)
                {
                    *(const void **)&VAR24[VAR45 * VAR43] = VAR41[VAR43];
                    *(const void **)&VAR24[VAR45 * VAR43 + VAR47 / 4] = VAR41[VAR43 + (VAR25 > 1)];
                    VAR24[VAR45 * VAR43 + VAR48 / 4] = VAR24[VAR45 * VAR43 + VAR48 / 4 + 1] = VAR21[VAR45 * VAR43 + VAR48 / 4];
                    for (VAR43 = 0; VAR43 < VAR26; VAR43 += 2)
                    {
                        *(const void **)&VAR22[VAR45 * VAR43] = VAR40[VAR43];
                        *(const void **)&VAR22[VAR45 * VAR43 + VAR47 / 4] = VAR40[VAR43 + (VAR26 > 1)];
                        VAR22[VAR45 * VAR43 + VAR48 / 4] = VAR22[VAR45 * VAR43 + VAR48 / 4 + 1] = VAR19[VAR27 * VAR26 + VAR43] + (VAR26 > 1 ? VAR19[VAR27 * VAR26 + VAR43 + 1] << 16 : 0);
                    }
                    else
                    {
                        for (VAR43 = 0; VAR43 < VAR25; VAR43++)
                        {
                            *(const void **)&VAR21[4 * VAR43 + 0] = VAR39[VAR43];
                            VAR21[4 * VAR43 + 2] = VAR21[4 * VAR43 + 3] = ((VAR49)VAR18[VAR3 * VAR25 + VAR43]) * 0x10001;
                            if (VAR42 && VAR13)
                            {
                                *(const void **)&VAR24[4 * VAR43 + 0] = VAR41[VAR43];
                                VAR24[4 * VAR43 + 2] = VAR24[4 * VAR43 + 3] = VAR21[4 * VAR43 + 2];
                                for (VAR43 = 0; VAR43 < VAR26; VAR43++)
                                {
                                    *(const void **)&VAR22[4 * VAR43 + 0] = VAR40[VAR43];
                                    VAR22[4 * VAR43 + 2] = VAR22[4 * VAR43 + 3] = ((VAR49)VAR19[VAR27 * VAR26 + VAR43]) * 0x10001