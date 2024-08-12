static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5 = 0;
    int VAR6, VAR7;
    VAR2->VAR8 = VAR2->VAR9;
    if (VAR3 == 0)
    {
        if (VAR2->VAR10 == VAR11)
            VAR2->VAR8++;
    }
    else
    {
        if (VAR2->VAR10 == VAR12 || VAR2->VAR10 == VAR13)
            VAR2->VAR8++;
    }
    if (FUN2(&VAR2->VAR14))
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return -1;
    }
    VAR4 = FUN4(&VAR2->VAR14, 6);
    if (FUN2(&VAR2->VAR14))
    {
        VAR5 = 1;
        while (!FUN2(&VAR2->VAR14))
            VAR5++;
        VAR2->VAR8 -= VAR5;
    }
    if (VAR2->VAR8 > 32)
    {
        FUN5(VAR2->VAR15, "", 0);
        return -1;
    }
    if (VAR4 == 0)
    {
        VAR7 = FUN6(&VAR2->VAR14, VAR2->VAR8);
        for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
            VAR2->VAR18[VAR3][VAR6] = VAR7;
    }
    else if (VAR4 == 1)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
            VAR2->VAR18[VAR3][VAR6] = FUN6(&VAR2->VAR14, VAR2->VAR8);
    }
    else if ((VAR4 >= 8) && (VAR4 <= 12))
    {
        if (FUN7(VAR2, VAR3, VAR4 & ~0x8) < 0)
            return -1;
    }
    else if (VAR4 >= 32)
    {
        if (FUN8(VAR2, VAR3, (VAR4 & ~0x20) + 1) < 0)
            return -1;
    }
    else
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return -1;
    }
    if (VAR5)
    {
        int VAR6;
        for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
            VAR2->VAR18[VAR3][VAR6] <<= VAR5;
    }
    return 0;
}