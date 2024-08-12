static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11, *VAR12;
    int VAR13, VAR14, VAR15;
    VAR16 *VAR17 = VAR3;
    VAR18 *VAR19 = &VAR9->VAR20;
    FUN2("");
    *VAR4 = 0;
    if (VAR7 == 0)
    {
        if (VAR19->VAR21 > 0)
        {
            *VAR17 = *(VAR16 *)&VAR19->VAR22;
            *VAR4 = sizeof(VAR16);
        }
        return 0;
    }
    if (VAR19->VAR23 & VAR24)
    {
        int VAR25 = FUN3(VAR19, VAR6, VAR7);
        if (FUN4(VAR19, VAR25, &VAR6, &VAR7) < 0)
            return VAR7;
    }
    VAR12 = VAR6;
    VAR11 = VAR6 + VAR7;
    if (VAR9->VAR26 % 2 == 1)
    {
        VAR9->VAR26++;
        if (VAR2->VAR23 & VAR27)
        {
            *VAR4 = sizeof(VAR28);
            goto VAR29;
        }
    }
    for (;;)
    {
        VAR14 = FUN5(&VAR12, VAR11);
        if (VAR14 < 0)
        {
            FUN6("");
            return FUN7(1, VAR12 - VAR6 - VAR19->VAR30.VAR31);
        }
        VAR15 = VAR11 - VAR12;
        switch (VAR14)
        {
        case VAR32:
            FUN8(VAR2, VAR12, VAR15);
            break;
        case VAR33:
            FUN9(VAR2, VAR12, VAR15);
            break;
        case VAR34:
            FUN10(VAR2, VAR12, VAR15);
            break;
        case VAR35:
            FUN11(VAR2, VAR12, VAR15);
            break;
        default:
            if (VAR14 >= VAR36 && VAR14 <= VAR37)
            {
                if (VAR19->VAR38 == NULL && VAR19->VAR39 == VAR40)
                    break;
                if (VAR2->VAR41 && VAR19->VAR39 == VAR40)
                    break;
                if (VAR2->VAR41 >= 5)
                    break;
                if (!VAR9->VAR42)
                    break;
                VAR13 = FUN12(VAR2, VAR17, VAR14, &VAR12, VAR15);
                if (VAR13 == VAR43)
                {
                    if (VAR19->VAR38)
                        *VAR4 = sizeof(VAR28);
                    return FUN7(0, VAR12 - VAR6 - VAR19->VAR30.VAR31);
                }
                else if (VAR13 < 0)
                {
                    if (VAR13 == VAR44)
                        FUN13(VAR19, VAR19->VAR45, VAR19->VAR46, VAR19->VAR47, VAR19->VAR48, VAR49 | VAR50 | VAR51);
                    fprintf(VAR52, "");
                    if (VAR13 == VAR53)
                        return -1;
                }
            }
            break;
        }
    }
}