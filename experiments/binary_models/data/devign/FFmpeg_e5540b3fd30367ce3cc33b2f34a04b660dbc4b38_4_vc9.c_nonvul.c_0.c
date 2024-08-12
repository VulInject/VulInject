static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5 = 0, VAR6;
    int VAR7;
    int VAR8 = VAR9;
    int VAR10, VAR11;
    int VAR12;
    static const int VAR13[6] = {0, 2, 3, 4, 5, 8}, VAR14[6] = {0, 1, 3, 7, 15, 31};
    int VAR15 = 1, VAR16 = 1;
    int VAR17, VAR18, VAR19, VAR20;
    int VAR21, VAR22;
    int VAR23;
    int VAR24, VAR25;
    int VAR26, VAR27;
    switch (VAR2->VAR28)
    {
    case 1:
        VAR21 = 10;
        VAR22 = 9;
        break;
    case 2:
        VAR21 = 12;
        VAR22 = 10;
        break;
    case 3:
        VAR21 = 13;
        VAR22 = 11;
        break;
    default:
        VAR21 = 9;
        VAR22 = 8;
        break;
    }
    VAR23 = VAR2->VAR29 & 1;
    VAR21 -= VAR23;
    VAR22 -= VAR23;
    if (VAR2->VAR30 < 5)
        VAR2->VAR31 = &VAR32[0];
    else if (VAR2->VAR30 < 13)
        VAR2->VAR31 = &VAR32[1];
    else
        VAR2->VAR31 = &VAR32[2];
    for (VAR4 = 0; VAR4 < VAR2->VAR33; VAR4++)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR34; VAR3++)
        {
            if (VAR2->VAR35.VAR36)
                VAR2->VAR35.VAR37[VAR5] = FUN2(&VAR2->VAR38, 1);
            if (VAR2->VAR39.VAR36)
                VAR2->VAR39.VAR37[VAR5] = FUN2(&VAR2->VAR38, 1);
            if (!VAR2->VAR35.VAR37[VAR5])
            {
                if (VAR2->VAR39.VAR37[VAR5])
                {
                    VAR8 = FUN3(&VAR2->VAR38);
                    if (VAR2->VAR40 > 420 && VAR8 < 3)
                        VAR8 = 1 - VAR8;
                }
                else
                {
                    FUN4(VAR17, VAR18);
                    if (!VAR16)
                    {
                        VAR8 = FUN3(&VAR2->VAR38);
                        if (VAR2->VAR40 > 420 && VAR8 < 3)
                            VAR8 = 1 - VAR8;
                    }
                }
            }
            if (!VAR2->VAR39.VAR37[VAR5])
            {
                if (VAR15)
                {
                    FUN5();
                    if (VAR16)
                        VAR7 = FUN2(&VAR2->VAR38, 1);
                }
                else
                {
                    if (VAR8 == VAR41)
                    {
                        FUN4(VAR19, VAR20);
                    }
                    if (VAR15)
                    {
                        if (VAR16)
                            VAR7 = FUN2(&VAR2->VAR38, 1);
                        FUN5();
                    }
                }
            }
            if (VAR2->VAR42)
                VAR12 = FUN6(&VAR2->VAR38, VAR2->VAR31->VAR43, VAR44, 12);
            for (VAR6 = 0; VAR6 < 6; VAR6++)
            {
            }
            VAR5++;
        }
    }
    return 0;
}