static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6;
    uint32_t VAR7, VAR8;
    VAR1 *VAR9;
    VAR7 = FUN2(VAR3, VAR4);
    VAR9 = FUN3(VAR3, VAR7, VAR4);
    if (NULL == VAR9)
    {
        VAR9 = FUN4(VAR3, VAR7, VAR4);
    }
    VAR6 = FUN5(&VAR9->VAR10);
    VAR9->VAR11++;
    if (VAR9->VAR11 > 1)
    {
        FUN6(VAR3, VAR4, VAR12);
        VAR9 = NULL;
        goto VAR13;
    }
    FUN7(VAR3, FUN8(VAR9->VAR14), (VAR15 *)&VAR9->VAR16, sizeof(VAR17) >> 2);
    FUN9(VAR9, FUN8(VAR9->VAR14), &VAR9->VAR16);
    VAR8 = FUN10(VAR9->VAR16.VAR18, VAR19);
    if (VAR9->VAR20 != NULL && VAR9->VAR20->VAR21 != VAR8)
    {
        if (!FUN11(&VAR9->VAR10))
        {
            FUN12(VAR9);
        }
        VAR9->VAR20 = NULL;
    }
    if (VAR9->VAR20 == NULL)
    {
        VAR9->VAR20 = FUN13(VAR9->VAR3, VAR8);
    }
    if (VAR6 && VAR6->VAR4 == VAR22)
    {
        FUN14(VAR6->VAR23, VAR6, "");
        FUN6(VAR3, VAR4, VAR24);
        goto VAR13;
    }
    if (VAR4 && (VAR9->VAR16.VAR18 & VAR25))
    {
        if (VAR3->VAR26 & VAR27)
        {
            FUN15(VAR3, VAR27);
        }
        else
        {
            FUN16(""
                    "",
                    VAR9->VAR14);
            FUN6(VAR3, VAR4, VAR12);
            VAR9 = NULL;
            goto VAR13;
        }
    }
    if (VAR9->VAR14 != VAR9->VAR16.VAR28)
    {
        FUN16("", VAR9->VAR14, VAR9->VAR16.VAR18 & VAR25, VAR9->VAR16.VAR29 & VAR30, VAR9->VAR16.VAR29 & VAR31, VAR9->VAR16.VAR28);
    }
    if (VAR9->VAR16.VAR29 & VAR30)
    {
        FUN6(VAR3, VAR4, VAR32);
    }
    else if ((VAR9->VAR16.VAR29 & VAR31) && (FUN17(VAR9->VAR16.VAR33) == 0))
    {
        VAR9->VAR34 = VAR9->VAR16.VAR33;
        FUN6(VAR3, VAR4, VAR35);
    }
    else
    {
        FUN6(VAR3, VAR4, VAR36);
    }
VAR13:
    return VAR9;
}