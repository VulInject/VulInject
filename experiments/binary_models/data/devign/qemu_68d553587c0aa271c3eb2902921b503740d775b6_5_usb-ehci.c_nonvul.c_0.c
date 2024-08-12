static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    uint32_t VAR5;
    VAR1 *VAR6;
    int VAR7;
    VAR5 = FUN2(VAR3, VAR4);
    VAR6 = FUN3(VAR3, VAR5);
    if (NULL == VAR6)
    {
        VAR6 = FUN4(VAR3, VAR4);
    }
    VAR6->VAR8 = VAR5;
    VAR6->VAR9++;
    if (VAR6->VAR9 > 1)
    {
        FUN5(VAR3, VAR4, VAR10);
        VAR6 = NULL;
        goto VAR11;
    }
    FUN6(VAR3, FUN7(VAR6->VAR8), (VAR12 *)&VAR6->VAR13, sizeof(VAR14) >> 2);
    FUN8(VAR6, FUN7(VAR6->VAR8), &VAR6->VAR13);
    if (VAR6->VAR4 == VAR15)
    {
        FUN5(VAR3, VAR4, VAR16);
        goto VAR11;
    }
    if (VAR6->VAR4 == VAR17)
    {
        FUN9(VAR6, "");
        FUN5(VAR3, VAR4, VAR18);
        goto VAR11;
    }
    if (VAR4 && (VAR6->VAR13.VAR19 & VAR20))
    {
        if (VAR3->VAR21 & VAR22)
        {
            FUN10(VAR3, VAR22);
        }
        else
        {
            FUN11(""
                    "",
                    VAR6->VAR8);
            FUN5(VAR3, VAR4, VAR10);
            VAR6 = NULL;
            goto VAR11;
        }
    }
    if (VAR6->VAR8 != VAR6->VAR13.VAR23)
    {
        FUN11("", VAR6->VAR8, VAR6->VAR13.VAR19 & VAR20, VAR6->VAR13.VAR24 & VAR25, VAR6->VAR13.VAR24 & VAR26, VAR6->VAR13.VAR23);
    }
    VAR7 = FUN12(VAR6->VAR13.VAR19, VAR27);
    if (VAR7)
    {
        FUN13(&VAR6->VAR13.VAR28, VAR7, VAR29);
    }
    if (VAR6->VAR13.VAR24 & VAR25)
    {
        FUN5(VAR3, VAR4, VAR16);
    }
    else if ((VAR6->VAR13.VAR24 & VAR26) && (VAR6->VAR13.VAR30 > 0x1000))
    {
        VAR6->VAR31 = VAR6->VAR13.VAR30;
        FUN5(VAR3, VAR4, VAR32);
    }
    else
    {
        FUN5(VAR3, VAR4, VAR33);
    }
VAR11:
    return VAR6;
}