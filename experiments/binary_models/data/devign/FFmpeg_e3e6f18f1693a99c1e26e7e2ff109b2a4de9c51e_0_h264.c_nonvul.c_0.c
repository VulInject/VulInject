static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6, VAR7;
    FUN2(VAR2);
    FUN3(VAR2);
    if (VAR2->VAR8 == VAR9)
        return 0;
    for (VAR5 = 0; VAR5 < VAR2->VAR10; VAR5++)
    {
        memcpy(VAR2->VAR11[VAR5], VAR2->VAR12[VAR5], sizeof(VAR13) * VAR2->VAR14[VAR5]);
        if (FUN4(&VAR4->VAR15))
        {
            int VAR16 = VAR2->VAR17;
            for (VAR6 = 0;; VAR6++)
            {
                unsigned int VAR18 = FUN5(&VAR4->VAR15);
                unsigned int VAR19;
                int VAR20;
                VAR13 *VAR21 = NULL;
                if (VAR18 == 3)
                    break;
                if (VAR6 >= VAR2->VAR14[VAR5])
                {
                    FUN6(VAR2->VAR4.VAR22, VAR23, "");
                    return -1;
                }
                if (VAR18 < 3)
                {
                    if (VAR18 < 2)
                    {
                        const unsigned int VAR24 = FUN5(&VAR4->VAR15) + 1;
                        int VAR25;
                        if (VAR24 > VAR2->VAR26)
                        {
                            FUN6(VAR2->VAR4.VAR22, VAR23, "");
                            return -1;
                        }
                        if (VAR18 == 0)
                            VAR16 -= VAR24;
                        else
                            VAR16 += VAR24;
                        VAR16 &= VAR2->VAR26 - 1;
                        VAR25 = FUN7(VAR2, VAR16, &VAR7);
                        for (VAR20 = VAR2->VAR27 - 1; VAR20 >= 0; VAR20--)
                        {
                            VAR21 = VAR2->VAR28[VAR20];
                            assert(VAR21->VAR29);
                            assert(!VAR21->VAR30);
                            if (VAR21->VAR31[0] != NULL && VAR21->VAR25 == VAR25 && (VAR21->VAR29 & VAR7) && VAR21->VAR30 == 0)
                                break;
                        }
                        if (VAR20 >= 0)
                            VAR21->VAR19 = VAR16;
                    }
                    else
                    {
                        int VAR32;
                        VAR19 = FUN5(&VAR4->VAR15);
                        VAR32 = FUN7(VAR2, VAR19, &VAR7);
                        if (VAR32 > 31)
                        {
                            FUN6(VAR2->VAR4.VAR22, VAR23, "");
                            return -1;
                        }
                        VAR21 = VAR2->VAR30[VAR32];
                        assert(!(VAR21 && !VAR21->VAR29));
                        if (VAR21 && (VAR21->VAR29 & VAR7))
                        {
                            VAR21->VAR19 = VAR19;
                            assert(VAR21->VAR30);
                            VAR20 = 0;
                        }
                        else
                        {
                            VAR20 = -1;
                        }
                    }
                    if (VAR20 < 0)
                    {
                        FUN6(VAR2->VAR4.VAR22, VAR23, "");
                        memset(&VAR2->VAR11[VAR5][VAR6], 0, sizeof(VAR13));
                    }
                    else
                    {
                        for (VAR20 = VAR6; VAR20 + 1 < VAR2->VAR14[VAR5]; VAR20++)
                        {
                            if (VAR21->VAR30 == VAR2->VAR11[VAR5][VAR20].VAR30 && VAR21->VAR19 == VAR2->VAR11[VAR5][VAR20].VAR19)
                                break;
                        }
                        for (; VAR20 > VAR6; VAR20--)
                        {
                            VAR2->VAR11[VAR5][VAR20] = VAR2->VAR11[VAR5][VAR20 - 1];
                        }
                        VAR2->VAR11[VAR5][VAR6] = *VAR21;
                        if (VAR33)
                        {
                            FUN8(&VAR2->VAR11[VAR5][VAR6], VAR7);
                        }
                    }
                }
                else
                {
                    FUN6(VAR2->VAR4.VAR22, VAR23, "");
                    return -1;
                }
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR10; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR14[VAR5]; VAR6++)
        {
            if (!VAR2->VAR11[VAR5][VAR6].VAR31[0])
                VAR2->VAR11[VAR5][VAR6] = VAR4->VAR34;
        }
    }
    if (VAR2->VAR35 == VAR36 && !VAR2->VAR37)
        FUN9(VAR2);
    FUN10(VAR2);
    return 0;
}