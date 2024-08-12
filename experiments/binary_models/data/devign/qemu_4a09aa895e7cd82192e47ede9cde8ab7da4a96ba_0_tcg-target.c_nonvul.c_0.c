static inline void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    if (FUN2(VAR4, 13))
        FUN3(VAR2, VAR3, VAR4);
    else
    {
        FUN4(VAR2, VAR3, VAR4);
        if (VAR4 & 0x3ff)
            FUN5(VAR2, VAR3, VAR3, VAR4 & 0x3ff, VAR5);
    }
}