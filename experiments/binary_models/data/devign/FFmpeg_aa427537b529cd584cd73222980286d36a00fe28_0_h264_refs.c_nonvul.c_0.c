int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    FUN2(VAR2);
    FUN3(VAR2);
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        memcpy(VAR4->VAR9[VAR5], VAR2->VAR10[VAR5], VAR4->VAR11[VAR5] * sizeof(VAR4->VAR9[0][0]));
        if (FUN4(&VAR4->VAR12))
        {
            int VAR13 = VAR2->VAR14;
            for (VAR6 = 0;; VAR6++)
            {
                unsigned int VAR15 = FUN5(&VAR4->VAR12);
                unsigned int VAR16;
                int VAR17;
                VAR18 *VAR19 = NULL;
                if (VAR15 == 3)
                    break;
                if (VAR6 >= VAR4->VAR11[VAR5])
                {
                    FUN6(VAR2->VAR20, VAR21, "");
                    return -1;
                }
                switch (VAR15)
                {
                case 0:
                case 1:
                {
                    const unsigned int VAR22 = FUN7(&VAR4->VAR12) + 1;
                    int VAR23;
                    if (VAR22 > VAR2->VAR24)
                    {
                        FUN6(VAR2->VAR20, VAR21, "");
                        return VAR25;
                    }
                    if (VAR15 == 0)
                        VAR13 -= VAR22;
                    else
                        VAR13 += VAR22;
                    VAR13 &= VAR2->VAR24 - 1;
                    VAR23 = FUN8(VAR2, VAR13, &VAR7);
                    for (VAR17 = VAR2->VAR26 - 1; VAR17 >= 0; VAR17--)
                    {
                        VAR19 = VAR2->VAR27[VAR17];
                        assert(VAR19->VAR28);
                        assert(!VAR19->VAR29);
                        if (VAR19->VAR23 == VAR23 && (VAR19->VAR28 & VAR7))
                            break;
                    }
                    if (VAR17 >= 0)
                        VAR19->VAR16 = VAR13;
                    break;
                }
                case 2:
                {
                    int VAR30;
                    VAR16 = FUN7(&VAR4->VAR12);
                    VAR30 = FUN8(VAR2, VAR16, &VAR7);
                    if (VAR30 > 31)
                    {
                        FUN6(VAR2->VAR20, VAR21, "");
                        return VAR25;
                    }
                    VAR19 = VAR2->VAR29[VAR30];
                    assert(!(VAR19 && !VAR19->VAR28));
                    if (VAR19 && (VAR19->VAR28 & VAR7) && !FUN9(VAR2, VAR19))
                    {
                        VAR19->VAR16 = VAR16;
                        assert(VAR19->VAR29);
                        VAR17 = 0;
                    }
                    else
                    {
                        VAR17 = -1;
                    }
                    break;
                }
                default:
                    FUN6(VAR2->VAR20, VAR21, "", VAR15);
                    return VAR25;
                }
                if (VAR17 < 0)
                {
                    FUN6(VAR2->VAR20, VAR21, "");
                    memset(&VAR4->VAR9[VAR5][VAR6], 0, sizeof(VAR4->VAR9[0][0]));
                }
                else
                {
                    for (VAR17 = VAR6; VAR17 + 1 < VAR4->VAR11[VAR5]; VAR17++)
                    {
                        if (VAR4->VAR9[VAR5][VAR17].VAR31 && VAR19->VAR29 == VAR4->VAR9[VAR5][VAR17].VAR31->VAR29 && VAR19->VAR16 == VAR4->VAR9[VAR5][VAR17].VAR16)
                            break;
                    }
                    for (; VAR17 > VAR6; VAR17--)
                    {
                        VAR4->VAR9[VAR5][VAR17] = VAR4->VAR9[VAR5][VAR17 - 1];
                    }
                    FUN10(&VAR4->VAR9[VAR5][VAR6], VAR19);
                    if (FUN11(VAR2))
                    {
                        FUN12(&VAR4->VAR9[VAR5][VAR6], VAR7);
                    }
                }
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR11[VAR5]; VAR6++)
        {
            if (!VAR4->VAR9[VAR5][VAR6].VAR31 || (!FUN11(VAR2) && (VAR4->VAR9[VAR5][VAR6].VAR28 & 3) != 3))
            {
                int VAR17;
                FUN6(VAR2->VAR20, VAR21, "", VAR2->VAR10[VAR5][0].VAR32);
                for (VAR17 = 0; VAR17 < FUN13(VAR2->VAR33); VAR17++)
                    VAR2->VAR33[VAR17] = VAR34;
                if (VAR2->VAR10[VAR5][0].VAR31 && !(!FUN11(VAR2) && (VAR2->VAR10[VAR5][0].VAR28 & 3) != 3))
                    VAR4->VAR9[VAR5][VAR6] = VAR2->VAR10[VAR5][0];
                else
                    return -1;
            }
            FUN14(FUN15(VAR4->VAR9[VAR5][VAR6].VAR31->VAR35->VAR36[0]) > 0);
        }
    }
    return 0;
}