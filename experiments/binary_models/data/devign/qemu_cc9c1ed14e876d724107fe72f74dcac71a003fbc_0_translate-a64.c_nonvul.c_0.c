static inline void FUN1(VAR1 *VAR2, int VAR3, uint64_t VAR4)
{
    VAR5 *VAR6;
    VAR6 = VAR2->VAR6;
    if (FUN2(VAR2, VAR3, VAR4))
    {
        FUN3(VAR3);
        FUN4(VAR4);
        FUN5((VAR7)VAR6 + VAR3);
        VAR2->VAR8 = VAR9;
    }
    else
    {
        FUN4(VAR4);
        if (VAR2->VAR10)
        {
            FUN6(VAR11);
        }
        else
        {
            FUN5(0);
            VAR2->VAR8 = VAR9;
        }
    }
}