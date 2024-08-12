static int FUN1(VAR1 *VAR2, float VAR3[120], VAR4 *VAR5, unsigned int VAR6, VAR7 *VAR8, enum BandType VAR9[120], int VAR10[120])
{
    int VAR11, VAR12, VAR13 = 0;
    int VAR14[3] = {VAR6, VAR6 - 90, 0};
    int VAR15;
    int VAR16 = 1;
    static const char *const VAR17[3] = {"", "", ""};
    for (VAR11 = 0; VAR11 < VAR8->VAR18; VAR11++)
    {
        for (VAR12 = 0; VAR12 < VAR8->VAR19;)
        {
            int VAR20 = VAR10[VAR13];
            if (VAR9[VAR13] == VAR21)
            {
                for (; VAR12 < VAR20; VAR12++, VAR13++)
                    VAR3[VAR13] = 0.;
            }
            else if ((VAR9[VAR13] == VAR22) || (VAR9[VAR13] == VAR23))
            {
                for (; VAR12 < VAR20; VAR12++, VAR13++)
                {
                    VAR14[2] += FUN2(VAR5, VAR24.VAR25, 7, 3) - 60;
                    VAR15 = FUN3(VAR14[2], -155, 100);
                    if (VAR14[2] != VAR15)
                    {
                        FUN4(VAR2->VAR26, ""
                                                         ""
                                                         ""
                                                         "",
                                              VAR14[2], VAR15);
                    }
                    VAR3[VAR13] = VAR27[-VAR15 + VAR28];
                }
            }
            else if (VAR9[VAR13] == VAR29)
            {
                for (; VAR12 < VAR20; VAR12++, VAR13++)
                {
                    if (VAR16-- > 0)
                        VAR14[1] += FUN5(VAR5, 9) - 256;
                    else
                        VAR14[1] += FUN2(VAR5, VAR24.VAR25, 7, 3) - 60;
                    VAR15 = FUN3(VAR14[1], -100, 155);
                    if (VAR14[1] != VAR15)
                    {
                        FUN4(VAR2->VAR26, ""
                                                         ""
                                                         "",
                                              VAR14[1], VAR15);
                    }
                    VAR3[VAR13] = -VAR27[VAR15 + VAR28];
                }
            }
            else
            {
                for (; VAR12 < VAR20; VAR12++, VAR13++)
                {
                    VAR14[0] += FUN2(VAR5, VAR24.VAR25, 7, 3) - 60;
                    if (VAR14[0] > 255U)
                    {
                        FUN6(VAR2->VAR26, VAR30, "", VAR17[0], VAR14[0]);
                        return -1;
                    }
                    VAR3[VAR13] = -VAR27[VAR14[0] - 100 + VAR28];
                }
            }
        }
    }
    return 0;
}