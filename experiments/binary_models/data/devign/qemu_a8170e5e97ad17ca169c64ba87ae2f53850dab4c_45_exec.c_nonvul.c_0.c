int FUN1(VAR1 *VAR2, target_ulong VAR3, VAR4 *VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9;
    target_ulong VAR10;
    void *VAR11;
    while (VAR6 > 0)
    {
        VAR10 = VAR3 & VAR12;
        VAR8 = (VAR10 + VAR13) - VAR3;
        if (VAR8 > VAR6)
            VAR8 = VAR6;
        VAR9 = FUN2(VAR10);
        if (!(VAR9 & VAR14))
            return -1;
        if (VAR7)
        {
            if (!(VAR9 & VAR15))
                return -1;
            if (!(VAR11 = FUN3(VAR16, VAR3, VAR8, 0)))
                return -1;
            memcpy(VAR11, VAR5, VAR8);
            FUN4(VAR11, VAR3, VAR8);
        }
        else
        {
            if (!(VAR9 & VAR17))
                return -1;
            if (!(VAR11 = FUN3(VAR18, VAR3, VAR8, 1)))
                return -1;
            memcpy(VAR5, VAR11, VAR8);
            FUN4(VAR11, VAR3, 0);
        }
        VAR6 -= VAR8;
        VAR5 += VAR8;
        VAR3 += VAR8;
    }
    return 0;
}