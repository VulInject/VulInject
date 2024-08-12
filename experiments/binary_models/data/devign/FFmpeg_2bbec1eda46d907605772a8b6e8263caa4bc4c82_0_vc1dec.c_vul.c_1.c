static void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int *VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9.VAR8;
    int VAR10, VAR11, VAR12 = 0, VAR13 = 0, VAR14 = 0;
    VAR10 = FUN2(VAR8, VAR15[VAR6].VAR16, VAR17, 3);
    if (VAR10 != VAR18[VAR6] - 1)
    {
        VAR12 = VAR19[VAR6][VAR10][0];
        VAR13 = VAR19[VAR6][VAR10][1];
        VAR14 = VAR10 >= VAR20[VAR6];
        if (FUN3(VAR8))
            VAR13 = -VAR13;
    }
    else
    {
        VAR11 = FUN4(VAR8);
        if (VAR11 != 2)
        {
            VAR10 = FUN2(VAR8, VAR15[VAR6].VAR16, VAR17, 3);
            VAR12 = VAR19[VAR6][VAR10][0];
            VAR13 = VAR19[VAR6][VAR10][1];
            VAR14 = VAR10 >= VAR20[VAR6];
            if (VAR11 == 0)
            {
                if (VAR14)
                    VAR13 += VAR21[VAR6][VAR12];
                else
                    VAR13 += VAR22[VAR6][VAR12];
            }
            else
            {
                if (VAR14)
                    VAR12 += VAR23[VAR6][VAR13] + 1;
                else
                    VAR12 += VAR24[VAR6][VAR13] + 1;
            }
            if (FUN3(VAR8))
                VAR13 = -VAR13;
        }
        else
        {
            int VAR25;
            VAR14 = FUN3(VAR8);
            if (VAR2->VAR9.VAR26 == 0)
            {
                if (VAR2->VAR27 < 8 || VAR2->VAR28)
                {
                    VAR2->VAR9.VAR26 = FUN5(VAR8, 3);
                    if (!VAR2->VAR9.VAR26)
                        VAR2->VAR9.VAR26 = FUN5(VAR8, 2) + 8;
                }
                else
                {
                    VAR2->VAR9.VAR26 = FUN6(VAR8, 1, 6) + 2;
                }
                VAR2->VAR9.VAR29 = 3 + FUN5(VAR8, 2);
            }
            VAR12 = FUN5(VAR8, VAR2->VAR9.VAR29);
            VAR25 = FUN3(VAR8);
            VAR13 = FUN5(VAR8, VAR2->VAR9.VAR26);
            if (VAR25)
                VAR13 = -VAR13;
        }
    }
    *VAR3 = VAR14;
    *VAR4 = VAR12;
    *VAR5 = VAR13;
}