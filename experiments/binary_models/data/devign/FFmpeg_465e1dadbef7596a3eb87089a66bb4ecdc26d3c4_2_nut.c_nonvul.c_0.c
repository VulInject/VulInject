static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR10;
    int VAR11, VAR12 = 0;
    int VAR13 = 0;
    int64_t VAR14;
    for (;;)
    {
        uint64_t VAR15 = VAR6->VAR16;
        VAR6->VAR16 = 0;
        if (FUN2(VAR9))
            return -1;
        if (!VAR15)
        {
            VAR12 = FUN3(VAR9);
            if (VAR12 == '')
            {
                VAR15 = VAR12;
                VAR15 <<= 8;
                VAR15 |= FUN3(VAR9);
                VAR15 <<= 16;
                VAR15 |= FUN4(VAR9);
                VAR15 <<= 32;
                VAR15 |= FUN5(VAR9);
            }
        }
        switch (VAR15)
        {
        case VAR17:
            VAR13 = 2;
            break;
        case VAR18:
        case VAR19:
        case VAR20:
            FUN6(VAR6, VAR9, 8, 0);
            FUN7(VAR9, VAR6->VAR21 + VAR6->VAR22, VAR23);
            break;
        case VAR24:
            if (FUN8(VAR6) < 0)
                goto VAR25;
            break;
        case 0:
            if (FUN9(VAR6, VAR4, VAR12, VAR13) >= 0)
                return 0;
        default:
        VAR25:
            VAR13 = 0;
            FUN10(VAR2, VAR26, "", VAR6->VAR22 + 1);
            VAR15 = FUN11(VAR9, VAR6->VAR22 + 1);
            if (VAR15 == 0)
                return -1;
            FUN10(VAR2, VAR26, "");
            if (FUN12(VAR9))
            {
                VAR6->VAR16 = VAR15;
                break;
            }
            VAR14 = FUN13(VAR9) - 8;
            FUN10(VAR2, VAR26, "", VAR14, VAR15);
            if (VAR15 == VAR17)
            {
                FUN3(VAR9);
            }
            FUN14(VAR9);
            VAR11 = FUN14(VAR9);
            while (VAR11 > 2 && VAR11 < 100000 && VAR6->VAR22 < VAR14 - VAR11)
            {
                FUN7(VAR9, VAR14 - VAR11, VAR23);
                VAR12 = FUN3(VAR9);
                if (!(VAR6->VAR12[VAR12].VAR27 & VAR28))
                    break;
                if (FUN14(VAR9) != VAR11)
                    break;
                VAR14 -= VAR11;
                VAR11 = FUN14(VAR9);
                FUN10(VAR2, VAR26, "", VAR14, VAR11);
            }
            FUN7(VAR9, VAR14, VAR23);
            VAR6->VAR21 = VAR11;
            VAR6->VAR22 = VAR14 - VAR11;
        }
    }
}