void FUN1(target_phys_addr_t VAR1, unsigned long VAR2, unsigned long VAR3)
{
    target_phys_addr_t VAR4, VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned long VAR10 = VAR2;
    void *VAR11;
    VAR5 = VAR1 + (VAR12)VAR2;
    VAR2 = (VAR2 + VAR13 - 1) & VAR14;
    for (VAR4 = VAR1; VAR4 < VAR5; VAR4 += VAR13)
    {
        VAR7 = FUN2(VAR4 >> VAR15);
        if (VAR7 && VAR7->VAR3 != VAR16)
        {
            unsigned long VAR17 = VAR7->VAR3;
            target_phys_addr_t VAR18, VAR19;
            int VAR20 = 0;
            FUN3(VAR4, VAR1, VAR18, VAR5, VAR19, VAR20);
            if (VAR20)
            {
                if (!(VAR17 & VAR21))
                {
                    VAR11 = FUN4((VAR4 & VAR14), &VAR7->VAR3, VAR17);
                }
                else
                {
                    VAR11 = VAR22[(VAR17 & ~VAR14) >> VAR23];
                }
                FUN5(VAR11, VAR18, VAR19, VAR3);
            }
            else
            {
                VAR7->VAR3 = VAR3;
                if ((VAR3 & ~VAR14) <= VAR24 || (VAR3 & VAR25))
                    VAR3 += VAR13;
            }
        }
        else
        {
            VAR7 = FUN6(VAR4 >> VAR15, 1);
            VAR7->VAR3 = VAR3;
            if ((VAR3 & ~VAR14) <= VAR24 || (VAR3 & VAR25))
                VAR3 += VAR13;
            else
            {
                target_phys_addr_t VAR18, VAR19;
                int VAR20 = 0;
                FUN3(VAR4, VAR1, VAR18, VAR5, VAR19, VAR20);
                if (VAR20)
                {
                    VAR11 = FUN4((VAR4 & VAR14), &VAR7->VAR3, VAR16);
                    FUN5(VAR11, VAR18, VAR19, VAR3);
                }
            }
        }
    }
    for (VAR9 = VAR26; VAR9 != NULL; VAR9 = VAR9->VAR27)
    {
        FUN7(VAR9, 1);
    }
}