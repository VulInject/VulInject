int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    FUN2(VAR2);
    FUN3(VAR2);
    FUN4(VAR2, VAR4);
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        if (FUN5(&VAR4->VAR9))
        {
            int VAR10 = VAR2->VAR11;
            for (VAR6 = 0;; VAR6++)
            {
                unsigned int VAR12 = FUN6(&VAR4->VAR9);
                unsigned int VAR13;
                int VAR14;
                VAR15 *VAR16 = NULL;
                if (VAR12 == 3)
                    break;
                if (VAR6 >= VAR4->VAR17[VAR5])
                {
                    FUN7(VAR2->VAR18, VAR19, "");
                    return -1;
                }
                switch (VAR12)
                {
                case 0:
                case 1:
                {
                    const unsigned int VAR20 = FUN8(&VAR4->VAR9) + 1;
                    int VAR21;
                    if (VAR20 > VAR2->VAR22)
                    {
                        FUN7(VAR2->VAR18, VAR19, "");
                        return VAR23;
                    }
                    if (VAR12 == 0)
                        VAR10 -= VAR20;
                    else
                        VAR10 += VAR20;
                    VAR10 &= VAR2->VAR22 - 1;
                    VAR21 = FUN9(VAR2, VAR10, &VAR7);
                    for (VAR14 = VAR2->VAR24 - 1; VAR14 >= 0; VAR14--)
                    {
                        VAR16 = VAR2->VAR25[VAR14];
                        assert(VAR16->VAR26);
                        assert(!VAR16->VAR27);
                        if (VAR16->VAR21 == VAR21 && (VAR16->VAR26 & VAR7))
                            break;
                    }
                    if (VAR14 >= 0)
                        VAR16->VAR13 = VAR10;
                    break;
                }
                case 2:
                {
                    int VAR28;
                    VAR13 = FUN8(&VAR4->VAR9);
                    VAR28 = FUN9(VAR2, VAR13, &VAR7);
                    if (VAR28 > 31)
                    {
                        FUN7(VAR2->VAR18, VAR19, "");
                        return VAR23;
                    }
                    VAR16 = VAR2->VAR27[VAR28];
                    assert(!(VAR16 && !VAR16->VAR26));
                    if (VAR16 && (VAR16->VAR26 & VAR7) && !FUN10(VAR2, VAR16))
                    {
                        VAR16->VAR13 = VAR13;
                        assert(VAR16->VAR27);
                        VAR14 = 0;
                    }
                    else
                    {
                        VAR14 = -1;
                    }
                    break;
                }
                default:
                    FUN7(VAR2->VAR18, VAR19, "", VAR12);
                    return VAR23;
                }
                if (VAR14 < 0)
                {
                    FUN7(VAR2->VAR18, VAR19, "");
                    memset(&VAR4->VAR29[VAR5][VAR6], 0, sizeof(VAR4->VAR29[0][0]));
                }
                else
                {
                    for (VAR14 = VAR6; VAR14 + 1 < VAR4->VAR17[VAR5]; VAR14++)
                    {
                        if (VAR4->VAR29[VAR5][VAR14].VAR30 && VAR16->VAR27 == VAR4->VAR29[VAR5][VAR14].VAR30->VAR27 && VAR16->VAR13 == VAR4->VAR29[VAR5][VAR14].VAR13)
                            break;
                    }
                    for (; VAR14 > VAR6; VAR14--)
                    {
                        VAR4->VAR29[VAR5][VAR14] = VAR4->VAR29[VAR5][VAR14 - 1];
                    }
                    FUN11(&VAR4->VAR29[VAR5][VAR6], VAR16);
                    if (FUN12(VAR2))
                    {
                        FUN13(&VAR4->VAR29[VAR5][VAR6], VAR7);
                    }
                }
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR17[VAR5]; VAR6++)
        {
            if (!VAR4->VAR29[VAR5][VAR6].VAR30 || (!FUN12(VAR2) && (VAR4->VAR29[VAR5][VAR6].VAR26 & 3) != 3))
            {
                int VAR14;
                FUN7(VAR2->VAR18, VAR19, "");
                for (VAR14 = 0; VAR14 < FUN14(VAR2->VAR31); VAR14++)
                    VAR2->VAR31[VAR14] = VAR32;
                return -1;
            }
            FUN15(FUN16(VAR4->VAR29[VAR5][VAR6].VAR30->VAR33->VAR34[0]) > 0);
        }
    }
    return 0;
}