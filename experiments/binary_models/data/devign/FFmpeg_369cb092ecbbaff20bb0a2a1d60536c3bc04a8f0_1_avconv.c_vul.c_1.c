static int FUN1(int VAR1, char *VAR2, int VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR7[VAR1];
    if (VAR6->VAR8)
    {
        VAR9 *VAR10 = VAR6->VAR11;
        if (!VAR10)
        {
            snprintf(VAR2, VAR3, "", VAR6->VAR12->VAR10->VAR13, VAR6->VAR14, VAR6->VAR12->VAR15);
            return FUN2(VAR16);
        }
        for (VAR4 = 0; VAR4 < VAR17; VAR4++)
        {
            VAR18 *VAR19 = VAR20[VAR4];
            if (VAR19->VAR21 == VAR1)
            {
                FUN3(VAR6->VAR12->VAR10, VAR10, VAR19->VAR12->VAR10);
                break;
            }
        }
        if (VAR10->VAR22 == VAR23 && VAR10->VAR24 & VAR25)
        {
            VAR6->VAR12->VAR10->VAR26 = VAR27;
            VAR6->VAR12->VAR10->VAR28 = VAR29;
            VAR6->VAR12->VAR10->VAR30 = VAR6;
        }
        if (!FUN4(VAR6->VAR31, "", NULL, 0))
            FUN5(&VAR6->VAR31, "", "", 0);
        if (FUN6(VAR6->VAR12->VAR10, VAR10, &VAR6->VAR31) < 0)
        {
            snprintf(VAR2, VAR3, "", VAR6->VAR14, VAR6->VAR12->VAR15);
            return FUN2(VAR16);
        }
        FUN7(VAR6->VAR12->VAR10, 0);
        FUN8(VAR6->VAR31);
        if (VAR6->VAR12->VAR10->VAR32 == VAR33)
        {
            for (VAR4 = 0; VAR4 < VAR17; VAR4++)
            {
                VAR18 *VAR19 = VAR20[VAR4];
                if (VAR19->VAR21 == VAR1)
                {
                    if (!VAR6->VAR12->VAR10->VAR34 || !VAR19->VAR12->VAR10->VAR34)
                        FUN9(VAR19, VAR6);
                    break;
                }
            }
        }
    }
    VAR6->VAR35 = VAR6->VAR12->VAR36.VAR37 ? -VAR6->VAR12->VAR10->VAR38 * VAR39 / FUN10(VAR6->VAR12->VAR36) : 0;
    VAR6->VAR40 = VAR41;
    FUN11(&VAR6->VAR42);
    VAR6->VAR43 = 1;
    return 0;
}