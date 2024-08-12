static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR2->VAR9.VAR8;
    int VAR10 = 1 << VAR8->VAR11;
    int VAR12 = 0;
    unsigned int VAR13 = 0, VAR14;
    int VAR15;
    VAR4->VAR16 = 0;
    if (!VAR8->VAR17)
        return 0;
    if (VAR8->VAR18 > 0)
        VAR13 = FUN2(VAR6);
    VAR14 = FUN2(VAR6);
    if (VAR13 > VAR8->VAR18)
        return VAR19;
    if (VAR14 + (VAR20)VAR13 > FUN3(VAR4->VAR21))
        return VAR19;
    VAR4->VAR16 = VAR14 + VAR13;
    for (VAR15 = 0; VAR15 < VAR4->VAR16; VAR15++)
    {
        uint8_t VAR22;
        if (VAR15 < VAR13)
        {
            uint8_t VAR23 = 0;
            if (VAR8->VAR18 > 1)
                VAR23 = FUN4(VAR6, FUN5(VAR8->VAR18));
            VAR4->VAR21[VAR15] = VAR8->VAR24[VAR23];
            VAR4->VAR25[VAR15] = VAR8->VAR26[VAR23];
        }
        else
        {
            VAR4->VAR21[VAR15] = FUN4(VAR6, VAR8->VAR11);
            VAR4->VAR25[VAR15] = FUN6(VAR6);
        }
        VAR22 = FUN6(VAR6);
        if (VAR22)
        {
            int VAR27 = FUN2(VAR6);
            if (VAR15 && VAR15 != VAR13)
                VAR27 += VAR12;
            VAR4->VAR21[VAR15] += VAR2->VAR21 - VAR27 * VAR10 - VAR2->VAR28.VAR29;
            VAR12 = VAR27;
        }
    }
    return 0;
}