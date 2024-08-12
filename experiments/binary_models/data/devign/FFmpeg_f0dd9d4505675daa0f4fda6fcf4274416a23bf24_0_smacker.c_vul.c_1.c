static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    GetBitContext VAR8;
    HuffContext VAR9[4];
    VLC VAR10[4];
    VAR11 *VAR12 = VAR3;
    int VAR13;
    int VAR14, VAR15;
    int VAR16;
    int VAR17, VAR18;
    int VAR19[2] = {0, 0};
    VAR16 = FUN2(VAR6);
    FUN3(&VAR8, VAR6 + 4, (VAR7 - 4) * 8);
    if (!FUN4(&VAR8))
    {
        FUN5(VAR2, VAR20, "");
        *VAR4 = 0;
        return 1;
    }
    VAR18 = FUN4(&VAR8);
    VAR17 = FUN4(&VAR8);
    if ((VAR16 << !VAR17) > *VAR4)
    {
        FUN5(VAR2, VAR21, "");
        return -1;
    }
    memset(VAR10, 0, sizeof(VAR22) * 4);
    memset(VAR9, 0, sizeof(VAR23) * 4);
    for (VAR14 = 0; VAR14 < (1 << (VAR17 + VAR18)); VAR14++)
    {
        VAR9[VAR14].VAR24 = 256;
        VAR9[VAR14].VAR25 = 0;
        VAR9[VAR14].VAR26 = 0;
        VAR9[VAR14].VAR17 = FUN6(256 * 4);
        VAR9[VAR14].VAR27 = FUN6(256 * sizeof(int));
        VAR9[VAR14].VAR28 = FUN6(256 * sizeof(int));
        FUN7(&VAR8);
        FUN8(&VAR8, &VAR9[VAR14], 0, 0);
        FUN7(&VAR8);
        if (VAR9[VAR14].VAR26 > 1)
        {
            VAR15 = FUN9(&VAR10[VAR14], VAR29, VAR9[VAR14].VAR24, VAR9[VAR14].VAR27, sizeof(int), sizeof(int), VAR9[VAR14].VAR17, sizeof(VAR30), sizeof(VAR30), VAR31);
            if (VAR15 < 0)
            {
                FUN5(VAR2, VAR21, "");
                return -1;
            }
        }
    }
    if (VAR17)
    {
        for (VAR14 = VAR18; VAR14 >= 0; VAR14--)
            VAR19[VAR14] = FUN10(FUN11(&VAR8, 16));
        for (VAR14 = 0; VAR14 < VAR18; VAR14++)
            *VAR12++ = VAR19[VAR14];
        for (VAR14 = 0; VAR14 < VAR16 / 2; VAR14++)
        {
            if (VAR14 & VAR18)
            {
                if (VAR10[2].VAR32)
                    VAR15 = FUN12(&VAR8, VAR10[2].VAR32, VAR29, 3);
                else
                    VAR15 = 0;
                VAR13 = VAR9[2].VAR28[VAR15];
                if (VAR10[3].VAR32)
                    VAR15 = FUN12(&VAR8, VAR10[3].VAR32, VAR29, 3);
                else
                    VAR15 = 0;
                VAR13 |= VAR9[3].VAR28[VAR15] << 8;
                VAR19[1] += (VAR11)VAR13;
                *VAR12++ = VAR19[1];
            }
            else
            {
                if (VAR10[0].VAR32)
                    VAR15 = FUN12(&VAR8, VAR10[0].VAR32, VAR29, 3);
                else
                    VAR15 = 0;
                VAR13 = VAR9[0].VAR28[VAR15];
                if (VAR10[1].VAR32)
                    VAR15 = FUN12(&VAR8, VAR10[1].VAR32, VAR29, 3);
                else
                    VAR15 = 0;
                VAR13 |= VAR9[1].VAR28[VAR15] << 8;
                VAR19[0] += VAR13;
                *VAR12++ = VAR19[0];
            }
        }
    }
    else
    {
        for (VAR14 = VAR18; VAR14 >= 0; VAR14--)
            VAR19[VAR14] = FUN11(&VAR8, 8);
        for (VAR14 = 0; VAR14 < VAR18; VAR14++)
            *VAR12++ = (VAR19[VAR14] - 0x80) << 8;
        for (VAR14 = 0; VAR14 < VAR16; VAR14++)
        {
            if (VAR14 & VAR18)
            {
                if (VAR10[1].VAR32)
                    VAR15 = FUN12(&VAR8, VAR10[1].VAR32, VAR29, 3);
                else
                    VAR15 = 0;
                VAR19[1] += (VAR33)VAR9[1].VAR28[VAR15];
                *VAR12++ = (VAR19[1] - 0x80) << 8;
            }
            else
            {
                if (VAR10[0].VAR32)
                    VAR15 = FUN12(&VAR8, VAR10[0].VAR32, VAR29, 3);
                else
                    VAR15 = 0;
                VAR19[0] += (VAR33)VAR9[0].VAR28[VAR15];
                *VAR12++ = (VAR19[0] - 0x80) << 8;
            }
        }
        VAR16 *= 2;
    }
    for (VAR14 = 0; VAR14 < 4; VAR14++)
    {
        if (VAR10[VAR14].VAR32)
            FUN13(&VAR10[VAR14]);
        if (VAR9[VAR14].VAR17)
            FUN14(VAR9[VAR14].VAR17);
        if (VAR9[VAR14].VAR27)
            FUN14(VAR9[VAR14].VAR27);
        if (VAR9[VAR14].VAR28)
            FUN14(VAR9[VAR14].VAR28);
    }
    *VAR4 = VAR16;
    return VAR7;
}