static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    VAR4 *VAR5 = &VAR2->VAR6;
    for (VAR3 = 0; VAR3 < VAR7; VAR3++)
    {
        VAR8 *VAR9 = &VAR5->VAR10[VAR3];
        uint8_t VAR11;
        if (VAR9->VAR12 == 0 || VAR9->VAR13 == 0)
        {
            continue;
        }
        VAR2->VAR14[VAR3].VAR15.VAR16 = VAR9->VAR12;
        if (VAR9->VAR11 & VAR17)
        {
            VAR11 = VAR18;
        }
        else
        {
            VAR11 = VAR19;
            if (VAR9->VAR11 & VAR20)
            {
                VAR11 |= VAR21;
            }
            if (VAR9->VAR11 & VAR22)
            {
                VAR11 |= VAR23;
            }
        }
        FUN2(&VAR2->VAR24[VAR3], FUN3(VAR2), &VAR25, &VAR2->VAR26, "", VAR9->VAR13);
        FUN4(&VAR2->VAR26, VAR3, VAR11, &VAR2->VAR24[VAR3]);
        FUN5(&VAR2->VAR26, "" VAR27 "" VAR27 "", VAR3, VAR9->VAR13, VAR9->VAR12, VAR11);
    }
    if (VAR5->VAR28.VAR12 && VAR5->VAR28.VAR13)
    {
        uint32_t VAR29 = 0;
        if (FUN6(VAR5, VAR30, &VAR29))
        {
            return 0;
        }
        if ((VAR29 & VAR31) == 0)
        {
            VAR29 |= VAR5->VAR28.VAR12 & VAR31;
            FUN7(VAR5, VAR30, VAR29);
        }
        VAR2->VAR14[VAR7].VAR15.VAR32 = VAR5->VAR28.VAR12;
        FUN2(&VAR2->VAR28, FUN3(VAR2), &VAR25, &VAR2->VAR26, "", VAR5->VAR28.VAR13);
        FUN4(&VAR2->VAR26, VAR7, VAR21, &VAR2->VAR28);
        FUN5(&VAR2->VAR26, "" VAR27 "" VAR27 "", VAR5->VAR28.VAR13, VAR5->VAR28.VAR12);
    }
    return 0;
}