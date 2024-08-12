static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4;
    int VAR5 = VAR2->VAR4;
    int VAR6;
    int VAR7 = VAR2->VAR4 * VAR2->VAR8->VAR9;
    int VAR10 = 0;
    int VAR11;
    VAR2->VAR12 = FUN2(&VAR2->VAR13);
    for (VAR6 = 0; VAR6 < VAR2->VAR8->VAR9; VAR6++)
    {
        VAR2->VAR14[VAR6].VAR15 = 0;
        if (VAR3 > VAR2->VAR14[VAR6].VAR16)
        {
            VAR3 = VAR2->VAR14[VAR6].VAR16;
            VAR5 = VAR2->VAR14[VAR6].VAR5[VAR2->VAR14[VAR6].VAR17];
        }
    }
    FUN3(VAR2->VAR8, "", VAR3, VAR5);
    VAR2->VAR18 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR8->VAR9; VAR6++)
    {
        const int VAR17 = VAR2->VAR14[VAR6].VAR17;
        VAR7 -= VAR2->VAR14[VAR6].VAR16;
        if (VAR3 == VAR2->VAR14[VAR6].VAR16 && VAR5 == VAR2->VAR14[VAR6].VAR5[VAR17])
        {
            VAR7 -= VAR2->VAR14[VAR6].VAR5[VAR17];
            VAR2->VAR14[VAR6].VAR16 += VAR2->VAR14[VAR6].VAR5[VAR17];
            VAR2->VAR19[VAR2->VAR18] = VAR6;
            ++VAR2->VAR18;
        }
    }
    if (!VAR7)
        VAR2->VAR20 = 1;
    FUN3(VAR2->VAR8, "", VAR2->VAR18);
    VAR2->VAR21 = FUN4(VAR2->VAR4 / VAR5);
    VAR2->VAR22 = VAR2->VAR23[VAR2->VAR21];
    VAR2->VAR24 = VAR2->VAR25[VAR2->VAR21];
    VAR11 = VAR2->VAR26[VAR2->VAR21];
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        VAR2->VAR14[VAR27].VAR28 = &VAR2->VAR14[VAR27].VAR29[(VAR2->VAR4 >> 1) + VAR3];
    }
    VAR2->VAR5 = VAR5;
    VAR2->VAR30 = FUN4(VAR2->VAR5 - 1) + 1;
    if (FUN5(&VAR2->VAR13))
    {
        int VAR31;
        if (!(VAR31 = FUN6(&VAR2->VAR13, 2)))
        {
            int VAR32 = FUN6(&VAR2->VAR13, 4);
            VAR31 = FUN6(&VAR2->VAR13, VAR32) + 1;
        }
        if (VAR31 >= 0)
        {
            if (FUN2(&VAR2->VAR13) + VAR31 > VAR2->VAR33)
            {
                FUN7(VAR2->VAR8, VAR34, "");
                return VAR35;
            }
            FUN8(&VAR2->VAR13, VAR31);
        }
    }
    if (FUN5(&VAR2->VAR13))
    {
        FUN9(VAR2->VAR8, "");
        return VAR36;
    }
    if (FUN10(VAR2) < 0)
        return VAR35;
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        if ((VAR2->VAR14[VAR27].VAR37 = FUN5(&VAR2->VAR13)))
            VAR10 = 1;
    }
    if (VAR10)
    {
        int VAR38;
        int VAR39 = 90 * VAR2->VAR40 >> 4;
        if ((VAR2->VAR41 = FUN5(&VAR2->VAR13)))
        {
            int VAR42 = FUN4((VAR2->VAR5 + 3) / 4) + 1;
            for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
            {
                int VAR27 = VAR2->VAR19[VAR6];
                int VAR43 = FUN6(&VAR2->VAR13, VAR42) << 2;
                if (VAR43 > VAR44)
                {
                    FUN7(VAR2->VAR8, VAR34, "", VAR43);
                    return VAR35;
                }
                VAR2->VAR14[VAR27].VAR43 = VAR43;
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
            {
                int VAR27 = VAR2->VAR19[VAR6];
                VAR2->VAR14[VAR27].VAR43 = VAR2->VAR5;
            }
        }
        VAR38 = FUN11(&VAR2->VAR13, 6);
        VAR39 += VAR38;
        if (VAR38 == -32 || VAR38 == 31)
        {
            const int VAR45 = (VAR38 == 31) - 1;
            int VAR46 = 0;
            while (FUN2(&VAR2->VAR13) + 5 < VAR2->VAR33 && (VAR38 = FUN6(&VAR2->VAR13, 5)) == 31)
            {
                VAR46 += 31;
            }
            VAR39 += ((VAR46 + VAR38) ^ VAR45) - VAR45;
        }
        if (VAR39 < 0)
        {
            FUN7(VAR2->VAR8, VAR47, "");
        }
        if (VAR2->VAR18 == 1)
        {
            VAR2->VAR14[VAR2->VAR19[0]].VAR39 = VAR39;
        }
        else
        {
            int VAR48 = FUN6(&VAR2->VAR13, 3);
            for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
            {
                int VAR27 = VAR2->VAR19[VAR6];
                VAR2->VAR14[VAR27].VAR39 = VAR39;
                if (FUN5(&VAR2->VAR13))
                {
                    if (VAR48)
                    {
                        VAR2->VAR14[VAR27].VAR39 += FUN6(&VAR2->VAR13, VAR48) + 1;
                    }
                    else
                        ++VAR2->VAR14[VAR27].VAR39;
                }
            }
        }
        if (FUN12(VAR2) < 0)
            return VAR35;
    }
    FUN3(VAR2->VAR8, "", FUN2(&VAR2->VAR13) - VAR2->VAR12);
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        if (VAR2->VAR14[VAR27].VAR37 && FUN2(&VAR2->VAR13) < VAR2->VAR33)
        {
            FUN13(VAR2, VAR27);
        }
        else
            memset(VAR2->VAR14[VAR27].VAR28, 0, sizeof(*VAR2->VAR14[VAR27].VAR28) * VAR5);
    }
    FUN3(VAR2->VAR8, "", FUN2(&VAR2->VAR13) - VAR2->VAR12);
    if (VAR10)
    {
        VAR49 *VAR50 = &VAR2->VAR51[FUN4(VAR5) - VAR52];
        FUN14(VAR2);
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            int VAR27 = VAR2->VAR19[VAR6];
            const int *VAR53 = VAR2->VAR14[VAR27].VAR54;
            int VAR55;
            if (VAR27 == VAR2->VAR56)
                memset(&VAR2->VAR57[VAR11], 0, sizeof(*VAR2->VAR57) * (VAR5 - VAR11));
            for (VAR55 = 0; VAR55 < VAR2->VAR22; VAR55++)
            {
                const int VAR58 = FUN15(VAR2->VAR24[VAR55 + 1], VAR2->VAR5);
                const int VAR59 = VAR2->VAR14[VAR27].VAR39 - (VAR2->VAR14[VAR27].VAR60 - *VAR53++) * VAR2->VAR14[VAR27].VAR61;
                const float VAR46 = FUN16(10.0, VAR59 / 20.0);
                int VAR62 = VAR2->VAR24[VAR55];
                VAR2->VAR63.FUN17(VAR2->VAR57 + VAR62, VAR2->VAR14[VAR27].VAR28 + VAR62, VAR46, VAR58 - VAR62);
            }
            VAR50->FUN18(VAR50, VAR2->VAR14[VAR27].VAR28, VAR2->VAR57);
        }
    }
    FUN19(VAR2);
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        if (VAR2->VAR14[VAR27].VAR17 >= VAR2->VAR14[VAR27].VAR64)
        {
            FUN7(VAR2->VAR8, VAR34, "");
            return VAR35;
        }
        ++VAR2->VAR14[VAR27].VAR17;
    }
    return 0;
}