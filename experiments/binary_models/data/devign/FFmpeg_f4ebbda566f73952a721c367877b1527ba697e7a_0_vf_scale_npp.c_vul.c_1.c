static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    enum AVPixelFormat VAR12;
    enum AVPixelFormat VAR13;
    enum AVPixelFormat VAR14;
    enum AVPixelFormat VAR15;
    int VAR16, VAR17, VAR18 = -1;
    if (!VAR2->VAR19[0]->VAR20)
    {
        FUN2(VAR2, VAR21, "");
        return FUN3(VAR22);
    }
    VAR11 = (VAR10 *)VAR2->VAR19[0]->VAR20->VAR23;
    VAR12 = VAR11->VAR24;
    VAR13 = (VAR8->VAR25 == VAR26) ? VAR12 : VAR8->VAR25;
    if (!FUN4(VAR12))
    {
        FUN2(VAR2, VAR21, "", FUN5(VAR12));
        return FUN3(VAR27);
    }
    if (!FUN4(VAR13))
    {
        FUN2(VAR2, VAR21, "", FUN5(VAR13));
        return FUN3(VAR27);
    }
    VAR14 = FUN6(VAR12);
    VAR15 = FUN6(VAR13);
    if (VAR14 == VAR26 || VAR15 == VAR26)
        return VAR28;
    if (VAR3 != VAR5 || VAR4 != VAR6 || VAR14 != VAR15)
    {
        VAR8->VAR29[VAR30].VAR31 = 1;
        if (VAR8->VAR32 == VAR33 && (VAR5 > VAR3 && VAR6 > VAR4))
        {
            VAR8->VAR32 = VAR34;
            FUN2(VAR2, VAR35, "");
        }
        if (VAR8->VAR32 == VAR33 && !(VAR5 < VAR3 && VAR6 < VAR4))
        {
            VAR8->VAR32 = VAR36;
            FUN2(VAR2, VAR35, "");
        }
    }
    if (!VAR8->VAR29[VAR30].VAR31 && VAR12 == VAR13)
        VAR8->VAR37 = 1;
    if (!VAR8->VAR37)
    {
        if (VAR12 != VAR14)
            VAR8->VAR29[VAR38].VAR31 = 1;
        if (VAR13 != VAR15)
            VAR8->VAR29[VAR39].VAR31 = 1;
    }
    VAR8->VAR29[VAR38].VAR40 = VAR12;
    VAR8->VAR29[VAR38].VAR41 = VAR14;
    VAR8->VAR29[VAR38].VAR42[0].VAR43 = VAR3;
    VAR8->VAR29[VAR38].VAR42[0].VAR44 = VAR4;
    VAR8->VAR29[VAR30].VAR40 = VAR14;
    VAR8->VAR29[VAR30].VAR41 = VAR15;
    VAR8->VAR29[VAR30].VAR42[0].VAR43 = VAR3;
    VAR8->VAR29[VAR30].VAR42[0].VAR44 = VAR4;
    VAR8->VAR29[VAR30].VAR45[0].VAR43 = VAR5;
    VAR8->VAR29[VAR30].VAR45[0].VAR44 = VAR6;
    VAR8->VAR29[VAR39].VAR40 = VAR15;
    VAR8->VAR29[VAR39].VAR41 = VAR13;
    VAR8->VAR29[VAR39].VAR42[0].VAR43 = VAR5;
    VAR8->VAR29[VAR39].VAR42[0].VAR44 = VAR6;
    for (VAR16 = 0; VAR16 < FUN7(VAR8->VAR29); VAR16++)
    {
        if (!VAR8->VAR29[VAR16].VAR31)
            continue;
        VAR17 = FUN8(&VAR8->VAR29[VAR16], VAR11->VAR46);
        if (VAR17 < 0)
            return VAR17;
        VAR18 = VAR16;
    }
    if (VAR18 < 0)
    {
        VAR2->VAR47[0]->VAR20 = FUN9(VAR2->VAR19[0]->VAR20);
        return 0;
    }
    VAR2->VAR47[0]->VAR20 = FUN9(VAR8->VAR29[VAR18].VAR48);
    if (!VAR2->VAR47[0]->VAR20)
        return FUN3(VAR49);
    return 0;
}