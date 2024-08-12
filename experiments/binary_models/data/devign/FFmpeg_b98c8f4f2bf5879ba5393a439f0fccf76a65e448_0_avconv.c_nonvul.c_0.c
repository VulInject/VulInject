static int FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4 = NULL;
    int VAR5, VAR6;
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        VAR8 *VAR9 = VAR10[VAR5];
        VAR11 *VAR12 = VAR13[VAR9->VAR14];
        int VAR15 = 0;
        if (!VAR9->VAR16)
            continue;
        if (!VAR9->VAR4 && !(VAR9->VAR4 = FUN2()))
        {
            return FUN3(VAR17);
        }
        else
            FUN4(VAR9->VAR4);
        VAR4 = VAR9->VAR4;
        while (VAR15 >= 0 && !VAR9->VAR18)
        {
            if (VAR9->VAR19->VAR20 == VAR21 && !(VAR9->VAR19->VAR22 & VAR23))
                VAR15 = FUN5(VAR9->VAR16->VAR16, &VAR2, VAR9->VAR24->VAR25->VAR6);
            else
                VAR15 = FUN6(VAR9->VAR16->VAR16, &VAR2);
            if (VAR15 < 0)
                break;
            FUN7(VAR4, VAR2);
            if (VAR2->VAR26 != VAR27)
                VAR4->VAR26 = FUN8(VAR2->VAR26, VAR9->VAR16->VAR16->VAR28[0]->VAR29, VAR9->VAR24->VAR25->VAR29) - FUN8(VAR12->VAR30, VAR31, VAR9->VAR24->VAR25->VAR29);
            if (VAR12->VAR30 && VAR4->VAR26 < 0)
            {
                FUN9(VAR2);
                continue;
            }
            switch (VAR9->VAR16->VAR16->VAR28[0]->VAR20)
            {
            case VAR32:
                if (!VAR9->VAR33)
                    VAR9->VAR24->VAR25->VAR34 = VAR2->VAR35->VAR36;
                FUN10(VAR12->VAR37, VAR9, VAR4, &VAR6, VAR38 ? VAR9->VAR39 : VAR9->VAR24->VAR25->VAR40);
                if (VAR41 && VAR6)
                    FUN11(VAR12->VAR37, VAR9, VAR6);
                break;
            case VAR21:
                FUN12(VAR12->VAR37, VAR9, VAR4);
                break;
            default:
                FUN13(0);
            }
            FUN9(VAR2);
        }
    }
    return 0;
}