static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    const enum VAR8 *VAR9, *VAR10;
    VAR11 *VAR12 = NULL;
    int VAR13, VAR14;
    if (!VAR2->VAR15)
    {
        FUN2(VAR4, VAR16, ""
                                  "");
        return FUN3(VAR17);
    }
    VAR4->VAR18 = FUN4(VAR2->VAR15);
    if (!VAR4->VAR18)
        return FUN3(VAR19);
    VAR4->VAR20 = (VAR21 *)VAR4->VAR18->VAR22;
    VAR7 = FUN5(VAR4->VAR18, NULL);
    if (!VAR7)
    {
        VAR13 = FUN3(VAR17);
        goto VAR23;
    }
    VAR9 = VAR7->VAR24;
    VAR10 = VAR7->VAR25;
    VAR12 = FUN6(VAR10);
    if (!VAR12)
    {
        VAR13 = FUN3(VAR19);
        goto VAR23;
    }
    if (VAR9)
    {
        for (VAR14 = 0; VAR9[VAR14] != VAR26; VAR14++)
        {
            VAR13 = FUN7(&VAR12, VAR9[VAR14]);
            if (VAR13 < 0)
            {
                FUN8(&VAR12);
                goto VAR23;
            }
        }
    }
    FUN9(VAR12, &VAR2->VAR27[0]->VAR28);
    FUN9(FUN6(VAR10), &VAR2->VAR29[0]->VAR30);
    FUN10(&VAR7);
    return 0;
VAR23:
    FUN11(&VAR4->VAR18);
    FUN10(&VAR7);
    return VAR13;
}