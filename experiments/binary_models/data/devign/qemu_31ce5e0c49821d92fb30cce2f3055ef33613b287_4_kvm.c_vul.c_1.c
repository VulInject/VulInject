int FUN1(int VAR1, void *VAR2)
{
    if ((VAR3->VAR4 & VAR5) && VAR2 && VAR1 == VAR6)
    {
        uint64_t VAR7;
        void *VAR8;
        ram_addr_t VAR9;
        target_phys_addr_t VAR10;
        VAR8 = VAR2;
        if (FUN2(VAR8, &VAR9) || !FUN3(VAR3->VAR11, VAR9, &VAR10))
        {
            fprintf(VAR12, ""
                            "",
                    VAR2);
            return 0;
        }
        VAR7 = VAR13 | VAR14 | VAR15 | VAR16 | VAR17 | VAR18 | 0xc0;
        FUN4(VAR3, 9, VAR7, VAR19 | VAR20, VAR10, (VAR21 << 6) | 0xc, 1);
        FUN5(VAR3);
    }
    else
    {
        if (VAR1 == VAR6)
        {
            return 0;
        }
        else if (VAR1 == VAR22)
        {
            FUN6();
        }
        else
        {
            return 1;
        }
    }
    return 0;
}