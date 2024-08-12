static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    GetBitContext VAR14;
    HuffContext VAR15[4] = {{0}};
    VLC VAR16[4] = {{0}};
    VAR17 *VAR18;
    VAR10 *VAR19;
    int VAR20;
    int VAR21, VAR22, VAR23;
    int VAR24;
    int VAR25, VAR26;
    int VAR27[2] = {0, 0};
    if (VAR12 <= 4)
    {
        FUN2(VAR2, VAR28, "");
        return FUN3(VAR29);
    }
    VAR24 = FUN4(VAR11);
    if (VAR24 > (1U << 24))
    {
        FUN2(VAR2, VAR28, "");
        return VAR30;
    }
    FUN5(&VAR14, VAR11 + 4, (VAR12 - 4) * 8);
    if (!FUN6(&VAR14))
    {
        FUN2(VAR2, VAR31, "");
        *VAR4 = 0;
        return 1;
    }
    VAR26 = FUN6(&VAR14);
    VAR25 = FUN6(&VAR14);
    if (VAR26 ^ (VAR2->VAR32 != 1))
    {
        FUN2(VAR2, VAR28, "");
        return FUN3(VAR29);
    }
    if (VAR25 && VAR2->VAR33 == VAR34)
    {
        FUN2(VAR2, VAR28, "");
        return FUN3(VAR29);
    }
    VAR8->VAR35.VAR36 = VAR24 / (VAR2->VAR32 * (VAR25 + 1));
    if ((VAR23 = VAR2->FUN7(VAR2, &VAR8->VAR35)) < 0)
    {
        FUN2(VAR2, VAR28, "");
        return VAR23;
    }
    VAR18 = (VAR17 *)VAR8->VAR35.VAR3[0];
    VAR19 = VAR8->VAR35.VAR3[0];
    for (VAR21 = 0; VAR21 < (1 << (VAR25 + VAR26)); VAR21++)
    {
        VAR15[VAR21].VAR37 = 256;
        VAR15[VAR21].VAR38 = 0;
        VAR15[VAR21].VAR39 = 0;
        VAR15[VAR21].VAR25 = FUN8(256 * 4);
        VAR15[VAR21].VAR40 = FUN8(256 * sizeof(int));
        VAR15[VAR21].VAR41 = FUN8(256 * sizeof(int));
        FUN9(&VAR14);
        VAR22 = FUN10(&VAR14, &VAR15[VAR21], 0, 0);
        if (VAR22 < 0)
            return VAR22;
        FUN9(&VAR14);
        if (VAR15[VAR21].VAR39 > 1)
        {
            VAR22 = FUN11(&VAR16[VAR21], VAR42, VAR15[VAR21].VAR37, VAR15[VAR21].VAR40, sizeof(int), sizeof(int), VAR15[VAR21].VAR25, sizeof(VAR43), sizeof(VAR43), VAR44);
            if (VAR22 < 0)
            {
                FUN2(VAR2, VAR28, "");
                return VAR30;
            }
        }
    }
    if (VAR25)
    {
        for (VAR21 = VAR26; VAR21 >= 0; VAR21--)
            VAR27[VAR21] = FUN12(FUN13(FUN14(&VAR14, 16)), 16);
        for (VAR21 = 0; VAR21 <= VAR26; VAR21++)
            *VAR18++ = VAR27[VAR21];
        for (; VAR21 < VAR24 / 2; VAR21++)
        {
            if (FUN15(&VAR14) < 0)
                return VAR30;
            if (VAR21 & VAR26)
            {
                if (VAR16[2].VAR45)
                    VAR22 = FUN16(&VAR14, VAR16[2].VAR45, VAR42, 3);
                else
                    VAR22 = 0;
                if (VAR22 < 0)
                {
                    FUN2(VAR2, VAR28, "");
                    return VAR30;
                }
                VAR20 = VAR15[2].VAR41[VAR22];
                if (VAR16[3].VAR45)
                    VAR22 = FUN16(&VAR14, VAR16[3].VAR45, VAR42, 3);
                else
                    VAR22 = 0;
                if (VAR22 < 0)
                {
                    FUN2(VAR2, VAR28, "");
                    return VAR30;
                }
                VAR20 |= VAR15[3].VAR41[VAR22] << 8;
                VAR27[1] += FUN12(VAR20, 16);
                *VAR18++ = FUN17(VAR27[1]);
            }
            else
            {
                if (VAR16[0].VAR45)
                    VAR22 = FUN16(&VAR14, VAR16[0].VAR45, VAR42, 3);
                else
                    VAR22 = 0;
                if (VAR22 < 0)
                {
                    FUN2(VAR2, VAR28, "");
                    return VAR30;
                }
                VAR20 = VAR15[0].VAR41[VAR22];
                if (VAR16[1].VAR45)
                    VAR22 = FUN16(&VAR14, VAR16[1].VAR45, VAR42, 3);
                else
                    VAR22 = 0;
                if (VAR22 < 0)
                {
                    FUN2(VAR2, VAR28, "");
                    return VAR30;
                }
                VAR20 |= VAR15[1].VAR41[VAR22] << 8;
                VAR27[0] += FUN12(VAR20, 16);
                *VAR18++ = FUN17(VAR27[0]);
            }
        }
    }
    else
    {
        for (VAR21 = VAR26; VAR21 >= 0; VAR21--)
            VAR27[VAR21] = FUN14(&VAR14, 8);
        for (VAR21 = 0; VAR21 <= VAR26; VAR21++)
            *VAR19++ = VAR27[VAR21];
        for (; VAR21 < VAR24; VAR21++)
        {
            if (FUN15(&VAR14) < 0)
                return VAR30;
            if (VAR21 & VAR26)
            {
                if (VAR16[1].VAR45)
                    VAR22 = FUN16(&VAR14, VAR16[1].VAR45, VAR42, 3);
                else
                    VAR22 = 0;
                if (VAR22 < 0)
                {
                    FUN2(VAR2, VAR28, "");
                    return VAR30;
                }
                VAR27[1] += FUN12(VAR15[1].VAR41[VAR22], 8);
                *VAR19++ = FUN18(VAR27[1]);
            }
            else
            {
                if (VAR16[0].VAR45)
                    VAR22 = FUN16(&VAR14, VAR16[0].VAR45, VAR42, 3);
                else
                    VAR22 = 0;
                if (VAR22 < 0)
                {
                    FUN2(VAR2, VAR28, "");
                    return VAR30;
                }
                VAR27[0] += FUN12(VAR15[0].VAR41[VAR22], 8);
                *VAR19++ = FUN18(VAR27[0]);
            }
        }
    }
    for (VAR21 = 0; VAR21 < 4; VAR21++)
    {
        if (VAR16[VAR21].VAR45)
            FUN19(&VAR16[VAR21]);
        FUN20(VAR15[VAR21].VAR25);
        FUN20(VAR15[VAR21].VAR40);
        FUN20(VAR15[VAR21].VAR41);
    }
    *VAR4 = 1;
    *(VAR46 *)VAR3 = VAR8->VAR35;
    return VAR12;
}