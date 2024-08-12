int FUN1(abi_ulong VAR1, abi_ulong VAR2, int VAR3)
{
    abi_ulong VAR4, VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    FUN2("" VAR10 "" VAR10 "", VAR1, VAR2, VAR3 & VAR11 ? '' : '', VAR3 & VAR12 ? '' : '', VAR3 & VAR13 ? '' : '');
    if ((VAR1 & ~VAR14) != 0)
        return -VAR15;
    VAR2 = FUN3(VAR2);
    VAR4 = VAR1 + VAR2;
    if (VAR4 < VAR1)
        return -VAR15;
    VAR3 &= VAR11 | VAR12 | VAR13;
    if (VAR2 == 0)
        return 0;
    VAR5 = VAR1 & VAR16;
    VAR6 = FUN4(VAR4);
    if (VAR1 > VAR5)
    {
        VAR8 = VAR3;
        for (VAR7 = VAR5; VAR7 < VAR1; VAR7 += VAR17)
        {
            VAR8 |= FUN5(VAR7);
        }
        if (VAR6 == VAR5 + VAR18)
        {
            for (VAR7 = VAR4; VAR7 < VAR6; VAR7 += VAR17)
            {
                VAR8 |= FUN5(VAR7);
            }
            VAR4 = VAR6;
        }
        VAR9 = FUN6(FUN7(VAR5), VAR18, VAR8 & VAR19);
        if (VAR9 != 0)
            return VAR9;
        VAR5 += VAR18;
    }
    if (VAR4 < VAR6)
    {
        VAR8 = VAR3;
        for (VAR7 = VAR4; VAR7 < VAR6; VAR7 += VAR17)
        {
            VAR8 |= FUN5(VAR7);
        }
        VAR9 = FUN6(FUN7(VAR6 - VAR18), VAR18, VAR8 & VAR19);
        if (VAR9 != 0)
            return VAR9;
        VAR6 -= VAR18;
    }
    if (VAR5 < VAR6)
    {
        VAR9 = FUN6(FUN7(VAR5), VAR6 - VAR5, VAR3);
        if (VAR9 != 0)
            return VAR9;
    }
    FUN8(VAR1, VAR1 + VAR2, VAR3 | VAR20);
    return 0;
}