static bool FUN1(VAR1 **VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 *VAR8)
{
    VAR1 *VAR9 = *VAR2;
    hwaddr VAR10;
    VAR5 *VAR11;
    if (!VAR9)
    {
        VAR9 = FUN2(&VAR8->VAR12.VAR13);
        *VAR2 = VAR9;
        assert((VAR9->VAR14 & ~VAR15) == 0);
        assert((VAR9->VAR16 & ~VAR15) == 0);
        *VAR4 = FUN3(VAR9->VAR14);
        if (VAR6)
        {
            *VAR6 = VAR9->VAR17;
        }
        return true;
    }
    *VAR4 = *VAR4 + 1;
    VAR10 = FUN4(*VAR4);
    if ((VAR10 >= VAR9->VAR14) && (VAR10 + VAR18 <= VAR9->VAR16))
    {
        VAR11 = VAR9->VAR17 + (VAR10 - VAR9->VAR14);
    }
    else
    {
        VAR9 = FUN5(VAR9, VAR19);
        *VAR2 = VAR9;
        if (!VAR9)
        {
            return false;
        }
        assert((VAR9->VAR14 & ~VAR15) == 0);
        assert((VAR9->VAR16 & ~VAR15) == 0);
        *VAR4 = FUN3(VAR9->VAR14);
        VAR11 = VAR9->VAR17;
    }
    if (VAR6)
    {
        *VAR6 = VAR11;
    }
    return true;
}