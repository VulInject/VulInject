static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    FUN2();
    if (VAR8)
    {
        FUN3();
        FUN4();
        FUN5();
        FUN6(NULL);
        VAR8 = 0;
    }
    FUN7(NULL, VAR9);
    VAR4 = VAR10;
    while (1)
    {
        if (VAR4 == VAR10)
            VAR3 = getch();
        else
        {
            VAR3 = VAR4;
            VAR4 = VAR10;
        }
        if (VAR3 == VAR10)
            break;
        if (VAR3 == VAR11)
        {
            FUN3();
            FUN4();
            FUN5();
            FUN8(VAR2, 0, 0, VAR12, VAR13);
            continue;
        }
        VAR6 = VAR14[VAR3];
        VAR7 = 0;
        if (VAR6 == 1)
        {
            VAR4 = getch();
            if (VAR4 != VAR10)
            {
                VAR3 = VAR4;
                VAR7 = VAR15;
                VAR6 = VAR14[VAR4];
                VAR4 = VAR10;
                if (VAR6 != -1)
                {
                    VAR6 |= VAR15;
                    if (VAR6 >= VAR16 && VAR6 < VAR16 + 9)
                    {
                        FUN9();
                        FUN10(VAR17);
                        FUN11(VAR6 - VAR16);
                        VAR8 = 1;
                        continue;
                    }
                }
            }
        }
        if (VAR18)
        {
            VAR5 = -1;
            if (VAR3 < VAR19)
                VAR5 = VAR20[VAR3];
            if (VAR5 == -1)
            {
                if (VAR3 < '')
                {
                    VAR5 = VAR3 + '';
                    if (VAR5 >= '' && VAR5 <= '')
                        VAR5 += '' - '';
                    VAR5 |= VAR21;
                }
                else
                    VAR5 = VAR3;
            }
            VAR6 = FUN12(VAR18, VAR5 & VAR22);
            if (VAR6 == 0)
                continue;
            VAR6 |= (VAR5 & ~VAR22) >> 16;
            VAR6 |= VAR7;
        }
        if (VAR6 == -1)
            continue;
        if (FUN13(NULL))
        {
            if (VAR6 & VAR23)
            {
                FUN14(NULL, VAR24, true);
                FUN15(0);
            }
            if (VAR6 & VAR25)
            {
                FUN14(NULL, VAR26, true);
                FUN15(0);
            }
            if (VAR6 & VAR15)
            {
                FUN14(NULL, VAR27, true);
                FUN15(0);
            }
            if (VAR6 & VAR28)
            {
                FUN14(NULL, VAR29 | VAR27, true);
                FUN15(0);
            }
            FUN14(NULL, VAR6 & VAR30, true);
            FUN15(0);
            FUN14(NULL, VAR6 & VAR30, false);
            FUN15(0);
            if (VAR6 & VAR28)
            {
                FUN14(NULL, VAR29 | VAR27, false);
                FUN15(0);
            }
            if (VAR6 & VAR15)
            {
                FUN14(NULL, VAR27, false);
                FUN15(0);
            }
            if (VAR6 & VAR25)
            {
                FUN14(NULL, VAR26, false);
                FUN15(0);
            }
            if (VAR6 & VAR23)
            {
                FUN14(NULL, VAR24, false);
                FUN15(0);
            }
        }
        else
        {
            VAR5 = VAR31[VAR3];
            if (VAR5 == -1)
                VAR5 = VAR3;
            FUN16(VAR5);
        }
    }
}