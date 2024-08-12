static int FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR5->VAR8;
    enum AVMediaType VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13 = 0, VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    if (!VAR8->VAR19)
    {
        if (VAR5->VAR20)
        {
            if (VAR5->VAR11[VAR3].VAR21)
            {
                if (VAR5->VAR22 != 1)
                {
                    VAR12 = FUN2(VAR2);
                    if (VAR12 < 0)
                        return VAR12;
                    VAR5->VAR22 -= VAR5->VAR22 > 1;
                    FUN3(VAR2, VAR23, "");
                    return 0;
                }
                return VAR24;
            }
            VAR8->VAR25 = VAR5->VAR11[VAR3].VAR11->VAR26;
        }
        else
        {
            VAR12 = FUN4(VAR5->VAR27, &VAR5->VAR28);
            if (VAR12 < 0)
            {
                FUN5(&VAR5->VAR28);
                *VAR8 = VAR5->VAR28;
                if (VAR12 == VAR24)
                {
                    VAR5->VAR20 = 1;
                    return 0;
                }
                return VAR12;
            }
            *VAR8 = VAR5->VAR28;
        }
    }
    VAR14 = VAR8->VAR25 > VAR5->VAR29 ? -1 : VAR5->VAR30[VAR8->VAR25];
    if (VAR14 < 0)
    {
        FUN6(&VAR5->VAR28);
        VAR8->VAR19 = 0;
        VAR8->VAR31 = NULL;
        return 0;
    }
    VAR11 = &VAR5->VAR11[VAR14];
    VAR16 = VAR2->VAR32[VAR14];
    VAR18 = FUN7();
    if (!VAR18)
        return FUN8(VAR33);
    VAR9 = VAR11->VAR11->VAR34->VAR35;
    switch (VAR9)
    {
    case VAR36:
        VAR12 = FUN9(VAR11->VAR11->VAR34, VAR18, &VAR13, VAR8);
        break;
    case VAR37:
        VAR12 = FUN10(VAR11->VAR11->VAR34, VAR18, &VAR13, VAR8);
        break;
    default:
        VAR12 = FUN8(VAR38);
        break;
    }
    if (VAR12 < 0)
    {
        FUN3(VAR2, VAR39, "", FUN11(VAR12));
        FUN12(&VAR18);
        FUN6(&VAR5->VAR28);
        VAR5->VAR8.VAR19 = 0;
        VAR5->VAR8.VAR31 = NULL;
        return 0;
    }
    if (!VAR12 || VAR11->VAR11->VAR34->VAR35 == VAR36)
        VAR12 = VAR8->VAR19;
    VAR8->VAR31 += VAR12;
    VAR8->VAR19 -= VAR12;
    if (VAR8->VAR19 <= 0)
    {
        FUN6(&VAR5->VAR28);
        VAR8->VAR19 = 0;
        VAR8->VAR31 = NULL;
    }
    if (!VAR13)
    {
        if (!VAR12)
            VAR11->VAR21 = 1;
        FUN12(&VAR18);
        return 0;
    }
    VAR18->VAR40 = FUN13(VAR18);
    FUN14(VAR2, "", VAR5->VAR41, FUN15((char[1024]){0}, 1024, VAR18, VAR9, VAR16));
    if (VAR11->VAR11->VAR34->VAR35 == VAR36)
    {
        if (VAR18->VAR42 != VAR16->VAR42)
        {
            FUN3(VAR2, VAR43, "", FUN16(VAR16->VAR42), FUN16(VAR18->VAR42));
            FUN12(&VAR18);
            return 0;
        }
    }
    VAR12 = FUN17(VAR16, VAR18);
    if (VAR12 < 0)
        return VAR12;
    return VAR14 == VAR3;
}