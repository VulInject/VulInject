static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR8 *VAR11, *VAR12;
    int VAR13, VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    int VAR22 = 0;
    if (VAR4->VAR23 >= VAR4->VAR24 && VAR4->VAR25 >= 0)
    {
        FUN2(VAR2->VAR26, VAR27, "");
        return VAR28;
    }
    for (VAR16 = 0; VAR16 < 6; VAR16++)
    {
        int VAR29 = 1;
        if (VAR16 > 3)
            VAR22 = 1;
        VAR20 = 6 * VAR2->VAR30[VAR31[VAR16]][0] + VAR2->VAR32[VAR2->VAR33[VAR16]].VAR34;
        VAR11 = VAR6->VAR35[VAR22];
        VAR12 = VAR6->VAR36[VAR22][VAR20];
        VAR15 = 0;
        for (;;)
        {
            if (FUN3(VAR4, VAR12[0]))
            {
                if (FUN3(VAR4, VAR12[2]))
                {
                    if (FUN3(VAR4, VAR12[3]))
                    {
                        VAR2->VAR30[VAR31[VAR16]][VAR15] = 4;
                        VAR19 = FUN4(VAR4, VAR37, VAR11);
                        VAR14 = FUN5(VAR4);
                        VAR13 = VAR38[VAR19 + 5];
                        for (VAR17 = VAR39[VAR19]; VAR17 >= 0; VAR17--)
                            VAR13 += FUN6(VAR4, VAR40[VAR19][VAR17]) << VAR17;
                    }
                    else
                    {
                        if (FUN3(VAR4, VAR12[4]))
                        {
                            VAR13 = 3 + FUN6(VAR4, VAR11[5]);
                            VAR2->VAR30[VAR31[VAR16]][VAR15] = 3;
                        }
                        else
                        {
                            VAR13 = 2;
                            VAR2->VAR30[VAR31[VAR16]][VAR15] = 2;
                        }
                        VAR14 = FUN5(VAR4);
                    }
                    VAR29 = 2;
                }
                else
                {
                    VAR29 = 1;
                    VAR2->VAR30[VAR31[VAR16]][VAR15] = 1;
                    VAR14 = FUN5(VAR4);
                    VAR13 = 1;
                }
                VAR13 = (VAR13 ^ -VAR14) + VAR14;
                if (VAR15)
                    VAR13 *= VAR2->VAR41;
                VAR2->VAR42[VAR16][VAR9[VAR15]] = VAR13;
            }
            else
            {
                if (VAR29 && !FUN3(VAR4, VAR12[1]))
                    break;
                VAR29 = 0;
                VAR2->VAR30[VAR31[VAR16]][VAR15] = 0;
            }
            VAR15++;
            if (VAR15 >= 64)
                break;
            VAR18 = VAR43[VAR15];
            VAR20 = VAR2->VAR30[VAR31[VAR16]][VAR15];
            VAR11 = VAR6->VAR44[VAR22][VAR29][VAR18];
            VAR12 = VAR18 > 2 ? VAR11 : VAR6->VAR45[VAR22][VAR29][VAR18][VAR20];
        }
        VAR21 = FUN7(VAR2->VAR46[VAR31[VAR16]], 24);
        VAR2->VAR46[VAR31[VAR16]] = VAR15;
        if (VAR15 < VAR21)
            for (VAR17 = VAR15; VAR17 <= VAR21; VAR17++)
                VAR2->VAR30[VAR31[VAR16]][VAR17] = 5;
        VAR2->VAR32[VAR2->VAR33[VAR16]].VAR34 = VAR2->VAR30[VAR31[VAR16]][0];
    }
    return 0;
}