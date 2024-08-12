static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    GetBitContext VAR13;
    HuffContext VAR14[4] = {{0}};
    VLC VAR15[4] = {{0}};
    VAR16 *VAR17;
    VAR9 *VAR18;
    int VAR19;
    int VAR20, VAR21, VAR22;
    int VAR23;
    int VAR24, VAR25;
    int VAR26[2] = {0, 0};
    if (VAR11 <= 4)
    {
        FUN2(VAR2, VAR27, "");
        return FUN3(VAR28);
    }
    VAR23 = FUN4(VAR10);
    FUN5(&VAR13, VAR10 + 4, (VAR11 - 4) * 8);
    if (!FUN6(&VAR13))
    {
        FUN2(VAR2, VAR29, "");
        *VAR4 = 0;
        return 1;
    }
    VAR25 = FUN6(&VAR13);
    VAR24 = FUN6(&VAR13);
    if (VAR25 ^ (VAR2->VAR30 != 1))
    {
        FUN2(VAR2, VAR27, "");
        return FUN3(VAR28);
    }
    if (VAR24 && VAR2->VAR31 == VAR32)
    {
        FUN2(VAR2, VAR27, "");
        return FUN3(VAR28);
    }
    VAR8->VAR33 = VAR23 / (VAR2->VAR30 * (VAR24 + 1));
    if ((VAR22 = FUN7(VAR2, VAR8, 0)) < 0)
    {
        FUN2(VAR2, VAR27, "");
        return VAR22;
    }
    VAR17 = (VAR16 *)VAR8->VAR3[0];
    VAR18 = VAR8->VAR3[0];
    for (VAR20 = 0; VAR20 < (1 << (VAR24 + VAR25)); VAR20++)
    {
        VAR14[VAR20].VAR34 = 256;
        VAR14[VAR20].VAR35 = 0;
        VAR14[VAR20].VAR36 = 0;
        VAR14[VAR20].VAR24 = FUN8(256 * 4);
        VAR14[VAR20].VAR37 = FUN8(256 * sizeof(int));
        VAR14[VAR20].VAR38 = FUN8(256 * sizeof(int));
        FUN9(&VAR13);
        FUN10(&VAR13, &VAR14[VAR20], 0, 0);
        FUN9(&VAR13);
        if (VAR14[VAR20].VAR36 > 1)
        {
            VAR21 = FUN11(&VAR15[VAR20], VAR39, VAR14[VAR20].VAR34, VAR14[VAR20].VAR37, sizeof(int), sizeof(int), VAR14[VAR20].VAR24, sizeof(VAR40), sizeof(VAR40), VAR41);
            if (VAR21 < 0)
            {
                FUN2(VAR2, VAR27, "");
                return -1;
            }
        }
    }
    if (VAR24)
    {
        for (VAR20 = VAR25; VAR20 >= 0; VAR20--)
            VAR26[VAR20] = FUN12(FUN13(FUN14(&VAR13, 16)), 16);
        for (VAR20 = 0; VAR20 <= VAR25; VAR20++)
            *VAR17++ = VAR26[VAR20];
        for (; VAR20 < VAR23 / 2; VAR20++)
        {
            if (VAR20 & VAR25)
            {
                if (VAR15[2].VAR42)
                    VAR21 = FUN15(&VAR13, VAR15[2].VAR42, VAR39, 3);
                else
                    VAR21 = 0;
                VAR19 = VAR14[2].VAR38[VAR21];
                if (VAR15[3].VAR42)
                    VAR21 = FUN15(&VAR13, VAR15[3].VAR42, VAR39, 3);
                else
                    VAR21 = 0;
                VAR19 |= VAR14[3].VAR38[VAR21] << 8;
                VAR26[1] += FUN12(VAR19, 16);
                *VAR17++ = VAR26[1];
            }
            else
            {
                if (VAR15[0].VAR42)
                    VAR21 = FUN15(&VAR13, VAR15[0].VAR42, VAR39, 3);
                else
                    VAR21 = 0;
                VAR19 = VAR14[0].VAR38[VAR21];
                if (VAR15[1].VAR42)
                    VAR21 = FUN15(&VAR13, VAR15[1].VAR42, VAR39, 3);
                else
                    VAR21 = 0;
                VAR19 |= VAR14[1].VAR38[VAR21] << 8;
                VAR26[0] += FUN12(VAR19, 16);
                *VAR17++ = VAR26[0];
            }
        }
    }
    else
    {
        for (VAR20 = VAR25; VAR20 >= 0; VAR20--)
            VAR26[VAR20] = FUN14(&VAR13, 8);
        for (VAR20 = 0; VAR20 <= VAR25; VAR20++)
            *VAR18++ = VAR26[VAR20];
        for (; VAR20 < VAR23; VAR20++)
        {
            if (VAR20 & VAR25)
            {
                if (VAR15[1].VAR42)
                    VAR21 = FUN15(&VAR13, VAR15[1].VAR42, VAR39, 3);
                else
                    VAR21 = 0;
                VAR26[1] += FUN12(VAR14[1].VAR38[VAR21], 8);
                *VAR18++ = VAR26[1];
            }
            else
            {
                if (VAR15[0].VAR42)
                    VAR21 = FUN15(&VAR13, VAR15[0].VAR42, VAR39, 3);
                else
                    VAR21 = 0;
                VAR26[0] += FUN12(VAR14[0].VAR38[VAR21], 8);
                *VAR18++ = VAR26[0];
            }
        }
    }
    for (VAR20 = 0; VAR20 < 4; VAR20++)
    {
        if (VAR15[VAR20].VAR42)
            FUN16(&VAR15[VAR20]);
        FUN17(VAR14[VAR20].VAR24);
        FUN17(VAR14[VAR20].VAR37);
        FUN17(VAR14[VAR20].VAR38);
    }
    *VAR4 = 1;
    return VAR11;
}