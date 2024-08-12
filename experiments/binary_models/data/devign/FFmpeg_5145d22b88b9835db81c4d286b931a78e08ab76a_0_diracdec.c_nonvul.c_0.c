static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    unsigned VAR7;
    VAR7 = FUN2(VAR4);
    if (VAR8)
    {
        FUN3(VAR2->VAR9, VAR10, VAR11);
        return -1;
    }
    VAR12 = VAR7;
    FUN4(VAR4);
    VAR2->VAR13 = VAR2->VAR14 ? FUN5(VAR4) : 0;
    if (VAR2->VAR13)
        return 0;
    FUN6(VAR2->VAR15, VAR7 > 6, "")
    FUN6(VAR2->VAR16, VAR7 > VAR17 || VAR7 < 1, "") if (!VAR2->VAR18)
    {
        if (FUN5(VAR4))
        {
            for (VAR5 = 0; VAR5 <= VAR2->VAR16; VAR5++)
            {
                FUN6(VAR2->VAR19[VAR5].VAR20, VAR7 < 1 || VAR7 > (VAR2->VAR9->VAR20 >> VAR2->VAR16 - VAR5), "")
                FUN6(VAR2->VAR19[VAR5].VAR21, VAR7 < 1 || VAR7 > (VAR2->VAR9->VAR21 >> VAR2->VAR16 - VAR5), "")
            }
            FUN6(VAR2->VAR22, VAR7 > 1, "")
        }
        else
            for (VAR5 = 0; VAR5 <= VAR2->VAR16; VAR5++)
                VAR2->VAR19[VAR5].VAR20 = VAR2->VAR19[VAR5].VAR21 = 1;
    }
    else
    {
        VAR2->VAR23.VAR24 = FUN2(VAR4);
        VAR2->VAR23.VAR25 = FUN2(VAR4);
        VAR2->VAR23.VAR26.VAR27 = FUN2(VAR4);
        VAR2->VAR23.VAR26.VAR28 = FUN2(VAR4);
        if (VAR2->VAR23.VAR26.VAR28 <= 0)
        {
            FUN3(VAR2->VAR9, VAR10, "");
            return VAR29;
        }
        if (FUN5(VAR4))
        {
            FUN3(VAR2->VAR9, VAR30, "");
            VAR2->VAR23.VAR31[0][0] = FUN2(VAR4);
            for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
            {
                VAR2->VAR23.VAR31[VAR6][1] = FUN2(VAR4);
                VAR2->VAR23.VAR31[VAR6][2] = FUN2(VAR4);
                VAR2->VAR23.VAR31[VAR6][3] = FUN2(VAR4);
            }
        }
        else
        {
            if (VAR2->VAR16 > 4)
            {
                FUN3(VAR2->VAR9, VAR10, "", VAR2->VAR16);
                return VAR29;
            }
            for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
                for (VAR5 = 0; VAR5 < 4; VAR5++)
                {
                    VAR2->VAR23.VAR31[VAR6][VAR5] = VAR32[VAR2->VAR15][VAR6][VAR5];
                    if (VAR2->VAR15 == 3)
                        VAR2->VAR23.VAR31[VAR6][VAR5] += 4 * (VAR2->VAR16 - 1 - VAR6);
                }
        }
    }
    return 0;
}