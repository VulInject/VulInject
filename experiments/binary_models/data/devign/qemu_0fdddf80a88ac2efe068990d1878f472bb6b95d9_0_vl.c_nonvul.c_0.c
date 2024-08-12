void FUN1(int VAR1)
{
    VAR2 *VAR3;
    fd_set VAR4, VAR5, VAR6;
    int VAR7, VAR8;
    struct timeval VAR9;
    FUN2(&VAR1);
    FUN3(&VAR1);
    VAR8 = -1;
    FUN4(&VAR4);
    FUN4(&VAR5);
    FUN4(&VAR6);
    for (VAR3 = VAR10; VAR3 != NULL; VAR3 = VAR3->VAR11)
    {
        if (VAR3->VAR12)
            continue;
        if (VAR3->VAR13 && (!VAR3->VAR14 || VAR3->FUN5(VAR3->VAR15) != 0))
        {
            FUN6(VAR3->VAR16, &VAR4);
            if (VAR3->VAR16 > VAR8)
                VAR8 = VAR3->VAR16;
        }
        if (VAR3->VAR17)
        {
            FUN6(VAR3->VAR16, &VAR5);
            if (VAR3->VAR16 > VAR8)
                VAR8 = VAR3->VAR16;
        }
    }
    VAR9.VAR18 = VAR1 / 1000;
    VAR9.VAR19 = (VAR1 % 1000) * 1000;
    FUN7(&VAR8, &VAR4, &VAR5, &VAR6);
    FUN8();
    VAR7 = FUN9(VAR8 + 1, &VAR4, &VAR5, &VAR6, &VAR9);
    FUN10();
    if (VAR7 > 0)
    {
        VAR2 **VAR20;
        for (VAR3 = VAR10; VAR3 != NULL; VAR3 = VAR3->VAR11)
        {
            if (!VAR3->VAR12 && VAR3->VAR13 && FUN11(VAR3->VAR16, &VAR4))
            {
                VAR3->FUN12(VAR3->VAR15);
            }
            if (!VAR3->VAR12 && VAR3->VAR17 && FUN11(VAR3->VAR16, &VAR5))
            {
                VAR3->FUN13(VAR3->VAR15);
            }
        }
        VAR20 = &VAR10;
        while (*VAR20)
        {
            VAR3 = *VAR20;
            if (VAR3->VAR12)
            {
                *VAR20 = VAR3->VAR11;
                FUN14(VAR3);
            }
            else
                VAR20 = &VAR3->VAR11;
        }
    }
    FUN15(&VAR4, &VAR5, &VAR6, (VAR7 < 0));
    if (VAR21->VAR22 & VAR23)
    {
        VAR21->VAR22 &= ~VAR23;
        FUN16(VAR21);
    }
    if (VAR24)
    {
        if (!VAR25 || FUN17(!(VAR25->VAR26 & VAR27)))
            FUN18(&VAR28[VAR29], FUN19(VAR30));
    }
    FUN18(&VAR28[VAR31], FUN19(VAR32));
    FUN20();
}