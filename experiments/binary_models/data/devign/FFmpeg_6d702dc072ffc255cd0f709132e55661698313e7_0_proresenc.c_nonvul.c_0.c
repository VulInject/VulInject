static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    const VAR17 *VAR18;
    int VAR19 = FUN2(VAR8);
    int VAR20[VAR21], VAR22;
    int VAR23[VAR21], VAR24[VAR21];
    const int VAR25 = VAR10->VAR26->VAR25;
    const int VAR27 = VAR10->VAR26->VAR27;
    int VAR28, VAR29, VAR30;
    int VAR31, VAR32, VAR33, VAR34;
    int VAR35[VAR36], VAR37[VAR36];
    int VAR38;
    VAR17 *VAR39;
    VAR31 = VAR6 + VAR8;
    for (VAR12 = 0; VAR12 < VAR10->VAR40; VAR12++)
    {
        VAR24[VAR12] = (VAR12 == 1 || VAR12 == 2);
        VAR23[VAR12] = VAR19 + 2;
        if (VAR24[VAR12])
            VAR23[VAR12] += VAR10->VAR41 - 3;
        if (!VAR24[VAR12] || VAR10->VAR41 == VAR42)
        {
            VAR15 = VAR6 << 4;
            VAR16 = VAR7 << 4;
            VAR20[VAR12] = 4;
            VAR22 = VAR2->VAR43;
        }
        else
        {
            VAR15 = VAR6 << 3;
            VAR16 = VAR7 << 4;
            VAR20[VAR12] = 2;
            VAR22 = VAR2->VAR43 >> 1;
        }
        VAR18 = (const VAR17 *)(VAR4->VAR44[VAR12] + VAR16 * VAR4->VAR45[VAR12]) + VAR15;
        FUN3(VAR10, VAR18, VAR4->VAR45[VAR12], VAR15, VAR16, VAR22, VAR2->VAR46, VAR10->VAR47[VAR12], VAR8, VAR20[VAR12]);
    }
    for (VAR13 = VAR25; VAR13 < VAR27 + 2; VAR13++)
    {
        VAR10->VAR48[VAR5 + VAR13].VAR49 = -1;
        VAR10->VAR48[VAR5 + VAR13].VAR50 = VAR13;
    }
    for (VAR13 = VAR25; VAR13 <= VAR27; VAR13++)
    {
        VAR29 = 0;
        VAR28 = 0;
        for (VAR12 = 0; VAR12 < VAR10->VAR40; VAR12++)
        {
            VAR29 += FUN4(VAR10, &VAR28, VAR12, VAR18, VAR4->VAR45[VAR12], VAR8, VAR20[VAR12], VAR23[VAR12], VAR10->VAR51[VAR13]);
        }
        if (VAR29 > 65000 * 8)
        {
            VAR28 = VAR52;
            break;
        }
        VAR35[VAR13] = VAR29;
        VAR37[VAR13] = VAR28;
    }
    if (VAR35[VAR27] <= VAR10->VAR53 * VAR8)
    {
        VAR35[VAR27 + 1] = VAR35[VAR27];
        VAR37[VAR27 + 1] = VAR37[VAR27] + 1;
        VAR38 = VAR27;
    }
    else
    {
        for (VAR13 = VAR27 + 1; VAR13 < 128; VAR13++)
        {
            VAR29 = 0;
            VAR28 = 0;
            if (VAR13 < VAR54)
            {
                VAR39 = VAR10->VAR51[VAR13];
            }
            else
            {
                VAR39 = VAR10->VAR55;
                for (VAR12 = 0; VAR12 < 64; VAR12++)
                    VAR39[VAR12] = VAR10->VAR26->VAR50[VAR12] * VAR13;
            }
            for (VAR12 = 0; VAR12 < VAR10->VAR40; VAR12++)
            {
                VAR29 += FUN4(VAR10, &VAR28, VAR12, VAR18, VAR4->VAR45[VAR12], VAR8, VAR20[VAR12], VAR23[VAR12], VAR39);
            }
            if (VAR29 <= VAR10->VAR53 * VAR8)
                break;
        }
        VAR35[VAR27 + 1] = VAR29;
        VAR37[VAR27 + 1] = VAR28;
        VAR38 = VAR13;
    }
    VAR10->VAR48[VAR5 + VAR27 + 1].VAR50 = VAR38;
    VAR30 = VAR31 * VAR10->VAR53;
    for (VAR14 = VAR25; VAR14 < VAR27 + 2; VAR14++)
    {
        VAR32 = VAR5 - VAR36 + VAR14;
        for (VAR13 = VAR25; VAR13 < VAR27 + 2; VAR13++)
        {
            VAR33 = VAR5 + VAR13;
            VAR29 = VAR10->VAR48[VAR32].VAR29 + VAR35[VAR13];
            VAR28 = VAR37[VAR13];
            if (VAR29 > VAR30)
                VAR28 = VAR52;
            if (VAR10->VAR48[VAR32].VAR56 < VAR52 && VAR28 < VAR52)
                VAR34 = VAR10->VAR48[VAR32].VAR56 + VAR28;
            else
                VAR34 = VAR52;
            if (VAR10->VAR48[VAR33].VAR49 == -1 || VAR10->VAR48[VAR33].VAR56 >= VAR34)
            {
                VAR10->VAR48[VAR33].VAR29 = VAR29;
                VAR10->VAR48[VAR33].VAR56 = VAR34;
                VAR10->VAR48[VAR33].VAR49 = VAR32;
            }
        }
    }
    VAR28 = VAR10->VAR48[VAR5 + VAR25].VAR56;
    VAR14 = VAR5 + VAR25;
    for (VAR13 = VAR25 + 1; VAR13 < VAR27 + 2; VAR13++)
    {
        if (VAR10->VAR48[VAR5 + VAR13].VAR56 <= VAR28)
        {
            VAR28 = VAR10->VAR48[VAR5 + VAR13].VAR56;
            VAR14 = VAR5 + VAR13;
        }
    }
    return VAR14;
}