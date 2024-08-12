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
        return VAR28;
    if (VAR12->VAR27 != 0x20)
    {
        VAR29 *VAR30 = (VAR29 *)(VAR8 + 4);
        if (VAR9 < 36)
            return VAR28;
        for (VAR17 = 0; VAR17 < 4; VAR17++)
            VAR30[VAR17] = ((VAR30[VAR17] << 16) | (VAR30[VAR17] >> 16)) ^ VAR30[7 - VAR17];
    }
    VAR16 = FUN4(&VAR12->VAR26, VAR12);
    if (VAR16)
    {
        FUN5(VAR12->VAR2, "", VAR16);
        return VAR16;
    }
    FUN6(VAR2, VAR12->VAR20, VAR12->VAR21);
    if (VAR12->VAR31 == VAR32 && VAR12->VAR33 == NULL)
        return VAR9;
    if ((VAR2->VAR34 >= VAR35 && VAR12->VAR31 == VAR32) || (VAR2->VAR34 >= VAR36 && VAR12->VAR31 != VAR37) || VAR2->VAR34 >= VAR38)
        return VAR9;
    if ((VAR16 = FUN7(VAR12, VAR2)) < 0)
        return VAR16;
    VAR25 = FUN8((FUN9(VAR12->VAR20, 16) / 8 + 3) * sizeof(*VAR25));
    if (!VAR25)
        return FUN10(VAR39);
    for (VAR17 = 0; VAR17 < 3; VAR17++)
    {
        int VAR40;
        if (VAR17 == 0)
        {
            VAR20 = FUN9(VAR12->VAR20, 16);
            VAR21 = FUN9(VAR12->VAR21, 16);
            VAR40 = VAR12->VAR40;
        }
        else
        {
            if (VAR12->VAR41 & VAR42)
                break;
            VAR20 = FUN9(VAR12->VAR20 / 4, 16);
            VAR21 = FUN9(VAR12->VAR21 / 4, 16);
            VAR40 = VAR12->VAR43;
        }
        VAR14 = VAR12->VAR44.VAR45.VAR3[VAR17];
        if (VAR12->VAR31 == VAR32)
            VAR15 = VAR12->VAR46.VAR45.VAR3[VAR17];
        else
            VAR15 = VAR12->VAR47.VAR45.VAR3[VAR17];
        if (VAR12->VAR31 == VAR37)
        {
            for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
            {
                for (VAR18 = 0; VAR18 < VAR20; VAR18 += 16)
                {
                    VAR16 = FUN11(&VAR12->VAR26, &VAR14[VAR18], VAR40);
                    if (VAR16)
                    {
                        FUN12(VAR12->VAR2, VAR48, "", VAR16);
                        goto VAR49;
                    }
                }
                VAR14 += 16 * VAR40;
            }
        }
        else
        {
            memset(VAR25, 0, ((VAR20 / 8) + 3) * sizeof(VAR24));
            for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
            {
                for (VAR18 = 0; VAR18 < VAR20; VAR18 += 16)
                {
                    VAR16 = FUN13(VAR12, &VAR12->VAR26, &VAR14[VAR18], VAR15, VAR40, VAR25, VAR18, VAR19);
                    if (VAR16)
                    {
                        FUN5(VAR12->VAR2, "", VAR16);
                        goto VAR49;
                    }
                }
                VAR25[0].VAR18 = VAR25[0].VAR19 = 0;
                VAR14 += 16 * VAR40;
            }
        }
    }
    *VAR23 = VAR12->VAR44.VAR45;
    FUN14(VAR12);
    *VAR4 = sizeof(VAR22);
    VAR16 = VAR9;
VAR49:
    FUN15(VAR25);
    return VAR16;