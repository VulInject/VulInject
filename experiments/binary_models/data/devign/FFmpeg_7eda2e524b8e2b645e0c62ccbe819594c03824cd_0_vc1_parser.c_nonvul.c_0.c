static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    const VAR5 *VAR12, *VAR13, *VAR14;
    VAR5 *VAR15 = FUN2(VAR7 + VAR16);
    VAR9->VAR17.VAR2.VAR4 = VAR4;
    VAR9->VAR17.VAR18 = 1;
    VAR9->VAR17.VAR19 = 1;
    VAR14 = VAR6;
    VAR2->VAR20 = 0;
    for (VAR12 = VAR6, VAR13 = VAR6 + VAR7; VAR14 < VAR13; VAR12 = VAR14)
    {
        int VAR21, VAR22;
        int VAR23;
        VAR14 = FUN3(VAR12 + 4, VAR13);
        VAR22 = VAR14 - VAR12 - 4;
        VAR21 = FUN4(VAR12 + 4, VAR22, VAR15);
        FUN5(&VAR11, VAR15, VAR21 * 8);
        if (VAR22 <= 0)
            continue;
        switch (FUN6(VAR12))
        {
        case VAR24:
            FUN7(VAR4, &VAR9->VAR17, &VAR11);
            break;
        case VAR25:
            FUN8(VAR4, &VAR9->VAR17, &VAR11);
            break;
        case VAR26:
            if (VAR9->VAR17.VAR27 < VAR28)
                VAR23 = FUN9(&VAR9->VAR17, &VAR11);
            else
                VAR23 = FUN10(&VAR9->VAR17, &VAR11);
            if (VAR23 < 0)
                break;
            if (VAR9->VAR17.VAR2.VAR29 == VAR30)
                VAR2->VAR29 = VAR31;
            else
                VAR2->VAR29 = VAR9->VAR17.VAR2.VAR29;
            if (VAR4->VAR32 > 1)
            {
                VAR2->VAR20 = 1;
                if (VAR9->VAR17.VAR33)
                {
                    VAR2->VAR20 = 2;
                }
                else if (VAR9->VAR17.VAR34)
                {
                    VAR2->VAR20 = VAR9->VAR17.VAR34 * 2 + 1;
                }
            }
            if (VAR9->VAR17.VAR35 && VAR9->VAR17.VAR36 && !VAR9->VAR17.VAR37)
                VAR2->VAR38 = VAR9->VAR17.VAR39 ? VAR40 : VAR41;
            else
                VAR2->VAR38 = VAR42;
            break;
        }
    }
    FUN11(VAR15);
}