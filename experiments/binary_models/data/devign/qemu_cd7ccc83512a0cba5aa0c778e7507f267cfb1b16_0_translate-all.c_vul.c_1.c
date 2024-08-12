int FUN1(target_ulong VAR1, target_ulong VAR2, int VAR3)
{
    VAR4 *VAR5;
    target_ulong VAR6;
    target_ulong VAR7;
    assert(VAR1 < ((VAR8)1 << VAR9));
    if (VAR2 == 0)
    {
        return 0;
    }
    if (VAR1 + VAR2 - 1 < VAR1)
    {
        return -1;
    }
    VAR6 = FUN2(VAR1 + VAR2);
    VAR1 = VAR1 & VAR10;
    for (VAR7 = VAR1, VAR2 = VAR6 - VAR1; VAR2 != 0; VAR2 -= VAR11, VAR7 += VAR11)
    {
        VAR5 = FUN3(VAR7 >> VAR12);
        if (!VAR5)
        {
            return -1;
        }
        if (!(VAR5->VAR3 & VAR13))
        {
            return -1;
        }
        if ((VAR3 & VAR14) && !(VAR5->VAR3 & VAR14))
        {
            return -1;
        }
        if (VAR3 & VAR15)
        {
            if (!(VAR5->VAR3 & VAR16))
            {
                return -1;
            }
            if (!(VAR5->VAR3 & VAR15))
            {
                if (!FUN4(VAR7, 0, NULL))
                {
                    return -1;
                }
            }
            return 0;
        }
    }
    return 0;
}