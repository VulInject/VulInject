static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    if (!VAR2->VAR10 || !VAR2->VAR10->VAR11.VAR12[0])
        return 1;
    VAR6 = 0;
    for (VAR4 = 0; VAR4 < VAR2->VAR13; VAR4++)
    {
        const int VAR14 = VAR2->VAR15[VAR4];
        const int VAR16 = VAR2->VAR17[VAR14];
        if (!((VAR16 & VAR18) && (VAR16 & VAR19)))
            VAR6++;
    }
    if (VAR2->VAR20 == VAR21)
    {
        VAR22 *VAR23 = (void *)VAR2;
        if (VAR23->VAR24 <= 0 || VAR23->VAR25[0] <= 0 || !VAR23->VAR26[0][0].VAR11.VAR12[0])
            return 1;
    }
    if (VAR6 < 5)
        return 0;
    if (VAR27 && VAR2->VAR28->VAR29 && VAR2->VAR30 == VAR31)
        return 1;
    VAR7 = FUN2(VAR6 / 50, 1);
    VAR3 = 0;
    VAR5 = 0;
    for (VAR9 = 0; VAR9 < VAR2->VAR32 - 1; VAR9++)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR33; VAR8++)
        {
            int VAR16;
            const int VAR14 = VAR8 + VAR9 * VAR2->VAR34;
            VAR16 = VAR2->VAR17[VAR14];
            if ((VAR16 & VAR18) && (VAR16 & VAR19))
                continue;
            VAR5++;
            if ((VAR5 % VAR7) != 0)
                continue;
            if (VAR2->VAR30 == VAR31)
            {
                VAR35 *VAR36 = VAR2->VAR37.VAR11.VAR12[0] + VAR8 * 16 + VAR9 * 16 * VAR2->VAR38;
                VAR35 *VAR39 = VAR2->VAR40.VAR11.VAR12[0] + VAR8 * 16 + VAR9 * 16 * VAR2->VAR38;
                if (VAR2->VAR28->VAR20 == VAR21)
                {
                }
                else
                {
                    FUN3((VAR41 *)VAR2->VAR10, VAR9, 0);
                }
                VAR3 += VAR2->VAR42.VAR43[0](NULL, VAR39, VAR36, VAR2->VAR38, 16);
                VAR3 -= VAR2->VAR42.VAR43[0](NULL, VAR39, VAR39 + VAR2->VAR38 * 16, VAR2->VAR38, 16);
            }
            else
            {
                if (FUN4(VAR2->VAR37.VAR11.VAR44[VAR14]))
                    VAR3++;
                else
                    VAR3--;
            }
        }
    }
    return VAR3 > 0;
}