int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR2->VAR4 = FUN2(VAR2->VAR5);
    if (VAR2->VAR4 <= 0 || VAR2->VAR4 > VAR6)
    {
        FUN3(VAR2, VAR7, "" VAR8 "", VAR2->VAR5);
        return FUN4(VAR9);
    }
    VAR2->VAR10 = FUN2(VAR2->VAR11);
    if (VAR2->VAR10 <= 0 || VAR2->VAR10 > VAR6)
    {
        FUN3(VAR2, VAR7, "" VAR8 "", VAR2->VAR11);
        return FUN4(VAR9);
    }
    VAR2->VAR12 = FUN5(VAR2->VAR4, VAR2->VAR10);
    VAR2->VAR13 = VAR2->VAR4 > VAR2->VAR10;
    VAR2->VAR14 = VAR2->VAR10 > VAR2->VAR4 || VAR2->VAR15->VAR16 || (VAR2->VAR10 == VAR2->VAR4 && VAR2->VAR5 != VAR2->VAR11);
    VAR2->VAR17 = VAR2->VAR13 || VAR2->VAR14;
    VAR2->VAR18 = VAR2->VAR19 != VAR2->VAR20 || VAR2->VAR21;
    if (VAR2->VAR22 == VAR23 && (VAR2->VAR17 || VAR2->VAR18))
    {
        enum AVSampleFormat VAR24 = FUN6(VAR2->VAR25);
        enum AVSampleFormat VAR26 = FUN6(VAR2->VAR27);
        int VAR28 = FUN7(FUN8(VAR24), FUN8(VAR26));
        if (VAR28 <= 2)
        {
            VAR2->VAR22 = VAR29;
        }
        else if (VAR2->VAR17)
        {
            VAR2->VAR22 = VAR30;
        }
        else
        {
            if (VAR28 <= 4)
            {
                if (VAR24 == VAR31 || VAR26 == VAR31)
                {
                    if (VAR24 == VAR30 || VAR26 == VAR30)
                    {
                        VAR2->VAR22 = VAR32;
                    }
                    else
                    {
                        VAR2->VAR22 = VAR31;
                    }
                }
                else
                {
                    VAR2->VAR22 = VAR30;
                }
            }
            else
            {
                VAR2->VAR22 = VAR32;
            }
        }
        FUN3(VAR2, VAR33, "", FUN9(VAR2->VAR22));
    }
    if (VAR2->VAR4 == 1)
        VAR2->VAR25 = FUN6(VAR2->VAR25);
    if (VAR2->VAR10 == 1)
        VAR2->VAR27 = FUN6(VAR2->VAR27);
    VAR2->VAR34 = (VAR2->VAR18 || VAR2->VAR17) && VAR2->VAR25 != VAR2->VAR22;
    if (VAR2->VAR18 || VAR2->VAR17)
        VAR2->VAR35 = VAR2->VAR22 != VAR2->VAR27;
    else
        VAR2->VAR35 = VAR2->VAR25 != VAR2->VAR27;
    if (VAR2->VAR17 || VAR2->VAR34)
    {
        VAR2->VAR36 = FUN10(FUN7(VAR2->VAR4, VAR2->VAR10), 0, VAR2->VAR22, "");
        if (!VAR2->VAR36)
        {
            VAR3 = FUN4(VAR9);
            goto VAR37;
        }
    }
    if (VAR2->VAR18)
    {
        VAR2->VAR38 = FUN10(VAR2->VAR10, 0, VAR2->VAR22, "");
        if (!VAR2->VAR38)
        {
            VAR3 = FUN4(VAR9);
            goto VAR37;
        }
    }
    if (VAR2->VAR35)
    {
        VAR2->VAR39 = FUN10(VAR2->VAR10, 0, VAR2->VAR27, "");
        if (!VAR2->VAR39)
        {
            VAR3 = FUN4(VAR9);
            goto VAR37;
        }
    }
    VAR2->VAR40 = FUN11(VAR2->VAR27, VAR2->VAR10, 1024);
    if (!VAR2->VAR40)
    {
        VAR3 = FUN4(VAR41);
        goto VAR37;
    }
    if (VAR2->VAR34)
    {
        VAR2->VAR42 = FUN12(VAR2, VAR2->VAR22, VAR2->VAR25, VAR2->VAR4);
        if (!VAR2->VAR42)
        {
            VAR3 = FUN4(VAR41);
            goto VAR37;
        }
    }
    if (VAR2->VAR35)
    {
        enum AVSampleFormat VAR43;
        if (VAR2->VAR34)
            VAR43 = VAR2->VAR22;
        else
            VAR43 = VAR2->VAR25;
        VAR2->VAR44 = FUN12(VAR2, VAR2->VAR27, VAR43, VAR2->VAR10);
        if (!VAR2->VAR44)
        {
            VAR3 = FUN4(VAR41);
            goto VAR37;
        }
    }
    if (VAR2->VAR18)
    {
        VAR2->VAR45 = FUN13(VAR2);
        if (!VAR2->VAR45)
        {
            VAR3 = FUN4(VAR41);
            goto VAR37;
        }
    }
    if (VAR2->VAR17)
    {
        VAR3 = FUN14(VAR2);
        if (VAR3 < 0)
            goto VAR37;
    }
    return 0;
VAR37:
    FUN15(VAR2);
    return VAR3;
}