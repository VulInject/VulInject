static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6, VAR7, VAR8 = 0;
    int VAR9 = 0;
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13[VAR14] = {0};
    VAR10 *VAR15[VAR14] = {NULL};
    FUN2(&VAR2->VAR16);
    FUN3(&VAR2->VAR16);
    VAR4 = FUN4(&VAR2->VAR16);
    for (VAR7 = 0; VAR7 < VAR2->VAR17; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            VAR10 *VAR19 = &VAR11[VAR2->VAR18 * VAR7 + VAR6];
            VAR9 += VAR19->VAR9;
            for (VAR5 = 0; VAR5 < FUN5(VAR14, VAR2->VAR18 * VAR2->VAR17); VAR5++)
            {
                if (VAR19->VAR20 > VAR13[VAR5])
                {
                    VAR13[VAR5] = VAR19->VAR20;
                    VAR15[VAR5] = VAR19;
                    break;
                }
            }
        }
    }
    while (1)
    {
        int VAR21 = 0;
        for (VAR5 = 0; VAR5 < FUN5(VAR14, VAR2->VAR18 * VAR2->VAR17); VAR5++)
        {
            VAR10 *VAR19;
            int VAR22, VAR20, VAR23, VAR24, VAR25;
            if (VAR9 <= 0)
                break;
            if (!VAR15[VAR5] || !VAR15[VAR5]->VAR26)
                break;
            VAR19 = VAR15[VAR5];
            VAR24 = VAR19->VAR20;
            VAR25 = FUN6(VAR19->VAR26 - 1, 0, VAR2->VAR27);
            VAR22 = FUN7(VAR2, VAR19->VAR28, VAR19->VAR29, VAR19->VAR30, VAR25);
            VAR20 = FUN8((VAR22 >> 3), VAR2->VAR31) + 4 + VAR2->VAR32;
            VAR23 = VAR20 - VAR24;
            if ((VAR9 - VAR23) >= 0)
            {
                VAR19->VAR26 = VAR25;
                VAR19->VAR20 = VAR20;
                VAR9 -= VAR23;
                VAR21++;
            }
        }
        if (!VAR21)
            break;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR17; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            VAR10 *VAR19 = &VAR11[VAR2->VAR18 * VAR7 + VAR6];
            FUN9(&VAR19->VAR16, VAR4 + VAR8, VAR19->VAR20);
            VAR2->VAR33 = (VAR2->VAR33 + VAR19->VAR26) / 2;
            VAR8 += VAR19->VAR20;
        }
    }
    VAR2->VAR34->FUN10(VAR2->VAR34, VAR35, VAR11, NULL, VAR2->VAR18 * VAR2->VAR17, sizeof(VAR10));
    FUN11(&VAR2->VAR16, VAR8);
    return 0;
}