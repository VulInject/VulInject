static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    FUN2(VAR2);
    FUN3(VAR2);
    if (VAR2->VAR7 == VAR8 || VAR2->VAR7 == VAR9)
        return 0;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        memcpy(VAR2->VAR10[VAR5], VAR2->VAR11[VAR5], sizeof(VAR12) * VAR2->VAR13[VAR5]);
        if (FUN4(&VAR4->VAR14))
        {
            int VAR15 = VAR2->VAR16;
            for (VAR6 = 0;; VAR6++)
            {
                int VAR17 = FUN5(&VAR4->VAR14);
                int VAR18;
                int VAR19;
                VAR12 *VAR20 = NULL;
                if (VAR17 == 3)
                    break;
                if (VAR6 >= VAR2->VAR13[VAR5])
                {
                    FUN6(VAR2->VAR4.VAR21, VAR22, "");
                    return -1;
                }
                if (VAR17 < 3)
                {
                    if (VAR17 < 2)
                    {
                        const int VAR23 = FUN5(&VAR4->VAR14) + 1;
                        if (VAR23 >= VAR2->VAR24)
                        {
                            FUN6(VAR2->VAR4.VAR21, VAR22, "");
                            return -1;
                        }
                        if (VAR17 == 0)
                            VAR15 -= VAR23;
                        else
                            VAR15 += VAR23;
                        VAR15 &= VAR2->VAR24 - 1;
                        for (VAR19 = VAR2->VAR25 - 1; VAR19 >= 0; VAR19--)
                        {
                            VAR20 = VAR2->VAR26[VAR19];
                            assert(VAR20->VAR27 == 3);
                            assert(!VAR20->VAR28);
                            if (VAR20->VAR29[0] != NULL && VAR20->VAR30 == VAR15 && VAR20->VAR28 == 0)
                                break;
                        }
                        if (VAR19 >= 0)
                            VAR20->VAR18 = VAR20->VAR30;
                    }
                    else
                    {
                        VAR18 = FUN5(&VAR4->VAR14);
                        VAR20 = VAR2->VAR28[VAR18];
                        if (VAR20)
                        {
                            VAR20->VAR18 = VAR18;
                            assert(VAR20->VAR27 == 3);
                            assert(VAR20->VAR28);
                            VAR19 = 0;
                        }
                        else
                        {
                            VAR19 = -1;
                        }
                    }
                    if (VAR19 < 0)
                    {
                        FUN6(VAR2->VAR4.VAR21, VAR22, "");
                        memset(&VAR2->VAR10[VAR5][VAR6], 0, sizeof(VAR12));
                    }
                    else
                    {
                        for (VAR19 = VAR6; VAR19 + 1 < VAR2->VAR13[VAR5]; VAR19++)
                        {
                            if (VAR20->VAR28 == VAR2->VAR10[VAR5][VAR19].VAR28 && VAR20->VAR18 == VAR2->VAR10[VAR5][VAR19].VAR18)
                                break;
                        }
                        for (; VAR19 > VAR6; VAR19--)
                        {
                            VAR2->VAR10[VAR5][VAR19] = VAR2->VAR10[VAR5][VAR19 - 1];
                        }
                        VAR2->VAR10[VAR5][VAR6] = *VAR20;
                    }
                }
                else
                {
                    FUN6(VAR2->VAR4.VAR21, VAR22, "");
                    return -1;
                }
            }
        }
        if (VAR2->VAR7 != VAR31)
            break;
    }
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR13[VAR5]; VAR6++)
        {
            if (!VAR2->VAR10[VAR5][VAR6].VAR29[0])
                VAR2->VAR10[VAR5][VAR6] = VAR4->VAR32;
        }
        if (VAR2->VAR7 != VAR31)
            break;
    }
    if (VAR2->VAR7 == VAR31 && !VAR2->VAR33)
        FUN7(VAR2);
    FUN8(VAR2);
    return 0;
}