static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    for (;;)
    {
        int VAR9, VAR10, VAR11 = 0;
        const VAR7 *VAR12;
        if (VAR2->VAR13 - VAR2->VAR14 < 2)
        {
            FUN2(VAR2->VAR15, VAR16, "");
            break;
        }
        VAR9 = FUN3(&VAR2->VAR14);
        if (VAR2->VAR15->VAR17 & VAR18)
            FUN2(VAR2->VAR15, VAR19, "", VAR9, VAR2->VAR14 - VAR2->VAR20 - 4);
        VAR12 = VAR2->VAR14;
        if (VAR9 == VAR21)
        {
            VAR22 *VAR23 = VAR2->VAR23 + VAR2->VAR24;
            if (VAR11 = FUN4(VAR2, VAR2->VAR24))
                return VAR11;
            if (VAR11 = FUN5(VAR2, VAR23))
                return VAR11;
            continue;
        }
        if (VAR9 == VAR25)
            break;
        if (VAR2->VAR13 - VAR2->VAR14 < 2)
            return FUN6(VAR26);
        VAR10 = FUN3(&VAR2->VAR14);
        switch (VAR9)
        {
        case VAR27:
            VAR11 = FUN7(VAR2);
            break;
        case VAR28:
            VAR11 = FUN8(VAR2, VAR4, VAR8);
            break;
        case VAR29:
            VAR11 = FUN9(VAR2, VAR4, VAR8);
            break;
        case VAR30:
            VAR11 = FUN10(VAR2, VAR10, VAR6, VAR8);
            break;
        case VAR31:
            VAR11 = FUN11(VAR2, VAR10, VAR6, VAR8);
            break;
        case VAR32:
            if (!(VAR11 = FUN12(VAR2)))
            {
                VAR4 = VAR2->VAR23[VAR2->VAR24].VAR4;
                VAR6 = VAR2->VAR23[VAR2->VAR24].VAR6;
                VAR8 = VAR2->VAR23[VAR2->VAR24].VAR8;
            }
            break;
        case VAR33:
            VAR2->VAR14 += VAR10 - 2;
            break;
        default:
            FUN2(VAR2->VAR15, VAR16, "", VAR9, VAR2->VAR14 - VAR2->VAR20 - 4);
            VAR2->VAR14 += VAR10 - 2;
            break;
        }
        if (VAR2->VAR14 - VAR12 != VAR10 || VAR11)
        {
            FUN2(VAR2->VAR15, VAR16, "", VAR9);
            return VAR11 ? VAR11 : -1;
        }
    }
    return 0;
}