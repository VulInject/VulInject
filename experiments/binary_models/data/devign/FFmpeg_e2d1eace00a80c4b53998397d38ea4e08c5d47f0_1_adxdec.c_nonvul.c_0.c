static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    const VAR7 *VAR16 = VAR8;
    int VAR17 = VAR9;
    if (!VAR12->VAR18)
    {
        int VAR19 = FUN2(VAR2, VAR16, VAR17);
        if (VAR19 < 0)
        {
            FUN3(VAR2, VAR20, "");
            return VAR19;
        }
        VAR12->VAR18 = 1;
        VAR16 += VAR19;
        VAR17 -= VAR19;
    }
    if (VAR17 / 18 > *VAR4 / 64)
        VAR17 = (*VAR4 / 64) * 18;
    if (VAR12->VAR21)
    {
        int VAR22 = 18 * VAR2->VAR23 - VAR12->VAR21;
        memcpy(VAR12->VAR24 + VAR12->VAR21, VAR16, VAR22);
        VAR17 -= VAR22;
        VAR16 += VAR22;
        if (VAR2->VAR23 == 1)
        {
            FUN4(VAR15, VAR12->VAR24, VAR12->VAR25);
            VAR15 += 32;
        }
        else
        {
            FUN5(VAR15, VAR12->VAR24, VAR12->VAR25);
            VAR15 += 32 * 2;
        }
    }
    if (VAR2->VAR23 == 1)
    {
        while (VAR17 >= 18)
        {
            FUN4(VAR15, VAR16, VAR12->VAR25);
            VAR17 -= 18;
            VAR16 += 18;
            VAR15 += 32;
        }
    }
    else
    {
        while (VAR17 >= 18 * 2)
        {
            FUN5(VAR15, VAR16, VAR12->VAR25);
            VAR17 -= 18 * 2;
            VAR16 += 18 * 2;
            VAR15 += 32 * 2;
        }
    }
    VAR12->VAR21 = VAR17;
    if (VAR17)
    {
        memcpy(VAR12->VAR24, VAR16, VAR17);
        VAR16 += VAR17;
    }
    *VAR4 = (VAR7 *)VAR15 - (VAR7 *)VAR3;
    return VAR16 - VAR8;
}