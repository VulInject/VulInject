static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    VAR7 *VAR15;
    int VAR16, VAR17, VAR18;
    int VAR19 = -1;
    VAR20 *VAR21 = VAR12->VAR21;
    int VAR22;
    int VAR23, VAR24;
    memset(VAR21, 0, sizeof(VAR21));
    if (VAR9 <= 4)
    {
        FUN2(VAR2, VAR25, "", VAR9);
    }
    VAR15 = FUN3(((VAR9 - 1) & ~3) + VAR26);
    VAR12->VAR27.FUN4((VAR28 *)VAR15, (const VAR28 *)(VAR8 + 4), (VAR9 - 4) >> 2);
    FUN5(&VAR14, VAR15, (VAR9 - 4) * 8);
    FUN6(&VAR14, VAR8[0]);
    for (VAR16 = 0; VAR16 <= VAR12->VAR29; VAR16++)
    {
        for (VAR17 = 0; VAR17 < 2; VAR17++)
        {
            if (VAR16)
                VAR18 = FUN7(&VAR14, VAR30.VAR31, VAR32, 1) - 5;
            if (!VAR16 || (VAR18 == 4))
                VAR21[VAR16].VAR33[VAR17] = FUN8(&VAR14, 4);
            else
                VAR21[VAR16].VAR33[VAR17] = VAR21[VAR16 - 1].VAR33[VAR17] + VAR18;
        }
        if (VAR21[VAR16].VAR33[0] || VAR21[VAR16].VAR33[1])
        {
            VAR19 = VAR16;
            if (VAR12->VAR34)
                VAR21[VAR16].VAR35 = FUN9(&VAR14);
        }
    }
    for (VAR16 = 0; VAR16 <= VAR19; VAR16++)
        for (VAR17 = 0; VAR17 < 2; VAR17++)
            if (VAR21[VAR16].VAR33[VAR17])
                VAR21[VAR16].VAR36[VAR17] = FUN7(&VAR14, VAR37.VAR31, VAR38, 1);
    for (VAR16 = 0; VAR16 <= VAR19; VAR16++)
    {
        for (VAR17 = 0; VAR17 < 2; VAR17++)
        {
            if (VAR21[VAR16].VAR33[VAR17])
            {
                VAR21[VAR16].VAR39[VAR17][2] = VAR12->VAR40[VAR17][VAR16];
                VAR21[VAR16].VAR39[VAR17][0] = FUN10(&VAR14, VAR21[VAR16].VAR39[VAR17][2]);
                switch (VAR21[VAR16].VAR36[VAR17])
                {
                case 0:
                    VAR21[VAR16].VAR39[VAR17][1] = FUN10(&VAR14, VAR21[VAR16].VAR39[VAR17][0]);
                    VAR21[VAR16].VAR39[VAR17][2] = FUN10(&VAR14, VAR21[VAR16].VAR39[VAR17][1]);
                    break;
                case 1:
                    VAR21[VAR16].VAR39[VAR17][1] = FUN10(&VAR14, VAR21[VAR16].VAR39[VAR17][0]);
                    VAR21[VAR16].VAR39[VAR17][2] = VAR21[VAR16].VAR39[VAR17][1];
                    break;
                case 2:
                    VAR21[VAR16].VAR39[VAR17][1] = VAR21[VAR16].VAR39[VAR17][0];
                    VAR21[VAR16].VAR39[VAR17][2] = FUN10(&VAR14, VAR21[VAR16].VAR39[VAR17][1]);
                    break;
                case 3:
                    VAR21[VAR16].VAR39[VAR17][2] = VAR21[VAR16].VAR39[VAR17][1] = VAR21[VAR16].VAR39[VAR17][0];
                    break;
                }
                VAR12->VAR40[VAR17][VAR16] = VAR21[VAR16].VAR39[VAR17][2];
            }
        }
    }
    memset(VAR12->VAR41, 0, sizeof(VAR12->VAR41));
    VAR22 = 0;
    for (VAR16 = 0; VAR16 < VAR42; VAR16++, VAR22 += VAR43)
        for (VAR17 = 0; VAR17 < 2; VAR17++)
            FUN11(VAR12, &VAR14, VAR21[VAR16].VAR33[VAR17], VAR12->VAR41[VAR17] + VAR22);
    FUN12(VAR12, VAR19, VAR3);
    FUN13(VAR15);
    VAR23 = FUN14(&VAR14);
    VAR24 = (VAR9 - 4) * 8;
    if (!VAR8[1] && ((VAR24 < VAR23) || (VAR23 + 32 <= VAR24)))
    {
        FUN2(NULL, 0, "", VAR23, VAR24);
        return -1;
    }
    if (VAR12->VAR44)
    {
        VAR12->VAR44--;
        *VAR4 = 0;
        return VAR9;
    }
    *VAR4 = (VAR8[1] ? VAR12->VAR45 : VAR46) * 4;
    return VAR9;
}