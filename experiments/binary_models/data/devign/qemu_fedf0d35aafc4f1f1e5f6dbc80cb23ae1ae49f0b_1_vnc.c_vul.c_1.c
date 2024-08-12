static void FUN1(VAR1 *VAR2, int VAR3, bool VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(sizeof(VAR6));
    int VAR8;
    VAR7->VAR3 = VAR3;
    VAR7->VAR2 = VAR2;
    if (VAR4)
    {
        VAR7->VAR9 = VAR10;
        VAR7->VAR11 = VAR12;
    }
    else
    {
        if (VAR5)
        {
            VAR7->VAR9 = VAR2->VAR13;
            VAR7->VAR11 = VAR12;
        }
        else
        {
            VAR7->VAR9 = VAR2->VAR9;
            VAR7->VAR11 = VAR2->VAR11;
        }
    }
    FUN3("", VAR3, VAR5, VAR7->VAR9, VAR7->VAR11);
    VAR7->VAR14 = FUN2(VAR15 * sizeof(*VAR7->VAR14));
    for (VAR8 = 0; VAR8 < VAR15; ++VAR8)
    {
        VAR7->VAR14[VAR8] = FUN2(VAR16 * sizeof(VAR17));
    }
    FUN3("", VAR3);
    FUN4(&VAR2->VAR18, VAR19);
    FUN5(VAR7->VAR3);
    if (VAR5)
    {
        VAR7->VAR5 = 1;
        if (VAR2->VAR20)
        {
            FUN6(VAR7->VAR3, VAR21, NULL, VAR7);
        }
        else
        {
            FUN6(VAR7->VAR3, VAR22, NULL, VAR7);
        }
    }
    else
    {
        FUN6(VAR7->VAR3, VAR23, NULL, VAR7);
    }
    FUN7(VAR7);
    FUN8(VAR7, VAR24);
    FUN9(VAR7, VAR25);
    if (!VAR7->VAR5)
    {
        FUN10(VAR7);
    }
    if (VAR2->VAR26 > VAR2->VAR27)
    {
        FUN11(VAR7, &VAR2->VAR28, VAR29)
        {
            if (VAR7->VAR30 == VAR25)
            {
                FUN12(VAR7);
                return;
            }
        }
    }
}