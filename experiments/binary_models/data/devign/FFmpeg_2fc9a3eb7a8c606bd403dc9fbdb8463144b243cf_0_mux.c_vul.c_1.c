static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    if (VAR2->VAR7)
    {
        VAR8 *VAR9 = VAR2->VAR10[VAR4->VAR11];
        int64_t VAR12 = FUN2(VAR2->VAR7, VAR13, VAR9->VAR14);
        if (VAR4->VAR15 != VAR16)
            VAR4->VAR15 += VAR12;
        if (VAR4->VAR17 != VAR16)
            VAR4->VAR17 += VAR12;
    }
    if (VAR2->VAR18 > 0)
    {
        VAR8 *VAR9 = VAR2->VAR10[VAR4->VAR11];
        int64_t VAR12 = VAR9->VAR19;
        int64_t VAR20 = VAR2->VAR21->VAR22 ? VAR4->VAR17 : VAR4->VAR15;
        if (VAR2->VAR21->VAR12 == VAR16 && VAR20 != VAR16 && (VAR20 < 0 || VAR2->VAR18 == VAR23))
        {
            VAR2->VAR21->VAR12 = -VAR20;
            VAR2->VAR21->VAR24 = VAR9->VAR14;
        }
        if (VAR2->VAR21->VAR12 != VAR16 && !VAR12)
        {
            VAR12 = VAR9->VAR19 = FUN3(VAR2->VAR21->VAR12, VAR2->VAR21->VAR24, VAR9->VAR14, VAR25);
        }
        if (VAR4->VAR15 != VAR16)
            VAR4->VAR15 += VAR12;
        if (VAR4->VAR17 != VAR16)
            VAR4->VAR17 += VAR12;
        if (VAR2->VAR21->VAR22)
        {
            if (VAR4->VAR17 != VAR16 && VAR4->VAR17 < 0)
            {
                FUN4(VAR2, VAR26, ""
                                          ""
                                          "",
                       FUN5(VAR4->VAR15), VAR4->VAR11);
            }
        }
        else
        {
            FUN6(VAR4->VAR15 == VAR16 || VAR4->VAR15 >= 0 || VAR2->VAR27 > 0);
            if (VAR4->VAR15 != VAR16 && VAR4->VAR15 < 0)
            {
                FUN4(VAR2, VAR26, ""
                                          ""
                                          "",
                       FUN5(VAR4->VAR15), VAR4->VAR11);
            }
        }
    }
    VAR6 = FUN7(VAR4);
    if (!VAR2->VAR21->VAR28)
    {
        VAR5 = VAR2->VAR21->VAR29 ? VAR2->VAR21->VAR29 : FUN8(VAR2);
        if (VAR5 < 0)
            goto VAR30;
    }
    if ((VAR4->VAR31 & VAR32))
    {
        VAR33 *VAR34 = (VAR33 *)VAR4->VAR35;
        FUN9(VAR4->VAR36 == VAR37);
        VAR5 = VAR2->VAR38->FUN10(VAR2, VAR4->VAR11, &VAR34, 0);
        FUN11(&VAR34);
    }
    else
    {
        VAR5 = VAR2->VAR38->FUN1(VAR2, VAR4);
    }
    if (VAR2->VAR39 && VAR5 >= 0)
    {
        if (VAR2->VAR40 && VAR2->VAR31 & VAR41)
            FUN12(VAR2->VAR39);
        if (VAR2->VAR39->VAR42 < 0)
            VAR5 = VAR2->VAR39->VAR42;
    }
VAR30:
    if (VAR6)
        FUN13(VAR4);
    if (VAR5 < 0)
    {
        VAR4->VAR17 = VAR43;
        VAR4->VAR15 = VAR44;
    }
    return VAR5;