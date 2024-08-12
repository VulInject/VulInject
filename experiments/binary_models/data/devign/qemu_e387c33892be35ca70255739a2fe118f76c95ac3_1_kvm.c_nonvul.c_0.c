int FUN1(int VAR1, void *VAR2)
{
    if ((VAR3->VAR4 & VAR5) && VAR2 && VAR1 == VAR6)
    {
        void *VAR7;
        ram_addr_t VAR8;
        target_phys_addr_t VAR9;
        VAR7 = VAR2;
        if (FUN2(VAR7, &VAR8) || !FUN3(VAR3->VAR10, VAR8, &VAR9))
        {
            fprintf(VAR11, ""
                            "",
                    VAR2);
            return 0;
        }
        FUN4(VAR3, VAR9);
    }
    else
    {
        if (VAR1 == VAR6)
        {
            return 0;
        }
        else if (VAR1 == VAR12)
        {
            FUN5();
        }
        else
        {
            return 1;
        }
    }
    return 0;
}