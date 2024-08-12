static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR3 *VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13 = !!VAR6->VAR14;
    if (!VAR6->VAR14)
    {
        VAR11 = FUN2(VAR2, &VAR6->VAR14);
        if (VAR11 < 0)
            return VAR11;
        VAR8 = VAR6->VAR14;
        VAR12 = VAR8->VAR15[VAR8->VAR16 - 1];
        if ((VAR12 & 0xe0) == 0xc0)
        {
            int VAR17 = 1 + ((VAR12 >> 3) & 0x3);
            int VAR18 = 1 + (VAR12 & 0x7);
            int VAR19 = 2 + VAR18 * VAR17;
            if (VAR8->VAR16 >= VAR19 && VAR8->VAR15[VAR8->VAR16 - VAR19] == VAR12)
            {
                GetByteContext VAR20;
                int VAR21 = 0;
                FUN3(&VAR20, VAR8->VAR15 + VAR8->VAR16 + 1 - VAR19, VAR18 * VAR17);
                for (VAR9 = 0; VAR9 < VAR18; VAR9++)
                {
                    int VAR22 = 0;
                    for (VAR10 = 0; VAR10 < VAR17; VAR10++)
                        VAR22 |= FUN4(&VAR20) << (VAR10 * 8);
                    VAR21 += VAR22;
                    if (VAR21 > VAR8->VAR16 - VAR19)
                    {
                        FUN5(VAR2, VAR23, "", VAR22);
                        VAR11 = FUN6(VAR24);
                        goto VAR25;
                    }
                    VAR6->VAR26[VAR9] = VAR22;
                }
                VAR6->VAR18 = VAR18;
                VAR6->VAR27 = 0;
                VAR6->VAR28 = 0;
                VAR13 = 1;
            }
        }
    }
    if (VAR13)
    {
        GetBitContext VAR29;
        int VAR30, VAR31 = 0;
        VAR11 = FUN7(VAR4, VAR6->VAR14);
        if (VAR11 < 0)
            goto VAR25;
        VAR4->VAR15 += VAR6->VAR28;
        VAR4->VAR16 = VAR6->VAR26[VAR6->VAR27];
        VAR6->VAR28 += VAR4->VAR16;
        VAR6->VAR27++;
        if (VAR6->VAR27 >= VAR6->VAR18)
            FUN8(&VAR6->VAR14);
        VAR11 = FUN9(&VAR29, VAR4->VAR15, VAR4->VAR16);
        if (VAR11 < 0)
            goto VAR25;
        FUN10(&VAR29, 2);
        VAR30 = FUN11(&VAR29);
        VAR30 |= FUN11(&VAR29) << 1;
        if (VAR30 == 3)
            FUN11(&VAR29);
        if (!FUN11(&VAR29))
        {
            FUN11(&VAR29);
            VAR31 = !FUN11(&VAR29);
        }
        if (VAR31)
            VAR4->VAR32 = VAR33;
    }
    else
    {
        FUN12(VAR4, VAR6->VAR14);
        FUN8(&VAR6->VAR14);
    }
    return 0;
VAR25:
    FUN8(&VAR6->VAR14);
    return VAR11;
}