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
    memset(VAR20, 0, sizeof(*VAR20) * (VAR12->VAR25 + 1));
    if (VAR9 <= 4)
    {
        FUN2(VAR2, VAR26, "", VAR9);
        return FUN3(VAR27);
    }
    VAR12->VAR28.VAR29 = VAR8[1] ? VAR12->VAR30 : VAR31;
    if ((VAR22 = VAR2->FUN4(VAR2, &VAR12->VAR28)) < 0)
    {
        FUN2(VAR2, VAR26, "");
        return VAR22;
    }
    VAR15 = FUN5(((VAR9 - 1) & ~3) + VAR32);
    VAR12->VAR33.FUN6((VAR34 *)VAR15, (const VAR34 *)(VAR8 + 4), (VAR9 - 4) >> 2);
    FUN7(&VAR14, VAR15, (VAR9 - 4) * 8);
    FUN8(&VAR14, VAR8[0]);
    for (VAR16 = 0; VAR16 <= VAR12->VAR25; VAR16++)
    {
        for (VAR17 = 0; VAR17 < 2; VAR17++)
        {
            int VAR35 = 4;
            if (VAR16)
                VAR35 = FUN9(&VAR14, VAR36.VAR37, VAR38, 1) - 5;
            if (VAR35 == 4)
                VAR20[VAR16].VAR39[VAR17] = FUN10(&VAR14, 4);
            else
                VAR20[VAR16].VAR39[VAR17] = VAR20[VAR16 - 1].VAR39[VAR17] + VAR35;
        }
        if (VAR20[VAR16].VAR39[0] || VAR20[VAR16].VAR39[1])
        {
            VAR18 = VAR16;
            if (VAR12->VAR40)
                VAR20[VAR16].VAR41 = FUN11(&VAR14);
        }
    }
    for (VAR16 = 0; VAR16 <= VAR18; VAR16++)
        for (VAR17 = 0; VAR17 < 2; VAR17++)
            if (VAR20[VAR16].VAR39[VAR17])
                VAR20[VAR16].VAR42[VAR17] = FUN9(&VAR14, VAR43.VAR37, VAR44, 1);
    for (VAR16 = 0; VAR16 <= VAR18; VAR16++)
    {
        for (VAR17 = 0; VAR17 < 2; VAR17++)
        {
            if (VAR20[VAR16].VAR39[VAR17])
            {
                VAR20[VAR16].VAR45[VAR17][2] = VAR12->VAR46[VAR17][VAR16];
                VAR20[VAR16].VAR45[VAR17][0] = FUN12(&VAR14, VAR20[VAR16].VAR45[VAR17][2]);
                switch (VAR20[VAR16].VAR42[VAR17])
                {
                case 0:
                    VAR20[VAR16].VAR45[VAR17][1] = FUN12(&VAR14, VAR20[VAR16].VAR45[VAR17][0]);
                    VAR20[VAR16].VAR45[VAR17][2] = FUN12(&VAR14, VAR20[VAR16].VAR45[VAR17][1]);
                    break;
                case 1:
                    VAR20[VAR16].VAR45[VAR17][1] = FUN12(&VAR14, VAR20[VAR16].VAR45[VAR17][0]);
                    VAR20[VAR16].VAR45[VAR17][2] = VAR20[VAR16].VAR45[VAR17][1];
                    break;
                case 2:
                    VAR20[VAR16].VAR45[VAR17][1] = VAR20[VAR16].VAR45[VAR17][0];
                    VAR20[VAR16].VAR45[VAR17][2] = FUN12(&VAR14, VAR20[VAR16].VAR45[VAR17][1]);
                    break;
                case 3:
                    VAR20[VAR16].VAR45[VAR17][2] = VAR20[VAR16].VAR45[VAR17][1] = VAR20[VAR16].VAR45[VAR17][0];
                    break;
                }
                VAR12->VAR46[VAR17][VAR16] = VAR20[VAR16].VAR45[VAR17][2];
            }
        }
    }
    memset(VAR12->VAR47, 0, sizeof(VAR12->VAR47));
    VAR21 = 0;
    for (VAR16 = 0; VAR16 < VAR48; VAR16++, VAR21 += VAR49)
        for (VAR17 = 0; VAR17 < 2; VAR17++)
            FUN13(VAR12, &VAR14, VAR20[VAR16].VAR39[VAR17], VAR12->VAR47[VAR17] + VAR21);
    FUN14(VAR12, VAR18, VAR12->VAR28.VAR3[0], 2);
    FUN15(VAR15);
    VAR23 = FUN16(&VAR14);
    VAR24 = (VAR9 - 4) * 8;
    if (!VAR8[1] && ((VAR24 < VAR23) || (VAR23 + 32 <= VAR24)))
    {
        FUN2(NULL, 0, "", VAR23, VAR24);
        return -1;
    }
    if (VAR12->VAR50)
    {
        VAR12->VAR50--;
        *VAR4 = 0;
        return VAR9;
    }
    *VAR4 = 1;
    *(VAR51 *)VAR3 = VAR12->VAR28;
    return VAR9;