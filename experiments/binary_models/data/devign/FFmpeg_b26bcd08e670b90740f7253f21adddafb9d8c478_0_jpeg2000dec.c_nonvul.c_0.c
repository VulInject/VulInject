static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    for (;;)
    {
        int VAR9, VAR10 = 0;
        uint16_t VAR11;
        int VAR12;
        if (FUN2(&VAR2->VAR13) < 2)
        {
            FUN3(VAR2->VAR14, VAR15, "");
            break;
        }
        VAR11 = FUN4(&VAR2->VAR13);
        VAR12 = FUN5(&VAR2->VAR13);
        if (VAR11 == VAR16)
        {
            VAR17 *VAR18;
            VAR19 *VAR20;
            if (VAR2->VAR21 < 0)
            {
                FUN3(VAR2->VAR14, VAR15, "");
                return VAR22;
            }
            VAR18 = VAR2->VAR18 + VAR2->VAR21;
            VAR20 = VAR18->VAR23 + VAR18->VAR24;
            FUN6(&VAR20->VAR25, VAR2->VAR13.VAR26, VAR20->VAR27 - VAR2->VAR13.VAR26);
            FUN7(&VAR2->VAR13, VAR20->VAR27 - VAR2->VAR13.VAR26);
            continue;
        }
        if (VAR11 == VAR28)
            break;
        if (FUN2(&VAR2->VAR13) < 2)
            return FUN8(VAR29);
        VAR9 = FUN4(&VAR2->VAR13);
        switch (VAR11)
        {
        case VAR30:
            VAR10 = FUN9(VAR2);
            if (!VAR2->VAR18)
                VAR2->VAR31 = VAR2->VAR32 = 0;
            break;
        case VAR33:
            VAR10 = FUN10(VAR2, VAR4, VAR8);
            break;
        case VAR34:
            VAR10 = FUN11(VAR2, VAR4, VAR8);
            break;
        case VAR35:
            VAR10 = FUN12(VAR2, VAR9, VAR6, VAR8);
            break;
        case VAR36:
            VAR10 = FUN13(VAR2, VAR9, VAR6, VAR8);
            break;
        case VAR37:
            if (!(VAR10 = FUN14(VAR2, VAR9)))
            {
                FUN15(VAR2->VAR21 >= 0);
                VAR4 = VAR2->VAR18[VAR2->VAR21].VAR4;
                VAR6 = VAR2->VAR18[VAR2->VAR21].VAR6;
                VAR8 = VAR2->VAR18[VAR2->VAR21].VAR8;
            }
            break;
        case VAR38:
            FUN7(&VAR2->VAR13, VAR9 - 2);
            break;
        case VAR39:
            VAR10 = FUN16(VAR2, VAR9);
            break;
        default:
            FUN3(VAR2->VAR14, VAR15, "", VAR11, FUN5(&VAR2->VAR13) - 4);
            FUN7(&VAR2->VAR13, VAR9 - 2);
            break;
        }
        if (FUN5(&VAR2->VAR13) - VAR12 != VAR9 || VAR10)
        {
            FUN3(VAR2->VAR14, VAR15, "", VAR11);
            return VAR10 ? VAR10 : -1;
        }
    }
    return 0;
}