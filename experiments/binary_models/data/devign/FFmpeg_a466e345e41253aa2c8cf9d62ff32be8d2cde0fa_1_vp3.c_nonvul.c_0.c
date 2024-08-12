static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    FUN2("");
    if (VAR2->VAR12)
    {
        FUN2("");
        for (VAR5 = 0; VAR5 < VAR2->VAR13; VAR5++)
            VAR2->VAR14[VAR5].VAR15 = VAR16;
    }
    else
    {
        VAR8 = FUN3(VAR4, 3);
        FUN4("", VAR8);
        if (VAR8 == 0)
        {
            FUN4("");
            for (VAR5 = 0; VAR5 < 8; VAR5++)
                VAR17[VAR8][FUN3(VAR4, 3)] = VAR5;
        }
        for (VAR5 = 0; VAR5 < 8; VAR5++)
            FUN4("", VAR8, VAR5, VAR17[VAR8][VAR5]);
        for (VAR5 = 0; VAR5 < VAR2->VAR18; VAR5++)
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                VAR9 = VAR2->VAR19[VAR5 * 4 + VAR6];
                if ((VAR9 == -1) || (!VAR2->VAR20[VAR9]))
                    continue;
                if (VAR8 == 7)
                    VAR11 = FUN3(VAR4, 3);
                else
                    VAR11 = VAR17[VAR8][FUN5(VAR4)];
                for (VAR7 = 0; VAR7 < 6; VAR7++)
                {
                    VAR10 = VAR2->VAR21[VAR9 * 6 + VAR7];
                    if (VAR2->VAR14[VAR10].VAR15 != VAR22)
                        VAR2->VAR14[VAR10].VAR15 = VAR11;
                }
                FUN4("", VAR2->VAR21[VAR9 * 6], VAR11);
            }
        }
    }
}