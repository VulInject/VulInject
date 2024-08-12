static inline void FUN1(VAR1 *VAR2)
{
    void (*VAR3)(void *VAR4, int VAR5, int VAR6);
    uint32_t VAR6 = FUN2(VAR2->VAR7);
    if (VAR2->VAR8 == 2)
        VAR3 = VAR2->VAR9[VAR6].VAR10;
    else if (VAR2->VAR8)
        VAR3 = VAR2->VAR9[VAR6].VAR11;
    else
        VAR3 = VAR2->VAR9[VAR6].VAR12;
    if (FUN3(VAR3 != NULL))
    {
        if (FUN3(VAR3 != VAR13))
        {
            (*VAR3)(VAR2, FUN4(VAR2->VAR7), VAR6);
        }
        else
        {
            if (VAR6 != VAR14)
            {
                FUN5("" VAR15 "", VAR6, VAR6, VAR2->VAR16);
                FUN6("" VAR15 "", VAR6, VAR6, VAR2->VAR16);
            }
            FUN7(VAR2, VAR17);
        }
    }
    else
    {
        FUN5("" VAR15 "", VAR6, VAR6, VAR2->VAR16);
        FUN6("" VAR15 "", VAR6, VAR6, VAR2->VAR16);
        FUN7(VAR2, VAR18);
    }
}