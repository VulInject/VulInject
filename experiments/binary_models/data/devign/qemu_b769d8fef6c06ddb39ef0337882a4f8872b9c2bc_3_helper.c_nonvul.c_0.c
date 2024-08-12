void FUN1(unsigned long VAR1, int VAR2, int VAR3, void *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    unsigned long VAR9;
    int VAR10;
    VAR8 = VAR11;
    VAR11 = VAR12;
    {
        unsigned long VAR13, VAR14;
        int VAR15;
        VAR15 = (VAR1 >> VAR16) & (VAR17 - 1);
        VAR13 = VAR11->VAR18[VAR3][VAR15].VAR19;
        VAR14 = VAR11->VAR20[VAR3][VAR15].VAR19;
        if (VAR21)
        {
            fprintf(VAR22, ""
                             "",
                    VAR23, VAR11, &VAR11->VAR18[VAR3][VAR15], VAR15, VAR1, VAR13, VAR14, VAR1 & VAR24, VAR13 & (VAR24 | VAR25));
        }
    }
    VAR10 = FUN2(VAR11, VAR1, VAR2, VAR3, 1);
    if (VAR10)
    {
        if (VAR4)
        {
            VAR9 = (unsigned long)VAR4;
            VAR6 = FUN3(VAR9);
            if (VAR6)
            {
                FUN4(VAR6, VAR11, VAR9, NULL);
            }
        }
        FUN5(VAR11->VAR26, VAR11->VAR27);
    }
    {
        unsigned long VAR13, VAR14;
        int VAR15;
        VAR15 = (VAR1 >> VAR16) & (VAR17 - 1);
        VAR13 = VAR11->VAR18[VAR3][VAR15].VAR19;
        VAR14 = VAR11->VAR20[VAR3][VAR15].VAR19;
        FUN6(""
               "",
               VAR23, VAR11, &VAR11->VAR18[VAR3][VAR15], VAR15, VAR1, VAR13, VAR14, VAR1 & VAR24, VAR13 & (VAR24 | VAR25));
    }
    VAR11 = VAR8;
}