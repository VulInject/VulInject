static void FUN1(VAR1 *VAR2)
{
    VAR1 **VAR3, *VAR4;
    int VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR3 = &VAR13;
    while ((*VAR3) != NULL)
    {
        VAR4 = *VAR3;
        if (VAR4 == VAR2)
        {
            *VAR3 = VAR2->VAR14;
        }
        else
        {
            VAR3 = &VAR4->VAR14;
            if (VAR2->VAR15 >= 0)
                close(VAR2->VAR15);
            if (VAR2->VAR16)
            {
                for (VAR5 = 0; VAR5 < VAR2->VAR16->VAR6; VAR5++)
                {
                    VAR12 = VAR2->VAR16->VAR17[VAR5];
                    if (VAR12->VAR18.VAR18)
                    {
                        FUN2(&VAR12->VAR18);
                        FUN3(VAR2->VAR16);
                        VAR6 = 0;
                        if (VAR2->VAR19)
                            VAR6 = VAR2->VAR19->VAR6;
                        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
                        {
                            VAR8 = VAR2->VAR20[VAR5];
                            if (VAR8)
                            {
                                FUN4(VAR8);
                                VAR10 = VAR2->VAR21[VAR5];
                                if (VAR10)
                                {
                                    FUN5(VAR10);
                                    if (VAR2->VAR19)
                                        VAR22 -= VAR2->VAR19->VAR23;
                                    FUN6(&VAR2->VAR24);
                                    FUN4(VAR2->VAR25);
                                    FUN4(VAR2);
                                    VAR26--