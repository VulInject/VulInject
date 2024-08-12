static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR4.VAR6;
    int VAR7 = 0, VAR8;
    int VAR9 = VAR10;
    int VAR11, VAR12;
    int VAR13;
    static const int VAR14[6] = {0, 2, 3, 4, 5, 8}, VAR15[6] = {0, 1, 3, 7, 15, 31};
    int VAR16 = 1;
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
    for (VAR4->VAR33 = 0; VAR4->VAR33 < VAR4->VAR34; VAR4->VAR33++)
    {
        for (VAR4->VAR35 = 0; VAR4->VAR35 < VAR4->VAR36; VAR4->VAR35++)
        {
            if (VAR2->VAR37.VAR38)
                VAR2->VAR37.VAR39[VAR7] = FUN2(VAR6, 1);
            if (VAR2->VAR40.VAR38)
                VAR2->VAR40.VAR39[VAR7] = FUN2(VAR6, 1);
            if (!VAR2->VAR37.VAR39[VAR7])
            {
                if (VAR2->VAR40.VAR39[VAR7])
                {
                    VAR9 = FUN3(VAR6);
                    if (VAR2->VAR41 > 420 && VAR9 < 3)
                        VAR9 = 1 - VAR9;
                }
                else
                {
                    FUN4(VAR17, VAR18);
                    if (!VAR4->VAR42)
                    {
                        VAR9 = FUN3(VAR6);
                        if (VAR2->VAR41 > 420 && VAR9 < 3)
                            VAR9 = 1 - VAR9;
                    }
                }
            }
            if (!VAR2->VAR40.VAR39[VAR7])
            {
                if (VAR16)
                {
                    FUN5();
                    if (VAR4->VAR42)
                        VAR4->VAR43 = FUN2(VAR6, 1);
                }
                else
                {
                    if (VAR9 == VAR44)
                    {
                        FUN4(VAR19, VAR20);
                    }
                    if (VAR16)
                    {
                        if (VAR4->VAR42)
                            VAR4->VAR43 = FUN2(VAR6, 1);
                        FUN5();
                    }
                }
            }
            if (VAR2->VAR45)
                VAR13 = FUN6(VAR6, VAR2->VAR31->VAR46, VAR47, 12);
            for (VAR8 = 0; VAR8 < 6; VAR8++)
            {
            }
            VAR7++;
        }
    }
    return 0;
}