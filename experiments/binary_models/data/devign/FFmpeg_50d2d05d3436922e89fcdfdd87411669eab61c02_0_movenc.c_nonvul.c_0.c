static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR6->VAR7;
    if (VAR4->VAR8 == VAR9 || VAR4->VAR8 == VAR10)
    {
        if (!FUN2(VAR11, VAR4->VAR6->VAR12))
            return 0;
        if (VAR4->VAR6->VAR12 == VAR13)
            VAR5 = FUN3('', '', '', '');
        else if (VAR4->VAR6->VAR12 == VAR14)
            VAR5 = FUN3('', '', '', '');
        else if (VAR4->VAR6->VAR12 == VAR15)
            VAR5 = FUN3('', '', '', '');
        else if (VAR4->VAR6->VAR12 == VAR16)
            VAR5 = FUN3('', '', '', '');
        else if (VAR4->VAR6->VAR17 == VAR18)
            VAR5 = FUN3('', '', '', '');
        else if (VAR4->VAR6->VAR17 == VAR19)
            VAR5 = FUN3('', '', '', '');
    }
    else if (VAR4->VAR8 == VAR20)
    {
        if (VAR4->VAR6->VAR17 == VAR21 && (VAR5 == FUN3('', '', '', '') || VAR5 == FUN3('', '', '', '')))
            VAR4->VAR5 = VAR5;
        else
            VAR5 = FUN2(VAR22, VAR4->VAR6->VAR12);
        if (!FUN4(VAR2->VAR23, "") && !FUN4(VAR2->VAR23, ""))
            FUN5(VAR2, VAR24, ""
                                      "");
    }
    else if (VAR4->VAR8 & VAR25)
    {
        VAR5 = FUN2(VAR26, VAR4->VAR6->VAR12);
    }
    else if (!VAR5 || (VAR4->VAR6->VAR27 >= VAR28 && (VAR5 == FUN3('', '', '', '') || VAR4->VAR6->VAR12 == VAR29 || FUN6(VAR4->VAR6->VAR12))))
    {
        if (VAR4->VAR6->VAR12 == VAR30)
        {
            if (VAR4->VAR6->VAR31 == 480)
                if (VAR4->VAR6->VAR32 == VAR33)
                    VAR5 = FUN3('', '', '', '');
                else
                    VAR5 = FUN3('', '', '', '');
            else if (VAR4->VAR6->VAR32 == VAR33)
                VAR5 = FUN3('', '', '', '');
            else if (VAR4->VAR6->VAR32 == VAR34)
                VAR5 = FUN3('', '', '', '');
            else
                VAR5 = FUN3('', '', '', '');
        }
        else if (VAR4->VAR6->VAR12 == VAR29)
        {
            VAR5 = FUN2(VAR35, VAR4->VAR6->VAR32);
            if (!VAR5)
                VAR5 = VAR4->VAR6->VAR7;
        }
        else
        {
            if (VAR4->VAR6->VAR17 == VAR18)
            {
                VAR5 = FUN2(VAR36, VAR4->VAR6->VAR12);
                if (!VAR5)
                {
                    VAR5 = FUN2(VAR37, VAR4->VAR6->VAR12);
                    if (VAR5)
                        FUN5(VAR2, VAR38, ""
                                               "");
                }
            }
            else if (VAR4->VAR6->VAR17 == VAR19)
            {
                VAR5 = FUN2(VAR39, VAR4->VAR6->VAR12);
                if (!VAR5)
                {
                    int VAR40 = FUN2(VAR41, VAR4->VAR6->VAR12);
                    if (VAR40)
                    {
                        VAR5 = FUN3('', '', ((VAR40 >> 8) & 0xff), (VAR40 & 0xff));
                        FUN5(VAR2, VAR38, ""
                                               "");
                    }
                }
            }
            else if (VAR4->VAR6->VAR17 == VAR21)
            {
                VAR5 = FUN2(VAR42, VAR4->VAR6->VAR12);
            }
        }
    }
    return VAR5;
}