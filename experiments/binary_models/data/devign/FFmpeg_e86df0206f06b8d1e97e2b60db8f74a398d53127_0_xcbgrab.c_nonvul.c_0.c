static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    int VAR14 = VAR8->VAR15, VAR16 = VAR8->VAR17, VAR18 = VAR8->VAR19;
    if (!VAR4 || !VAR6)
        return FUN2(VAR20);
    VAR10 = VAR8->VAR10;
    VAR11 = VAR8->VAR11;
    VAR12 = VAR4->VAR21;
    VAR13 = VAR4->VAR22;
    if (VAR18 == VAR23)
    {
        VAR10 = VAR12 - VAR14 / 2;
        VAR11 = VAR13 - VAR16 / 2;
    }
    else
    {
        int VAR24 = VAR10 + VAR18;
        int VAR25 = VAR10 + VAR14 - VAR18;
        int VAR26 = VAR11 + VAR18;
        int VAR27 = VAR11 + VAR16 + VAR18;
        if (VAR12 > VAR25)
        {
            VAR10 += VAR12 - VAR25;
        }
        else if (VAR12 < VAR24)
        {
            VAR10 -= VAR24 - VAR12;
        }
        if (VAR13 > VAR27)
        {
            VAR11 += VAR13 - VAR27;
        }
        else if (VAR13 < VAR26)
        {
            VAR11 -= VAR26 - VAR13;
        }
    }
    VAR8->VAR10 = FUN3(FUN4(0, VAR10), VAR6->VAR15 - VAR14);
    VAR8->VAR11 = FUN3(FUN4(0, VAR11), VAR6->VAR17 - VAR16);
    return 0;
}