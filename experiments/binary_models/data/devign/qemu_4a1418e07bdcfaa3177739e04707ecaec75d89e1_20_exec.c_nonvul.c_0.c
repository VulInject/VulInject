void FUN1(target_phys_addr_t VAR1, ram_addr_t VAR2, ram_addr_t VAR3, ram_addr_t VAR4)
{
    target_phys_addr_t VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    ram_addr_t VAR11 = VAR2;
    void *VAR12;
    if (FUN2())
        FUN3(VAR1, VAR2, VAR3);
    if (VAR3 == VAR13)
    {
        VAR4 = VAR1;
    }
    VAR4 &= VAR14;
    VAR2 = (VAR2 + VAR15 - 1) & VAR14;
    VAR6 = VAR1 + (VAR16)VAR2;
    for (VAR5 = VAR1; VAR5 != VAR6; VAR5 += VAR15)
    {
        VAR8 = FUN4(VAR5 >> VAR17);
        if (VAR8 && VAR8->VAR3 != VAR13)
        {
            ram_addr_t VAR18 = VAR8->VAR3;
            target_phys_addr_t VAR19, VAR20;
            int VAR21 = 0;
            FUN5(VAR5, VAR1, VAR19, VAR6, VAR20, VAR21);
            if (VAR21 || VAR3 & VAR22)
            {
                if (!(VAR18 & VAR23))
                {
                    VAR12 = FUN6((VAR5 & VAR14), &VAR8->VAR3, VAR18, VAR8->VAR4);
                }
                else
                {
                    VAR12 = VAR24[(VAR18 & ~VAR14) >> VAR25];
                }
                FUN7(VAR12, VAR19, VAR20, VAR3, VAR4);
                VAR8->VAR4 = 0;
            }
            else
            {
                VAR8->VAR3 = VAR3;
                if ((VAR3 & ~VAR14) <= VAR26 || (VAR3 & VAR27))
                    VAR3 += VAR15;
            }
        }
        else
        {
            VAR8 = FUN8(VAR5 >> VAR17, 1);
            VAR8->VAR3 = VAR3;
            VAR8->VAR4 = VAR4;
            if ((VAR3 & ~VAR14) <= VAR26 || (VAR3 & VAR27))
            {
                VAR3 += VAR15;
            }
            else
            {
                target_phys_addr_t VAR19, VAR20;
                int VAR21 = 0;
                FUN5(VAR5, VAR1, VAR19, VAR6, VAR20, VAR21);
                if (VAR21 || VAR3 & VAR22)
                {
                    VAR12 = FUN6((VAR5 & VAR14), &VAR8->VAR3, VAR13, VAR5 & VAR14);
                    FUN7(VAR12, VAR19, VAR20, VAR3, VAR4);
                    VAR8->VAR4 = 0;
                }
            }
        }
        VAR4 += VAR15;
    }
    for (VAR10 = VAR28; VAR10 != NULL; VAR10 = VAR10->VAR29)
    {
        FUN9(VAR10, 1);
    }
}