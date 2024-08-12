void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR4->VAR7; VAR6++)
    {
        VAR8 *VAR9 = VAR4->VAR10[VAR6];
        if (!VAR9)
            continue;
        if (VAR9->VAR11)
        {
            if (VAR2->VAR12)
            {
                VAR1 *VAR13 = VAR9->VAR11;
                FUN2(VAR13);
                if (VAR4->VAR14 == VAR15)
                {
                    VAR16 *VAR17;
                    FUN3(VAR13->VAR18, &VAR17);
                    FUN4(VAR17);
                }
                else
                {
                    FUN5(VAR13->VAR18);
                }
                FUN6(&VAR13->VAR19[0]->VAR20);
                FUN6(&VAR13->VAR20);
                FUN4(VAR13->VAR19[0]);
                FUN4(VAR13);
            }
            else if (VAR4->VAR21 == VAR22 && VAR23)
                FUN7(VAR9->VAR11);
            else if (VAR23)
                FUN8(VAR9->VAR11);
        }
        VAR9->VAR11 = NULL;
        if (VAR9->VAR24)
            FUN9(VAR9->VAR24);
        VAR9->VAR24 = NULL;
    }