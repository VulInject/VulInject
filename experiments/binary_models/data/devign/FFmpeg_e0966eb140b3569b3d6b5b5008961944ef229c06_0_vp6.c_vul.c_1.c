static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11.VAR12;
    VAR9 *VAR13, *VAR14, *VAR15;
    int VAR16, VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23;
    int VAR24 = 0;
    for (VAR19 = 0; VAR19 < 6; VAR19++)
    {
        int VAR25 = 1;
        int VAR26 = 1;
        if (VAR19 > 3)
            VAR24 = 1;
        VAR23 = VAR2->VAR27[VAR28[VAR19]].VAR29 + VAR2->VAR30[VAR2->VAR31[VAR19]].VAR29;
        VAR13 = VAR7->VAR32[VAR24];
        VAR14 = VAR7->VAR33[VAR24][VAR23];
        for (VAR18 = 0; VAR18 < 64;)
        {
            if ((VAR18 > 1 && VAR25 == 0) || FUN2(VAR4, VAR14[0]))
            {
                if (FUN2(VAR4, VAR14[2]))
                {
                    if (FUN2(VAR4, VAR14[3]))
                    {
                        VAR22 = FUN3(VAR4, VAR34, VAR13);
                        VAR16 = VAR35[VAR22 + 5];
                        for (VAR20 = VAR36[VAR22]; VAR20 >= 0; VAR20--)
                            VAR16 += FUN2(VAR4, VAR37[VAR22][VAR20]) << VAR20;
                    }
                    else
                    {
                        if (FUN2(VAR4, VAR14[4]))
                            VAR16 = 3 + FUN2(VAR4, VAR13[5]);
                        else
                            VAR16 = 2;
                    }
                    VAR25 = 2;
                }
                else
                {
                    VAR25 = 1;
                    VAR16 = 1;
                }
                VAR17 = FUN4(VAR4);
                VAR16 = (VAR16 ^ -VAR17) + VAR17;
                if (VAR18)
                    VAR16 *= VAR2->VAR38;
                VAR22 = VAR7->VAR39[VAR18];
                VAR2->VAR40[VAR19][VAR10[VAR22]] = VAR16;
                VAR26 = 1;
            }
            else
            {
                VAR25 = 0;
                if (VAR18 > 0)
                {
                    if (!FUN2(VAR4, VAR14[1]))
                        break;
                    VAR15 = VAR7->VAR41[VAR18 >= 6];
                    VAR26 = FUN3(VAR4, VAR42, VAR15);
                    if (!VAR26)
                        for (VAR26 = 9, VAR20 = 0; VAR20 < 6; VAR20++)
                            VAR26 += FUN2(VAR4, VAR15[VAR20 + 8]) << VAR20;
                }
            }
            VAR21 = VAR43[VAR18 += VAR26];
            VAR13 = VAR14 = VAR7->VAR44[VAR24][VAR25][VAR21];
        }
        VAR2->VAR27[VAR28[VAR19]].VAR29 = VAR2->VAR30[VAR2->VAR31[VAR19]].VAR29 = !!VAR2->VAR40[VAR19][0];
    }
}