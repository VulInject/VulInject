static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7 = -1;
    int64_t VAR8 = 0;
    if (!(VAR4->VAR9 & VAR10))
        return 0;
    if (VAR4->VAR11 == 0)
    {
        int64_t VAR12 = FUN2(VAR2->VAR13);
        VAR14 *VAR15;
        int VAR16, VAR17;
        for (VAR6 = 0; VAR6 < VAR4->VAR18; VAR6++)
            if (!VAR4->VAR19[VAR6].VAR20)
                break;
        if (VAR6 < VAR4->VAR18)
            return 0;
        VAR17 = FUN3(VAR2);
        for (VAR6 = 0; VAR6 < VAR4->VAR18; VAR6++)
            VAR4->VAR19[VAR6].VAR21 = VAR12 + VAR17 + 8;
        if (VAR4->VAR9 & VAR22)
            FUN4(VAR2->VAR13, VAR2);
        FUN5(VAR2->VAR13, VAR4, VAR2);
        if (VAR4->VAR9 & VAR22)
        {
            if (VAR4->VAR9 & VAR23)
                VAR4->VAR24 = FUN2(VAR2->VAR13);
            FUN6(VAR2->VAR13);
            VAR4->VAR11++;
            return 0;
        }
        VAR16 = FUN7(VAR4->VAR25, &VAR15);
        VAR4->VAR25 = NULL;
        FUN8(VAR2->VAR13, VAR16 + 8);
        FUN9(VAR2->VAR13, "");
        FUN10(VAR2->VAR13, VAR15, VAR16);
        FUN11(VAR15);
        VAR4->VAR11++;
        VAR4->VAR8 = 0;
        for (VAR6 = 0; VAR6 < VAR4->VAR18; VAR6++)
        {
            if (VAR4->VAR19[VAR6].VAR20)
                VAR4->VAR19[VAR6].VAR26 += VAR4->VAR19[VAR6].VAR27 + VAR4->VAR19[VAR6].VAR28 - VAR4->VAR19[VAR6].VAR29[0].VAR30;
            VAR4->VAR19[VAR6].VAR20 = 0;
        }
        FUN6(VAR2->VAR13);
        return 0;
    }
    for (VAR6 = 0; VAR6 < VAR4->VAR18; VAR6++)
    {
        VAR31 *VAR32 = &VAR4->VAR19[VAR6];
        if (VAR4->VAR9 & VAR33)
            VAR32->VAR21 = 0;
        else
            VAR32->VAR21 = VAR8;
        if (!VAR32->VAR25)
            continue;
        VAR8 += FUN2(VAR32->VAR25);
        if (VAR7 < 0)
            VAR7 = VAR6;
    }
    if (!VAR8)
        return 0;
    for (VAR6 = 0; VAR6 < VAR4->VAR18; VAR6++)
    {
        VAR31 *VAR32 = &VAR4->VAR19[VAR6];
        int VAR16, VAR34 = 1, VAR35 = -1;
        VAR14 *VAR15;
        int64_t VAR36 = 0;
        if (VAR32->VAR20)
            VAR36 = VAR32->VAR27 + VAR32->VAR28 - VAR32->VAR29[0].VAR30;
        if (VAR4->VAR9 & VAR33)
        {
            if (!VAR32->VAR25)
                continue;
            VAR8 = FUN2(VAR32->VAR25);
            VAR35 = VAR6;
        }
        else
        {
            VAR34 = VAR6 == VAR7;
        }
        if (VAR34)
        {
            FUN6(VAR2->VAR13);
            FUN12(VAR2->VAR13, VAR4, VAR35, VAR8);
            VAR4->VAR11++;
            FUN8(VAR2->VAR13, VAR8 + 8);
            FUN9(VAR2->VAR13, "");
        }
        if (VAR32->VAR20)
            VAR32->VAR26 += VAR36;
        VAR32->VAR20 = 0;
        if (!VAR32->VAR25)
            continue;
        VAR16 = FUN7(VAR32->VAR25, &VAR15);
        VAR32->VAR25 = NULL;
        FUN10(VAR2->VAR13, VAR15, VAR16);
        FUN11(VAR15);
    }
    VAR4->VAR8 = 0;
    FUN6(VAR2->VAR13);
    return 0;
}