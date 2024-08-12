void FUN1(ram_addr_t VAR1, ram_addr_t VAR2)
{
    VAR3 *VAR4;
    ram_addr_t VAR5;
    int VAR6;
    void *VAR7, *VAR8;
    FUN2(VAR4, &VAR9.VAR10, VAR11)
    {
        VAR5 = VAR1 - VAR4->VAR5;
        if (VAR5 < VAR4->VAR2)
        {
            VAR8 = VAR4->VAR12 + VAR5;
            if (VAR4->VAR6 & VAR13)
            {
                ;
            }
            else
            {
                VAR6 = VAR14;
                FUN3(VAR8, VAR2);
                if (VAR15)
                {
                    if (VAR4->VAR16)
                    {
                        VAR6 |= VAR17 ? VAR18 | VAR19 : VAR20;
                        VAR6 |= VAR20;
                        VAR7 = FUN4(VAR8, VAR2, VAR21 | VAR22, VAR6, VAR4->VAR16, VAR5);
                    }
                    else
                    {
                        VAR6 |= VAR20 | VAR23;
                        VAR7 = FUN4(VAR8, VAR2, VAR21 | VAR22, VAR6, -1, 0);
                    }
                }
                else
                {
                    VAR6 |= VAR19 | VAR23;
                    VAR7 = FUN4(VAR8, VAR2, VAR24 | VAR21 | VAR22, VAR6, -1, 0);
                    VAR6 |= VAR20 | VAR23;
                    VAR7 = FUN4(VAR8, VAR2, VAR21 | VAR22, VAR6, -1, 0);
                }
                if (VAR7 != VAR8)
                {
                    fprintf(VAR25, "", VAR2, VAR1);
                    FUN5(1);
                }
                FUN6(VAR8, VAR2, VAR26);
            }
            return;
        }
    }