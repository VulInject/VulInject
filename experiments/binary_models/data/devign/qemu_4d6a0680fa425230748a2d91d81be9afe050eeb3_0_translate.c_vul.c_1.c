static void FUN1(VAR1 *VAR2)
{
    void (*VAR3)(VAR1 * VAR2, int VAR4, int VAR5);
    uint32_t VAR4 = FUN2(VAR2->VAR6);
    VAR3 = VAR2->VAR7[VAR4].VAR8;
    if (VAR2->VAR9)
    {
        VAR3 = VAR2->VAR7[VAR4].VAR8;
    }
    else if (VAR2->VAR10)
    {
        VAR3 = VAR2->VAR7[VAR4].VAR11;
    }
    else
    {
        VAR3 = VAR2->VAR7[VAR4].VAR12;
    }
    if (FUN3(VAR3 != NULL))
    {
        if (FUN3(VAR3 != VAR13))
        {
            (*VAR3)(VAR2, VAR4, FUN4(VAR2->VAR6));
        }
        else
        {
            fprintf(VAR14, "" VAR15 "", VAR4, VAR4, VAR2->VAR16 - 4);
            if (FUN5())
            {
                FUN6("" VAR15 "", VAR4, VAR4, VAR2->VAR16 - 4);
            }
            FUN7(VAR2, VAR17);
        }
    }
    else
    {
        if (FUN5())
        {
            FUN6("" VAR15 "", VAR4, VAR4, VAR2->VAR16 - 4);
        }
        fprintf(VAR14, "" VAR15 "", VAR4, VAR4, VAR2->VAR16 - 4);
        FUN7(VAR2, VAR18);
    }
}