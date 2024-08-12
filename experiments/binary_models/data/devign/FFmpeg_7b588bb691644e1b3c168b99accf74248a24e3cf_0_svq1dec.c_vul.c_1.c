static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR7 *VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR23 *VAR24;
    FUN2(&VAR12->VAR25, VAR8, VAR9 * 8);
    VAR12->VAR26 = FUN3(&VAR12->VAR25, 22);
    if ((VAR12->VAR26 & ~0x70) || !(VAR12->VAR26 & 0x60))
        return VAR27;
    if (VAR12->VAR26 != 0x20)
    {
        VAR28 *VAR29 = (VAR28 *)(VAR8 + 4);
        for (VAR18 = 0; VAR18 < 4; VAR18++)
            VAR29[VAR18] = ((VAR29[VAR18] << 16) | (VAR29[VAR18] >> 16)) ^ VAR29[7 - VAR18];
    }
    VAR17 = FUN4(VAR2, VAR15);
    if (VAR17 != 0)
    {
        FUN5(VAR2, "", VAR17);
        return VAR17;
    }
    VAR17 = FUN6(VAR2, VAR12->VAR21, VAR12->VAR22);
    if (VAR17 < 0)
        return VAR17;
    if ((VAR2->VAR30 >= VAR31 && VAR12->VAR32) || (VAR2->VAR30 >= VAR33 && VAR15->VAR34 != VAR35) || VAR2->VAR30 >= VAR36)
        return VAR9;
    VAR17 = FUN7(VAR2, VAR15, VAR12->VAR32 ? 0 : VAR37);
    if (VAR17 < 0)
        return VAR17;
    VAR24 = FUN8((FUN9(VAR12->VAR21, 16) / 8 + 3) * sizeof(*VAR24));
    if (!VAR24)
        return FUN10(VAR38);
    for (VAR18 = 0; VAR18 < 3; VAR18++)
    {
        int VAR39 = VAR15->VAR39[VAR18];
        if (VAR18 == 0)
        {
            VAR21 = FUN9(VAR12->VAR21, 16);
            VAR22 = FUN9(VAR12->VAR22, 16);
        }
        else
        {
            if (VAR2->VAR40 & VAR41)
                break;
            VAR21 = FUN9(VAR12->VAR21 / 4, 16);
            VAR22 = FUN9(VAR12->VAR22 / 4, 16);
        }
        VAR16 = VAR15->VAR3[VAR18];
        if (VAR15->VAR34 == VAR35)
        {
            for (VAR20 = 0; VAR20 < VAR22; VAR20 += 16)
            {
                for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
                {
                    VAR17 = FUN11(&VAR12->VAR25, &VAR16[VAR19], VAR39);
                    if (VAR17 != 0)
                    {
                        FUN12(VAR2, VAR42, "", VAR17);
                        goto VAR43;
                    }
                }
                VAR16 += 16 * VAR39;
            }
        }
        else
        {
            VAR7 *VAR44 = VAR12->VAR45->VAR3[VAR18];
            if (!VAR44 || VAR12->VAR45->VAR21 != VAR12->VAR21 || VAR12->VAR45->VAR22 != VAR12->VAR22)
            {
                FUN12(VAR2, VAR46, "");
                VAR17 = VAR27;
                goto VAR43;
            }
            memset(VAR24, 0, ((VAR21 / 8) + 3) * sizeof(VAR23));
            for (VAR20 = 0; VAR20 < VAR22; VAR20 += 16)
            {
                for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
                {
                    VAR17 = FUN13(VAR2, &VAR12->VAR47, &VAR12->VAR25, &VAR16[VAR19], VAR44, VAR39, VAR24, VAR19, VAR20, VAR21, VAR22);
                    if (VAR17 != 0)
                    {
                        FUN5(VAR2, "", VAR17);
                        goto VAR43;
                    }
                }
                VAR24[0].VAR19 = VAR24[0].VAR20 = 0;
                VAR16 += 16 * VAR39;
            }
        }
    }
    if (!VAR12->VAR32)
    {
        FUN14(VAR12->VAR45);
        VAR17 = FUN15(VAR12->VAR45, VAR15);
        if (VAR17 < 0)
            goto VAR43;
    }
    *VAR4 = 1;
    VAR17 = VAR9;
VAR43:
    FUN16(VAR24);
    return VAR17;
}