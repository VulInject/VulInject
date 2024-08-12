static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14 = VAR2->VAR15;
    VAR16 *VAR17 = ((VAR16 *)VAR2->VAR18) + VAR4 + VAR3 * VAR14;
    VAR16 *VAR19 = (VAR16 *)VAR2->VAR20;
    VAR16 *VAR21 = (VAR16 *)VAR2->VAR22;
    uint32_t VAR23;
    VAR12 = FUN2(&VAR2->VAR24);
    VAR9 = FUN3(&VAR2->VAR24);
    VAR10 = FUN4(&VAR2->VAR24);
    VAR11 = FUN4(&VAR2->VAR24);
    VAR13 = FUN4(&VAR2->VAR24);
    FUN5(&VAR2->VAR24, 9);
    VAR23 = FUN6(&VAR2->VAR24);
    FUN5(&VAR2->VAR24, 8);
    if (VAR23 > VAR6 * VAR14 - VAR4 - VAR3 * VAR14)
    {
        VAR23 = VAR6 * VAR14 - VAR4 - VAR3 * VAR14;
        FUN7(VAR2->VAR25, VAR26, "");
    }
    if (VAR13 & 1)
        FUN5(&VAR2->VAR24, 0x8080);
    if (!VAR9)
    {
        VAR2->VAR27 = -1;
        memset(VAR19, 0, VAR2->VAR6 * VAR14);
        memset(VAR21, 0, VAR2->VAR6 * VAR14);
    }
    FUN8(VAR2->VAR25, "", VAR10);
    switch (VAR10)
    {
    case 0:
        if (FUN9(&VAR2->VAR24) < VAR5 * VAR6)
            return VAR28;
        for (VAR8 = 0; VAR8 < VAR6; VAR8++)
        {
            FUN10(&VAR2->VAR24, VAR17, VAR5);
            VAR17 += VAR14;
        }
        break;
    case 1:
        if (FUN9(&VAR2->VAR24) < ((VAR5 + 1) >> 1) * ((VAR6 + 1) >> 1))
            return VAR28;
        for (VAR8 = 0; VAR8 < VAR6; VAR8 += 2)
        {
            for (VAR7 = 0; VAR7 < VAR5; VAR7 += 2)
            {
                VAR17[VAR7] = VAR17[VAR7 + 1] = VAR17[VAR14 + VAR7] = VAR17[VAR14 + VAR7 + 1] = FUN11(&VAR2->VAR24);
            }
            VAR17 += VAR14 * 2;
        }
        break;
    case 2:
        if (VAR9 == VAR2->VAR27 + 1)
        {
            for (VAR8 = 0; VAR8 < VAR6; VAR8 += 8)
            {
                for (VAR7 = 0; VAR7 < VAR5; VAR7 += 8)
                {
                    if (FUN12(VAR2, VAR17 + VAR7, VAR19 + VAR7, VAR21 + VAR7, VAR14, VAR12 + 8, 8))
                        return VAR28;
                }
                VAR17 += VAR14 * 8;
                VAR19 += VAR14 * 8;
                VAR21 += VAR14 * 8;
            }
        }
        break;
    case 3:
        memcpy(VAR2->VAR18, VAR2->VAR22, VAR2->VAR15 * VAR2->VAR6);
        break;
    case 4:
        memcpy(VAR2->VAR18, VAR2->VAR20, VAR2->VAR15 * VAR2->VAR6);
        break;
    case 5:
        if (FUN13(VAR2, VAR17, VAR23))
            return VAR28;
        break;
    default:
        FUN7(VAR2->VAR25, VAR29, "", VAR10);
        return VAR30;
    }
    if (VAR9 == VAR2->VAR27 + 1)
        VAR2->VAR31 = VAR11;
    else
        VAR2->VAR31 = 0;
    VAR2->VAR27 = VAR9;
    return 0;
}