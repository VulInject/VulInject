static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4;
    int VAR5 = VAR2->VAR4;
    int VAR6;
    int VAR7 = VAR2->VAR4 * VAR2->VAR8;
    int VAR9 = 0;
    int VAR10;
    VAR2->VAR11 = FUN2(&VAR2->VAR12);
    for (VAR6 = 0; VAR6 < VAR2->VAR8; VAR6++)
    {
        VAR2->VAR13[VAR6].VAR14 = 0;
        if (VAR3 > VAR2->VAR13[VAR6].VAR15)
        {
            VAR3 = VAR2->VAR13[VAR6].VAR15;
            VAR5 = VAR2->VAR13[VAR6].VAR5[VAR2->VAR13[VAR6].VAR16];
        }
    }
    FUN3(VAR2->VAR17, "", VAR3, VAR5);
    VAR2->VAR18 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR8; VAR6++)
    {
        const int VAR16 = VAR2->VAR13[VAR6].VAR16;
        VAR7 -= VAR2->VAR13[VAR6].VAR15;
        if (VAR3 == VAR2->VAR13[VAR6].VAR15 && VAR5 == VAR2->VAR13[VAR6].VAR5[VAR16])
        {
            VAR7 -= VAR2->VAR13[VAR6].VAR5[VAR16];
            VAR2->VAR13[VAR6].VAR15 += VAR2->VAR13[VAR6].VAR5[VAR16];
            VAR2->VAR19[VAR2->VAR18] = VAR6;
            ++VAR2->VAR18;
        }
    }
    if (!VAR7)
        VAR2->VAR20 = 1;
    FUN3(VAR2->VAR17, "", VAR2->VAR18);
    VAR2->VAR21 = FUN4(VAR2->VAR4 / VAR5);
    VAR2->VAR22 = VAR2->VAR23[VAR2->VAR21];
    VAR2->VAR24 = VAR2->VAR25[VAR2->VAR21];
    VAR10 = VAR2->VAR26[VAR2->VAR21];
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        VAR2->VAR13[VAR27].VAR28 = &VAR2->VAR13[VAR27].VAR29[(VAR2->VAR4 >> 1) + VAR3];
    }
    VAR2->VAR5 = VAR5;
    VAR2->VAR30 = FUN4(VAR2->VAR5 - 1) + 1;
    if (FUN5(&VAR2->VAR12))
    {
        int VAR31;
        if (!(VAR31 = FUN6(&VAR2->VAR12, 2)))
        {
            int VAR32 = FUN6(&VAR2->VAR12, 4);
            VAR31 = FUN6(&VAR2->VAR12, VAR32) + 1;
        }
        if (VAR31 >= 0)
        {
            if (FUN2(&VAR2->VAR12) + VAR31 > VAR2->VAR33)
            {
                FUN7(VAR2->VAR17, VAR34, "");
                return VAR35;
            }
            FUN8(&VAR2->VAR12, VAR31);
        }
    }
    if (FUN5(&VAR2->VAR12))
    {
        FUN9(VAR2->VAR17, "");
        return VAR35;
    }
    if (FUN10(VAR2) < 0)
        return VAR35;
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        if ((VAR2->VAR13[VAR27].VAR36 = FUN5(&VAR2->VAR12)))
            VAR9 = 1;
    }
    if (VAR9)
    {
        int VAR37;
        int VAR38 = 90 * VAR2->VAR39 >> 4;
        if ((VAR2->VAR40 = FUN5(&VAR2->VAR12)))
        {
            int VAR41 = FUN4((VAR2->VAR5 + 3) / 4) + 1;
            for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
            {
                int VAR27 = VAR2->VAR19[VAR6];
                int VAR42 = FUN6(&VAR2->VAR12, VAR41) << 2;
                if (VAR42 > VAR43)
                {
                    FUN7(VAR2->VAR17, VAR34, "", VAR42);
                    return VAR35;
                }
                VAR2->VAR13[VAR27].VAR42 = VAR42;
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
            {
                int VAR27 = VAR2->VAR19[VAR6];
                VAR2->VAR13[VAR27].VAR42 = VAR2->VAR5;
            }
        }
        VAR37 = FUN11(&VAR2->VAR12, 6);
        VAR38 += VAR37;
        if (VAR37 == -32 || VAR37 == 31)
        {
            const int VAR44 = (VAR37 == 31) - 1;
            int VAR45 = 0;
            while (FUN2(&VAR2->VAR12) + 5 < VAR2->VAR33 && (VAR37 = FUN6(&VAR2->VAR12, 5)) == 31)
            {
                VAR45 += 31;
            }
            VAR38 += ((VAR45 + VAR37) ^ VAR44) - VAR44;
        }
        if (VAR38 < 0)
        {
            FUN7(VAR2->VAR17, VAR46, "");
        }
        if (VAR2->VAR18 == 1)
        {
            VAR2->VAR13[VAR2->VAR19[0]].VAR38 = VAR38;
        }
        else
        {
            int VAR47 = FUN6(&VAR2->VAR12, 3);
            for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
            {
                int VAR27 = VAR2->VAR19[VAR6];
                VAR2->VAR13[VAR27].VAR38 = VAR38;
                if (FUN5(&VAR2->VAR12))
                {
                    if (VAR47)
                    {
                        VAR2->VAR13[VAR27].VAR38 += FUN6(&VAR2->VAR12, VAR47) + 1;
                    }
                    else
                        ++VAR2->VAR13[VAR27].VAR38;
                }
            }
        }
        if (FUN12(VAR2) < 0)
            return VAR35;
    }
    FUN3(VAR2->VAR17, "", FUN2(&VAR2->VAR12) - VAR2->VAR11);
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        if (VAR2->VAR13[VAR27].VAR36 && FUN2(&VAR2->VAR12) < VAR2->VAR33)
        {
            FUN13(VAR2, VAR27);
        }
        else
            memset(VAR2->VAR13[VAR27].VAR28, 0, sizeof(*VAR2->VAR13[VAR27].VAR28) * VAR5);
    }
    FUN3(VAR2->VAR17, "", FUN2(&VAR2->VAR12) - VAR2->VAR11);
    if (VAR9)
    {
        VAR48 *VAR49 = &VAR2->VAR50[FUN4(VAR5) - VAR51];
        FUN14(VAR2);
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            int VAR27 = VAR2->VAR19[VAR6];
            const int *VAR52 = VAR2->VAR13[VAR27].VAR53;
            int VAR54;
            if (VAR27 == VAR2->VAR55)
                memset(&VAR2->VAR56[VAR10], 0, sizeof(*VAR2->VAR56) * (VAR5 - VAR10));
            for (VAR54 = 0; VAR54 < VAR2->VAR22; VAR54++)
            {
                const int VAR57 = FUN15(VAR2->VAR24[VAR54 + 1], VAR2->VAR5);
                const int VAR58 = VAR2->VAR13[VAR27].VAR38 - (VAR2->VAR13[VAR27].VAR59 - *VAR52++) * VAR2->VAR13[VAR27].VAR60;
                const float VAR45 = FUN16(10.0, VAR58 / 20.0);
                int VAR61 = VAR2->VAR24[VAR54];
                VAR2->VAR62.FUN17(VAR2->VAR56 + VAR61, VAR2->VAR13[VAR27].VAR28 + VAR61, VAR45, VAR57 - VAR61);
            }
            VAR49->FUN18(VAR49, VAR2->VAR13[VAR27].VAR28, VAR2->VAR56);
        }
    }
    FUN19(VAR2);
    for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
    {
        int VAR27 = VAR2->VAR19[VAR6];
        if (VAR2->VAR13[VAR27].VAR16 >= VAR2->VAR13[VAR27].VAR63)
        {
            FUN7(VAR2->VAR17, VAR34, "");
            return VAR35;
        }
        ++VAR2->VAR13[VAR27].VAR16;
    }
    return 0;
}