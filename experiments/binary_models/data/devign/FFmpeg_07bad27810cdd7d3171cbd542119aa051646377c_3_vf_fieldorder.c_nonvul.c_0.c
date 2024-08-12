static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    VAR11 *VAR12 = VAR2->VAR13;
    VAR11 *VAR14 = VAR9->VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    VAR21 *VAR22, *VAR23;
    if (VAR12->VAR24->VAR25 && VAR12->VAR24->VAR26 != VAR7->VAR27)
    {
        FUN2(VAR4, "", VAR7->VAR27 ? "" : "");
        VAR16 = VAR12->VAR24->VAR16;
        for (VAR17 = 0; VAR17 < 4 && VAR12->VAR28[VAR17]; VAR17++)
        {
            VAR18 = VAR12->VAR29[VAR17];
            VAR19 = VAR7->VAR19[VAR17];
            VAR22 = VAR12->VAR28[VAR17];
            VAR23 = VAR14->VAR28[VAR17];
            if (VAR7->VAR27)
            {
                for (VAR20 = 0; VAR20 < VAR16; VAR20++)
                {
                    if (1 + VAR20 < VAR14->VAR24->VAR16)
                    {
                        memcpy(VAR23, VAR22 + VAR18, VAR19);
                    }
                    else
                    {
                        memcpy(VAR23, VAR22 - VAR18 - VAR18, VAR19);
                    }
                    VAR22 += VAR18;
                    VAR23 += VAR18;
                }
            }
            else
            {
                VAR22 += (VAR16 - 1) * VAR18;
                VAR23 += (VAR16 - 1) * VAR18;
                for (VAR20 = VAR16 - 1; VAR20 >= 0; VAR20--)
                {
                    if (VAR20 > 0)
                    {
                        memcpy(VAR23, VAR22 - VAR18, VAR19);
                    }
                    else
                    {
                        memcpy(VAR23, VAR22 + VAR18 + VAR18, VAR19);
                    }
                    VAR22 -= VAR18;
                    VAR23 -= VAR18;
                }
            }
        }
        VAR14->VAR24->VAR26 = VAR7->VAR27;
        FUN3(VAR9, 0, VAR16, 1);
    }
    else
    {
        FUN2(VAR4, "");
    }
    FUN4(VAR9);
    FUN5(&VAR9->VAR15);
}