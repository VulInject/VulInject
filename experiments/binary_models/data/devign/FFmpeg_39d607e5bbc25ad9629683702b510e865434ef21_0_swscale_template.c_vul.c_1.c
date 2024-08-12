static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = VAR2->VAR8;
    const int VAR9 = VAR2->VAR9;
    VAR10 **VAR11 = VAR2->VAR11;
    VAR10 **VAR12 = VAR2->VAR12;
    VAR10 **VAR13 = VAR2->VAR13;
    VAR10 **VAR14 = VAR2->VAR14;
    const int VAR15 = VAR2->VAR15;
    const int VAR16 = VAR2->VAR16;
    VAR10 *VAR17 = VAR2->VAR17;
    VAR10 *VAR18 = VAR2->VAR18;
    VAR10 *VAR19 = VAR2->VAR19;
    VAR10 *VAR20 = VAR2->VAR20;
    VAR21 *VAR22 = VAR2->VAR22;
    VAR21 *VAR23 = VAR2->VAR23;
    int32_t VAR24 *VAR25 = VAR2->VAR25;
    const int VAR26 = VAR2->VAR26;
    const int VAR27 = VAR2->VAR27;
    const int VAR28 = VAR3 >> VAR2->VAR29;
    const int VAR30 = VAR17[VAR3];
    const int VAR31 = VAR18[VAR28];
    VAR2->VAR32 = VAR33[VAR3 & 1];
    if (VAR2->VAR34 == VAR35 || VAR2->VAR34 == VAR36)
        VAR2->VAR37 = VAR33[VAR3 & 1];
    else
        VAR2->VAR37 = VAR38[VAR3 & 1];
    VAR2->VAR39 = VAR33[(VAR3 + 1) & 1];
    if (VAR3 < VAR8 - 2)
    {
        const VAR10 **VAR40 = (const VAR10 **)VAR11 + VAR4 + VAR30 - VAR6 + VAR15;
        const VAR10 **VAR41 = (const VAR10 **)VAR12 + VAR5 + VAR31 - VAR7 + VAR16;
        const VAR10 **VAR42 = (const VAR10 **)VAR13 + VAR5 + VAR31 - VAR7 + VAR16;
        const VAR10 **VAR43 = (VAR44 && VAR14) ? (const VAR10 **)VAR14 + VAR4 + VAR30 - VAR6 + VAR15 : NULL;
        int VAR45;
        if (VAR9 & VAR46)
        {
            int VAR47 = VAR48 / 8;
            for (VAR45 = 0; VAR45 < VAR26; VAR45 += 2)
            {
                *(const void **)&VAR22[VAR47 * VAR45] = VAR40[VAR45];
                *(const void **)&VAR22[VAR47 * VAR45 + VAR49 / 4] = VAR40[VAR45 + (VAR26 > 1)];
                VAR22[VAR47 * VAR45 + VAR50 / 4] = VAR22[VAR47 * VAR45 + VAR50 / 4 + 1] = VAR19[VAR3 * VAR26 + VAR45] + (VAR26 > 1 ? VAR19[VAR3 * VAR26 + VAR45 + 1] << 16 : 0);
                if (VAR44 && VAR14)
                {
                    *(const void **)&VAR25[VAR47 * VAR45] = VAR43[VAR45];
                    *(const void **)&VAR25[VAR47 * VAR45 + VAR49 / 4] = VAR43[VAR45 + (VAR26 > 1)];
                    VAR25[VAR47 * VAR45 + VAR50 / 4] = VAR25[VAR47 * VAR45 + VAR50 / 4 + 1] = VAR22[VAR47 * VAR45 + VAR50 / 4];
                }
            }
            for (VAR45 = 0; VAR45 < VAR27; VAR45 += 2)
            {
                *(const void **)&VAR23[VAR47 * VAR45] = VAR41[VAR45];
                *(const void **)&VAR23[VAR47 * VAR45 + VAR49 / 4] = VAR41[VAR45 + (VAR27 > 1)];
                VAR23[VAR47 * VAR45 + VAR50 / 4] = VAR23[VAR47 * VAR45 + VAR50 / 4 + 1] = VAR20[VAR28 * VAR27 + VAR45] + (VAR27 > 1 ? VAR20[VAR28 * VAR27 + VAR45 + 1] << 16 : 0);
            }
        }
        else
        {
            for (VAR45 = 0; VAR45 < VAR26; VAR45++)
            {
                *(const void **)&VAR22[4 * VAR45 + 0] = VAR40[VAR45];
                VAR22[4 * VAR45 + 2] = VAR22[4 * VAR45 + 3] = ((VAR51)VAR19[VAR3 * VAR26 + VAR45]) * 0x10001;
                if (VAR44 && VAR14)
                {
                    *(const void **)&VAR25[4 * VAR45 + 0] = VAR43[VAR45];
                    VAR25[4 * VAR45 + 2] = VAR25[4 * VAR45 + 3] = VAR22[4 * VAR45 + 2];
                }
            }
            for (VAR45 = 0; VAR45 < VAR27; VAR45++)
            {
                *(const void **)&VAR23[4 * VAR45 + 0] = VAR41[VAR45];
                VAR23[4 * VAR45 + 2] = VAR23[4 * VAR45 + 3] = ((VAR51)VAR20[VAR28 * VAR27 + VAR45]) * 0x10001;
            }
        }
    }
}