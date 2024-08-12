static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8.VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15, VAR16, VAR17;
    int VAR18 = 0;
    for (VAR15 = 0; VAR15 < 6; VAR15++)
    {
        int VAR19 = 0;
        if (VAR15 > 3)
            VAR18 = 1;
        VAR11 = &VAR2->VAR20[VAR18];
        for (VAR14 = 0; VAR14 < 64;)
        {
            int VAR21 = 1;
            if (VAR14 < 2 && VAR2->VAR22[VAR14][VAR18])
            {
                VAR2->VAR22[VAR14][VAR18]--;
                if (VAR14)
                    break;
            }
            else
            {
                if (FUN2(&VAR2->VAR23) >= VAR2->VAR23.VAR24)
                    return;
                VAR12 = FUN3(&VAR2->VAR23, VAR11->VAR25, 9, 3);
                if (VAR12 == 0)
                {
                    if (VAR14)
                    {
                        int VAR18 = (VAR14 >= 6);
                        VAR21 += FUN3(&VAR2->VAR23, VAR2->VAR26[VAR18].VAR25, 9, 3);
                        if (VAR21 >= 9)
                            VAR21 += FUN4(&VAR2->VAR23, 6);
                    }
                    else
                        VAR2->VAR22[0][VAR18] = FUN5(VAR2);
                    VAR19 = 0;
                }
                else if (VAR12 == 11)
                {
                    if (VAR14 == 1)
                        VAR2->VAR22[1][VAR18] = FUN5(VAR2);
                    break;
                }
                else
                {
                    int VAR27 = VAR28[VAR12];
                    if (VAR12 > 4)
                        VAR27 += FUN4(&VAR2->VAR23, VAR12 <= 9 ? VAR12 - 4 : 11);
                    VAR19 = 1 + (VAR27 > 1);
                    VAR13 = FUN6(&VAR2->VAR23);
                    VAR27 = (VAR27 ^ -VAR13) + VAR13;
                    if (VAR14)
                        VAR27 *= VAR2->VAR29;
                    VAR17 = VAR4->VAR30[VAR14];
                    VAR2->VAR31[VAR15][VAR7[VAR17]] = VAR27;
                }
            }
            VAR14 += VAR21;
            VAR16 = FUN7(VAR32[VAR14], 3);
            VAR11 = &VAR2->VAR33[VAR18][VAR19][VAR16];
        }
    }
}