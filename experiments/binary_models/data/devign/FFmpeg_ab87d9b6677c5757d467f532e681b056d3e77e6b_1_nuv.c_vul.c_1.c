static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    nuv_frametype VAR7;
    if (!VAR4 && !VAR6)
        return 1;
    while (!VAR2->VAR8)
    {
        int VAR9, VAR10;
        VAR7 = FUN2(VAR2);
        switch (VAR7)
        {
        case VAR11:
            VAR10 = FUN2(VAR2);
            FUN3(VAR2, 6);
            VAR9 = FUN4(FUN5(VAR2));
            if (VAR4 && VAR10 == '')
            {
                VAR4->VAR12->VAR13 = VAR9;
                VAR4->VAR12->VAR14 = FUN6(VAR9);
                FUN7(VAR2, VAR4->VAR12->VAR14, VAR9);
                VAR9 = 0;
                if (!VAR6)
                    return 1;
            }
            break;
        case VAR15:
            FUN3(VAR2, 7);
            VAR9 = FUN4(FUN5(VAR2));
            if (VAR9 != 128 * 4)
                break;
            FUN5(VAR2);
            if (VAR4)
            {
                VAR4->VAR12->VAR16 = FUN5(VAR2);
                VAR4->VAR12->VAR17 = FUN8(VAR18, VAR4->VAR12->VAR16);
                if (VAR4->VAR12->VAR16 == FUN9('', '', '', ''))
                    VAR4->VAR12->VAR17 = VAR19;
            }
            else
                FUN3(VAR2, 4);
            if (VAR5)
            {
                int VAR20;
                VAR5->VAR12->VAR16 = FUN5(VAR2);
                VAR5->VAR12->VAR21 = FUN5(VAR2);
                VAR5->VAR12->VAR22 = FUN5(VAR2);
                VAR5->VAR12->VAR23 = FUN5(VAR2);
                VAR5->VAR12->VAR24 = 0;
                VAR20 = FUN10(VAR5->VAR12->VAR16, VAR5->VAR12->VAR22);
                if (VAR20 == VAR25)
                {
                    VAR20 = FUN8(VAR26, VAR5->VAR12->VAR16);
                    if (VAR20 == VAR27)
                        VAR20 = FUN11(VAR5->VAR12->VAR22, 0, 0, ~1);
                }
                VAR5->VAR12->VAR17 = VAR20;
                VAR5->VAR28 = VAR29;
            }
            else
                FUN3(VAR2, 4 * 4);
            VAR9 -= 6 * 4;
            FUN3(VAR2, VAR9);
            return 1;
        case VAR30:
            VAR9 = 11;
            break;
        default:
            FUN3(VAR2, 7);
            VAR9 = FUN4(FUN5(VAR2));
            break;
        }
        FUN3(VAR2, VAR9);
    }
    return 0;
}