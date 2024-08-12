static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR9 *VAR12, *VAR13, *VAR14;
    int VAR15, VAR16, VAR17;
    int VAR18, VAR19, VAR20, VAR21, VAR22;
    int VAR23 = 0;
    if (VAR4->VAR24 >= VAR4->VAR25 && VAR4->VAR26 >= 0)
    {
        FUN2(VAR2->VAR27, VAR28, "");
        return VAR29;
    }
    for (VAR18 = 0; VAR18 < 6; VAR18++)
    {
        int VAR30 = 1;
        int VAR31 = 1;
        if (VAR18 > 3)
            VAR23 = 1;
        VAR22 = VAR2->VAR32[VAR33[VAR18]].VAR34 + VAR2->VAR35[VAR2->VAR36[VAR18]].VAR34;
        VAR12 = VAR7->VAR37[VAR23];
        VAR13 = VAR7->VAR38[VAR23][VAR22];
        VAR17 = 0;
        for (;;)
        {
            if ((VAR17 > 1 && VAR30 == 0) || FUN3(VAR4, VAR13[0]))
            {
                if (FUN3(VAR4, VAR13[2]))
                {
                    if (FUN3(VAR4, VAR13[3]))
                    {
                        VAR21 = FUN4(VAR4, VAR39, VAR12);
                        VAR15 = VAR40[VAR21 + 5];
                        for (VAR19 = VAR41[VAR21]; VAR19 >= 0; VAR19--)
                            VAR15 += FUN5(VAR4, VAR42[VAR21][VAR19]) << VAR19;
                    }
                    else
                    {
                        if (FUN3(VAR4, VAR13[4]))
                            VAR15 = 3 + FUN5(VAR4, VAR12[5]);
                        else
                            VAR15 = 2;
                    }
                    VAR30 = 2;
                }
                else
                {
                    VAR30 = 1;
                    VAR15 = 1;
                }
                VAR16 = FUN6(VAR4);
                VAR15 = (VAR15 ^ -VAR16) + VAR16;
                if (VAR17)
                    VAR15 *= VAR2->VAR43;
                VAR21 = VAR7->VAR44[VAR17];
                VAR2->VAR45[VAR18][VAR10[VAR21]] = VAR15;
                VAR31 = 1;
            }
            else
            {
                VAR30 = 0;
                if (VAR17 > 0)
                {
                    if (!FUN3(VAR4, VAR13[1]))
                        break;
                    VAR14 = VAR7->VAR46[VAR17 >= 6];
                    VAR31 = FUN4(VAR4, VAR47, VAR14);
                    if (!VAR31)
                        for (VAR31 = 9, VAR19 = 0; VAR19 < 6; VAR19++)
                            VAR31 += FUN5(VAR4, VAR14[VAR19 + 8]) << VAR19;
                }
            }
            VAR17 += VAR31;
            if (VAR17 >= 64)
                break;
            VAR20 = VAR48[VAR17];
            VAR12 = VAR13 = VAR7->VAR49[VAR23][VAR30][VAR20];
        }
        VAR2->VAR32[VAR33[VAR18]].VAR34 = VAR2->VAR35[VAR2->VAR36[VAR18]].VAR34 = !!VAR2->VAR45[VAR18][0];
    }
    return 0;
}