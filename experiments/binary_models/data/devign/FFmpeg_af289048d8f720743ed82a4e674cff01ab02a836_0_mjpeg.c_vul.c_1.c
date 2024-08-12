static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    FUN2(&VAR2->VAR11, VAR4, VAR5);
    VAR6 = FUN3(&VAR2->VAR11, 16);
    if (FUN3(&VAR2->VAR11, 8) != 8)
        return -1;
    VAR10 = FUN3(&VAR2->VAR11, 16);
    VAR9 = FUN3(&VAR2->VAR11, 16);
    VAR7 = FUN3(&VAR2->VAR11, 8);
    if (VAR7 <= 0 || VAR7 > VAR12)
        return -1;
    VAR2->VAR7 = VAR7;
    VAR2->VAR13 = 1;
    VAR2->VAR14 = 1;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        VAR2->VAR15[VAR8] = FUN3(&VAR2->VAR11, 8) - 1;
        VAR2->VAR16[VAR8] = FUN3(&VAR2->VAR11, 4);
        VAR2->VAR17[VAR8] = FUN3(&VAR2->VAR11, 4);
        if (VAR2->VAR16[VAR8] > VAR2->VAR13)
            VAR2->VAR13 = VAR2->VAR16[VAR8];
        if (VAR2->VAR17[VAR8] > VAR2->VAR14)
            VAR2->VAR14 = VAR2->VAR17[VAR8];
        VAR2->VAR18[VAR8] = FUN3(&VAR2->VAR11, 8);
        if (VAR2->VAR18[VAR8] >= 4)
            return -1;
        FUN4("", VAR8, VAR2->VAR16[VAR8], VAR2->VAR17[VAR8]);
    }
    if (VAR9 != VAR2->VAR9 || VAR10 != VAR2->VAR10)
    {
        for (VAR8 = 0; VAR8 < VAR12; VAR8++)
        {
            free(VAR2->VAR19[VAR8]);
            VAR2->VAR19[VAR8] = NULL;
        }
        VAR2->VAR9 = VAR9;
        VAR2->VAR10 = VAR10;
        if (VAR2->VAR20 && VAR2->VAR21 != 0 && VAR2->VAR10 < ((VAR2->VAR21 * 3) / 4))
        {
            VAR2->VAR22 = 1;
            VAR2->VAR23 = 0;
        }
        for (VAR8 = 0; VAR8 < VAR7; VAR8++)
        {
            int VAR24, VAR25;
            VAR24 = (VAR2->VAR9 + 8 * VAR2->VAR13 - 1) / (8 * VAR2->VAR13);
            VAR25 = (VAR2->VAR10 + 8 * VAR2->VAR14 - 1) / (8 * VAR2->VAR14);
            VAR24 = VAR24 * 8 * VAR2->VAR16[VAR8];
            VAR25 = VAR25 * 8 * VAR2->VAR17[VAR8];
            if (VAR2->VAR22)
                VAR24 *= 2;
            VAR2->VAR26[VAR8] = VAR24;
            VAR2->VAR19[VAR8] = FUN5(VAR24 * VAR25);
        }
        VAR2->VAR20 = 0;
    }
    if (VAR6 != 8 + (3 * VAR7))
        FUN4("", VAR6);
    return 0;
}