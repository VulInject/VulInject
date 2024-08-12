void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR5->VAR8; VAR7++)
    {
        VAR9 *VAR10 = VAR5->VAR11[VAR7];
        if (!VAR10)
            continue;
        if (VAR10->VAR12)
        {
            if (VAR2->VAR13)
            {
                VAR1 *VAR14 = VAR10->VAR12;
                FUN2(VAR14);
                if (VAR5->VAR15 == VAR16)
                {
                    VAR17 *VAR18;
                    if (VAR19 && VAR14->VAR20 && VAR3)
                        FUN3(VAR2, VAR10);
                    FUN4(VAR14->VAR20, &VAR18);
                    FUN5(VAR18);
                }
                else
                {
                    FUN6(VAR14->VAR20);
                }
                FUN7(VAR14);
            }
            else if (VAR5->VAR21 == VAR22 && VAR23)
                FUN8(VAR10->VAR12);
            else if (VAR5->VAR21 == VAR24 && VAR23)
                FUN9(VAR10->VAR12);
        }
        VAR10->VAR12 = NULL;
        if (VAR10->VAR25)
            FUN10(VAR10->VAR25);
        VAR10->VAR25 = NULL;
    }
}