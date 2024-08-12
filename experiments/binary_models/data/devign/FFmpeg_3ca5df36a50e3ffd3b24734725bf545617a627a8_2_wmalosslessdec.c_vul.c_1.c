static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4;
    int VAR5 = VAR2->VAR4;
    int VAR6 = VAR2->VAR4 * VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR2->VAR13 = FUN2(&VAR2->VAR14);
    for (VAR8 = 0; VAR8 < VAR2->VAR7; VAR8++)
    {
        if (VAR3 > VAR2->VAR15[VAR8].VAR16)
        {
            VAR3 = VAR2->VAR15[VAR8].VAR16;
            VAR5 = VAR2->VAR15[VAR8].VAR5[VAR2->VAR15[VAR8].VAR17];
        }
    }
    VAR2->VAR18 = 0;
    for (VAR8 = 0; VAR8 < VAR2->VAR7; VAR8++)
    {
        const int VAR17 = VAR2->VAR15[VAR8].VAR17;
        VAR6 -= VAR2->VAR15[VAR8].VAR16;
        if (VAR3 == VAR2->VAR15[VAR8].VAR16 && VAR5 == VAR2->VAR15[VAR8].VAR5[VAR17])
        {
            VAR6 -= VAR2->VAR15[VAR8].VAR5[VAR17];
            VAR2->VAR15[VAR8].VAR16 += VAR2->VAR15[VAR8].VAR5[VAR17];
            VAR2->VAR19[VAR2->VAR18] = VAR8;
            ++VAR2->VAR18;
        }
    }
    if (!VAR6)
        VAR2->VAR20 = 1;
    VAR2->VAR21 = FUN3(&VAR2->VAR14);
    if (VAR2->VAR21)
    {
        FUN4(VAR2);
        VAR2->VAR22 = FUN3(&VAR2->VAR14);
        if (VAR2->VAR22)
        {
            FUN5(VAR2->VAR23, "");
            return VAR24;
        }
        VAR2->VAR25 = FUN3(&VAR2->VAR14);
        VAR2->VAR26 = FUN3(&VAR2->VAR14);
        VAR2->VAR27 = FUN3(&VAR2->VAR14);
        if (VAR2->VAR25)
            FUN6(VAR2);
        if (VAR2->VAR27)
            FUN7(VAR2);
        if ((VAR12 = FUN8(VAR2)) < 0)
            return VAR12;
        VAR2->VAR28 = FUN9(&VAR2->VAR14, 3);
        VAR2->VAR29 = FUN9(&VAR2->VAR14, 8) + 1;
        FUN10(VAR2);
    }
    else if (!VAR2->VAR30[0][0].VAR31)
    {
        FUN11(VAR2->VAR23, VAR32, "");
        VAR2->VAR33.VAR34 = 0;
        return -1;
    }
    VAR10 = FUN3(&VAR2->VAR14);
    for (VAR8 = 0; VAR8 < VAR2->VAR7; VAR8++)
        VAR2->VAR35[VAR8] = 1;
    if (!VAR10)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR7; VAR8++)
            VAR2->VAR35[VAR8] = FUN3(&VAR2->VAR14);
        if (VAR2->VAR36)
        {
            VAR2->VAR37 = FUN3(&VAR2->VAR14);
            if (VAR2->VAR37)
            {
                FUN12(VAR2);
                FUN5(VAR2->VAR23, ""
                                                "");
            }
        }
        else
            VAR2->VAR37 = 0;
    }
    if (FUN3(&VAR2->VAR14))
        VAR11 = FUN9(&VAR2->VAR14, 5);
    else
        VAR11 = 0;
    if (VAR10)
    {
        int VAR38 = VAR2->VAR39 - VAR11;
        if (VAR38 <= 0)
        {
            FUN11(VAR2->VAR23, VAR40, "");
            return VAR41;
        }
        FUN13(VAR2->VAR23, ""
                          "",
                VAR38, VAR38 * VAR2->VAR7 * VAR5, FUN2(&VAR2->VAR14));
        for (VAR8 = 0; VAR8 < VAR2->VAR7; VAR8++)
            for (VAR9 = 0; VAR9 < VAR5; VAR9++)
                VAR2->VAR42[VAR8][VAR9] = FUN14(&VAR2->VAR14, VAR38);
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR7; VAR8++)
            if (VAR2->VAR35[VAR8])
            {
                FUN15(VAR2, VAR8, VAR5);
                if (VAR2->VAR21)
                    FUN16(VAR2, VAR8);
                else
                    FUN17(VAR2, VAR8);
                FUN18(VAR2, VAR8, 0, VAR5);
            }
            else
            {
                memset(VAR2->VAR43[VAR8], 0, sizeof(**VAR2->VAR43) * VAR5);
            }
    }
    if (VAR2->VAR27)
        FUN19(VAR2, VAR5);
    if (VAR2->VAR26)
        FUN20(VAR2, VAR5);
    if (VAR2->VAR25)
        FUN21(VAR2, VAR5);
    if (VAR2->VAR29 != 1)
        for (VAR8 = 0; VAR8 < VAR2->VAR7; VAR8++)
            for (VAR9 = 0; VAR9 < VAR5; VAR9++)
                VAR2->VAR43[VAR8][VAR9] *= VAR2->VAR29;
    for (VAR8 = 0; VAR8 < VAR2->VAR18; VAR8++)
    {
        int VAR44 = VAR2->VAR19[VAR8];
        int VAR5 = VAR2->VAR15[VAR44].VAR5[VAR2->VAR15[VAR44].VAR17];
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            if (VAR2->VAR39 == 16)
            {
                *VAR2->VAR45[VAR44]++ = (VAR46)VAR2->VAR43[VAR44][VAR9] << VAR11;
            }
            else
            {
                *VAR2->VAR47[VAR44]++ = VAR2->VAR43[VAR44][VAR9] << VAR11;
            }
        }
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR18; VAR8++)
    {
        int VAR44 = VAR2->VAR19[VAR8];
        if (VAR2->VAR15[VAR44].VAR17 >= VAR2->VAR15[VAR44].VAR48)
        {
            FUN11(VAR2->VAR23, VAR40, "");
            return VAR41;
        }
        ++VAR2->VAR15[VAR44].VAR17;
    }
    return 0;
}