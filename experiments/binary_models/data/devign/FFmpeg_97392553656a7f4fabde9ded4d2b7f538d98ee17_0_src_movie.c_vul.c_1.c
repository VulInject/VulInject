static int FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR5->VAR8;
    enum AVMediaType VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13 = 0, VAR14;
    VAR15 *VAR16;
    if (!VAR8->VAR17)
    {
        if (VAR5->VAR18)
        {
            if (VAR5->VAR11[VAR3].VAR19)
            {
                if (VAR5->VAR20 != 1)
                {
                    VAR12 = FUN2(VAR2);
                    if (VAR12 < 0)
                        return VAR12;
                    VAR5->VAR20 -= VAR5->VAR20 > 1;
                    FUN3(VAR2, VAR21, "");
                    return 0;
                }
                return VAR22;
            }
            VAR8->VAR23 = VAR5->VAR11[VAR3].VAR11->VAR24;
        }
        else
        {
            VAR12 = FUN4(VAR5->VAR25, &VAR5->VAR26);
            if (VAR12 < 0)
            {
                FUN5(&VAR5->VAR26);
                *VAR8 = VAR5->VAR26;
                if (VAR12 == VAR22)
                {
                    VAR5->VAR18 = 1;
                    return 0;
                }
                return VAR12;
            }
            *VAR8 = VAR5->VAR26;
        }
    }
    VAR14 = VAR8->VAR23 > VAR5->VAR27 ? -1 : VAR5->VAR28[VAR8->VAR23];
    if (VAR14 < 0)
    {
        FUN6(&VAR5->VAR26);
        VAR8->VAR17 = 0;
        VAR8->VAR29 = NULL;
        return 0;
    }
    VAR11 = &VAR5->VAR11[VAR14];
    VAR16 = VAR2->VAR30[VAR14];
    VAR5->VAR31 = FUN7();
    if (!VAR5->VAR31)
        return FUN8(VAR32);
    VAR9 = VAR11->VAR11->VAR33->VAR34;
    switch (VAR9)
    {
    case VAR35:
        VAR12 = FUN9(VAR11->VAR11->VAR33, VAR5->VAR31, &VAR13, VAR8);
        break;
    case VAR36:
        VAR12 = FUN10(VAR11->VAR11->VAR33, VAR5->VAR31, &VAR13, VAR8);
        break;
    default:
        VAR12 = FUN8(VAR37);
        break;
    }
    if (VAR12 < 0)
    {
        FUN3(VAR2, VAR38, "", FUN11(VAR12));
        FUN12(&VAR5->VAR31);
        FUN6(&VAR5->VAR26);
        VAR5->VAR8.VAR17 = 0;
        VAR5->VAR8.VAR29 = NULL;
        return 0;
    }
    if (!VAR12 || VAR11->VAR11->VAR33->VAR34 == VAR35)
        VAR12 = VAR8->VAR17;
    VAR8->VAR29 += VAR12;
    VAR8->VAR17 -= VAR12;
    if (VAR8->VAR17 <= 0)
    {
        FUN6(&VAR5->VAR26);
        VAR8->VAR17 = 0;
        VAR8->VAR29 = NULL;
    }
    if (!VAR13)
    {
        if (!VAR12)
            VAR11->VAR19 = 1;
        FUN12(&VAR5->VAR31);
        return 0;
    }
    VAR5->VAR31->VAR39 = FUN13(VAR5->VAR31);
    FUN14(VAR2, "", VAR5->VAR40, FUN15((char[1024]){0}, 1024, VAR5->VAR31, VAR9, VAR16));
    if (VAR11->VAR11->VAR33->VAR34 == VAR35)
    {
        if (VAR5->VAR31->VAR41 != VAR16->VAR41)
        {
            FUN3(VAR2, VAR42, "", FUN16(VAR16->VAR41), FUN16(VAR5->VAR31->VAR41));
            FUN12(&VAR5->VAR31);
            return 0;
        }
    }
    VAR12 = FUN17(VAR16, VAR5->VAR31);
    VAR5->VAR31 = NULL;
    if (VAR12 < 0)
        return VAR12;
    return VAR14 == VAR3;
}