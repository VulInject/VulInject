static inline int FUN1(VAR1 *VAR2, uint32_t VAR3, TCGv VAR4)
{
    int VAR5;
    uint32_t VAR6;
    TCGv VAR7;
    VAR5 = (VAR3 >> 16) & 0xf;
    VAR7 = FUN2(VAR2, VAR5);
    VAR6 = (VAR3 & 0xff) << ((VAR3 >> 7) & 2);
    if (VAR3 & (1 << 24))
    {
        if (VAR3 & (1 << 23))
            FUN3(VAR7, VAR7, VAR6);
        else
            FUN3(VAR7, VAR7, -VAR6);
        FUN4(VAR4, VAR7);
        if (VAR3 & (1 << 21))
            FUN5(VAR2, VAR5, VAR7);
        else
            FUN6(VAR7);
    }
    else if (VAR3 & (1 << 21))
    {
        FUN4(VAR4, VAR7);
        if (VAR3 & (1 << 23))
            FUN3(VAR7, VAR7, VAR6);
        else
            FUN3(VAR7, VAR7, -VAR6);
        FUN5(VAR2, VAR5, VAR7);
    }
    else if (!(VAR3 & (1 << 23)))
        return 1;
    return 0;
}