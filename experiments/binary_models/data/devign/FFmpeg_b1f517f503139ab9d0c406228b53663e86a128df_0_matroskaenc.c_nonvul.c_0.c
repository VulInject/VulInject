static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR4->VAR13]->VAR11;
    int VAR14 = !!(VAR4->VAR15 & VAR16);
    int VAR17 = VAR4->VAR17;
    int VAR18;
    int64_t VAR19 = VAR6->VAR20[VAR4->VAR13].VAR21 ? VAR4->VAR22 : VAR4->VAR23;
    if (VAR19 == VAR24)
    {
        FUN2(VAR2, VAR25, "");
        return FUN3(VAR26);
    }
    if (!VAR2->VAR9->VAR27)
    {
        if (!VAR6->VAR28)
        {
            if ((VAR18 = FUN4(&VAR6->VAR28)) < 0)
            {
                FUN2(VAR2, VAR25, "");
                return VAR18;
            }
        }
        VAR9 = VAR6->VAR28;
    }
    if (VAR6->VAR29 == -1)
    {
        VAR6->VAR29 = FUN5(VAR2->VAR9);
        VAR6->VAR30 = FUN6(VAR9, VAR31, 0);
        FUN7(VAR9, VAR32, FUN8(0, VAR19));
        VAR6->VAR33 = FUN8(0, VAR19);
    }
    if (VAR11->VAR34 != VAR35)
    {
        FUN9(VAR2, VAR9, VAR36, VAR4, VAR14 << 7);
    }
    else if (VAR11->VAR37 == VAR38)
    {
        VAR17 = FUN10(VAR2, VAR9, VAR4);
    }
    else if (VAR11->VAR37 == VAR39)
    {
        VAR17 = FUN11(VAR2, VAR9, VAR4);
    }
    else
    {
        ebml_master VAR40 = FUN6(VAR9, VAR41, FUN12(VAR4->VAR42));
        if (VAR4->VAR43 > 0)
        {
            VAR17 = VAR4->VAR43;
        }
        FUN9(VAR2, VAR9, VAR44, VAR4, 0);
        FUN7(VAR9, VAR45, VAR17);
        FUN13(VAR9, VAR40);
    }
    if (VAR11->VAR34 == VAR46 && VAR14)
    {
        VAR18 = FUN14(VAR6->VAR47, VAR4->VAR13, VAR19, VAR6->VAR29);
        if (VAR18 < 0)
            return VAR18;
    }
    VAR6->VAR17 = FUN8(VAR6->VAR17, VAR19 + VAR17);
    return 0;
}