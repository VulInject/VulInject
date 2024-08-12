static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    VAR5 *VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17 = -1;
    Band VAR18[VAR19];
    int VAR20[2][VAR21];
    int VAR22;
    float VAR23;
    int VAR24, VAR25;
    memset(VAR18, 0, sizeof(VAR18));
    if (VAR7 <= 4)
    {
        FUN2(VAR2, VAR26, "", VAR7);
    }
    VAR12 = FUN3((VAR7 - 1) & ~3);
    VAR9->VAR27.FUN4(VAR12, VAR6 + 4, (VAR7 - 4) >> 2);
    FUN5(&VAR11, VAR12, (VAR7 - 4) * 8);
    FUN6(&VAR11, VAR6[0]);
    for (VAR13 = 0; VAR13 <= VAR9->VAR18; VAR13++)
    {
        for (VAR15 = 0; VAR15 < 2; VAR15++)
        {
            if (VAR13)
                VAR16 = FUN7(&VAR11, VAR28.VAR29, VAR30, 1) - 5;
            if (!VAR13 || (VAR16 == 4))
                VAR18[VAR13].VAR31[VAR15] = FUN8(&VAR11, 4);
            else
                VAR18[VAR13].VAR31[VAR15] = VAR18[VAR13 - 1].VAR31[VAR15] + VAR16;
        }
        if (VAR18[VAR13].VAR31[0] || VAR18[VAR13].VAR31[1])
        {
            VAR17 = VAR13;
            if (VAR9->VAR32)
                VAR18[VAR13].VAR33 = FUN9(&VAR11);
        }
    }
    for (VAR13 = 0; VAR13 <= VAR17; VAR13++)
        for (VAR15 = 0; VAR15 < 2; VAR15++)
            if (VAR18[VAR13].VAR31[VAR15])
                VAR18[VAR13].VAR34[VAR15] = FUN7(&VAR11, VAR35.VAR29, VAR36, 1);
    for (VAR13 = 0; VAR13 <= VAR17; VAR13++)
    {
        for (VAR15 = 0; VAR15 < 2; VAR15++)
        {
            if (VAR18[VAR13].VAR31[VAR15])
            {
                VAR18[VAR13].VAR37[VAR15][2] = VAR9->VAR38[VAR15][VAR13];
                VAR16 = FUN7(&VAR11, VAR39.VAR29, VAR40, 1) - 7;
                VAR18[VAR13].VAR37[VAR15][0] = (VAR16 == 8) ? FUN8(&VAR11, 6) : (VAR18[VAR13].VAR37[VAR15][2] + VAR16);
                switch (VAR18[VAR13].VAR34[VAR15])
                {
                case 0:
                    VAR16 = FUN7(&VAR11, VAR39.VAR29, VAR40, 1) - 7;
                    VAR18[VAR13].VAR37[VAR15][1] = (VAR16 == 8) ? FUN8(&VAR11, 6) : (VAR18[VAR13].VAR37[VAR15][0] + VAR16);
                    VAR16 = FUN7(&VAR11, VAR39.VAR29, VAR40, 1) - 7;
                    VAR18[VAR13].VAR37[VAR15][2] = (VAR16 == 8) ? FUN8(&VAR11, 6) : (VAR18[VAR13].VAR37[VAR15][1] + VAR16);
                    break;
                case 1:
                    VAR16 = FUN7(&VAR11, VAR39.VAR29, VAR40, 1) - 7;
                    VAR18[VAR13].VAR37[VAR15][1] = (VAR16 == 8) ? FUN8(&VAR11, 6) : (VAR18[VAR13].VAR37[VAR15][0] + VAR16);
                    VAR18[VAR13].VAR37[VAR15][2] = VAR18[VAR13].VAR37[VAR15][1];
                    break;
                case 2:
                    VAR18[VAR13].VAR37[VAR15][1] = VAR18[VAR13].VAR37[VAR15][0];
                    VAR16 = FUN7(&VAR11, VAR39.VAR29, VAR40, 1) - 7;
                    VAR18[VAR13].VAR37[VAR15][2] = (VAR16 == 8) ? FUN8(&VAR11, 6) : (VAR18[VAR13].VAR37[VAR15][1] + VAR16);
                    break;
                case 3:
                    VAR18[VAR13].VAR37[VAR15][2] = VAR18[VAR13].VAR37[VAR15][1] = VAR18[VAR13].VAR37[VAR15][0];
                    break;
                }
                VAR9->VAR38[VAR15][VAR13] = VAR18[VAR13].VAR37[VAR15][2];
            }
        }
    }
    memset(VAR20, 0, sizeof(VAR20));
    VAR22 = 0;
    for (VAR13 = 0; VAR13 < VAR19; VAR13++, VAR22 += VAR41)
        for (VAR15 = 0; VAR15 < 2; VAR15++)
            FUN10(VAR9, &VAR11, VAR18[VAR13].VAR31[VAR15], VAR20[VAR15] + VAR22);
    memset(VAR9->VAR42, 0, sizeof(VAR9->VAR42));
    VAR22 = 0;
    for (VAR13 = 0; VAR13 <= VAR17; VAR13++, VAR22 += VAR41)
    {
        for (VAR15 = 0; VAR15 < 2; VAR15++)
        {
            if (VAR18[VAR13].VAR31[VAR15])
            {
                VAR14 = 0;
                VAR23 = VAR43[VAR18[VAR13].VAR31[VAR15]] * VAR44[VAR18[VAR13].VAR37[VAR15][0]];
                for (; VAR14 < 12; VAR14++)
                    VAR9->VAR42[VAR15][VAR14][VAR13] = VAR23 * VAR20[VAR15][VAR14 + VAR22];
                VAR23 = VAR43[VAR18[VAR13].VAR31[VAR15]] * VAR44[VAR18[VAR13].VAR37[VAR15][1]];
                for (; VAR14 < 24; VAR14++)
                    VAR9->VAR42[VAR15][VAR14][VAR13] = VAR23 * VAR20[VAR15][VAR14 + VAR22];
                VAR23 = VAR43[VAR18[VAR13].VAR31[VAR15]] * VAR44[VAR18[VAR13].VAR37[VAR15][2]];
                for (; VAR14 < 36; VAR14++)
                    VAR9->VAR42[VAR15][VAR14][VAR13] = VAR23 * VAR20[VAR15][VAR14 + VAR22];
            }
        }
        if (VAR18[VAR13].VAR33)
        {
            int VAR45, VAR46;
            for (VAR14 = 0; VAR14 < VAR41; VAR14++)
            {
                VAR45 = VAR9->VAR42[0][VAR14][VAR13];
                VAR46 = VAR9->VAR42[1][VAR14][VAR13];
                VAR9->VAR42[0][VAR14][VAR13] = VAR45 + VAR46;
                VAR9->VAR42[1][VAR14][VAR13] = VAR45 - VAR46;
            }
        }
    }
    FUN11(VAR9, VAR3);
    FUN12(VAR12);
    VAR24 = FUN13(&VAR11);
    VAR25 = (VAR7 - 4) * 8;
    if (!VAR6[1] && ((VAR25 < VAR24) || (VAR24 + 32 <= VAR25)))
    {
        FUN2(NULL, 0, "", VAR24, VAR25);
        return -1;
    }
    if (VAR9->VAR47)
    {
        VAR9->VAR47--;
        *VAR4 = 0;
        return VAR7;
    }
    *VAR4 = (VAR6[1] ? VAR9->VAR48 : VAR21) * 4;
    return VAR7;
}