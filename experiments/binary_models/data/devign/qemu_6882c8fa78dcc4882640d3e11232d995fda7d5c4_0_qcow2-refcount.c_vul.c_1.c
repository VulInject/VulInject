int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int64_t VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15, VAR16 = 0;
    VAR6 = FUN2(VAR2->VAR17);
    VAR7 = FUN3(VAR4, VAR6);
    VAR14 = FUN4(VAR7 * sizeof(VAR13));
    VAR16 += FUN5(VAR2, VAR14, VAR7, 0, VAR4->VAR18);
    VAR15 = FUN6(VAR2, VAR14, VAR7, VAR4->VAR19, VAR4->VAR20, 1);
    if (VAR15 < 0)
    {
        return VAR15;
    }
    VAR16 += VAR15;
    for (VAR10 = 0; VAR10 < VAR4->VAR21; VAR10++)
    {
        VAR12 = VAR4->VAR22 + VAR10;
        FUN6(VAR2, VAR14, VAR7, VAR12->VAR19, VAR12->VAR20, 0);
    }
    VAR16 += FUN5(VAR2, VAR14, VAR7, VAR4->VAR23, VAR4->VAR24);
    VAR16 += FUN5(VAR2, VAR14, VAR7, VAR4->VAR25, VAR4->VAR26 * sizeof(VAR27));
    for (VAR10 = 0; VAR10 < VAR4->VAR26; VAR10++)
    {
        int64_t VAR28;
        VAR28 = VAR4->VAR14[VAR10];
        if (VAR28 & (VAR4->VAR18 - 1))
        {
            fprintf(VAR29, ""
                            "",
                    VAR10);
            VAR16++;
        }
        if (VAR28 != 0)
        {
            VAR16 += FUN5(VAR2, VAR14, VAR7, VAR28, VAR4->VAR18);
            if (VAR14[VAR28 / VAR4->VAR18] != 1)
            {
                fprintf(VAR29, "", VAR10, VAR14[VAR28 / VAR4->VAR18]);
            }
        }
    }
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        VAR8 = FUN7(VAR2, VAR10);
        if (VAR8 < 0)
        {
            fprintf(VAR29, "", VAR10, strerror(-VAR8));
        }
        VAR9 = VAR14[VAR10];
        if (VAR8 != VAR9)
        {
            fprintf(VAR29, "", VAR10, VAR8, VAR9);
            VAR16++;
        }
    }
    FUN8(VAR14);
    return VAR16;
}