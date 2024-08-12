static int FUN1(VAR1 *VAR2, unsigned int VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = FUN2(VAR8, VAR2, VAR2);
    VAR10 *VAR11;
    int VAR12;
    FUN3(VAR9->VAR13.VAR14, VAR3);
    VAR11 = &VAR9->VAR15[VAR3];
    if (!VAR11->VAR16)
    {
        VAR11->VAR9 = VAR9;
        VAR11->VAR17 = -1;
        if (FUN4(&VAR11->VAR18, 0))
        {
            FUN5("");
        }
        VAR11->VAR16 = true;
        FUN6(VAR2, VAR3);
    }
    FUN7(FUN8(&VAR11->VAR18), VAR7, NULL, VAR11);
    if (VAR11->VAR17 >= 0)
    {
        if (!VAR5)
        {
            FUN9(VAR11);
        }
        else
        {
            FUN10(VAR11, *VAR5);
        }
    }
    else
    {
        FUN11(VAR9, VAR11, VAR5, true);
    }
    if (VAR9->VAR19 < VAR3 + 1)
    {
        FUN12(&VAR9->VAR13, VAR20);
        VAR9->VAR19 = VAR3 + 1;
        VAR12 = FUN13(VAR9, true);
        if (VAR12)
        {
            FUN5("", VAR12);
        }
    }
    else
    {
        int VAR21;
        struct VAR22 *VAR23;
        VAR24 *VAR25;
        VAR21 = sizeof(*VAR23) + sizeof(*VAR25);
        VAR23 = FUN14(VAR21);
        VAR23->VAR21 = VAR21;
        VAR23->VAR26 = VAR27 | VAR28;
        VAR23->VAR29 = VAR20;
        VAR23->VAR30 = VAR3;
        VAR23->VAR31 = 1;
        VAR25 = (VAR24 *)&VAR23->VAR32;
        if (VAR11->VAR17 >= 0)
        {
            *VAR25 = FUN8(&VAR11->VAR33);
        }
        else
        {
            *VAR25 = FUN8(&VAR11->VAR18);
        }
        VAR12 = FUN15(VAR9->VAR13.VAR34, VAR35, VAR23);
        FUN16(VAR23);
        if (VAR12)
        {
            FUN5("", VAR12);
        }
    }
    return 0;
}