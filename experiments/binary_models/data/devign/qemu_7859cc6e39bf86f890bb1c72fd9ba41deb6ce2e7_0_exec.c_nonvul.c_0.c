static inline void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3;
    void *VAR4;
    if (FUN2(VAR2))
    {
        VAR4 = (void *)(unsigned long)((VAR2->VAR5 & VAR6) + VAR2->VAR7);
        VAR3 = FUN3(VAR4);
        if (!FUN4(VAR3))
        {
            VAR2->VAR5 |= VAR8;
        }
    }
}