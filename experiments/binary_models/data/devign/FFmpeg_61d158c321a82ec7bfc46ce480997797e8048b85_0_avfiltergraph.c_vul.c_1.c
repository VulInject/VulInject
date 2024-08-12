static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    int VAR5, VAR6;
    int VAR7, VAR8;
    for (VAR7 = 0; VAR7 < VAR2->VAR9; VAR7++)
    {
        VAR4 = VAR2->VAR10[VAR7];
        if (VAR4->VAR11 == VAR12 && VAR4->VAR13->VAR14 == 1)
            break;
    }
    if (VAR7 == VAR2->VAR9)
        return;
    VAR5 = VAR4->VAR13->VAR15[0];
    VAR6 = FUN2(VAR5);
    for (VAR7 = 0; VAR7 < VAR2->VAR16; VAR7++)
    {
        VAR3 *VAR17 = VAR2->VAR18[VAR7];
        int VAR19, VAR20 = VAR21;
        if (VAR17->VAR11 != VAR12 || VAR17->VAR22->VAR14 < 2)
            continue;
        for (VAR8 = 0; VAR8 < VAR17->VAR22->VAR14; VAR8++)
        {
            int VAR23 = VAR17->VAR22->VAR15[VAR8];
            int VAR24 = FUN2(VAR23);
            int VAR25;
            if (FUN3(VAR23) == VAR5 || FUN4(VAR23) == VAR5)
            {
                VAR19 = VAR8;
                break;
            }
            if (VAR6 == 4 && VAR24 == 8)
            {
                VAR19 = VAR8;
                break;
            }
            VAR25 = -FUN5(VAR24 - VAR6);
            if (VAR24 >= VAR6)
                VAR25 += VAR26 / 2;
            if (VAR25 > VAR20)
            {
                VAR20 = VAR25;
                VAR19 = VAR8;
            }
        }
        FUN6(int, VAR17->VAR22->VAR15[0], VAR17->VAR22->VAR15[VAR19]);
    }
}