static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    const VAR19 *VAR20;
    int VAR21 = FUN2(VAR8);
    int VAR22[VAR23], VAR24;
    int VAR25[VAR23], VAR26[VAR23];
    const int VAR27 = VAR12->VAR28->VAR27;
    const int VAR29 = VAR12->VAR28->VAR29;
    int VAR30, VAR31, VAR32;
    int VAR33, VAR34, VAR35, VAR36;
    int VAR37[VAR38], VAR39[VAR38];
    int VAR40;
    VAR19 *VAR41;
    int VAR42[4], VAR43;
    if (VAR12->VAR44 == 1)
        VAR43 = 0;
    else
        VAR43 = VAR12->VAR45 ^ !VAR4->VAR46;
    VAR33 = VAR6 + VAR8;
    for (VAR14 = 0; VAR14 < VAR12->VAR47; VAR14++)
    {
        VAR26[VAR14] = (VAR14 == 1 || VAR14 == 2);
        VAR25[VAR14] = VAR21 + 2;
        if (VAR26[VAR14])
            VAR25[VAR14] += VAR12->VAR48 - 3;
        if (!VAR26[VAR14] || VAR12->VAR48 == VAR49)
        {
            VAR17 = VAR6 << 4;
            VAR18 = VAR7 << 4;
            VAR22[VAR14] = 4;
            VAR24 = VAR2->VAR50;
        }
        else
        {
            VAR17 = VAR6 << 3;
            VAR18 = VAR7 << 4;
            VAR22[VAR14] = 2;
            VAR24 = VAR2->VAR50 >> 1;
        }
        VAR42[VAR14] = VAR4->VAR42[VAR14] * VAR12->VAR44;
        VAR20 = (const VAR19 *)(VAR4->VAR51[VAR14] + VAR18 * VAR42[VAR14] + VAR43 * VAR4->VAR42[VAR14]) + VAR17;
        if (VAR14 < 3)
        {
            FUN3(VAR12, VAR20, VAR42[VAR14], VAR17, VAR18, VAR24, VAR2->VAR52 / VAR12->VAR44, VAR10->VAR53[VAR14], VAR10->VAR54, VAR8, VAR22[VAR14], VAR26[VAR14]);
        }
        else
        {
            FUN4(VAR12, VAR20, VAR42[VAR14], VAR17, VAR18, VAR24, VAR2->VAR52 / VAR12->VAR44, VAR10->VAR53[VAR14], VAR8, VAR12->VAR55);
        }
    }
    for (VAR15 = VAR27; VAR15 < VAR29 + 2; VAR15++)
    {
        VAR10->VAR56[VAR5 + VAR15].VAR57 = -1;
        VAR10->VAR56[VAR5 + VAR15].VAR58 = VAR15;
    }
    for (VAR15 = VAR27; VAR15 <= VAR29; VAR15++)
    {
        VAR31 = 0;
        VAR30 = 0;
        for (VAR14 = 0; VAR14 < VAR12->VAR47 - !!VAR12->VAR55; VAR14++)
        {
            VAR31 += FUN5(VAR12, &VAR30, VAR14, VAR20, VAR42[VAR14], VAR8, VAR22[VAR14], VAR25[VAR14], VAR12->VAR59[VAR15], VAR10);
        }
        if (VAR12->VAR55)
            VAR31 += FUN6(VAR12, &VAR30, VAR20, VAR42[3], VAR8, VAR15, VAR10->VAR53[3]);
        if (VAR31 > 65000 * 8)
        {
            VAR30 = VAR60;
            break;
        }
        VAR37[VAR15] = VAR31;
        VAR39[VAR15] = VAR30;
    }
    if (VAR37[VAR29] <= VAR12->VAR61 * VAR8)
    {
        VAR37[VAR29 + 1] = VAR37[VAR29];
        VAR39[VAR29 + 1] = VAR39[VAR29] + 1;
        VAR40 = VAR29;
    }
    else
    {
        for (VAR15 = VAR29 + 1; VAR15 < 128; VAR15++)
        {
            VAR31 = 0;
            VAR30 = 0;
            if (VAR15 < VAR62)
            {
                VAR41 = VAR12->VAR59[VAR15];
            }
            else
            {
                VAR41 = VAR10->VAR63;
                for (VAR14 = 0; VAR14 < 64; VAR14++)
                    VAR41[VAR14] = VAR12->VAR64[VAR14] * VAR15;
            }
            for (VAR14 = 0; VAR14 < VAR12->VAR47 - !!VAR12->VAR55; VAR14++)
            {
                VAR31 += FUN5(VAR12, &VAR30, VAR14, VAR20, VAR42[VAR14], VAR8, VAR22[VAR14], VAR25[VAR14], VAR41, VAR10);
            }
            if (VAR12->VAR55)
                VAR31 += FUN6(VAR12, &VAR30, VAR20, VAR42[3], VAR8, VAR15, VAR10->VAR53[3]);
            if (VAR31 <= VAR12->VAR61 * VAR8)
                break;
        }
        VAR37[VAR29 + 1] = VAR31;
        VAR39[VAR29 + 1] = VAR30;
        VAR40 = VAR15;
    }
    VAR10->VAR56[VAR5 + VAR29 + 1].VAR58 = VAR40;
    VAR32 = VAR33 * VAR12->VAR61;
    for (VAR16 = VAR27; VAR16 < VAR29 + 2; VAR16++)
    {
        VAR34 = VAR5 - VAR38 + VAR16;
        for (VAR15 = VAR27; VAR15 < VAR29 + 2; VAR15++)
        {
            VAR35 = VAR5 + VAR15;
            VAR31 = VAR10->VAR56[VAR34].VAR31 + VAR37[VAR15];
            VAR30 = VAR39[VAR15];
            if (VAR31 > VAR32)
                VAR30 = VAR60;
            if (VAR10->VAR56[VAR34].VAR65 < VAR60 && VAR30 < VAR60)
                VAR36 = VAR10->VAR56[VAR34].VAR65 + VAR30;
            else
                VAR36 = VAR60;
            if (VAR10->VAR56[VAR35].VAR57 == -1 || VAR10->VAR56[VAR35].VAR65 >= VAR36)
            {
                VAR10->VAR56[VAR35].VAR31 = VAR31;
                VAR10->VAR56[VAR35].VAR65 = VAR36;
                VAR10->VAR56[VAR35].VAR57 = VAR34;
            }
        }
    }
    VAR30 = VAR10->VAR56[VAR5 + VAR27].VAR65;
    VAR16 = VAR5 + VAR27;
    for (VAR15 = VAR27 + 1; VAR15 < VAR29 + 2; VAR15++)
    {
        if (VAR10->VAR56[VAR5 + VAR15].VAR65 <= VAR30)
        {
            VAR30 = VAR10->VAR56[VAR5 + VAR15].VAR65;
            VAR16 = VAR5 + VAR15;
        }
    }
    return VAR16;
}