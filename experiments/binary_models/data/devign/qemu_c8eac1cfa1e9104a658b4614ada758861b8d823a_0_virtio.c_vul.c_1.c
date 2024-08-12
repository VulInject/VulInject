int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6, VAR7;
    target_phys_addr_t VAR8 = VAR2->VAR9.VAR10;
    if (!FUN2(VAR2, VAR2->VAR11))
        return 0;
    VAR4->VAR12 = VAR4->VAR13 = 0;
    VAR7 = VAR2->VAR9.VAR14;
    VAR5 = VAR6 = FUN3(VAR2, VAR2->VAR11++);
    if (VAR2->VAR15->VAR16 & (1 << VAR17))
    {
        FUN4(VAR2, FUN5(VAR2));
        if (FUN6(VAR8, VAR5) & VAR18)
        {
            if (FUN7(VAR8, VAR5) % sizeof(VAR19))
            {
                FUN8("");
                VAR7 = FUN7(VAR8, VAR5) / sizeof(VAR19);
                VAR8 = FUN9(VAR8, VAR5);
                VAR5 = 0;
                do
                {
                    struct VAR20 *VAR21;
                    if (FUN6(VAR8, VAR5) & VAR22)
                    {
                        VAR4->VAR23[VAR4->VAR13] = FUN9(VAR8, VAR5);
                        VAR21 = &VAR4->VAR24[VAR4->VAR13++];
                    }
                    else
                    {
                        VAR4->VAR25[VAR4->VAR12] = FUN9(VAR8, VAR5);
                        VAR21 = &VAR4->VAR26[VAR4->VAR12++];
                        VAR21->VAR27 = FUN7(VAR8, VAR5);
                        if ((VAR4->VAR13 + VAR4->VAR12) > VAR7)
                        {
                            FUN8("");
                        }
                        while ((VAR5 = FUN10(VAR8, VAR5, VAR7)) != VAR7)
                            ;
                        FUN11(VAR4->VAR24, VAR4->VAR23, VAR4->VAR13, 1);
                        FUN11(VAR4->VAR26, VAR4->VAR25, VAR4->VAR12, 0);
                        VAR4->VAR28 = VAR6;
                        VAR2->VAR29++;
                        FUN12(VAR2, VAR4, VAR4->VAR13, VAR4->VAR12);
                        return VAR4->VAR13 + VAR4->VAR12;