static inline void FUN1(VAR1 *VAR2)
{
    void (*VAR3)(void *VAR4, int VAR5);
    uint32_t VAR5 = FUN2(VAR2->VAR6);
    if (VAR2->VAR7)
        VAR3 = VAR2->VAR8[VAR5].VAR9;
    else
        VAR3 = VAR2->VAR8[VAR5].VAR10;
    if (FUN3(VAR3 != NULL))
    {
        if (FUN3(VAR3 != VAR11))
        {
            (*VAR3)(VAR2, VAR5);
            FUN4(FUN5(VAR2->VAR6));
        }
        else
        {
            if (VAR12 != 0)
            {
                fprintf(VAR13, "", VAR5, VAR5);
            }
            FUN6("", VAR5, VAR5);
            FUN7(VAR2);
        }
    }
    else
    {
        if (VAR12 != 0)
        {
            fprintf(VAR13, "", VAR5, VAR5);
        }
        FUN6("", VAR5, VAR5);
        FUN8(VAR2, VAR14, VAR15 | VAR16);
    }
}