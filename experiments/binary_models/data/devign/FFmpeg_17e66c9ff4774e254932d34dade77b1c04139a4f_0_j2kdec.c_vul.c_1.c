static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    for (;;)
    {
        int VAR9, VAR10, VAR11, VAR12 = 0;
        if (FUN2(&VAR2->VAR13) < 2)
        {
            FUN3(VAR2->VAR14, VAR15, "");
            break;
        }
        VAR10 = FUN4(&VAR2->VAR13);
        FUN5(VAR2->VAR14, "", VAR10, FUN6(&VAR2->VAR13) - 4);
        VAR9 = FUN6(&VAR2->VAR13);
        if (VAR10 == VAR16)
        {
            VAR17 *VAR18 = VAR2->VAR18 + VAR2->VAR19;
            if (VAR12 = FUN7(VAR2, VAR2->VAR19))
            {
                FUN3(VAR2->VAR14, VAR15, "");
                return VAR12;
            }
            if (VAR12 = FUN8(VAR2, VAR18))
            {
                FUN3(VAR2->VAR14, VAR15, "");
                return VAR12;
            }
            continue;
        }
        if (VAR10 == VAR20)
            break;
        if (FUN2(&VAR2->VAR13) < 2)
            return FUN9(VAR21);
        VAR11 = FUN4(&VAR2->VAR13);
        switch (VAR10)
        {
        case VAR22:
            VAR12 = FUN10(VAR2);
            break;
        case VAR23:
            VAR12 = FUN11(VAR2, VAR4, VAR8);
            break;
        case VAR24:
            VAR12 = FUN12(VAR2, VAR4, VAR8);
            break;
        case VAR25:
            VAR12 = FUN13(VAR2, VAR11, VAR6, VAR8);
            break;
        case VAR26:
            VAR12 = FUN14(VAR2, VAR11, VAR6, VAR8);
            break;
        case VAR27:
            if (!(VAR12 = FUN15(VAR2)))
            {
                VAR4 = VAR2->VAR18[VAR2->VAR19].VAR4;
                VAR6 = VAR2->VAR18[VAR2->VAR19].VAR6;
                VAR8 = VAR2->VAR18[VAR2->VAR19].VAR8;
            }
            break;
        case VAR28:
            FUN16(&VAR2->VAR13, VAR11 - 2);
            break;
        default:
            FUN3(VAR2->VAR14, VAR15, "", VAR10, FUN6(&VAR2->VAR13) - 4);
            FUN16(&VAR2->VAR13, VAR11 - 2);
            break;
        }
        if (FUN6(&VAR2->VAR13) - VAR9 != VAR11 || VAR12)
        {
            FUN3(VAR2->VAR14, VAR15, "", VAR10);
            return VAR12 ? VAR12 : -1;
        }
    }
    return 0;