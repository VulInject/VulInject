static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    FUN2();
    if (VAR7)
    {
        FUN3();
        FUN4();
        FUN5();
        FUN6(NULL);
        VAR7 = 0;
    }
    FUN7(NULL, VAR8);
    while (1)
    {
        VAR3 = getch();
        if (VAR3 == VAR9)
            break;
        if (VAR3 == VAR10)
        {
            FUN3();
            FUN4();
            FUN5();
            FUN8(VAR2, 0, 0, VAR11, VAR12);
            continue;
        }
        VAR5 = VAR13[VAR3];
        VAR6 = 0;
        if (VAR5 == 1)
        {
            int VAR14 = getch();
            if (VAR14 != VAR9)
            {
                VAR3 = VAR14;
                VAR6 = VAR15;
                VAR5 = VAR13[VAR3];
                if (VAR5 != -1)
                {
                    VAR5 |= VAR15;
                    if (VAR5 >= VAR16 && VAR5 < VAR16 + 9)
                    {
                        FUN9();
                        FUN10(VAR17);
                        FUN11(VAR5 - VAR16);
                        VAR7 = 1;
                        continue;
                    }
                }
            }
        }
        if (VAR18)
        {
            VAR4 = -1;
            if (VAR3 < VAR19)
                VAR4 = VAR20[VAR3];
            if (VAR4 == -1)
            {
                if (VAR3 < '')
                {
                    VAR4 = VAR3 + '';
                    if (VAR4 >= '' && VAR4 <= '')
                        VAR4 += '' - '';
                    VAR4 |= VAR21;
                }
                else
                    VAR4 = VAR3;
            }
            VAR5 = FUN12(VAR18, VAR4 & VAR22);
            if (VAR5 == 0)
                continue;
            VAR5 |= (VAR4 & ~VAR22) >> 16;
            VAR5 |= VAR6;
        }
        if (VAR5 == -1)
            continue;
        if (FUN13(NULL))
        {
            if (VAR5 & VAR23)
            {
                FUN14(NULL, VAR24, true);
                FUN15(0);
            }
            if (VAR5 & VAR25)
            {
                FUN14(NULL, VAR26, true);
                FUN15(0);
            }
            if (VAR5 & VAR15)
            {
                FUN14(NULL, VAR27, true);
                FUN15(0);
            }
            if (VAR5 & VAR28)
            {
                FUN14(NULL, VAR29 | VAR27, true);
                FUN15(0);
            }
            FUN14(NULL, VAR5 & VAR30, true);
            FUN15(0);
            FUN14(NULL, VAR5 & VAR30, false);
            FUN15(0);
            if (VAR5 & VAR28)
            {
                FUN14(NULL, VAR29 | VAR27, false);
                FUN15(0);
            }
            if (VAR5 & VAR15)
            {
                FUN14(NULL, VAR27, false);
                FUN15(0);
            }
            if (VAR5 & VAR25)
            {
                FUN14(NULL, VAR26, false);
                FUN15(0);
            }
            if (VAR5 & VAR23)
            {
                FUN14(NULL, VAR24, false);
                FUN15(0);
            }
        }
        else
        {
            VAR4 = -1;
            if (VAR3 < VAR19)
            {
                VAR4 = VAR31[VAR3];
            }
            if (VAR4 == -1)
                VAR4 = VAR3;
            FUN16(VAR4);
        }
    }
}