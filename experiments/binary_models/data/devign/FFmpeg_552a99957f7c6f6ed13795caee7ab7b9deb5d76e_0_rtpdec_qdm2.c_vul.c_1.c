static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, int VAR14)
{
    int VAR15 = VAR16, VAR17;
    const VAR11 *VAR18 = VAR12 + VAR13, *VAR19 = VAR12;
    if (VAR13 > 0)
    {
        if (VAR13 < 2)
            return VAR16;
        if (*VAR19 == 0xff)
        {
            if (VAR4->VAR20 > 0)
            {
                FUN2(VAR2, VAR21, "");
                VAR4->VAR20 = 0;
                memset(VAR4->VAR13, 0, sizeof(VAR4->VAR13));
            }
            if ((VAR15 = FUN3(VAR4, VAR6, ++VAR19, VAR18)) < 0)
                return VAR15;
            VAR19 += VAR15;
            VAR6->VAR22->VAR23 = VAR24;
        }
        while (VAR18 - VAR19 >= 4)
        {
            if ((VAR15 = FUN4(VAR4, VAR6, VAR19, VAR18)) < 0)
                return VAR15;
            VAR19 += VAR15;
        }
        VAR4->VAR10 = *VAR10;
        if (++VAR4->VAR20 < VAR4->VAR25)
            VAR4->VAR26 = 0;
        for (VAR17 = 0; VAR17 < 0x80; VAR17++)
            if (VAR4->VAR13[VAR17] > 0)
                VAR4->VAR26++;
    }
    if (!VAR4->VAR26 || (VAR15 = FUN5(VAR4, VAR6, VAR8)) < 0)
        return VAR15;
    if (--VAR4->VAR26 == 0)
        VAR4->VAR20 = 0;
    *VAR10 = VAR4->VAR10;
    VAR4->VAR10 = VAR27;
    return (VAR4->VAR26 > 0) ? 1 : 0;