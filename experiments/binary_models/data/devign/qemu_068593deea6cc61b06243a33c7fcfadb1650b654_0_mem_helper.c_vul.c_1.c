void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint64_t VAR5, uint64_t VAR6)
{
    int VAR7 = 0;
    int VAR8 = 0;
    uint32_t VAR9 = (VAR4 + 1) / 8;
    FUN2("" VAR10 "" VAR10 "", VAR11, VAR4, VAR5, VAR6);
    if ((VAR4 > 32) && (VAR6 & VAR12) == ((VAR6 + VAR4) & VAR12) && (VAR5 & VAR12) == ((VAR5 + VAR4) & VAR12))
    {
        if (VAR5 == (VAR6 + 1))
        {
            FUN3(VAR3, VAR4 + 1, VAR5, FUN4(VAR3, VAR6));
            return;
        }
        else if ((VAR6 & VAR12) != (VAR5 & VAR12))
        {
            FUN5(VAR3, VAR4 + 1, VAR5, VAR6);
            return;
        }
    }
    if (VAR5 == (VAR6 + 1))
    {
        memset(FUN6(VAR5), FUN4(VAR3, VAR6), VAR4 + 1);
        return;
    }
    else
    {
        memmove(FUN6(VAR5), FUN6(VAR6), VAR4 + 1);
        return;
    }
    if (VAR5 != (VAR6 + 1))
    {
        for (VAR7 = 0; VAR7 < VAR9; VAR7++)
        {
            FUN7(VAR3, VAR5 + VAR8, FUN8(VAR3, VAR6 + VAR8));
            VAR8 += 8;
        }
    }
    for (VAR7 = VAR8; VAR7 <= VAR4; VAR7++)
    {
        FUN9(VAR3, VAR5 + VAR7, FUN4(VAR3, VAR6 + VAR7));
    }
}