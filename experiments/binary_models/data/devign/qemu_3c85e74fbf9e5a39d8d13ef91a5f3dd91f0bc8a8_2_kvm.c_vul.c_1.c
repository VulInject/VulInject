int FUN1(VAR1 *VAR2, int VAR3, void *VAR4)
{
    ram_addr_t VAR5;
    target_phys_addr_t VAR6;
    if ((VAR2->VAR7 & VAR8) && VAR4 && (VAR3 == VAR9 || VAR3 == VAR10))
    {
        if (FUN2(VAR4, &VAR5) || !FUN3(VAR2->VAR11, VAR5, &VAR6))
        {
            fprintf(VAR12, ""
                            "");
            if (VAR3 == VAR10)
            {
                return 0;
            }
            else
            {
                FUN4();
            }
        }
        FUN5(VAR2, VAR6, VAR3);
    }
    else
    {
        if (VAR3 == VAR10)
        {
            return 0;
        }
        else if (VAR3 == VAR9)
        {
            FUN4();
        }
        else
        {
            return 1;
        }
    }
    return 0;