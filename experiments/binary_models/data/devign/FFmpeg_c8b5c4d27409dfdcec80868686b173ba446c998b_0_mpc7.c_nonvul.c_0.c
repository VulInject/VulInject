static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    VAR7 *VAR15;
    int VAR16, VAR17;
    int VAR18 = -1;
    VAR19 *VAR20 = VAR12->VAR20;
    int VAR21, VAR22;
    int VAR23, VAR24;
    memset(VAR20, 0, sizeof(VAR20));
    if (VAR9 <= 4)
    {
        FUN2(VAR2, VAR25, "", VAR9);
    }
    VAR22 = (VAR8[1] ? VAR12->VAR26 : VAR27) * 4;
    if (*VAR4 < VAR22)
    {
        FUN2(VAR2, VAR25, "");
        return FUN3(VAR28);
    }
    VAR15 = FUN4(((VAR9 - 1) & ~3) + VAR29);
    VAR12->VAR30.FUN5((VAR31 *)VAR15, (const VAR31 *)(VAR8 + 4), (VAR9 - 4) >> 2);
    FUN6(&VAR14, VAR15, (VAR9 - 4) * 8);
    FUN7(&VAR14, VAR8[0]);
    for (VAR16 = 0; VAR16 <= VAR12->VAR32; VAR16++)
    {
        for (VAR17 = 0; VAR17 < 2; VAR17++)
        {
            int VAR33 = 4;
            if (VAR16)
                VAR33 = FUN8(&VAR14, VAR34.VAR35, VAR36, 1) - 5;
            if (VAR33 == 4)
                VAR20[VAR16].VAR37[VAR17] = FUN9(&VAR14, 4);
            else
                VAR20[VAR16].VAR37[VAR17] = VAR20[VAR16 - 1].VAR37[VAR17] + VAR33;
        }
        if (VAR20[VAR16].VAR37[0] || VAR20[VAR16].VAR37[1])
        {
            VAR18 = VAR16;
            if (VAR12->VAR38)
                VAR20[VAR16].VAR39 = FUN10(&VAR14);
        }
    }
    for (VAR16 = 0; VAR16 <= VAR18; VAR16++)
        for (VAR17 = 0; VAR17 < 2; VAR17++)
            if (VAR20[VAR16].VAR37[VAR17])
                VAR20[VAR16].VAR40[VAR17] = FUN8(&VAR14, VAR41.VAR35, VAR42, 1);
    for (VAR16 = 0; VAR16 <= VAR18; VAR16++)
    {
        for (VAR17 = 0; VAR17 < 2; VAR17++)
        {
            if (VAR20[VAR16].VAR37[VAR17])
            {
                VAR20[VAR16].VAR43[VAR17][2] = VAR12->VAR44[VAR17][VAR16];
                VAR20[VAR16].VAR43[VAR17][0] = FUN11(&VAR14, VAR20[VAR16].VAR43[VAR17][2]);
                switch (VAR20[VAR16].VAR40[VAR17])
                {
                case 0:
                    VAR20[VAR16].VAR43[VAR17][1] = FUN11(&VAR14, VAR20[VAR16].VAR43[VAR17][0]);
                    VAR20[VAR16].VAR43[VAR17][2] = FUN11(&VAR14, VAR20[VAR16].VAR43[VAR17][1]);
                    break;
                case 1:
                    VAR20[VAR16].VAR43[VAR17][1] = FUN11(&VAR14, VAR20[VAR16].VAR43[VAR17][0]);
                    VAR20[VAR16].VAR43[VAR17][2] = VAR20[VAR16].VAR43[VAR17][1];
                    break;
                case 2:
                    VAR20[VAR16].VAR43[VAR17][1] = VAR20[VAR16].VAR43[VAR17][0];
                    VAR20[VAR16].VAR43[VAR17][2] = FUN11(&VAR14, VAR20[VAR16].VAR43[VAR17][1]);
                    break;
                case 3:
                    VAR20[VAR16].VAR43[VAR17][2] = VAR20[VAR16].VAR43[VAR17][1] = VAR20[VAR16].VAR43[VAR17][0];
                    break;
                }
                VAR12->VAR44[VAR17][VAR16] = VAR20[VAR16].VAR43[VAR17][2];
            }
        }
    }
    memset(VAR12->VAR45, 0, sizeof(VAR12->VAR45));
    VAR21 = 0;
    for (VAR16 = 0; VAR16 < VAR46; VAR16++, VAR21 += VAR47)
        for (VAR17 = 0; VAR17 < 2; VAR17++)
            FUN12(VAR12, &VAR14, VAR20[VAR16].VAR37[VAR17], VAR12->VAR45[VAR17] + VAR21);
    FUN13(VAR12, VAR18, VAR3, 2);
    FUN14(VAR15);
    VAR23 = FUN15(&VAR14);
    VAR24 = (VAR9 - 4) * 8;
    if (!VAR8[1] && ((VAR24 < VAR23) || (VAR23 + 32 <= VAR24)))
    {
        FUN2(NULL, 0, "", VAR23, VAR24);
        return -1;
    }
    if (VAR12->VAR48)
    {
        VAR12->VAR48--;
        *VAR4 = 0;
        return VAR9;
    }
    *VAR4 = VAR22;
    return VAR9;
}