static inline int FUN1(uint32_t VAR1, uint32_t VAR2, TCGv VAR3)
{
    int VAR4 = (VAR1 >> 0) & 0xf;
    TCGv VAR5;
    if (VAR1 & (1 << 8))
    {
        if (VAR4 < VAR6 || VAR4 > VAR7)
        {
            return 1;
        }
        else
        {
            VAR5 = FUN2(VAR4);
        }
    }
    else
    {
        VAR5 = FUN3();
        FUN4(VAR8, VAR4);
        FUN5(VAR5, VAR8);
    }
    FUN6(VAR5, VAR5, VAR2);
    FUN7(VAR3, VAR5);
    FUN8(VAR5);
    return 0;
}