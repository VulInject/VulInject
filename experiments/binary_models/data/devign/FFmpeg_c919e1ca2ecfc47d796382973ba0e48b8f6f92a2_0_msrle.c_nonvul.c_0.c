static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14 = FUN2(VAR2->VAR15 * VAR2->VAR16, 32) / 8;
    int VAR17;
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR9;
    if ((VAR17 = FUN3(VAR2, VAR12->VAR18)) < 0)
        return VAR17;
    if (VAR2->VAR16 > 1 && VAR2->VAR16 <= 8)
    {
        const VAR7 *VAR19 = FUN4(VAR6, VAR20, NULL);
        if (VAR19)
        {
            VAR12->VAR18->VAR21 = 1;
            memcpy(VAR12->VAR19, VAR19, VAR22);
        }
        memcpy(VAR12->VAR18->VAR3[1], VAR12->VAR19, VAR22);
    }
    if (VAR2->VAR23 * VAR14 == VAR6->VAR10)
    {
        int VAR24 = FUN5(VAR2->VAR25, VAR2->VAR15, 0);
        VAR7 *VAR26 = VAR12->VAR18->VAR3[0];
        VAR7 *VAR8 = VAR6->VAR3 + (VAR2->VAR23 - 1) * VAR14;
        int VAR27, VAR28;
        for (VAR27 = 0; VAR27 < VAR2->VAR23; VAR27++)
        {
            if (VAR2->VAR16 == 4)
            {
                for (VAR28 = 0; VAR28 < VAR2->VAR15 - 1; VAR28 += 2)
                {
                    VAR26[VAR28 + 0] = VAR8[VAR28 >> 1] >> 4;
                    VAR26[VAR28 + 1] = VAR8[VAR28 >> 1] & 0xF;
                }
                if (VAR2->VAR15 & 1)
                    VAR26[VAR28 + 0] = VAR8[VAR28 >> 1] >> 4;
            }
            else
            {
                memcpy(VAR26, VAR8, VAR24);
            }
            VAR8 -= VAR14;
            VAR26 += VAR12->VAR18->VAR24[0];
        }
    }
    else
    {
        FUN6(&VAR12->VAR29, VAR8, VAR9);
        FUN7(VAR2, (VAR30 *)VAR12->VAR18, VAR2->VAR16, &VAR12->VAR29);
    }
    if ((VAR17 = FUN8(VAR3, VAR12->VAR18)) < 0)
        return VAR17;
    *VAR4 = 1;
    return VAR9;
}