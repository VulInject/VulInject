static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR7 *VAR14, *VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    VAR22 *VAR23 = VAR3;
    VAR24 *VAR25;
    FUN2(&VAR12->VAR26, VAR8, VAR9 * 8);
    VAR12->VAR27 = FUN3(&VAR12->VAR26, 22);
    if ((VAR12->VAR27 & ~0x70) || !(VAR12->VAR27 & 0x60))
        return -1;
    if (VAR12->VAR27 != 0x20)
    {
        VAR28 *VAR29 = (VAR28 *)(VAR8 + 4);
        for (VAR17 = 0; VAR17 < 4; VAR17++)
        {
            VAR29[VAR17] = ((VAR29[VAR17] << 16) | (VAR29[VAR17] >> 16)) ^ VAR29[7 - VAR17];
        }
    }
    VAR16 = FUN4(&VAR12->VAR26, VAR12);
    if (VAR16 != 0)
    {
        FUN5(VAR12->VAR2, "", VAR16);
        return VAR16;
    }
    FUN6(VAR2, VAR12->VAR20, VAR12->VAR21);
    if (VAR12->VAR30 == VAR31 && VAR12->VAR32 == NULL)
        return VAR9;
    if ((VAR2->VAR33 >= VAR34 && VAR12->VAR30 == VAR31) || (VAR2->VAR33 >= VAR35 && VAR12->VAR30 != VAR36) || VAR2->VAR33 >= VAR37)
        return VAR9;
    if (FUN7(VAR12, VAR2) < 0)
        return -1;
    VAR25 = FUN8((FUN9(VAR12->VAR20, 16) / 8 + 3) * sizeof(*VAR25));
    if (!VAR25)
        return -1;
    for (VAR17 = 0; VAR17 < 3; VAR17++)
    {
        int VAR38;
        if (VAR17 == 0)
        {
            VAR20 = FUN9(VAR12->VAR20, 16);
            VAR21 = FUN9(VAR12->VAR21, 16);
            VAR38 = VAR12->VAR38;
        }
        else
        {
            if (VAR12->VAR39 & VAR40)
                break;
            VAR20 = FUN9(VAR12->VAR20 / 4, 16);
            VAR21 = FUN9(VAR12->VAR21 / 4, 16);
            VAR38 = VAR12->VAR41;
        }
        VAR14 = VAR12->VAR42.VAR43.VAR3[VAR17];
        if (VAR12->VAR30 == VAR31)
        {
            VAR15 = VAR12->VAR44.VAR43.VAR3[VAR17];
        }
        else
        {
            VAR15 = VAR12->VAR45.VAR43.VAR3[VAR17];
        }
        if (VAR12->VAR30 == VAR36)
        {
            for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
            {
                for (VAR18 = 0; VAR18 < VAR20; VAR18 += 16)
                {
                    VAR16 = FUN10(&VAR12->VAR26, &VAR14[VAR18], VAR38);
                    if (VAR16 != 0)
                    {
                        FUN11(VAR12->VAR2, VAR46, "", VAR16);
                        goto VAR47;
                    }
                }
                VAR14 += 16 * VAR38;
            }
        }
        else
        {
            memset(VAR25, 0, ((VAR20 / 8) + 3) * sizeof(VAR24));
            for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
            {
                for (VAR18 = 0; VAR18 < VAR20; VAR18 += 16)
                {
                    VAR16 = FUN12(VAR12, &VAR12->VAR26, &VAR14[VAR18], VAR15, VAR38, VAR25, VAR18, VAR19);
                    if (VAR16 != 0)
                    {
                        FUN5(VAR12->VAR2, "", VAR16);
                        goto VAR47;
                    }
                }
                VAR25[0].VAR18 = VAR25[0].VAR19 = 0;
                VAR14 += 16 * VAR38;
            }
        }
    }
    *VAR23 = VAR12->VAR42.VAR43;
    FUN13(VAR12);
    *VAR4 = sizeof(VAR22);
    VAR16 = VAR9;
VAR47:
    FUN14(VAR25);
    return VAR16;