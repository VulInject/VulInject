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
            else if (FUN3())
            {
                FUN4();
            }
            else
            {
                VAR6 = VAR14;
                FUN5(VAR8, VAR2);
                if (VAR4->VAR15 >= 0)
                {
                    VAR6 |= VAR16 ? VAR17 | VAR18 : VAR19;
                    VAR6 |= VAR19;
                    VAR7 = FUN6(VAR8, VAR2, VAR20 | VAR21, VAR6, VAR4->VAR15, VAR5);
                }
                else
                {
                    VAR6 |= VAR18 | VAR22;
                    VAR7 = FUN6(VAR8, VAR2, VAR23 | VAR20 | VAR21, VAR6, -1, 0);
                    VAR6 |= VAR19 | VAR22;
                    VAR7 = FUN6(VAR8, VAR2, VAR20 | VAR21, VAR6, -1, 0);
                }
                if (VAR7 != VAR8)
                {
                    fprintf(VAR24, "" VAR25 "" VAR25 "", VAR2, VAR1);
                    FUN7(1);
                }
                FUN8(VAR8, VAR2);
                FUN9(VAR8, VAR2);
            }
            return;
        }
    }
}