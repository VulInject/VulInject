static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR6->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    const VAR14 *VAR15 = VAR6->VAR3;
    int VAR16, VAR17, VAR18;
    if (VAR10->VAR19)
    {
        *VAR4 = 0;
        return VAR7;
    }
    if (FUN2(VAR15) == 0x8000)
    {
        int VAR20;
        if ((VAR18 = FUN3(VAR2, VAR15, VAR7, &VAR20, VAR10->VAR21)) < 0)
        {
            FUN4(VAR2, VAR22, "");
        }
        VAR10->VAR23 = VAR2->VAR23;
        if (VAR7 < VAR20)
            VAR15 += VAR20;
        VAR7 -= VAR20;
    }
    VAR16 = VAR7 / (VAR24 * VAR10->VAR23);
    if (!VAR16 || VAR7 % (VAR24 * VAR2->VAR23))
    {
        if (VAR7 >= 4 && (FUN2(VAR15) & 0x8000))
        {
            VAR10->VAR19 = 1;
            *VAR4 = 0;
            return VAR6->VAR8;
        }
    }
    VAR10->VAR25.VAR26 = VAR16 * VAR27;
    if ((VAR18 = VAR2->FUN5(VAR2, &VAR10->VAR25)) < 0)
    {
        FUN4(VAR2, VAR22, "");
        return VAR18;
    }
    VAR13 = (VAR12 *)VAR10->VAR25.VAR3[0];
    while (VAR16--)
    {
        for (VAR17 = 0; VAR17 < VAR10->VAR23; VAR17++)
        {
            if (FUN6(VAR10, VAR13 + VAR17, VAR15, VAR17))
            {
                VAR10->VAR19 = 1;
                VAR15 = VAR6->VAR3 + VAR6->VAR8;
                break;
            }
            VAR7 -= VAR24;
            VAR15 += VAR24;
        }
        VAR13 += VAR27 * VAR10->VAR23;
    }
    *VAR4 = 1;
    *(VAR28 *)VAR3 = VAR10->VAR25;
    return VAR15 - VAR6->VAR3;