void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR4 && VAR2->VAR5->VAR6)
    {
        FUN2(VAR2);
    }
    else if ((VAR2->VAR7 || VAR2->VAR8 || !(VAR2->VAR5->VAR9->VAR10 & VAR11)) && !VAR2->VAR5->VAR12 && !(VAR2->VAR5->VAR9->VAR10 & VAR13) && VAR2->VAR14 && VAR2->VAR15.VAR16.VAR17 && !VAR2->VAR18 && !(VAR2->VAR19 & VAR20))
    {
        int VAR21 = VAR22[VAR2->VAR5->VAR23].VAR24;
        int VAR25 = VAR22[VAR2->VAR5->VAR23].VAR26;
        VAR2->VAR27.FUN3(VAR2->VAR15.VAR16.VAR28[0], VAR2->VAR15.VAR16.VAR29[0], VAR2->VAR30, VAR2->VAR31, VAR32, VAR32, VAR33 | VAR34);
        VAR2->VAR27.FUN3(VAR2->VAR15.VAR16.VAR28[1], VAR2->VAR15.VAR16.VAR29[1], VAR2->VAR30 >> VAR21, VAR2->VAR31 >> VAR25, VAR32 >> VAR21, VAR32 >> VAR25, VAR33 | VAR34);
        VAR2->VAR27.FUN3(VAR2->VAR15.VAR16.VAR28[2], VAR2->VAR15.VAR16.VAR29[2], VAR2->VAR30 >> VAR21, VAR2->VAR31 >> VAR25, VAR32 >> VAR21, VAR32 >> VAR25, VAR33 | VAR34);
    }
    FUN4();
    VAR2->VAR35 = VAR2->VAR36;
    VAR2->VAR37[VAR2->VAR36] = VAR2->VAR38->VAR16.VAR39;
    if (VAR2->VAR36 != VAR40)
    {
        VAR2->VAR41 = VAR2->VAR36;
    }
    for (VAR3 = 0; VAR3 < VAR42; VAR3++)
    {
        if (VAR2->VAR43[VAR3].VAR16.VAR28[0] == VAR2->VAR15.VAR16.VAR28[0])
        {
            VAR2->VAR43[VAR3] = VAR2->VAR15;
            break;
        }
    }
    assert(VAR3 < VAR42);
    if (VAR2->VAR8)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR44; VAR3++)
        {
            if (VAR2->VAR43[VAR3].VAR16.VAR28[0] && !VAR2->VAR43[VAR3].VAR16.VAR17)
            {
                FUN5(VAR2, &VAR2->VAR43[VAR3]);
            }
        }
    }
    memset(&VAR2->VAR45, 0, sizeof(VAR46));
    memset(&VAR2->VAR47, 0, sizeof(VAR46));
    memset(&VAR2->VAR15, 0, sizeof(VAR46));
    VAR2->VAR5->VAR48 = &VAR2->VAR38->VAR16;
    if (VAR2->VAR49 != VAR50 && VAR2->VAR15.VAR16.VAR17)
    {
        FUN6(&VAR2->VAR38->VAR16, VAR51, 0);
    }
}