static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10;
    VAR11 *VAR12 = &VAR13;
    const VAR14 *VAR15;
    const VAR16 *VAR17;
    int VAR18;
    if (VAR2->VAR19)
        VAR15 = VAR20;
    else
        VAR15 = VAR21;
    VAR18 = 1;
    {
        int VAR22, VAR23;
        UINT32 VAR24;
        VAR14 *VAR25;
        VAR7 = 0;
        if (VAR5 < 4)
            VAR17 = VAR2->VAR26;
        else
            VAR17 = VAR2->VAR27;
        FUN2(&VAR2->VAR28);
        FUN3(&VAR2->VAR28, VAR23, 2);
        if (VAR23 & 2)
        {
            VAR9 = 0;
            VAR6 = 1 - ((VAR23 & 1) << 1);
            FUN4(2);
            FUN5(&VAR2->VAR28);
            goto VAR29;
        }
        FUN5(&VAR2->VAR28);
    }
    for (;;)
    {
        VAR10 = FUN6(&VAR2->VAR28, &VAR12->VAR30);
        if (VAR10 < 0)
            return -1;
        if (VAR10 == 112)
        {
            break;
        }
        else if (VAR10 == 111)
        {
            VAR9 = FUN7(&VAR2->VAR28, 6);
            VAR6 = FUN7(&VAR2->VAR28, 12);
            VAR6 = (VAR6 << 20) >> 20;
        }
        else
        {
            VAR9 = VAR12->VAR31[VAR10];
            VAR6 = VAR12->VAR32[VAR10];
            if (FUN8(&VAR2->VAR28))
                VAR6 = -VAR6;
        }
        VAR7 += VAR9;
        if (VAR7 >= 64)
            return -1;
    VAR29:
        VAR8 = VAR15[VAR7];
        FUN9("", VAR5, VAR9, VAR6);
        if (VAR6 > 0)
        {
            VAR6 = ((VAR6 * 2 + 1) * VAR2->VAR33 * VAR17[VAR8]) >> 5;
        }
        else
        {
            VAR6 = ((-VAR6 * 2 + 1) * VAR2->VAR33 * VAR17[VAR8]) >> 5;
            VAR6 = -VAR6;
        }
        VAR18 ^= VAR6;
        VAR4[VAR8] = VAR6;
        VAR7++;
    }
    VAR4[63] ^= (VAR18 & 1);
    VAR2->VAR34[VAR5] = VAR7;
    return 0;
}