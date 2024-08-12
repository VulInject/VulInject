static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    uint32_t VAR12 = 0;
    VAR9 = FUN2(VAR2, VAR13);
    if (VAR9)
    {
        VAR11 = FUN3(VAR9, VAR13);
        if (VAR11)
        {
            if (*VAR11->VAR14.VAR15)
            {
                VAR12 |= VAR16;
            }
            else
            {
                VAR12 &= ~VAR16;
            }
        }
        else
        {
            FUN4(""
                                     ""
                                     "",
                                     VAR17);
            return -1;
        }
    }
    else
    {
        FUN4(""
                                 "",
                                 VAR17);
        return -1;
    }
    *VAR7 = VAR12;
    return 0;
}