static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11 = &VAR2->VAR12[VAR3];
    if (!VAR2->VAR13)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR14; VAR4++)
            FUN2(&VAR2->VAR15, 1, 0);
    }
    if (!VAR2->VAR13)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR14; VAR4++)
            FUN2(&VAR2->VAR15, 1, 1);
    }
    FUN2(&VAR2->VAR15, 1, 0);
    if (VAR2->VAR13)
        FUN2(&VAR2->VAR15, 1, 0);
    if (!VAR2->VAR13)
        FUN2(&VAR2->VAR15, 1, VAR11->VAR16);
    if (VAR11->VAR16)
    {
        if (!VAR2->VAR13)
            FUN2(&VAR2->VAR15, 1, VAR11->VAR17);
        if (VAR11->VAR17)
        {
            int VAR18, VAR19;
            if (VAR2->VAR13)
                FUN2(&VAR2->VAR15, 1, 0);
            if (!VAR2->VAR13 || VAR2->VAR20 != VAR21)
            {
                for (VAR4 = 1; VAR4 <= VAR2->VAR14; VAR4++)
                    FUN2(&VAR2->VAR15, 1, VAR11->VAR22[VAR4]);
            }
            if (VAR2->VAR20 == VAR21)
                FUN2(&VAR2->VAR15, 1, 0);
            VAR18 = (VAR2->VAR23[VAR24] - 37) / 12;
            VAR19 = (VAR2->VAR25 - 37) / 12;
            FUN2(&VAR2->VAR15, 4, VAR18);
            FUN2(&VAR2->VAR15, 4, VAR19 - 3);
            if (VAR2->VAR13)
            {
                FUN2(&VAR2->VAR15, 1, 0);
            }
            else
            {
                for (VAR7 = VAR18 + 1; VAR7 < VAR19; VAR7++)
                    FUN2(&VAR2->VAR15, 1, VAR26[VAR7]);
            }
        }
    }
    if (VAR11->VAR17)
    {
        for (VAR4 = 1; VAR4 <= VAR2->VAR14; VAR4++)
        {
            if (VAR11->VAR22[VAR4])
            {
                if (!VAR2->VAR13 || VAR11->VAR27[VAR4] != 2)
                    FUN2(&VAR2->VAR15, 1, VAR11->VAR27[VAR4]);
                if (VAR11->VAR27[VAR4])
                {
                    FUN2(&VAR2->VAR15, 2, VAR11->VAR28[VAR4]);
                    for (VAR7 = 0; VAR7 < VAR2->VAR29; VAR7++)
                    {
                        FUN2(&VAR2->VAR15, 4, VAR11->VAR30[VAR4][VAR7]);
                        FUN2(&VAR2->VAR15, 4, VAR11->VAR31[VAR4][VAR7]);
                    }
                }
            }
        }
    }
    if (VAR2->VAR20 == VAR21)
    {
        if (!VAR2->VAR13 || VAR3 > 0)
            FUN2(&VAR2->VAR15, 1, VAR11->VAR32);
        if (VAR11->VAR32)
        {
            for (VAR7 = 0; VAR7 < VAR11->VAR33; VAR7++)
                FUN2(&VAR2->VAR15, 1, VAR11->VAR34[VAR7]);
        }
    }
    if (!VAR2->VAR13)
    {
        for (VAR4 = !VAR11->VAR17; VAR4 <= VAR2->VAR14; VAR4++)
            FUN2(&VAR2->VAR15, 2, VAR2->VAR35[VAR4][VAR3]);
        if (VAR2->VAR36)
            FUN2(&VAR2->VAR15, 1, VAR2->VAR35[VAR2->VAR37][VAR3]);
    }
    for (VAR4 = 1; VAR4 <= VAR2->VAR14; VAR4++)
    {
        if (VAR2->VAR35[VAR4][VAR3] != VAR38 && !VAR11->VAR22[VAR4])
            FUN2(&VAR2->VAR15, 6, VAR2->VAR39);
    }
    for (VAR4 = !VAR11->VAR17; VAR4 <= VAR2->VAR40; VAR4++)
    {
        int VAR41;
        int VAR42 = (VAR4 == VAR24);
        if (VAR2->VAR35[VAR4][VAR3] == VAR38)
            continue;
        FUN2(&VAR2->VAR15, 4, VAR11->VAR43[VAR4][0] >> VAR42);
        VAR41 = VAR44[VAR42][VAR2->VAR35[VAR4][VAR3] - 1][VAR11->VAR45[VAR4] - VAR2->VAR23[VAR4]];
        for (VAR5 = 1; VAR5 <= VAR41; VAR5++)
            FUN2(&VAR2->VAR15, 7, VAR11->VAR43[VAR4][VAR5]);
        if (VAR4 != VAR2->VAR37 && !VAR42)
            FUN2(&VAR2->VAR15, 2, 0);
    }
    if (!VAR2->VAR13)
    {
        VAR6 = (VAR3 == 0);
        FUN2(&VAR2->VAR15, 1, VAR6);
        if (VAR6)
        {
            FUN2(&VAR2->VAR15, 2, VAR2->VAR46);
            FUN2(&VAR2->VAR15, 2, VAR2->VAR47);
            FUN2(&VAR2->VAR15, 2, VAR2->VAR48);
            FUN2(&VAR2->VAR15, 2, VAR2->VAR49);
            FUN2(&VAR2->VAR15, 3, VAR2->VAR50);
        }
    }
    if (!VAR2->VAR13)
    {
        FUN2(&VAR2->VAR15, 1, VAR11->VAR51);
        if (VAR11->VAR51)
        {
            FUN2(&VAR2->VAR15, 6, VAR2->VAR52);
            for (VAR4 = !VAR11->VAR17; VAR4 <= VAR2->VAR40; VAR4++)
            {
                FUN2(&VAR2->VAR15, 4, VAR2->VAR53[VAR4]);
                FUN2(&VAR2->VAR15, 3, VAR2->VAR54[VAR4]);
            }
        }
    }
    else
    {
        FUN2(&VAR2->VAR15, 1, 0);
    }
    if (VAR11->VAR17)
    {
        if (!VAR2->VAR13 || VAR11->VAR55 != 2)
            FUN2(&VAR2->VAR15, 1, VAR11->VAR55);
        if (VAR11->VAR55)
        {
            FUN2(&VAR2->VAR15, 3, VAR2->VAR56.VAR57);
            FUN2(&VAR2->VAR15, 3, VAR2->VAR56.VAR58);
        }
    }
    if (!VAR2->VAR13)
    {
        FUN2(&VAR2->VAR15, 1, 0);
        FUN2(&VAR2->VAR15, 1, 0);
    }
    VAR8 = !VAR11->VAR17;
    for (VAR4 = 1; VAR4 <= VAR2->VAR40; VAR4++)
    {
        int VAR59, VAR60;
        if (!VAR8 && VAR4 > 1 && VAR11->VAR22[VAR4 - 1])
        {
            VAR9 = VAR4 - 1;
            VAR4 = VAR24;
            VAR8 = 1;
        }
        for (VAR5 = VAR2->VAR23[VAR4]; VAR5 < VAR11->VAR45[VAR4]; VAR5++)
        {
            VAR60 = VAR11->VAR61[VAR4][VAR5];
            VAR59 = VAR2->VAR62[VAR4][VAR3][VAR5];
            switch (VAR59)
            {
            case 0:
                break;
            case 1:
                if (VAR60 != 128)
                    FUN2(&VAR2->VAR15, 5, VAR60);
                break;
            case 2:
                if (VAR60 != 128)
                    FUN2(&VAR2->VAR15, 7, VAR60);
                break;
            case 3:
                FUN3(&VAR2->VAR15, 3, VAR60);
                break;
            case 4:
                if (VAR60 != 128)
                    FUN2(&VAR2->VAR15, 7, VAR60);
                break;
            case 14:
                FUN3(&VAR2->VAR15, 14, VAR60);
                break;
            case 15:
                FUN3(&VAR2->VAR15, 16, VAR60);
                break;
            default:
                FUN3(&VAR2->VAR15, VAR59 - 1, VAR60);
                break;
            }
        }
        if (VAR4 == VAR24)
            VAR4 = VAR9;
    }
}