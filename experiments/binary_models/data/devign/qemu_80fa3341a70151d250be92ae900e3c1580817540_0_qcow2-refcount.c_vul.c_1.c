int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    VAR8 = FUN2(VAR2->VAR18);
    VAR9 = FUN3(VAR6, VAR8);
    VAR16 = FUN4(VAR9 * sizeof(VAR15));
    FUN5(VAR2, VAR4, VAR16, VAR9, 0, VAR6->VAR19);
    VAR17 = FUN6(VAR2, VAR4, VAR16, VAR9, VAR6->VAR20, VAR6->VAR21, 1);
    if (VAR17 < 0)
    {
        return VAR17;
    }
    for (VAR12 = 0; VAR12 < VAR6->VAR22; VAR12++)
    {
        VAR14 = VAR6->VAR23 + VAR12;
        VAR17 = FUN6(VAR2, VAR4, VAR16, VAR9, VAR14->VAR20, VAR14->VAR21, 0);
        if (VAR17 < 0)
        {
            return VAR17;
        }
    }
    FUN5(VAR2, VAR4, VAR16, VAR9, VAR6->VAR24, VAR6->VAR25);
    FUN5(VAR2, VAR4, VAR16, VAR9, VAR6->VAR26, VAR6->VAR27 * sizeof(VAR28));
    for (VAR12 = 0; VAR12 < VAR6->VAR27; VAR12++)
    {
        uint64_t VAR29, VAR30;
        VAR29 = VAR6->VAR16[VAR12];
        VAR30 = VAR29 >> VAR6->VAR31;
        if (VAR29 & (VAR6->VAR19 - 1))
        {
            fprintf(VAR32, ""
                            "",
                    VAR12);
            VAR4->VAR33++;
            continue;
        }
        if (VAR30 >= VAR9)
        {
            fprintf(VAR32, "", VAR12);
            VAR4->VAR33++;
            continue;
        }
        if (VAR29 != 0)
        {
            FUN5(VAR2, VAR4, VAR16, VAR9, VAR29, VAR6->VAR19);
            if (VAR16[VAR30] != 1)
            {
                fprintf(VAR32, "", VAR12, VAR16[VAR30]);
                VAR4->VAR33++;
            }
        }
    }
    for (VAR12 = 0; VAR12 < VAR9; VAR12++)
    {
        VAR10 = FUN7(VAR2, VAR12);
        if (VAR10 < 0)
        {
            fprintf(VAR32, "", VAR12, strerror(-VAR10));
            VAR4->VAR34++;
            continue;
        }
        VAR11 = VAR16[VAR12];
        if (VAR10 != VAR11)
        {
            fprintf(VAR32, "", VAR10 < VAR11 ? "" : "", VAR12, VAR10, VAR11);
            if (VAR10 < VAR11)
            {
                VAR4->VAR33++;
            }
            else
            {
                VAR4->VAR35++;
            }
        }
    }
    FUN8(VAR16);
    return 0;
}