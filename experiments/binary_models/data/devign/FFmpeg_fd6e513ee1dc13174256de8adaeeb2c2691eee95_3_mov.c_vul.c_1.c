static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    int VAR11 = 0;
    VAR12 *VAR13;
    uint32_t VAR14;
    uint32_t VAR15;
    FUN2("", VAR5);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    VAR15 = FUN4(VAR4);
    VAR14 = FUN4(VAR4);
    FUN5("", *((char *)&VAR15), ((char *)&VAR15)[1], ((char *)&VAR15)[2], ((char *)&VAR15)[3], (long)VAR15);
    FUN5("", *((char *)&VAR14), ((char *)&VAR14)[1], ((char *)&VAR14)[2], ((char *)&VAR14)[3]);
    if (VAR15 == FUN6('', '', '', ''))
    {
        if (VAR14 == FUN6('', '', '', ''))
            FUN7("");
        else if (VAR14 == FUN6('', '', '', ''))
            FUN7("");
    }
    else if (VAR15 == 0)
    {
        if (VAR14 == FUN6('', '', '', ''))
            FUN7("");
        else if (VAR14 == FUN6('', '', '', ''))
            FUN7("");
        else if (VAR14 == FUN6('', '', '', ''))
            FUN7("");
        else if (VAR14 == FUN6('', '', '', ''))
            FUN7("");
    }
    else
        FUN7("");
    if (VAR15 == FUN6('', '', '', ''))
    {
        VAR2->VAR16 = 0;
        if (VAR14 == FUN6('', '', '', ''))
            VAR7->VAR17.VAR18 = VAR19;
        else if (VAR14 == FUN6('', '', '', ''))
            VAR7->VAR17.VAR18 = VAR20;
    }
    else if (VAR15 == 0)
    {
        VAR2->VAR16 = 1;
        if (VAR14 == FUN6('', '', '', ''))
            VAR7->VAR17.VAR18 = VAR19;
        else if (VAR14 == FUN6('', '', '', ''))
            VAR7->VAR17.VAR18 = VAR20;
    }
    FUN8(VAR4);
    FUN8(VAR4);
    FUN8(VAR4);
    if (VAR5.VAR21 <= 24)
        return 0;
    if (VAR2->VAR16)
    {
        while (FUN3(VAR4) && (++VAR11 < (VAR5.VAR21 - 24)))
            ;
    }
    else
    {
        VAR11 = FUN3(VAR4);
        VAR13 = (VAR12 *)FUN9(VAR11 + 1);
        if (VAR13)
        {
            FUN10(VAR4, VAR13, VAR11);
            VAR13[VAR11] = '';
            FUN5("", VAR13);
            FUN11(VAR13);
        }
        else
            FUN12(VAR4, VAR11);
    }
    return 0;
}