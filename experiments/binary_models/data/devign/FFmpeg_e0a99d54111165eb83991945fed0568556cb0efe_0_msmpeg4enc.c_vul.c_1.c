static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int *VAR5)
{
    int VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10 = 0;
    VAR11 *VAR12;
    VAR8 = FUN2(VAR2, VAR4, &VAR12, VAR5);
    if (VAR4 < 4)
    {
        *VAR12 = VAR3 * VAR2->VAR13;
    }
    else
    {
        *VAR12 = VAR3 * VAR2->VAR14;
    }
    VAR3 -= VAR8;
    if (VAR2->VAR15 <= 2)
    {
        if (VAR4 < 4)
        {
            FUN3(&VAR2->VAR16, VAR17[VAR3 + 256][1], VAR17[VAR3 + 256][0]);
        }
        else
        {
            FUN3(&VAR2->VAR16, VAR18[VAR3 + 256][1], VAR18[VAR3 + 256][0]);
        }
    }
    else
    {
        VAR6 = 0;
        if (VAR3 < 0)
        {
            VAR3 = -VAR3;
            VAR6 = 1;
        }
        VAR7 = VAR3;
        if (VAR7 > VAR19)
            VAR7 = VAR19;
        else if (VAR2->VAR15 >= 6)
        {
            if (VAR2->VAR20 == 1)
            {
                VAR9 = (VAR3 + 3) & 0x3;
                VAR7 = ((VAR3 + 3) >> 2);
            }
            else if (VAR2->VAR20 == 2)
            {
                VAR9 = (VAR3 + 1) & 0x1;
                VAR7 = ((VAR3 + 1) >> 1);
            }
        }
        if (VAR2->VAR21 == 0)
        {
            if (VAR4 < 4)
            {
                FUN3(&VAR2->VAR16, VAR22[VAR7][1], VAR22[VAR7][0]);
            }
            else
            {
                FUN3(&VAR2->VAR16, VAR23[VAR7][1], VAR23[VAR7][0]);
            }
        }
        else
        {
            if (VAR4 < 4)
            {
                FUN3(&VAR2->VAR16, VAR24[VAR7][1], VAR24[VAR7][0]);
            }
            else
            {
                FUN3(&VAR2->VAR16, VAR25[VAR7][1], VAR25[VAR7][0]);
            }
        }
        if (VAR2->VAR15 >= 6 && VAR2->VAR20 <= 2)
            VAR10 = 3 - VAR2->VAR20;
        if (VAR7 == VAR19)
            FUN3(&VAR2->VAR16, 8 + VAR10, VAR3);
        else if (VAR10 > 0)
            FUN3(&VAR2->VAR16, VAR10, VAR9);
        if (VAR3 != 0)
        {
            FUN3(&VAR2->VAR16, 1, VAR6);
        }
    }
}