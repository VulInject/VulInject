static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR12->VAR15;
    VAR7 *VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR23 *VAR24;
    if (VAR15->VAR3[0])
        VAR2->FUN2(VAR2, VAR15);
    FUN3(&VAR12->VAR25, VAR8, VAR9 * 8);
    VAR12->VAR26 = FUN4(&VAR12->VAR25, 22);
    if ((VAR12->VAR26 & ~0x70) || !(VAR12->VAR26 & 0x60))
        return VAR27;
    if (VAR12->VAR26 != 0x20)
    {
        VAR28 *VAR29 = (VAR28 *)(VAR8 + 4);
        if (VAR9 < 36)
            return VAR27;
        for (VAR18 = 0; VAR18 < 4; VAR18++)
            VAR29[VAR18] = ((VAR29[VAR18] << 16) | (VAR29[VAR18] >> 16)) ^ VAR29[7 - VAR18];
    }
    VAR17 = FUN5(VAR2, VAR15);
    if (VAR17 != 0)
    {
        FUN6(VAR2, "", VAR17);
        return VAR17;
    }
    FUN7(VAR2, VAR12->VAR21, VAR12->VAR22);
    if ((VAR2->VAR30 >= VAR31 && VAR12->VAR32) || (VAR2->VAR30 >= VAR33 && VAR15->VAR34 != VAR35) || VAR2->VAR30 >= VAR36)
        return VAR9;
    VAR17 = FUN8(VAR2, VAR15);
    if (VAR17 < 0)
        return VAR17;
    VAR24 = FUN9((FUN10(VAR12->VAR21, 16) / 8 + 3) * sizeof(*VAR24));
    if (!VAR24)
        return FUN11(VAR37);
    for (VAR18 = 0; VAR18 < 3; VAR18++)
    {
        int VAR38 = VAR15->VAR38[VAR18];
        if (VAR18 == 0)
        {
            VAR21 = FUN10(VAR12->VAR21, 16);
            VAR22 = FUN10(VAR12->VAR22, 16);
        }
        else
        {
            if (VAR2->VAR39 & VAR40)
                break;
            VAR21 = FUN10(VAR12->VAR21 / 4, 16);
            VAR22 = FUN10(VAR12->VAR22 / 4, 16);
        }
        VAR16 = VAR15->VAR3[VAR18];
        if (VAR15->VAR34 == VAR35)
        {
            for (VAR20 = 0; VAR20 < VAR22; VAR20 += 16)
            {
                for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
                {
                    VAR17 = FUN12(&VAR12->VAR25, &VAR16[VAR19], VAR38);
                    if (VAR17)
                    {
                        FUN13(VAR2, VAR41, "", VAR17);
                        goto VAR42;
                    }
                }
                VAR16 += 16 * VAR38;
            }
        }
        else
        {
            VAR7 *VAR43 = VAR12->VAR44->VAR3[VAR18];
            if (!VAR43 || VAR12->VAR44->VAR21 != VAR12->VAR15->VAR21 || VAR12->VAR44->VAR22 != VAR12->VAR15->VAR22)
            {
                FUN13(VAR2, VAR41, "");
                VAR17 = VAR27;
                goto VAR42;
            }
            memset(VAR24, 0, ((VAR21 / 8) + 3) * sizeof(VAR23));
            for (VAR20 = 0; VAR20 < VAR22; VAR20 += 16)
            {
                for (VAR19 = 0; VAR19 < VAR21; VAR19 += 16)
                {
                    VAR17 = FUN14(VAR2, &VAR12->VAR45, &VAR12->VAR25, &VAR16[VAR19], VAR43, VAR38, VAR24, VAR19, VAR20);
                    if (VAR17)
                    {
                        FUN6(VAR2, "", VAR17);
                        goto VAR42;
                    }
                }
                VAR24[0].VAR19 = VAR24[0].VAR20 = 0;
                VAR16 += 16 * VAR38;
            }
        }
    }
    *(VAR14 *)VAR3 = *VAR15;
    VAR15->VAR46 = NULL;
    if (!VAR12->VAR32)
        FUN15(VAR14 *, VAR12->VAR15, VAR12->VAR44);
    *VAR4 = 1;
    VAR17 = VAR9;
VAR42:
    FUN16(VAR24);
    return VAR17;
}