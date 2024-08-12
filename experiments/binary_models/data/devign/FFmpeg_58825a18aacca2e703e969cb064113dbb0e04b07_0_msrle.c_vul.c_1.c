static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14 = FUN2(VAR2->VAR15 * VAR2->VAR16, 32) / 8;
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR9;
    VAR12->VAR17.VAR18 = 3;
    VAR12->VAR17.VAR19 = VAR20 | VAR21 | VAR22;
    if (VAR2->FUN3(VAR2, &VAR12->VAR17))
    {
        FUN4(VAR2, VAR23, "");
        return -1;
    }
    if (VAR2->VAR16 > 1 && VAR2->VAR16 <= 8)
    {
        const VAR7 *VAR24 = FUN5(VAR6, VAR25, NULL);
        if (VAR24)
        {
            VAR12->VAR17.VAR26 = 1;
            memcpy(VAR12->VAR24, VAR24, VAR27);
        }
    }
    memcpy(VAR12->VAR17.VAR3[1], VAR12->VAR24, VAR27);
    if (VAR2->VAR28 * VAR14 == VAR6->VAR10)
    {
        int VAR29 = (VAR2->VAR15 * VAR2->VAR16 + 7) / 8;
        VAR7 *VAR30 = VAR12->VAR17.VAR3[0];
        VAR7 *VAR8 = VAR6->VAR3 + (VAR2->VAR28 - 1) * VAR14;
        int VAR31, VAR32;
        for (VAR31 = 0; VAR31 < VAR2->VAR28; VAR31++)
        {
            if (VAR2->VAR16 == 4)
            {
                for (VAR32 = 0; VAR32 < VAR2->VAR15 - 1; VAR32 += 2)
                {
                    VAR30[VAR32 + 0] = VAR8[VAR32 >> 1] >> 4;
                    VAR30[VAR32 + 1] = VAR8[VAR32 >> 1] & 0xF;
                }
                if (VAR2->VAR15 & 1)
                    VAR30[VAR32 + 0] = VAR8[VAR32 >> 1] >> 4;
            }
            else
            {
                memcpy(VAR30, VAR8, VAR29);
            }
            VAR8 -= VAR14;
            VAR30 += VAR12->VAR17.VAR29[0];
        }
    }
    else
    {
        FUN6(&VAR12->VAR33, VAR8, VAR9);
        FUN7(VAR2, (VAR34 *)&VAR12->VAR17, VAR2->VAR16, &VAR12->VAR33);
    }
    *VAR4 = sizeof(VAR35);
    *(VAR35 *)VAR3 = VAR12->VAR17;
    return VAR9;
}