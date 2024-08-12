static inline void FUN1(VAR1 *VAR2, unsigned int VAR3, int VAR4, TCGv VAR5)
{
    int VAR6, VAR7;
    TCGv VAR8;
    if (VAR3 & (1 << 22))
    {
        VAR6 = (VAR3 & 0xf) | ((VAR3 >> 4) & 0xf0);
        if (!(VAR3 & (1 << 23)))
            VAR6 = -VAR6;
        VAR6 += VAR4;
        if (VAR6 != 0)
            FUN2(VAR5, VAR5, VAR6);
    }
    else
    {
        if (VAR4)
            FUN2(VAR5, VAR5, VAR4);
        VAR7 = (VAR3)&0xf;
        VAR8 = FUN3(VAR2, VAR7);
        if (!(VAR3 & (1 << 23)))
            FUN4(VAR5, VAR5, VAR8);
        else
            FUN5(VAR5, VAR5, VAR8);
        FUN6(VAR8);
    }
}