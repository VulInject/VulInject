int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    FUN2(VAR2);
    FUN3(VAR2);
    for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR8[VAR3]; VAR6++)
            FUN4(&VAR2->VAR9[VAR3][VAR6], &VAR2->VAR10[VAR3][VAR6]);
        if (FUN5(&VAR2->VAR11))
        {
            int VAR12 = VAR2->VAR13;
            for (VAR4 = 0;; VAR4++)
            {
                unsigned int VAR14 = FUN6(&VAR2->VAR11);
                unsigned int VAR15;
                int VAR6;
                VAR16 *VAR17 = NULL;
                if (VAR14 == 3)
                    break;
                if (VAR4 >= VAR2->VAR8[VAR3])
                {
                    FUN7(VAR2->VAR18, VAR19, "");
                    return -1;
                }
                if (VAR14 < 3)
                {
                    if (VAR14 < 2)
                    {
                        const unsigned int VAR20 = FUN8(&VAR2->VAR11) + 1;
                        int VAR21;
                        if (VAR20 > VAR2->VAR22)
                        {
                            FUN7(VAR2->VAR18, VAR19, "");
                            return -1;
                        }
                        if (VAR14 == 0)
                            VAR12 -= VAR20;
                        else
                            VAR12 += VAR20;
                        VAR12 &= VAR2->VAR22 - 1;
                        VAR21 = FUN9(VAR2, VAR12, &VAR5);
                        for (VAR6 = VAR2->VAR23 - 1; VAR6 >= 0; VAR6--)
                        {
                            VAR17 = VAR2->VAR24[VAR6];
                            assert(VAR17->VAR25);
                            assert(!VAR17->VAR26);
                            if (VAR17->VAR21 == VAR21 && (VAR17->VAR25 & VAR5))
                                break;
                        }
                        if (VAR6 >= 0)
                            VAR17->VAR15 = VAR12;
                    }
                    else
                    {
                        int VAR27;
                        VAR15 = FUN8(&VAR2->VAR11);
                        VAR27 = FUN9(VAR2, VAR15, &VAR5);
                        if (VAR27 > 31)
                        {
                            FUN7(VAR2->VAR18, VAR19, "");
                            return -1;
                        }
                        VAR17 = VAR2->VAR26[VAR27];
                        assert(!(VAR17 && !VAR17->VAR25));
                        if (VAR17 && (VAR17->VAR25 & VAR5))
                        {
                            VAR17->VAR15 = VAR15;
                            assert(VAR17->VAR26);
                            VAR6 = 0;
                        }
                        else
                        {
                            VAR6 = -1;
                        }
                    }
                    if (VAR6 < 0)
                    {
                        FUN7(VAR2->VAR18, VAR19, "");
                        memset(&VAR2->VAR9[VAR3][VAR4], 0, sizeof(VAR16));
                    }
                    else
                    {
                        for (VAR6 = VAR4; VAR6 + 1 < VAR2->VAR8[VAR3]; VAR6++)
                        {
                            if (VAR17->VAR26 == VAR2->VAR9[VAR3][VAR6].VAR26 && VAR17->VAR15 == VAR2->VAR9[VAR3][VAR6].VAR15)
                                break;
                        }
                        for (; VAR6 > VAR4; VAR6--)
                        {
                            FUN4(&VAR2->VAR9[VAR3][VAR6], &VAR2->VAR9[VAR3][VAR6 - 1]);
                        }
                        FUN4(&VAR2->VAR9[VAR3][VAR4], VAR17);
                        if (FUN10(VAR2))
                        {
                            FUN11(&VAR2->VAR9[VAR3][VAR4], VAR5);
                        }
                    }
                }
                else
                {
                    FUN7(VAR2->VAR18, VAR19, "");
                    return -1;
                }
            }
        }
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR8[VAR3]; VAR4++)
        {
            if (!VAR2->VAR9[VAR3][VAR4].VAR28.VAR29[0])
            {
                FUN7(VAR2->VAR18, VAR19, "");
                if (VAR2->VAR10[VAR3][0].VAR28.VAR29[0])
                    FUN4(&VAR2->VAR9[VAR3][VAR4], &VAR2->VAR10[VAR3][0]);
                else
                    return -1;
            }
        }
    }
    return 0;
}