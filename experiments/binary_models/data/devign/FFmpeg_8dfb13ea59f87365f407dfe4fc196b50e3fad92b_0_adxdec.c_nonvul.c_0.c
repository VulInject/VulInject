static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR6->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    const VAR14 *VAR15 = VAR6->VAR3;
    const VAR14 *VAR16 = VAR15 + VAR6->VAR8;
    int VAR17, VAR18, VAR19;
    if (VAR10->VAR20)
    {
        *VAR4 = 0;
        return VAR7;
    }
    if (!VAR10->VAR21 && VAR7 >= 2 && FUN2(VAR15) == 0x8000)
    {
        int VAR22;
        if ((VAR19 = FUN3(VAR2, VAR15, VAR7, &VAR22, VAR10->VAR23)) < 0)
        {
            FUN4(VAR2, VAR24, "");
            return VAR25;
        }
        VAR10->VAR26 = VAR2->VAR26;
        VAR10->VAR21 = 1;
        if (VAR7 < VAR22)
            return VAR25;
        VAR15 += VAR22;
        VAR7 -= VAR22;
    }
    if (!VAR10->VAR21)
        return VAR25;
    VAR17 = VAR7 / (VAR27 * VAR10->VAR26);
    if (!VAR17 || VAR7 % (VAR27 * VAR2->VAR26))
    {
        if (VAR7 >= 4 && (FUN2(VAR15) & 0x8000))
        {
            VAR10->VAR20 = 1;
            *VAR4 = 0;
            return VAR6->VAR8;
        }
        return VAR25;
    }
    VAR10->VAR28.VAR29 = VAR17 * VAR30;
    if ((VAR19 = VAR2->FUN5(VAR2, &VAR10->VAR28)) < 0)
    {
        FUN4(VAR2, VAR24, "");
        return VAR19;
    }
    VAR13 = (VAR12 *)VAR10->VAR28.VAR3[0];
    while (VAR17--)
    {
        for (VAR18 = 0; VAR18 < VAR10->VAR26; VAR18++)
        {
            if (VAR16 - VAR15 < VAR27 || FUN6(VAR10, VAR13 + VAR18, VAR15, VAR18))
            {
                VAR10->VAR20 = 1;
                VAR15 = VAR6->VAR3 + VAR6->VAR8;
                break;
            }
            VAR7 -= VAR27;
            VAR15 += VAR27;
        }
        VAR13 += VAR30 * VAR10->VAR26;
    }
    *VAR4 = 1;
    *(VAR31 *)VAR3 = VAR10->VAR28;
    return VAR15 - VAR6->VAR3;
}