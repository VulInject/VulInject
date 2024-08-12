static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    GetBitContext VAR10;
    if (VAR2->VAR11[0].VAR12 == NULL)
        return;
    VAR2->VAR13 = 0;
    for (VAR3 = 0; VAR3 < 5; VAR3++)
        VAR2->VAR14[VAR3] = -1;
    for (VAR3 = 0, VAR6 = 256; VAR3 < VAR2->VAR15; VAR3++)
    {
        VAR16 *VAR12;
        for (VAR4 = 0, VAR5 = 0, VAR12 = NULL; VAR4 < VAR2->VAR15; VAR4++)
        {
            VAR7 = VAR2->VAR11[VAR4].VAR12->VAR8;
            if (VAR7 > VAR5 && VAR7 < VAR6)
            {
                VAR5 = VAR7;
                VAR12 = VAR2->VAR11[VAR4].VAR12;
            }
        }
        VAR6 = VAR5;
        if (VAR3 == 0 && (VAR12->VAR8 < 16 || VAR12->VAR8 >= 48 || VAR17[VAR12->VAR8 - 16]))
            return;
        FUN2(&VAR10, VAR12->VAR18, VAR12->VAR19 * 8);
        if (VAR12->VAR8 >= 32 && VAR12->VAR8 < 48 && !VAR17[VAR12->VAR8 - 16])
            VAR9 = 1;
        else
            VAR9 = 0;
        VAR8 = VAR12->VAR8;
        if ((VAR8 >= 17 && VAR8 < 24) || (VAR8 >= 33 && VAR8 < 40))
        {
            int VAR20 = VAR2->VAR21 + 5 - (VAR8 & 15);
            if (VAR20 >= 0 && VAR20 < 4)
                FUN3(VAR2, VAR20, &VAR10, VAR9);
        }
        else if (VAR8 == 31)
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
                FUN3(VAR2, VAR4, &VAR10, VAR9);
        }
        else if (VAR8 == 46)
        {
            for (VAR4 = 0; VAR4 < 6; VAR4++)
                VAR2->VAR22[VAR4] = FUN4(&VAR10, 6);
            for (VAR4 = 0; VAR4 < 4; VAR4++)
                FUN3(VAR2, VAR4, &VAR10, VAR9);
        }
    }
    for (VAR3 = 0, VAR4 = -1; VAR3 < 5; VAR3++)
        if (VAR2->VAR14[VAR3] >= 0)
        {
            if (VAR4 >= 0)
                VAR2->VAR23[VAR4] = VAR2->VAR14[VAR3];
            VAR4 = VAR3;
        }
    if (VAR4 >= 0)
        VAR2->VAR23[VAR4] = VAR2->VAR13;
}