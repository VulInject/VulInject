int FUN1(VAR1 *VAR2, int VAR3, void *VAR4)
{
    void *VAR5;
    ram_addr_t VAR6;
    target_phys_addr_t VAR7;
    if ((VAR2->VAR8 & VAR9) && VAR4 && (VAR3 == VAR10 || VAR3 == VAR11))
    {
        VAR5 = (void *)VAR4;
        if (FUN2(VAR5, &VAR6) || !FUN3(VAR2->VAR12, VAR6, &VAR7))
        {
            fprintf(VAR13, ""
                            "");
            if (VAR3 == VAR11)
            {
                return 0;
            }
            else
            {
                FUN4();
            }
        }
        if (VAR3 == VAR10)
        {
            FUN5(VAR2, VAR7);
        }
        else
        {
            if (!FUN6(VAR2))
            {
                FUN7(VAR2, VAR7);
            }
        }
    }
    else
    {
        if (VAR3 == VAR11)
        {
            return 0;
        }
        else if (VAR3 == VAR10)
        {
            FUN4();
        }
        else
        {
            return 1;
        }
    }
    return 0;
}