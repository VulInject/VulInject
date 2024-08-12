static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7)
{
    VAR3 *VAR8, *VAR9, *VAR10;
    int VAR11;
    AudioData VAR12, VAR13;
    if (VAR2->VAR14)
    {
        FUN2(!VAR2->VAR15);
        FUN3(VAR2->VAR14, VAR4, VAR6, VAR7);
        return VAR5;
    }
    if ((VAR11 = FUN4(&VAR2->VAR8, VAR7)) < 0)
        return VAR11;
    if (VAR2->VAR16)
    {
        FUN2(VAR2->VAR9.VAR17 == VAR2->VAR18);
        if ((VAR11 = FUN4(&VAR2->VAR9, VAR5)) < 0)
            return VAR11;
    }
    else
    {
        FUN2(VAR2->VAR9.VAR17 == VAR2->VAR4.VAR17);
        if ((VAR11 = FUN4(&VAR2->VAR9, VAR7)) < 0)
            return VAR11;
    }
    if ((VAR11 = FUN4(&VAR2->VAR10, VAR5)) < 0)
        return VAR11;
    VAR8 = &VAR2->VAR8;
    VAR13 = VAR2->VAR9;
    VAR9 = &VAR13;
    VAR12 = VAR2->VAR10;
    VAR10 = &VAR12;
    if (VAR2->VAR19 == VAR2->VAR20 && VAR2->VAR6.VAR21 && !VAR2->VAR22)
        VAR8 = VAR6;
    if (VAR2->VAR16 ? !VAR2->VAR15 : !VAR2->VAR23)
        VAR9 = VAR8;
    if (VAR2->VAR16 ? !VAR2->VAR23 : !VAR2->VAR15)
        VAR10 = VAR9;
    if (VAR2->VAR19 == VAR2->VAR24 && VAR2->VAR4.VAR21 && !(VAR2->VAR24 == VAR25 && (VAR2->VAR26.VAR27 & 31)))
    {
        if (VAR10 == VAR6)
        {
            VAR5 = FUN5(VAR5, VAR7);
            FUN2(VAR2->VAR6.VAR21);
            copy(VAR4, VAR6, VAR5);
            return VAR5;
        }
        else if (VAR10 == VAR8)
            VAR10 = VAR9 = VAR8 = VAR4;
        else if (VAR10 == VAR9)
            VAR10 = VAR9 = VAR4;
        else
            VAR10 = VAR4;
    }
    if (VAR6 != VAR8)
    {
        FUN3(VAR2->VAR28, VAR8, VAR6, VAR7);
    }
    if (VAR2->VAR16)
    {
        if (VAR8 != VAR9)
            VAR5 = FUN6(VAR2, VAR9, VAR5, VAR8, VAR7);
        if (VAR9 != VAR10)
            FUN7(VAR2, VAR10, VAR9, VAR5, VAR10 == VAR4);
    }
    else
    {
        if (VAR8 != VAR9)
            FUN7(VAR2, VAR9, VAR8, VAR7, VAR9 == VAR4);
        if (VAR9 != VAR10)
            VAR5 = FUN6(VAR2, VAR10, VAR5, VAR9, VAR7);
    }
    if (VAR10 != VAR4 && VAR5)
    {
        VAR3 *VAR29 = VAR10;
        if (VAR2->VAR26.VAR30)
        {
            int VAR31;
            int VAR32 = FUN8(VAR5, 1 << 16);
            if (VAR10 == VAR6)
            {
                VAR29 = &VAR2->VAR26.VAR33;
                if ((VAR11 = FUN4(&VAR2->VAR26.VAR33, VAR32)) < 0)
                    return VAR11;
            }
            if ((VAR11 = FUN4(&VAR2->VAR26.VAR34, VAR32)) < 0)
                return VAR11;
            if (VAR11)
                for (VAR31 = 0; VAR31 < VAR2->VAR26.VAR34.VAR17; VAR31++)
                    if ((VAR11 = FUN9(VAR2, VAR2->VAR26.VAR34.VAR31[VAR31], VAR2->VAR26.VAR34.VAR35, 12345678913579 << VAR31, VAR2->VAR26.VAR34.VAR36)) < 0)
                        return VAR11;
            FUN2(VAR2->VAR26.VAR34.VAR17 == VAR10->VAR17);
            if (VAR2->VAR26.VAR37 + VAR5 > VAR2->VAR26.VAR34.VAR35)
                VAR2->VAR26.VAR37 = 0;
            if (VAR2->VAR26.VAR30 < VAR38)
            {
                if (VAR2->VAR39)
                {
                    int VAR40 = VAR5 & ~15;
                    int VAR41 = VAR40 * VAR10->VAR42;
                    if (VAR40)
                        for (VAR31 = 0; VAR31 < VAR10->VAR17; VAR31++)
                            VAR2->FUN10(VAR29->VAR31[VAR31], VAR10->VAR31[VAR31], VAR2->VAR26.VAR34.VAR31[VAR31] + VAR2->VAR26.VAR34.VAR42 * VAR2->VAR26.VAR37, VAR2->VAR43, 0, 0, VAR40);
                    if (VAR5 != VAR40)
                        for (VAR31 = 0; VAR31 < VAR10->VAR17; VAR31++)
                            VAR2->FUN11(VAR29->VAR31[VAR31] + VAR41, VAR10->VAR31[VAR31] + VAR41, VAR2->VAR26.VAR34.VAR31[VAR31] + VAR2->VAR26.VAR34.VAR42 * VAR2->VAR26.VAR37 + VAR41 + VAR40, VAR2->VAR44, 0, 0, VAR5 - VAR40);
                }
                else
                {
                    for (VAR31 = 0; VAR31 < VAR10->VAR17; VAR31++)
                        VAR2->FUN11(VAR29->VAR31[VAR31], VAR10->VAR31[VAR31], VAR2->VAR26.VAR34.VAR31[VAR31] + VAR2->VAR26.VAR34.VAR42 * VAR2->VAR26.VAR37, VAR2->VAR44, 0, 0, VAR5);
                }
            }
            else
            {
                switch (VAR2->VAR19)
                {
                case VAR45:
                    FUN12(VAR2, VAR29, VAR10, &VAR2->VAR26.VAR34, VAR5);
                    break;
                case VAR25:
                    FUN13(VAR2, VAR29, VAR10, &VAR2->VAR26.VAR34, VAR5);
                    break;
                case VAR46:
                    FUN14(VAR2, VAR29, VAR10, &VAR2->VAR26.VAR34, VAR5);
                    break;
                case VAR47:
                    FUN15(VAR2, VAR29, VAR10, &VAR2->VAR26.VAR34, VAR5);
                    break;
                }
            }
            VAR2->VAR26.VAR37 += VAR5;
        }
        FUN3(VAR2->VAR48, VAR4, VAR29, VAR5);
    }
    return VAR5;
}