static void FUN1(VAR1 *VAR2, enum cavs_mb VAR3)
{
    int VAR4;
    enum cavs_sub_mb VAR5[4];
    int VAR6;
    FUN2(VAR2);
    VAR2->VAR7[VAR8] = VAR9;
    FUN3(&VAR2->VAR7[VAR8], VAR10);
    VAR2->VAR7[VAR11] = VAR9;
    FUN3(&VAR2->VAR7[VAR11], VAR10);
    switch (VAR3)
    {
    case VAR12:
    case VAR13:
        if (!VAR2->VAR14[VAR2->VAR15])
        {
            FUN4(VAR2, VAR8, VAR16, VAR17, VAR10, 1);
            FUN4(VAR2, VAR11, VAR18, VAR17, VAR10, 0);
        }
        else
            for (VAR4 = 0; VAR4 < 4; VAR4++)
                FUN5(VAR2, &VAR2->VAR7[VAR19[VAR4]], &VAR2->VAR20[VAR2->VAR15 * 4 + VAR4]);
        break;
    case VAR21:
        FUN4(VAR2, VAR8, VAR16, VAR22, VAR10, 1);
        break;
    case VAR23:
        FUN4(VAR2, VAR8, VAR16, VAR22, VAR10, 1);
        FUN6(VAR2, &VAR2->VAR7[VAR8], VAR10);
        break;
    case VAR24:
        FUN4(VAR2, VAR11, VAR18, VAR22, VAR10, 0);
        break;
    case VAR25:
        for (VAR4 = 0; VAR4 < 4; VAR4++)
            VAR5[VAR4] = FUN7(&VAR2->VAR26.VAR27, 2);
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            switch (VAR5[VAR4])
            {
            case VAR28:
                if (!VAR2->VAR14[VAR2->VAR15])
                {
                    FUN4(VAR2, VAR19[VAR4], VAR19[VAR4] - 3, VAR17, VAR29, 1);
                    FUN4(VAR2, VAR19[VAR4] + VAR30, VAR19[VAR4] - 3 + VAR30, VAR17, VAR29, 0);
                }
                else
                    FUN5(VAR2, &VAR2->VAR7[VAR19[VAR4]], &VAR2->VAR20[VAR2->VAR15 * 4 + VAR4]);
                break;
            case VAR31:
                FUN4(VAR2, VAR19[VAR4], VAR19[VAR4] - 3, VAR22, VAR29, 1);
                break;
            case VAR32:
                FUN4(VAR2, VAR19[VAR4], VAR19[VAR4] - 3, VAR22, VAR29, 1);
                FUN6(VAR2, &VAR2->VAR7[VAR19[VAR4]], VAR29);
                break;
            }
        }
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            if (VAR5[VAR4] == VAR33)
                FUN4(VAR2, VAR19[VAR4] + VAR30, VAR19[VAR4] + VAR30 - 3, VAR22, VAR29, 0);
        }
        break;
    default:
        FUN8((VAR3 > VAR23) && (VAR3 < VAR25));
        VAR6 = VAR34[VAR3];
        if (VAR3 & 1)
        {
            if (VAR6 & VAR35)
                FUN4(VAR2, VAR8, VAR16, VAR36, VAR37, 1);
            if (VAR6 & VAR38)
                FUN6(VAR2, &VAR2->VAR7[VAR8], VAR37);
            if (VAR6 & VAR39)
                FUN4(VAR2, VAR40, VAR41, VAR42, VAR37, 1);
            if (VAR6 & VAR43)
                FUN6(VAR2, &VAR2->VAR7[VAR40], VAR37);
            if (VAR6 & VAR44)
                FUN4(VAR2, VAR11, VAR18, VAR36, VAR37, 0);
            if (VAR6 & VAR45)
                FUN4(VAR2, VAR46, VAR47, VAR42, VAR37, 0);
        }
        else
        {
            if (VAR6 & VAR35)
                FUN4(VAR2, VAR8, VAR48, VAR42, VAR49, 1);
            if (VAR6 & VAR38)
                FUN6(VAR2, &VAR2->VAR7[VAR8], VAR49);
            if (VAR6 & VAR39)
                FUN4(VAR2, VAR50, VAR16, VAR51, VAR49, 1);
            if (VAR6 & VAR43)
                FUN6(VAR2, &VAR2->VAR7[VAR50], VAR49);
            if (VAR6 & VAR44)
                FUN4(VAR2, VAR11, VAR52, VAR42, VAR49, 0);
            if (VAR6 & VAR45)
                FUN4(VAR2, VAR53, VAR18, VAR51, VAR49, 0);
        }
    }
    FUN9(VAR2, VAR3);
    FUN10(VAR2);
    if (VAR3 != VAR12)
        FUN11(VAR2);
    FUN12(VAR2, VAR3);
}