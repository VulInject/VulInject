static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *const VAR12 = (VAR11 *)&VAR9->VAR13;
    VAR5 *VAR14;
    int VAR15;
    int VAR16;
    if (VAR12->VAR3[0])
        VAR2->FUN2(VAR2, VAR12);
    VAR12->VAR17 = 0;
    if (VAR2->FUN3(VAR2, VAR12) < 0)
    {
        FUN4(VAR2, VAR18, "");
        return -1;
    }
    VAR12->VAR19 = VAR20;
    VAR12->VAR21 = 1;
    VAR14 = VAR9->VAR13.VAR3[0];
    VAR6 += 0x68;
    VAR15 = FUN5(VAR6);
    VAR6 += 4;
    if (VAR15 < 0 || VAR15 > 256)
    {
        FUN4(VAR2, VAR18, "", VAR15, VAR15);
        return -1;
    }
    for (VAR16 = 0; VAR16 <= VAR15; VAR16++)
    {
        int VAR22;
        VAR22 = FUN6(VAR6);
        VAR6 += 2;
        VAR9->VAR23[VAR22 * 3 + 0] = *VAR6++;
        VAR6++;
        VAR9->VAR23[VAR22 * 3 + 1] = *VAR6++;
        VAR6++;
        VAR9->VAR23[VAR22 * 3 + 2] = *VAR6++;
        VAR6++;
    }
    if (VAR15)
        VAR9->VAR13.VAR24 = 1;
    VAR6 += 18;
    for (VAR16 = 0; VAR16 < VAR2->VAR25; VAR16++)
    {
        int VAR26, VAR27, VAR28, VAR29;
        VAR5 *VAR30;
        VAR5 *VAR31;
        int VAR32 = 0;
        VAR31 = VAR14;
        VAR26 = FUN6(VAR6);
        VAR6 += 2;
        VAR27 = VAR26;
        VAR30 = VAR6 + VAR26;
        while (VAR27 > 0)
        {
            VAR28 = *VAR6++;
            if (VAR28 & 0x80)
            {
                int VAR16;
                VAR29 = *VAR6++;
                for (VAR16 = 0; VAR16 < 257 - VAR28; VAR16++)
                {
                    *VAR31++ = VAR9->VAR23[VAR29 * 3 + 0];
                    *VAR31++ = VAR9->VAR23[VAR29 * 3 + 1];
                    *VAR31++ = VAR9->VAR23[VAR29 * 3 + 2];
                }
                VAR32 += 257 - VAR28;
                VAR27 -= 2;
            }
            else
            {
                int VAR16, VAR29;
                for (VAR16 = 0; VAR16 <= VAR28; VAR16++)
                {
                    VAR29 = *VAR6++;
                    *VAR31++ = VAR9->VAR23[VAR29 * 3 + 0];
                    *VAR31++ = VAR9->VAR23[VAR29 * 3 + 1];
                    *VAR31++ = VAR9->VAR23[VAR29 * 3 + 2];
                }
                VAR27 -= 2 + VAR28;
                VAR32 += VAR28 + 1;
            }
        }
        VAR6 = VAR30;
        VAR14 += VAR9->VAR13.VAR33[0];
    }
    *VAR4 = sizeof(VAR11);
    *(VAR11 *)VAR3 = VAR9->VAR13;
    return VAR7;
}