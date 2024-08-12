static int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(&VAR2->VAR4);
    int VAR5;
    int VAR6;
    int VAR7 = 0;
    int VAR8 = 0;
    int VAR9;
    int VAR10;
    int VAR11, VAR12;
    if (FUN3(&VAR2->VAR4) < 16)
        return -1;
    VAR5 = FUN4(&VAR2->VAR4, 9) + 1;
    FUN5(&VAR2->VAR4, 3);
    if (VAR2->VAR13)
    {
        if (FUN6(&VAR2->VAR4))
            FUN5(&VAR2->VAR4, 4);
        if (FUN6(&VAR2->VAR4))
            FUN7(&VAR2->VAR4, 24);
        if (FUN6(&VAR2->VAR4))
        {
            int VAR14 = FUN4(&VAR2->VAR4, 10) + 1;
            if (FUN3(&VAR2->VAR4) < VAR14 * 8)
                return -1;
            FUN7(&VAR2->VAR4, VAR14 * 8);
        }
        FUN5(&VAR2->VAR4, 5);
        FUN5(&VAR2->VAR4, 4);
        VAR6 = FUN4(&VAR2->VAR4, 8) + 1;
        if (FUN6(&VAR2->VAR4))
        {
            int VAR15;
            int VAR16 = 16;
            int VAR17[7];
            if (VAR6 > 2)
                VAR7 = FUN6(&VAR2->VAR4);
            if (VAR6 > 6)
                VAR8 = FUN6(&VAR2->VAR4);
            if (FUN6(&VAR2->VAR4))
            {
                VAR16 = (FUN4(&VAR2->VAR4, 2) + 1) << 2;
                FUN5(&VAR2->VAR4, VAR16);
            }
            VAR15 = FUN4(&VAR2->VAR4, 3);
            for (VAR11 = 0; VAR11 < VAR15; VAR11++)
            {
                VAR17[VAR11] = FUN8(FUN4(&VAR2->VAR4, VAR16));
            }
            for (VAR11 = 0; VAR11 < VAR15; VAR11++)
            {
                int VAR18 = FUN4(&VAR2->VAR4, 5) + 1;
                if (FUN3(&VAR2->VAR4) < 0)
                    return -1;
                for (VAR12 = 0; VAR12 < VAR17[VAR11]; VAR12++)
                {
                    int VAR19 = FUN9(&VAR2->VAR4, VAR18);
                    int VAR20 = FUN10(VAR19);
                    FUN7(&VAR2->VAR4, VAR20 * 5);
                }
            }
        }
        else
        {
            FUN5(&VAR2->VAR4, 3);
        }
    }
    VAR9 = FUN6(&VAR2->VAR4);
    if (VAR9)
        FUN4(&VAR2->VAR4, 8);
    if (FUN6(&VAR2->VAR4))
        FUN5(&VAR2->VAR4, 5);
    if (VAR9 && VAR7)
        FUN4(&VAR2->VAR4, 8);
    if (VAR2->VAR21 && FUN6(&VAR2->VAR4))
    {
        FUN5(&VAR2->VAR4, 1);
        FUN5(&VAR2->VAR4, 6);
        if (FUN4(&VAR2->VAR4, 2) != 3)
            FUN5(&VAR2->VAR4, 3);
        else
            FUN5(&VAR2->VAR4, 8);
        if (FUN6(&VAR2->VAR4))
            for (VAR11 = 0; VAR11 < VAR2->VAR22; VAR11++)
                FUN7(&VAR2->VAR4, VAR2->VAR23[VAR11] * 6);
        else
            FUN7(&VAR2->VAR4, VAR2->VAR22 * 6);
        for (VAR11 = 0; VAR11 < VAR2->VAR22; VAR11++)
        {
            if (FUN3(&VAR2->VAR4) < 0)
                return -1;
            FUN11(&VAR2->VAR4, VAR6, VAR2->VAR23[VAR11]);
            if (VAR8)
                FUN11(&VAR2->VAR4, 6, VAR2->VAR23[VAR11]);
            if (VAR7)
                FUN11(&VAR2->VAR4, 2, VAR2->VAR23[VAR11]);
        }
    }
    switch (FUN4(&VAR2->VAR4, 2))
    {
    case 0:
        VAR10 = FUN4(&VAR2->VAR4, 12);
        break;
    case 1:
        VAR10 = VAR24;
        break;
    case 2:
        VAR10 = VAR25;
        break;
    case 3:
        VAR10 = 0;
        break;
    }
    if (FUN3(&VAR2->VAR4) < 0)
        return -1;
    if (FUN2(&VAR2->VAR4) - VAR3 > VAR5 * 8)
    {
        FUN12(VAR2->VAR26, VAR27, "");
        return -1;
    }
    FUN7(&VAR2->VAR4, VAR3 + VAR5 * 8 - FUN2(&VAR2->VAR4));
    if (VAR10 & VAR24)
        VAR2->VAR28 = VAR29;
    else if (VAR10 & (VAR30 | VAR31 | VAR32))
        VAR2->VAR28 = VAR33;
    if (!(VAR10 & VAR34))
        FUN12(VAR2->VAR26, VAR27, "");
    if ((VAR10 & VAR35) != VAR2->VAR36)
        FUN12(VAR2->VAR26, VAR27, "", VAR10 & VAR35, VAR2->VAR36);
    return 0;
}