static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8 = 0;
    VAR4->VAR9 = VAR4->VAR10 + VAR4->VAR11;
    FUN2(VAR2);
    VAR4->VAR12 = FUN3(VAR7);
    if (VAR4->VAR13 && VAR2->VAR14 != &VAR15)
    {
        if ((VAR8 = FUN4(VAR2, 0, 0, VAR16, 0)) < 0)
    }
    else
    {
        if ((VAR8 = FUN4(VAR2, 0, 2, VAR16, 0)) < 0)
            FUN2(VAR2);
        FUN5(VAR2);
        FUN2(VAR2);
        FUN6(VAR2);
        if (VAR2->VAR7->VAR17)
        {
            if (VAR2->VAR14 == &VAR15)
            {
                FUN7(VAR7, VAR4->VAR18[0], VAR19);
                if ((VAR8 = FUN8(VAR2)) < 0)
                    FUN7(VAR7, 0, VAR19);
                if (VAR4->VAR13 && VAR2->VAR14 != &VAR15)
                {
                    if ((VAR8 = FUN4(VAR2, 1, 2, VAR20, 1)) < 0)
                        FUN2(VAR2);
                    FUN5(VAR2);
                }
                else
                {
                    if ((VAR8 = FUN4(VAR2, 0, 0, VAR20, 1)) < 0)
                    VAR21:
                        FUN9(VAR2);
                    FUN10(&VAR4->VAR22);
                    FUN10(&VAR4->VAR18);
                    FUN10(&VAR4->VAR23->VAR5);
                    FUN10(&VAR4->VAR23);
                    FUN11(VAR2);
                    return VAR8 < 0 ? VAR8 : 0